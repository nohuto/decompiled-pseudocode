/*
 * XREFs of FsRtlCopyWrite @ 0x14092D2C0
 * Callers:
 *     <none>
 * Callees:
 *     CcCopyWriteWontFlush @ 0x140229E10 (CcCopyWriteWontFlush.c)
 *     FsRtlIsNtstatusExpected @ 0x140247160 (FsRtlIsNtstatusExpected.c)
 *     CcCanIWrite @ 0x140283F40 (CcCanIWrite.c)
 *     IoSetTopLevelIrp @ 0x140288140 (IoSetTopLevelIrp.c)
 *     IoGetTopLevelIrp @ 0x140288160 (IoGetTopLevelIrp.c)
 *     CcZeroData @ 0x14029BD20 (CcZeroData.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x1402B1080 (ExAcquireResourceSharedLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402F9540 (KiLeaveCriticalRegionUnsafe.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     CcCopyWrite @ 0x140539DF0 (CcCopyWrite.c)
 */

BOOLEAN __stdcall FsRtlCopyWrite(
        PFILE_OBJECT FileObject,
        PLARGE_INTEGER FileOffset,
        ULONG Length,
        BOOLEAN Wait,
        ULONG LockKey,
        PVOID Buffer,
        PIO_STATUS_BLOCK IoStatus,
        PDEVICE_OBJECT DeviceObject)
{
  ULONG_PTR v9; // rdi
  BOOLEAN v12; // r12
  char *FsContext; // r15
  __int64 v14; // rsi
  __int64 v15; // r14
  struct _KTHREAD *CurrentThread; // rax
  __int64 v17; // r9
  char v19; // r9
  LARGE_INTEGER v20; // rdi
  LONGLONG v21; // rbx
  char v22; // cl
  LONGLONG v23; // r8
  PFAST_IO_DISPATCH FastIoDispatch; // rax
  PLARGE_INTEGER v25; // rdx
  struct _ERESOURCE *v26; // rcx
  struct _ERESOURCE *v27; // rcx
  struct _ERESOURCE *v28; // rcx
  BOOLEAN v29; // [rsp+50h] [rbp-78h]
  char v30; // [rsp+51h] [rbp-77h]
  char v31; // [rsp+52h] [rbp-76h]
  LONGLONG v32; // [rsp+58h] [rbp-70h]
  LARGE_INTEGER EndOffset; // [rsp+60h] [rbp-68h] BYREF
  __int128 v34; // [rsp+68h] [rbp-60h] BYREF
  __int64 v35; // [rsp+78h] [rbp-50h]
  __int64 v36; // [rsp+80h] [rbp-48h]
  char *v37; // [rsp+88h] [rbp-40h]

  v9 = Length;
  v12 = 0;
  v29 = 1;
  v31 = 0;
  if ( FileOffset->LowPart != -1 || (v30 = 1, FileOffset->HighPart != -1) )
    v30 = 0;
  if ( IoGetTopLevelIrp() )
    return 0;
  FsContext = (char *)FileObject->FsContext;
  v37 = FsContext;
  if ( !CcCanIWrite(FileObject, v9, Wait, 0)
    || (FileObject->Flags & 0x10) != 0
    || !CcCopyWriteWontFlush(FileObject, FileOffset, v9) )
  {
    return 0;
  }
  IoStatus->Status = 0;
  *(_QWORD *)&v34 = v9;
  IoStatus->Information = v9;
  if ( !(_DWORD)v9 )
    return 1;
  v14 = 0LL;
  v35 = 0LL;
  v15 = 0LL;
  v36 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( v30 || (signed __int64)(FileOffset->QuadPart + v9) > *((_QWORD *)FsContext + 5) )
  {
    if ( !ExAcquireResourceExclusiveLite(*((PERESOURCE *)FsContext + 1), Wait) )
      goto LABEL_12;
    v19 = 0;
  }
  else
  {
    if ( !ExAcquireResourceSharedLite(*((PERESOURCE *)FsContext + 1), Wait) )
    {
LABEL_12:
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      return 0;
    }
    v19 = 1;
  }
  if ( v30 )
    v20 = *(LARGE_INTEGER *)(FsContext + 32);
  else
    v20 = *FileOffset;
  v21 = v20.QuadPart + v34;
  v32 = v20.QuadPart + v34;
  EndOffset = v20;
  if ( !FileObject->PrivateCacheMap )
    goto LABEL_33;
  v22 = FsContext[5];
  if ( !v22 )
    goto LABEL_33;
  v23 = *((_QWORD *)FsContext + 5);
  if ( v20.QuadPart >= v23 + 0x2000
    || 0x7FFFFFFFFFFFFFFFLL - v20.QuadPart < (__int64)v34
    || v21 > *((_QWORD *)FsContext + 3) )
  {
    goto LABEL_33;
  }
  if ( v19 && v21 > v23 )
  {
    ExReleaseResourceLite(*((PERESOURCE *)FsContext + 1));
    if ( !ExAcquireResourceExclusiveLite(*((PERESOURCE *)FsContext + 1), Wait) )
      goto LABEL_12;
    if ( v30 )
    {
      v20 = *(LARGE_INTEGER *)(FsContext + 32);
      EndOffset = v20;
      v21 = v20.QuadPart + v34;
      v32 = v20.QuadPart + v34;
    }
    if ( !FileObject->PrivateCacheMap || (v22 = FsContext[5]) == 0 || v21 > *((_QWORD *)FsContext + 3) )
    {
LABEL_33:
      ExReleaseResourceLite(*((PERESOURCE *)FsContext + 1));
      goto LABEL_12;
    }
  }
  if ( v22 != 2 )
    goto LABEL_39;
  FastIoDispatch = DeviceObject->DriverObject->FastIoDispatch;
  v34 = 0LL;
  v25 = FileOffset;
  if ( FileOffset->QuadPart == -1 )
    v25 = (PLARGE_INTEGER)(FsContext + 32);
  LOBYTE(v17) = Wait;
  if ( ((unsigned __int8 (__fastcall *)(PFILE_OBJECT, PLARGE_INTEGER, _QWORD, __int64, ULONG, _BYTE, __int128 *, PDEVICE_OBJECT))FastIoDispatch->FastIoCheckIfPossible)(
         FileObject,
         v25,
         Length,
         v17,
         LockKey,
         0,
         &v34,
         DeviceObject) )
  {
LABEL_39:
    if ( v21 > *((_QWORD *)FsContext + 4) )
    {
      v31 = 1;
      v14 = *((_QWORD *)FsContext + 4);
      v35 = v14;
      v15 = *((_QWORD *)FsContext + 5);
      v36 = v15;
      if ( *((_DWORD *)FsContext + 9) == HIDWORD(v32) || (v26 = (struct _ERESOURCE *)*((_QWORD *)FsContext + 2)) == 0LL )
      {
        *((_QWORD *)FsContext + 4) = v21;
      }
      else
      {
        ExAcquireResourceExclusiveLite(v26, 1u);
        *((_QWORD *)FsContext + 4) = v21;
        ExReleaseResourceLite(*((PERESOURCE *)FsContext + 2));
      }
    }
    IoSetTopLevelIrp((PIRP)4);
    if ( v20.QuadPart > *((_QWORD *)FsContext + 5) )
      v29 = CcZeroData(FileObject, (PLARGE_INTEGER)FsContext + 5, &EndOffset, Wait);
    if ( v29 )
      v29 = CcCopyWrite(FileObject, &EndOffset, Length, Wait, Buffer);
    IoSetTopLevelIrp(0LL);
    if ( v29 )
    {
      if ( v21 > *((_QWORD *)FsContext + 5) )
      {
        if ( *((_DWORD *)FsContext + 11) == HIDWORD(v32)
          || (v27 = (struct _ERESOURCE *)*((_QWORD *)FsContext + 2)) == 0LL )
        {
          *((_QWORD *)FsContext + 5) = v21;
        }
        else
        {
          ExAcquireResourceExclusiveLite(v27, 1u);
          *((_QWORD *)FsContext + 5) = v21;
          ExReleaseResourceLite(*((PERESOURCE *)FsContext + 2));
        }
      }
      FileObject->Flags |= 0x1000u;
      if ( v31 )
      {
        *((_QWORD *)FileObject->SectionObjectPointer->SharedCacheMap + 1) = v21;
        FileObject->Flags |= 0x2000u;
      }
      FileObject->CurrentByteOffset.QuadPart = v20.QuadPart + Length;
    }
    else if ( v31 )
    {
      v28 = (struct _ERESOURCE *)*((_QWORD *)FsContext + 2);
      if ( v28 )
      {
        ExAcquireResourceExclusiveLite(v28, 1u);
        *((_QWORD *)FsContext + 4) = v14;
        *((_QWORD *)FsContext + 5) = v15;
        ExReleaseResourceLite(*((PERESOURCE *)FsContext + 2));
      }
      else
      {
        *((_QWORD *)FsContext + 4) = v14;
        *((_QWORD *)FsContext + 5) = v15;
      }
    }
    ExReleaseResourceLite(*((PERESOURCE *)FsContext + 1));
    v12 = v29;
  }
  else
  {
    ExReleaseResourceLite(*((PERESOURCE *)FsContext + 1));
  }
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return v12;
}
