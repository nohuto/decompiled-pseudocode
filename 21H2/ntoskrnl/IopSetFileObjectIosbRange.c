/*
 * XREFs of IopSetFileObjectIosbRange @ 0x140935790
 * Callers:
 *     NtSetInformationFile @ 0x1402F72B0 (NtSetInformationFile.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x14028A160 (ExAcquireFastMutex.c)
 *     IoAllocateMdl @ 0x14029C7F0 (IoAllocateMdl.c)
 *     IopGetFileObjectExtension @ 0x1402A3A14 (IopGetFileObjectExtension.c)
 *     IopAllocateFileObjectExtension @ 0x1402A3A60 (IopAllocateFileObjectExtension.c)
 *     IopSetTypeSpecificFoExtension @ 0x1402A3F70 (IopSetTypeSpecificFoExtension.c)
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     KeReleaseGuardedMutex @ 0x1402AF9B0 (KeReleaseGuardedMutex.c)
 *     MmUnlockPages @ 0x1402B8AD0 (MmUnlockPages.c)
 *     MmUnmapLockedPages @ 0x1402BB4E0 (MmUnmapLockedPages.c)
 *     RtlRaiseStatus @ 0x1402D37A0 (RtlRaiseStatus.c)
 *     RtlDeleteElementGenericTableAvl @ 0x1402DECF0 (RtlDeleteElementGenericTableAvl.c)
 *     RtlInsertElementGenericTableAvl @ 0x1402DEF50 (RtlInsertElementGenericTableAvl.c)
 *     MmMapLockedPagesSpecifyCache @ 0x140308CD0 (MmMapLockedPagesSpecifyCache.c)
 *     MmProbeAndLockPages @ 0x140319E90 (MmProbeAndLockPages.c)
 *     IoFreeMdl @ 0x140349550 (IoFreeMdl.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall IopSetFileObjectIosbRange(__int64 a1, __int64 a2)
{
  _KPROCESS *i; // rdi
  _QWORD *v3; // r15
  int FileObjectExtension; // r14d
  _KPROCESS *Process; // rsi
  __int64 v6; // r12
  __int64 v7; // r13
  unsigned __int64 v9; // r12
  _KPROCESS **inserted; // rax
  PMDL Mdl; // rsi
  char v12; // r12
  __int16 v13; // ax
  char v14; // al
  struct _LIST_ENTRY *MappedSystemVa; // rax
  _QWORD *Pool2; // rax
  int v17; // r9d
  __int64 v18; // rax
  __int64 v19; // rcx
  _QWORD *v20; // rdx
  signed __int64 v21; // rax
  signed __int64 v22; // rax
  PMDL MemoryDescriptorList; // [rsp+38h] [rbp-A0h]
  struct _LIST_ENTRY *BaseAddress; // [rsp+40h] [rbp-98h]
  _KPROCESS **v25; // [rsp+50h] [rbp-88h]
  _KPROCESS *Object; // [rsp+58h] [rbp-80h]
  __int64 v27[6]; // [rsp+60h] [rbp-78h] BYREF
  _QWORD Buffer[9]; // [rsp+90h] [rbp-48h] BYREF
  char v31; // [rsp+F0h] [rbp+18h]
  BOOLEAN NewElement; // [rsp+F8h] [rbp+20h] BYREF

  v27[0] = 0LL;
  v31 = 0;
  NewElement = 0;
  i = 0LL;
  Buffer[1] = 0LL;
  v3 = 0LL;
  v27[2] = 0LL;
  MemoryDescriptorList = 0LL;
  BaseAddress = 0LL;
  FileObjectExtension = 0;
  Process = KeGetCurrentThread()->ApcState.Process;
  Object = Process;
  v27[5] = (__int64)Process;
  v6 = *(_QWORD *)(a2 + 24);
  v7 = *(unsigned int *)(v6 + 8);
  if ( !(_DWORD)v7 )
    return 3221225485LL;
  v9 = *(_QWORD *)v6;
  v27[3] = v9;
  ExAcquireFastMutex(&IoStatusBlockRangeTableLock);
  Buffer[0] = Process;
  inserted = (_KPROCESS **)RtlInsertElementGenericTableAvl(&IoStatusBlockRangeTable, Buffer, 0x10u, &NewElement);
  v25 = inserted;
  if ( !inserted )
  {
    FileObjectExtension = -1073741670;
    Mdl = 0LL;
    v12 = 0;
LABEL_60:
    if ( Mdl )
    {
      if ( BaseAddress )
        MmUnmapLockedPages(BaseAddress, Mdl);
      MmUnlockPages(Mdl);
      IoFreeMdl(Mdl);
    }
    if ( v3 )
    {
      ObfDereferenceObjectWithTag(Object, 0x70436F49u);
      ExFreePoolWithTag(v3, 0);
    }
    if ( NewElement == 1 )
      RtlDeleteElementGenericTableAvl(&IoStatusBlockRangeTable, Buffer);
    if ( v12 == 1 )
      ExFreePoolWithTag(i, 0);
    goto LABEL_70;
  }
  if ( !NewElement )
  {
    for ( i = inserted[1];
          i
       && (i->Header.WaitListHead.Flink != (struct _LIST_ENTRY *)v9
        || i->Header.WaitListHead.Blink != (struct _LIST_ENTRY *)(v9 + v7));
          i = (_KPROCESS *)i->DirectoryTableBase )
    {
      ;
    }
  }
  if ( i )
  {
    Mdl = 0LL;
  }
  else
  {
    i = (_KPROCESS *)ExAllocatePool2(256LL, 48LL, 1700032329LL);
    v27[1] = (__int64)i;
    if ( !i )
    {
      FileObjectExtension = -1073741670;
      Mdl = 0LL;
      v12 = 0;
      goto LABEL_60;
    }
    v31 = 1;
    if ( Process[1].Affinity.StaticBitmap[30]
      && ((v13 = WORD2(Process[2].Affinity.StaticBitmap[20]), v13 == 332) || v13 == 452 ? (v14 = 1) : (v14 = 0), v14) )
    {
      if ( (v9 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
    }
    else if ( (v9 & 7) != 0 )
    {
      ExRaiseDatatypeMisalignment();
    }
    if ( v9 + v7 > 0x7FFFFFFF0000LL || v9 + v7 < v9 )
      MEMORY[0x7FFFFFFF0000] = 0;
    Mdl = IoAllocateMdl((PVOID)v9, v7, 0, 1u, 0LL);
    MemoryDescriptorList = Mdl;
    if ( !Mdl )
      RtlRaiseStatus(-1073741670);
    MmProbeAndLockPages(Mdl, *(_BYTE *)(a2 + 64), IoWriteAccess);
    if ( (Mdl->MdlFlags & 5) != 0 )
      MappedSystemVa = (struct _LIST_ENTRY *)Mdl->MappedSystemVa;
    else
      MappedSystemVa = (struct _LIST_ENTRY *)MmMapLockedPagesSpecifyCache(Mdl, 0, MmCached, 0LL, 0, 0x40000010u);
    BaseAddress = MappedSystemVa;
    if ( MappedSystemVa )
    {
      i->ProfileListHead.Flink = (struct _LIST_ENTRY *)Mdl;
      i->Header.WaitListHead.Flink = (struct _LIST_ENTRY *)v9;
      i->Header.WaitListHead.Blink = (struct _LIST_ENTRY *)(v9 + (unsigned int)v7);
      i->Header.LockNV = 1;
      i->DirectoryTableBase = 0LL;
      i->ProfileListHead.Blink = MappedSystemVa;
    }
    else
    {
      FileObjectExtension = -1073741670;
    }
  }
  if ( FileObjectExtension < 0 )
    goto LABEL_58;
  Pool2 = (_QWORD *)ExAllocatePool2(64LL, 48LL, 1700032329LL);
  v3 = Pool2;
  if ( !Pool2 )
  {
    FileObjectExtension = -1073741670;
    v12 = v31;
    goto LABEL_60;
  }
  *Pool2 = v9;
  Pool2[1] = v9 + (unsigned int)v7;
  Pool2[3] = v9 + (char *)i->ProfileListHead.Blink - (char *)i->Header.WaitListHead.Flink;
  Pool2[2] = i->ProfileListHead.Flink;
  Pool2[5] = 0LL;
  ObfReferenceObjectWithTag(Object, 0x70436F49u);
  v3[4] = Object;
  FileObjectExtension = IopAllocateFileObjectExtension(a1, v27);
  if ( FileObjectExtension < 0 )
  {
LABEL_58:
    v12 = v31;
  }
  else
  {
    FileObjectExtension = IopSetTypeSpecificFoExtension(v27[0], 2u, (signed __int64)v3);
    if ( FileObjectExtension == -1073741823 )
    {
      v18 = IopGetFileObjectExtension(a1, v17, 0LL);
      v19 = v18;
      if ( (_KPROCESS *)v3[4] == Object )
      {
        v20 = (_QWORD *)v18;
        if ( v18 )
        {
          while ( *v3 != *v20 || v3[1] != v20[1] )
          {
            v20 = (_QWORD *)v20[5];
            if ( !v20 )
              goto LABEL_46;
          }
          ObfDereferenceObjectWithTag(Object, 0x70436F49u);
          ExFreePoolWithTag(v3, 0);
          FileObjectExtension = 0;
          goto LABEL_70;
        }
LABEL_46:
        v21 = *(_QWORD *)(v18 + 40);
        v3[5] = v21;
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v19 + 40), (signed __int64)v3, v21) != v3[5] )
        {
          _m_prefetchw((const void *)(v19 + 40));
          do
          {
            v22 = *(_QWORD *)(v19 + 40);
            v3[5] = v22;
          }
          while ( _InterlockedCompareExchange64((volatile signed __int64 *)(v19 + 40), (signed __int64)v3, v22) != v3[5] );
        }
        FileObjectExtension = 0;
        Mdl = MemoryDescriptorList;
      }
    }
    v12 = v31;
    if ( FileObjectExtension < 0 )
      goto LABEL_60;
    if ( v31 == 1 )
    {
      if ( NewElement == 1 )
        *v25 = Object;
      else
        i->DirectoryTableBase = (unsigned __int64)v25[1];
      v25[1] = i;
    }
    else
    {
      ++i->Header.LockNV;
    }
  }
  if ( FileObjectExtension < 0 )
    goto LABEL_60;
LABEL_70:
  KeReleaseGuardedMutex(&IoStatusBlockRangeTableLock);
  return (unsigned int)FileObjectExtension;
}
