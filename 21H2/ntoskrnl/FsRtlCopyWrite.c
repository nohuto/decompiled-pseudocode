/*
 * XREFs of FsRtlCopyWrite @ 0x14088A9F0
 * Callers:
 *     <none>
 * Callees:
 *     FsRtlIsNtstatusExpected @ 0x1402406E0 (FsRtlIsNtstatusExpected.c)
 *     CcZeroData @ 0x140299610 (CcZeroData.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     CcCopyWriteWontFlush @ 0x1402D0780 (CcCopyWriteWontFlush.c)
 *     CcCanIWrite @ 0x14031DF20 (CcCanIWrite.c)
 *     ExReleaseResourceLite @ 0x140356140 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1403568F0 (ExAcquireResourceExclusiveLite.c)
 *     ExAcquireResourceSharedLite @ 0x140356CB0 (ExAcquireResourceSharedLite.c)
 *     IoSetTopLevelIrp @ 0x140361970 (IoSetTopLevelIrp.c)
 *     IoGetTopLevelIrp @ 0x140361990 (IoGetTopLevelIrp.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     CcCopyWrite @ 0x1404EA250 (CcCopyWrite.c)
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
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  char v21; // r9
  LONGLONG QuadPart; // rdi
  LONGLONG v23; // rbx
  char v24; // cl
  LONGLONG v25; // r8
  PFAST_IO_DISPATCH FastIoDispatch; // rax
  PLARGE_INTEGER v27; // rdx
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // r9
  struct _ERESOURCE *v31; // rcx
  struct _ERESOURCE *v32; // rcx
  struct _ERESOURCE *v33; // rcx
  BOOLEAN v34; // [rsp+50h] [rbp-88h]
  char v35; // [rsp+51h] [rbp-87h]
  char v36; // [rsp+52h] [rbp-86h]
  LONGLONG v37; // [rsp+58h] [rbp-80h]
  LARGE_INTEGER EndOffset; // [rsp+60h] [rbp-78h] BYREF
  signed __int64 v39; // [rsp+68h] [rbp-70h]
  __int64 v40; // [rsp+70h] [rbp-68h]
  __int64 v41; // [rsp+78h] [rbp-60h]
  char *v42; // [rsp+80h] [rbp-58h]
  __int128 v43[5]; // [rsp+88h] [rbp-50h] BYREF

  v9 = Length;
  v12 = 0;
  v34 = 1;
  v36 = 0;
  if ( FileOffset->LowPart != -1 || (v35 = 1, FileOffset->HighPart != -1) )
    v35 = 0;
  if ( IoGetTopLevelIrp() )
    return 0;
  FsContext = (char *)FileObject->FsContext;
  v42 = FsContext;
  if ( !CcCanIWrite(FileObject, v9, Wait, 0)
    || (FileObject->Flags & 0x10) != 0
    || !CcCopyWriteWontFlush(FileObject, FileOffset, v9) )
  {
    return 0;
  }
  IoStatus->Status = 0;
  v39 = v9;
  IoStatus->Information = v9;
  if ( !(_DWORD)v9 )
    return 1;
  v14 = 0LL;
  v40 = 0LL;
  v15 = 0LL;
  v41 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( v35 || (signed __int64)(FileOffset->QuadPart + v9) > *((_QWORD *)FsContext + 5) )
  {
    if ( !ExAcquireResourceExclusiveLite(*((PERESOURCE *)FsContext + 1), Wait) )
      goto LABEL_12;
    v21 = 0;
  }
  else
  {
    if ( !ExAcquireResourceSharedLite(*((PERESOURCE *)FsContext + 1), Wait) )
    {
LABEL_12:
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v17, v18, v19);
      return 0;
    }
    v21 = 1;
  }
  if ( v35 )
    QuadPart = *((_QWORD *)FsContext + 4);
  else
    QuadPart = FileOffset->QuadPart;
  v23 = QuadPart + v39;
  v37 = QuadPart + v39;
  EndOffset.QuadPart = QuadPart;
  if ( !FileObject->PrivateCacheMap )
    goto LABEL_33;
  v24 = FsContext[5];
  if ( !v24 )
    goto LABEL_33;
  v25 = *((_QWORD *)FsContext + 5);
  if ( QuadPart >= v25 + 0x2000 || 0x7FFFFFFFFFFFFFFFLL - QuadPart < v39 || v23 > *((_QWORD *)FsContext + 3) )
    goto LABEL_33;
  if ( v21 && v23 > v25 )
  {
    ExReleaseResourceLite(*((PERESOURCE *)FsContext + 1));
    if ( !ExAcquireResourceExclusiveLite(*((PERESOURCE *)FsContext + 1), Wait) )
      goto LABEL_12;
    if ( v35 )
    {
      QuadPart = *((_QWORD *)FsContext + 4);
      EndOffset.QuadPart = QuadPart;
      v23 = QuadPart + v39;
      v37 = QuadPart + v39;
    }
    if ( !FileObject->PrivateCacheMap || (v24 = FsContext[5]) == 0 || v23 > *((_QWORD *)FsContext + 3) )
    {
LABEL_33:
      ExReleaseResourceLite(*((PERESOURCE *)FsContext + 1));
      goto LABEL_12;
    }
  }
  if ( v24 != 2 )
    goto LABEL_39;
  FastIoDispatch = DeviceObject->DriverObject->FastIoDispatch;
  v43[0] = 0LL;
  v27 = FileOffset;
  if ( FileOffset->QuadPart == -1 )
    v27 = (PLARGE_INTEGER)(FsContext + 32);
  LOBYTE(v19) = Wait;
  if ( ((unsigned __int8 (__fastcall *)(PFILE_OBJECT, PLARGE_INTEGER, _QWORD, __int64, ULONG, _BYTE, __int128 *, PDEVICE_OBJECT))FastIoDispatch->FastIoCheckIfPossible)(
         FileObject,
         v27,
         Length,
         v19,
         LockKey,
         0,
         v43,
         DeviceObject) )
  {
LABEL_39:
    if ( v23 > *((_QWORD *)FsContext + 4) )
    {
      v36 = 1;
      v14 = *((_QWORD *)FsContext + 4);
      v40 = v14;
      v15 = *((_QWORD *)FsContext + 5);
      v41 = v15;
      if ( *((_DWORD *)FsContext + 9) == HIDWORD(v37) || (v31 = (struct _ERESOURCE *)*((_QWORD *)FsContext + 2)) == 0LL )
      {
        *((_QWORD *)FsContext + 4) = v23;
      }
      else
      {
        ExAcquireResourceExclusiveLite(v31, 1u);
        *((_QWORD *)FsContext + 4) = v23;
        ExReleaseResourceLite(*((PERESOURCE *)FsContext + 2));
      }
    }
    IoSetTopLevelIrp((PIRP)4);
    if ( QuadPart > *((_QWORD *)FsContext + 5) )
      v34 = CcZeroData(FileObject, (PLARGE_INTEGER)FsContext + 5, &EndOffset, Wait);
    if ( v34 )
      v34 = CcCopyWrite(FileObject, &EndOffset, Length, Wait, Buffer);
    IoSetTopLevelIrp(0LL);
    if ( v34 )
    {
      if ( v23 > *((_QWORD *)FsContext + 5) )
      {
        if ( *((_DWORD *)FsContext + 11) == HIDWORD(v37)
          || (v32 = (struct _ERESOURCE *)*((_QWORD *)FsContext + 2)) == 0LL )
        {
          *((_QWORD *)FsContext + 5) = v23;
        }
        else
        {
          ExAcquireResourceExclusiveLite(v32, 1u);
          *((_QWORD *)FsContext + 5) = v23;
          ExReleaseResourceLite(*((PERESOURCE *)FsContext + 2));
        }
      }
      FileObject->Flags |= 0x1000u;
      if ( v36 )
      {
        *((_QWORD *)FileObject->SectionObjectPointer->SharedCacheMap + 1) = v23;
        FileObject->Flags |= 0x2000u;
      }
      FileObject->CurrentByteOffset.QuadPart = QuadPart + Length;
    }
    else if ( v36 )
    {
      v33 = (struct _ERESOURCE *)*((_QWORD *)FsContext + 2);
      if ( v33 )
      {
        ExAcquireResourceExclusiveLite(v33, 1u);
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
    v12 = v34;
  }
  else
  {
    ExReleaseResourceLite(*((PERESOURCE *)FsContext + 1));
  }
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v28, v29, v30);
  return v12;
}
