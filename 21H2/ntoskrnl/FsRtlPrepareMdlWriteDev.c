/*
 * XREFs of FsRtlPrepareMdlWriteDev @ 0x14088B410
 * Callers:
 *     <none>
 * Callees:
 *     FsRtlIsNtstatusExpected @ 0x1402406E0 (FsRtlIsNtstatusExpected.c)
 *     CcPrepareMdlWrite @ 0x14024ACC0 (CcPrepareMdlWrite.c)
 *     CcZeroData @ 0x140299610 (CcZeroData.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     CcCanIWrite @ 0x14031DF20 (CcCanIWrite.c)
 *     ExReleaseResourceLite @ 0x140356140 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1403568F0 (ExAcquireResourceExclusiveLite.c)
 *     ExAcquireResourceSharedLite @ 0x140356CB0 (ExAcquireResourceSharedLite.c)
 *     IoSetTopLevelIrp @ 0x140361970 (IoSetTopLevelIrp.c)
 *     IoGetTopLevelIrp @ 0x140361990 (IoGetTopLevelIrp.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 */

BOOLEAN __stdcall FsRtlPrepareMdlWriteDev(
        PFILE_OBJECT FileObject,
        PLARGE_INTEGER FileOffset,
        ULONG Length,
        ULONG LockKey,
        PMDL *MdlChain,
        PIO_STATUS_BLOCK IoStatus,
        PDEVICE_OBJECT DeviceObject)
{
  __int64 v9; // rsi
  __int64 v10; // r14
  char v11; // di
  PVOID FsContext; // r15
  struct _KTHREAD *CurrentThread; // rax
  __int64 v15; // r9
  LONGLONG QuadPart; // rdi
  LONGLONG v17; // rbx
  char v18; // cl
  __int64 v19; // r8
  struct _ERESOURCE *v20; // rcx
  struct _ERESOURCE *v21; // rcx
  struct _ERESOURCE *v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  BOOLEAN v29; // [rsp+50h] [rbp-68h]
  char v30; // [rsp+51h] [rbp-67h]
  char v31; // [rsp+52h] [rbp-66h]
  int v32; // [rsp+5Ch] [rbp-5Ch]
  LARGE_INTEGER EndOffset; // [rsp+60h] [rbp-58h] BYREF
  __int64 v34; // [rsp+68h] [rbp-50h]
  __int64 v35; // [rsp+70h] [rbp-48h]
  PVOID v36; // [rsp+78h] [rbp-40h]

  v9 = 0LL;
  v34 = 0LL;
  v10 = 0LL;
  v35 = 0LL;
  v29 = 1;
  v30 = 0;
  if ( FileOffset->LowPart != -1 || (v11 = 1, FileOffset->HighPart != -1) )
    v11 = 0;
  v31 = v11;
  if ( IoGetTopLevelIrp() || !CcCanIWrite(FileObject, Length, 1u, 0) || (FileObject->Flags & 0x10) != 0 )
    return 0;
  IoStatus->Status = 0;
  if ( !Length )
    return 1;
  FsContext = FileObject->FsContext;
  v36 = FsContext;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( v11 || Length + FileOffset->QuadPart > *((_QWORD *)FsContext + 5) )
  {
    ExAcquireResourceExclusiveLite(*((PERESOURCE *)FsContext + 1), 1u);
    LOBYTE(v15) = 0;
  }
  else
  {
    ExAcquireResourceSharedLite(*((PERESOURCE *)FsContext + 1), 1u);
    LOBYTE(v15) = 1;
  }
  if ( v11 )
    QuadPart = *((_QWORD *)FsContext + 4);
  else
    QuadPart = FileOffset->QuadPart;
  v17 = QuadPart + Length;
  v32 = HIDWORD(v17);
  EndOffset.QuadPart = QuadPart;
  if ( !FileObject->PrivateCacheMap )
    goto LABEL_52;
  v18 = *((_BYTE *)FsContext + 5);
  if ( !v18 )
    goto LABEL_52;
  v19 = Length;
  if ( 0x7FFFFFFFFFFFFFFFLL - QuadPart < Length || v17 > *((_QWORD *)FsContext + 3) )
    goto LABEL_52;
  if ( (_BYTE)v15 && v17 > *((_QWORD *)FsContext + 5) )
  {
    ExReleaseResourceLite(*((PERESOURCE *)FsContext + 1));
    ExAcquireResourceExclusiveLite(*((PERESOURCE *)FsContext + 1), 1u);
    if ( v31 )
    {
      QuadPart = *((_QWORD *)FsContext + 4);
      EndOffset.QuadPart = QuadPart;
      v19 = Length;
      v17 = QuadPart + Length;
      v32 = HIDWORD(v17);
    }
    else
    {
      v19 = Length;
    }
    if ( !FileObject->PrivateCacheMap )
      goto LABEL_52;
    v18 = *((_BYTE *)FsContext + 5);
    if ( !v18 || v17 > *((_QWORD *)FsContext + 3) )
      goto LABEL_52;
  }
  if ( v18 == 2 )
  {
    LOBYTE(v15) = 1;
    if ( !((unsigned __int8 (__fastcall *)(PFILE_OBJECT, PLARGE_INTEGER, __int64, __int64, ULONG, _BYTE, PIO_STATUS_BLOCK, PDEVICE_OBJECT))DeviceObject->DriverObject->FastIoDispatch->FastIoCheckIfPossible)(
            FileObject,
            FileOffset,
            v19,
            v15,
            LockKey,
            0,
            IoStatus,
            DeviceObject) )
    {
LABEL_52:
      ExReleaseResourceLite(*((PERESOURCE *)FsContext + 1));
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v26, v27, v28);
      return 0;
    }
  }
  if ( v17 > *((_QWORD *)FsContext + 4) )
  {
    v30 = 1;
    v9 = *((_QWORD *)FsContext + 4);
    v34 = v9;
    v10 = *((_QWORD *)FsContext + 5);
    v35 = v10;
    if ( *((_DWORD *)FsContext + 9) == v32 || (v20 = (struct _ERESOURCE *)*((_QWORD *)FsContext + 2)) == 0LL )
    {
      *((_QWORD *)FsContext + 4) = v17;
    }
    else
    {
      ExAcquireResourceExclusiveLite(v20, 1u);
      *((_QWORD *)FsContext + 4) = v17;
      ExReleaseResourceLite(*((PERESOURCE *)FsContext + 2));
    }
  }
  IoSetTopLevelIrp((PIRP)4);
  if ( QuadPart > *((_QWORD *)FsContext + 5) )
    v29 = CcZeroData(FileObject, (PLARGE_INTEGER)FsContext + 5, &EndOffset, 1u);
  if ( v29 )
    CcPrepareMdlWrite(FileObject, &EndOffset, Length, MdlChain, IoStatus);
  IoSetTopLevelIrp(0LL);
  if ( v29 )
  {
    if ( v17 > *((_QWORD *)FsContext + 5) )
    {
      if ( *((_DWORD *)FsContext + 11) == v32 || (v21 = (struct _ERESOURCE *)*((_QWORD *)FsContext + 2)) == 0LL )
      {
        *((_QWORD *)FsContext + 5) = v17;
      }
      else
      {
        ExAcquireResourceExclusiveLite(v21, 1u);
        *((_QWORD *)FsContext + 5) = v17;
        ExReleaseResourceLite(*((PERESOURCE *)FsContext + 2));
      }
    }
    FileObject->Flags |= 0x1000u;
    if ( v30 )
    {
      *((_QWORD *)FileObject->SectionObjectPointer->SharedCacheMap + 1) = v17;
      FileObject->Flags |= 0x2000u;
    }
  }
  else if ( v30 )
  {
    v22 = (struct _ERESOURCE *)*((_QWORD *)FsContext + 2);
    if ( v22 )
    {
      ExAcquireResourceExclusiveLite(v22, 1u);
      *((_QWORD *)FsContext + 4) = v9;
      *((_QWORD *)FsContext + 5) = v10;
      ExReleaseResourceLite(*((PERESOURCE *)FsContext + 2));
    }
    else
    {
      *((_QWORD *)FsContext + 4) = v9;
      *((_QWORD *)FsContext + 5) = v10;
    }
  }
  ExReleaseResourceLite(*((PERESOURCE *)FsContext + 1));
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v23, v24, v25);
  return v29;
}
