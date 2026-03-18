/*
 * XREFs of FsRtlCopyRead @ 0x14088D070
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x1402214C0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x140222030 (ExAcquireResourceSharedLite.c)
 *     IoSetTopLevelIrp @ 0x14029FEC0 (IoSetTopLevelIrp.c)
 *     IoGetTopLevelIrp @ 0x14029FEE0 (IoGetTopLevelIrp.c)
 *     CcCopyReadEx @ 0x1402A3E70 (CcCopyReadEx.c)
 *     FsRtlIsNtstatusExpected @ 0x140320A00 (FsRtlIsNtstatusExpected.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
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
  char v18; // al
  LONGLONG v19; // rax

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
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
        __incgsdword(0x8140u);
        return 0;
      }
      v16 = 1;
    }
    if ( !FileObject->PrivateCacheMap
      || (v18 = *((_BYTE *)FsContext + 5)) == 0
      || v18 == 2
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
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      __incgsdword(0x2ECCu);
      return 0;
    }
    v19 = *((_QWORD *)FsContext + 4);
    if ( v13 > v19 )
    {
      if ( FileOffset->QuadPart >= v19 )
      {
        IoStatus->Status = -1073741807;
        IoStatus->Information = 0LL;
LABEL_22:
        ExReleaseResourceLite(*((PERESOURCE *)FsContext + 1));
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
        return v16;
      }
      LODWORD(v9) = v19 - FileOffset->LowPart;
    }
    IoSetTopLevelIrp((PIRP)4);
    v16 = CcCopyReadEx(FileObject, (__int64 *)FileOffset, v9, Wait, Buffer, IoStatus, 0LL);
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
