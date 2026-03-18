/*
 * XREFs of sub_1C0015970 @ 0x1C0015970
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C0029E7C @ 0x1C0029E7C (sub_1C0029E7C.c)
 *     sub_1C002DC78 @ 0x1C002DC78 (sub_1C002DC78.c)
 */

__int64 __fastcall sub_1C0015970(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  char *DeviceExtension; // rbx
  __int64 v5; // rcx
  NTSTATUS v6; // eax
  unsigned int v7; // ebp
  NTSTATUS v8; // eax
  __int64 v9; // rcx
  PVOID v10; // r9
  __int64 v11; // rdx
  _SYSCTL_IRP_DISPOSITION IrpDisposition; // [rsp+70h] [rbp+18h] BYREF

  IrpDisposition = IrpProcessed;
  if ( !DeviceObject )
    sub_1C002DC78(0LL, 0LL);
  DeviceExtension = (char *)DeviceObject->DeviceExtension;
  if ( !DeviceExtension )
    sub_1C002DC78(DeviceObject, 0LL);
  if ( *(_DWORD *)DeviceExtension != 541218120 )
    sub_1C002DC78(DeviceObject, DeviceObject->DeviceExtension);
  if ( (dword_1C006B268 & 8) != 0 )
  {
    v5 = *((_QWORD *)DeviceExtension + 111)
       + 32LL
       * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)DeviceExtension + 220) & *((_DWORD *)DeviceExtension
                                                                                                  + 221));
    *(_DWORD *)v5 = 1229805382;
    *(_QWORD *)(v5 + 8) = 0LL;
    *(_QWORD *)(v5 + 16) = 0LL;
    *(_QWORD *)(v5 + 24) = Irp;
  }
  v6 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(DeviceExtension + 1224), Irp, File, 1u, 0x20u);
  v7 = v6;
  if ( (v6 & 0xC0000000) == 0xC0000000 )
  {
    Irp->IoStatus.Status = v6;
    sub_1C000FD80((__int64)DeviceObject, 16, 561474921, v6, (__int64)Irp);
LABEL_11:
    IofCompleteRequest(Irp, 0);
    return v7;
  }
  v8 = WmiSystemControl((PWMILIB_CONTEXT)(DeviceExtension + 2872), DeviceObject, Irp, &IrpDisposition);
  v9 = IrpDisposition;
  v7 = v8;
  if ( (dword_1C006B268 & 8) != 0 )
  {
    v10 = DeviceObject->DeviceExtension;
    if ( v10 )
    {
      v11 = *((_QWORD *)v10 + 111)
          + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v10 + 220) & *((_DWORD *)v10 + 221));
      *(_DWORD *)v11 = 1768781638;
      *(_QWORD *)(v11 + 8) = 0LL;
      *(_QWORD *)(v11 + 16) = v9;
      *(_QWORD *)(v11 + 24) = v8;
    }
  }
  IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(DeviceExtension + 1224), Irp, 0x20u);
  if ( IrpDisposition == IrpNotCompleted )
    goto LABEL_11;
  if ( IrpDisposition )
    return (unsigned int)sub_1C0029E7C(DeviceObject, Irp);
  return v7;
}
