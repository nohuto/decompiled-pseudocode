/*
 * XREFs of FsRtlCopyRead @ 0x14088A770
 * Callers:
 *     <none>
 * Callees:
 *     FsRtlIsNtstatusExpected @ 0x1402406E0 (FsRtlIsNtstatusExpected.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     CcCopyReadEx @ 0x14032B470 (CcCopyReadEx.c)
 *     ExReleaseResourceLite @ 0x140356140 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x140356CB0 (ExAcquireResourceSharedLite.c)
 *     IoSetTopLevelIrp @ 0x140361970 (IoSetTopLevelIrp.c)
 *     IoGetTopLevelIrp @ 0x140361990 (IoGetTopLevelIrp.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 */

BOOLEAN __stdcall FsRtlCopyRead(
        PFILE_OBJECT FileObject,
        PLARGE_INTEGER FileOffset,
        ULONG Length,
        BOOLEAN Wait,
        ULONG LockKey,
        PVOID Buffer,
        PIO_STATUS_BLOCK IoStatus,
        PDEVICE_OBJECT DeviceObject)
{
  __int64 v9; // r14
  LONGLONG v13; // rbx
  PVOID FsContext; // rdi
  struct _KTHREAD *CurrentThread; // rax
  BOOLEAN v16; // si
  __int64 v17; // r9
  __int64 v18; // rdx
  __int64 v19; // r8
  char v20; // al
  LONGLONG v21; // rax
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9

  v9 = Length;
  if ( IoGetTopLevelIrp() )
    return 0;
  if ( (_DWORD)v9 )
  {
    if ( 0x7FFFFFFFFFFFFFFFLL - FileOffset->QuadPart < v9 )
    {
      IoStatus->Status = -1073741811;
      IoStatus->Information = 0LL;
      return 0;
    }
    v13 = v9 + FileOffset->QuadPart;
    FsContext = FileObject->FsContext;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    if ( Wait )
    {
      __incgsdword(0x2EC8u);
      v16 = 1;
      ExAcquireResourceSharedLite(*((PERESOURCE *)FsContext + 1), 1u);
    }
    else
    {
      __incgsdword(0x2EC4u);
      if ( !ExAcquireResourceSharedLite(*((PERESOURCE *)FsContext + 1), 0) )
      {
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v18, v19, v17);
        __incgsdword(0x8140u);
        return 0;
      }
      v16 = 1;
    }
    if ( !FileObject->PrivateCacheMap
      || (v20 = *((_BYTE *)FsContext + 5)) == 0
      || v20 == 2
      && (LOBYTE(v17) = Wait,
          !((unsigned __int8 (__fastcall *)(PFILE_OBJECT, PLARGE_INTEGER, _QWORD, __int64, ULONG, char, PIO_STATUS_BLOCK, PDEVICE_OBJECT))DeviceObject->DriverObject->FastIoDispatch->FastIoCheckIfPossible)(
             FileObject,
             FileOffset,
             (unsigned int)v9,
             v17,
             LockKey,
             1,
             IoStatus,
             DeviceObject)) )
    {
      ExReleaseResourceLite(*((PERESOURCE *)FsContext + 1));
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v25, v26, v27);
      __incgsdword(0x2ECCu);
      return 0;
    }
    v21 = *((_QWORD *)FsContext + 4);
    if ( v13 > v21 )
    {
      if ( FileOffset->QuadPart >= v21 )
      {
        IoStatus->Status = -1073741807;
        IoStatus->Information = 0LL;
LABEL_22:
        ExReleaseResourceLite(*((PERESOURCE *)FsContext + 1));
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v22, v23, v24);
        return v16;
      }
      LODWORD(v9) = v21 - FileOffset->LowPart;
    }
    IoSetTopLevelIrp((PIRP)4);
    v16 = CcCopyReadEx((_SLIST_ENTRY *)FileObject, (__int64 *)FileOffset, v9, Wait, Buffer, IoStatus, 0LL);
    FileObject->Flags |= 0x80000u;
    if ( v16 )
      FileObject->CurrentByteOffset.QuadPart = FileOffset->QuadPart + IoStatus->Information;
    IoSetTopLevelIrp(0LL);
    goto LABEL_22;
  }
  IoStatus->Status = 0;
  IoStatus->Information = 0LL;
  return 1;
}
