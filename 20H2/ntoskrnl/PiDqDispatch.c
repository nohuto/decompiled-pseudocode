/*
 * XREFs of PiDqDispatch @ 0x140646700
 * Callers:
 *     PiDaDispatch @ 0x1406C2610 (PiDaDispatch.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140220F40 (ExReleasePushLockEx.c)
 *     IoIs32bitProcess @ 0x14023F3D0 (IoIs32bitProcess.c)
 *     IofCompleteRequest @ 0x140292560 (IofCompleteRequest.c)
 *     wcscmp @ 0x1403D35D0 (wcscmp.c)
 *     PiDqIrpQueryCreate @ 0x1406461E8 (PiDqIrpQueryCreate.c)
 *     PiDqQueryCreate @ 0x140646928 (PiDqQueryCreate.c)
 *     PiDqQueryGetObjectManager @ 0x140646D6C (PiDqQueryGetObjectManager.c)
 *     PiDqObjectManagerUnregisterQuery @ 0x1406D7F7C (PiDqObjectManagerUnregisterQuery.c)
 *     PiDqQueryRelease @ 0x1406D7FF0 (PiDqQueryRelease.c)
 *     PiDqIrpQueryGetResult @ 0x1406D8984 (PiDqIrpQueryGetResult.c)
 *     PiDqIrpPropertySet @ 0x14072A3CC (PiDqIrpPropertySet.c)
 */

__int64 __fastcall PiDqDispatch(__int64 a1, IRP *a2)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r14
  unsigned int Status; // ebx
  PFILE_OBJECT FileObject; // rcx
  UCHAR MajorFunction; // al
  PVOID *p_FsContext2; // r15
  IRP **FsContext2; // rsi
  unsigned int LowPart; // eax
  const wchar_t *Buffer; // rsi
  __int64 v13; // rcx
  struct _KTHREAD *CurrentThread; // rax
  IRP *v15; // rbx
  __int64 ObjectManager; // rbp
  struct _KTHREAD *v17; // rax
  IRP *v18; // rcx

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  Status = a2->IoStatus.Status;
  FileObject = CurrentStackLocation->FileObject;
  MajorFunction = CurrentStackLocation->MajorFunction;
  p_FsContext2 = &FileObject->FsContext2;
  FsContext2 = (IRP **)FileObject->FsContext2;
  if ( CurrentStackLocation->MajorFunction )
  {
    if ( MajorFunction != 14 )
    {
      if ( MajorFunction == 2 )
      {
        if ( FsContext2 )
        {
          PiDqQueryRelease(FileObject->FsContext2);
          CurrentStackLocation->FileObject->FsContext2 = 0LL;
        }
      }
      else
      {
        if ( MajorFunction != 18 )
          return Status;
        if ( FsContext2 )
        {
          CurrentThread = KeGetCurrentThread();
          v15 = 0LL;
          ObjectManager = 0LL;
          --CurrentThread->KernelApcDisable;
          ExAcquirePushLockExclusiveEx((ULONG_PTR)(FsContext2 + 8), 0LL);
          if ( ((_DWORD)FsContext2[27] & 4) != 0 )
            ObjectManager = PiDqQueryGetObjectManager(FsContext2);
          ExReleasePushLockEx((ULONG_PTR)(FsContext2 + 8), 0LL);
          KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
          if ( ObjectManager )
            PiDqObjectManagerUnregisterQuery(ObjectManager, FsContext2);
          v17 = KeGetCurrentThread();
          --v17->KernelApcDisable;
          ExAcquirePushLockExclusiveEx((ULONG_PTR)(FsContext2 + 8), 0LL);
          v18 = FsContext2[22];
          *((_DWORD *)FsContext2 + 54) |= 8u;
          if ( v18 && _InterlockedExchange64((volatile __int64 *)&v18->CancelRoutine, 0LL) )
          {
            v15 = FsContext2[22];
            FsContext2[22] = 0LL;
          }
          ExReleasePushLockEx((ULONG_PTR)(FsContext2 + 8), 0LL);
          KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
          if ( v15 )
          {
            v15->IoStatus.Information = 0LL;
            v15->IoStatus.Status = -1073741536;
            IofCompleteRequest(v15, 0);
          }
        }
      }
      Status = 0;
      a2->IoStatus.Status = 0;
      goto LABEL_7;
    }
    LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
    if ( LowPart == 4653056 )
      return (unsigned int)PiDqIrpQueryCreate((__int64)a2);
    if ( LowPart > 0x470006 )
    {
      if ( LowPart <= 0x470008 )
        return (unsigned int)PiDqIrpQueryGetResult(a2);
      if ( LowPart == 4653068 )
        return (unsigned int)PiDqIrpPropertySet(a2);
    }
    Status = -1073741637;
    a2->IoStatus.Status = -1073741637;
  }
  else
  {
    Buffer = FileObject->FileName.Buffer;
    Status = 0;
    if ( !wcscmp(L"\\Dev\\Query", Buffer) )
    {
      LOBYTE(v13) = IoIs32bitProcess(a2) == 0;
      Status = PiDqQueryCreate(v13, p_FsContext2);
    }
    else if ( !wcscmp(L"\\Dev\\NoState", Buffer) )
    {
      *p_FsContext2 = 0LL;
    }
    else
    {
      Status = -1073741811;
    }
    a2->IoStatus.Status = Status;
  }
LABEL_7:
  IofCompleteRequest(a2, 0);
  return Status;
}
