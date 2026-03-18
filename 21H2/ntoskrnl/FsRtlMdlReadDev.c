/*
 * XREFs of FsRtlMdlReadDev @ 0x14092DA90
 * Callers:
 *     <none>
 * Callees:
 *     FsRtlIsNtstatusExpected @ 0x140247160 (FsRtlIsNtstatusExpected.c)
 *     IoSetTopLevelIrp @ 0x140288140 (IoSetTopLevelIrp.c)
 *     IoGetTopLevelIrp @ 0x140288160 (IoGetTopLevelIrp.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x1402B1080 (ExAcquireResourceSharedLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402F9540 (KiLeaveCriticalRegionUnsafe.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     CcMdlRead @ 0x1407085F0 (CcMdlRead.c)
 */

BOOLEAN __stdcall FsRtlMdlReadDev(
        PFILE_OBJECT FileObject,
        PLARGE_INTEGER FileOffset,
        ULONG Length,
        ULONG LockKey,
        PMDL *MdlChain,
        PIO_STATUS_BLOCK IoStatus,
        PDEVICE_OBJECT DeviceObject)
{
  __int64 v8; // rsi
  LONGLONG v12; // rbx
  PVOID FsContext; // rdi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v15; // r9
  char v16; // al
  LONGLONG v17; // rax

  v8 = Length;
  if ( !IoGetTopLevelIrp() )
  {
    if ( !(_DWORD)v8 )
    {
      IoStatus->Status = 0;
      IoStatus->Information = 0LL;
      return 1;
    }
    v12 = FileOffset->QuadPart + v8;
    FsContext = FileObject->FsContext;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    __incgsdword(0x8444u);
    ExAcquireResourceSharedLite(*((PERESOURCE *)FsContext + 1), 1u);
    if ( FileObject->PrivateCacheMap )
    {
      v16 = *((_BYTE *)FsContext + 5);
      if ( v16 )
      {
        if ( v16 != 2
          || (LOBYTE(v15) = 1,
              ((unsigned __int8 (__fastcall *)(PFILE_OBJECT, PLARGE_INTEGER, _QWORD, __int64, ULONG, char, PIO_STATUS_BLOCK, PDEVICE_OBJECT))DeviceObject->DriverObject->FastIoDispatch->FastIoCheckIfPossible)(
                FileObject,
                FileOffset,
                (unsigned int)v8,
                v15,
                LockKey,
                1,
                IoStatus,
                DeviceObject)) )
        {
          v17 = *((_QWORD *)FsContext + 4);
          if ( v12 > v17 )
          {
            if ( FileOffset->QuadPart >= v17 )
            {
              IoStatus->Status = -1073741807;
              IoStatus->Information = 0LL;
LABEL_12:
              ExReleaseResourceLite(*((PERESOURCE *)FsContext + 1));
              KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
              return 1;
            }
            LODWORD(v8) = v17 - FileOffset->LowPart;
          }
          IoSetTopLevelIrp((PIRP)4);
          CcMdlRead(FileObject, FileOffset, v8, MdlChain, IoStatus);
          FileObject->Flags |= 0x80000u;
          IoSetTopLevelIrp(0LL);
          goto LABEL_12;
        }
      }
    }
    ExReleaseResourceLite(*((PERESOURCE *)FsContext + 1));
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    __incgsdword(0x8448u);
  }
  return 0;
}
