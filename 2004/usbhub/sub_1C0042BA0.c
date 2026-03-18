/*
 * XREFs of sub_1C0042BA0 @ 0x1C0042BA0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D060 (_guard_dispatch_icall_nop.c)
 *     sub_1C002E0B4 @ 0x1C002E0B4 (sub_1C002E0B4.c)
 *     sub_1C0043A40 @ 0x1C0043A40 (sub_1C0043A40.c)
 *     sub_1C0043ED8 @ 0x1C0043ED8 (sub_1C0043ED8.c)
 *     sub_1C0059DA0 @ 0x1C0059DA0 (sub_1C0059DA0.c)
 */

__int64 __fastcall sub_1C0042BA0(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  _DWORD *v4; // rsi
  _DWORD *v5; // rax
  unsigned int v6; // ebp
  _DWORD *v8; // rax
  _DWORD *v9; // rax
  unsigned int v10; // edi

  sub_1C000FD80((__int64)DeviceObject, 2, 1716667725, 0LL, (__int64)Irp);
  v4 = sub_1C000F050((__int64)DeviceObject);
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(::DeviceObject->DeviceType) )
    sub_1C002E0B4((__int64)::DeviceObject->DeviceExtension, 0, 1u, 0x16u, (__int64)&unk_1C0062F40);
  v5 = sub_1C000F050((__int64)DeviceObject);
  sub_1C0059DA0(DeviceObject, v5 + 346);
  v6 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(v4 + 306), Irp, File, 1u, 0x20u);
  if ( (v6 & 0xC0000000) == 0xC0000000 )
  {
    Irp->IoStatus.Status = v6;
    IofCompleteRequest(Irp, 0);
    return v6;
  }
  else
  {
    sub_1C000FD80((__int64)DeviceObject, 2, 1769174128, 0LL, 0LL);
    if ( LODWORD(stru_1C006B480.DeviceQueue.DeviceListHead.Blink) )
    {
      v8 = sub_1C000F050((__int64)DeviceObject);
      if ( *((_QWORD *)v8 + 554) )
        (*((void (__fastcall **)(_QWORD, _QWORD, __int64))v8 + 554))(*((_QWORD *)v8 + 529), 0LL, 5LL);
    }
    IoReleaseRemoveLockAndWaitEx((PIO_REMOVE_LOCK)(v4 + 306), Irp, 0x20u);
    v9 = sub_1C000F050((__int64)DeviceObject);
    sub_1C0043ED8(v9 + 346, 2LL);
    sub_1C0043A40(DeviceObject);
    ++Irp->CurrentLocation;
    ++Irp->Tail.Overlay.CurrentStackLocation;
    Irp->IoStatus.Status = 0;
    v10 = IofCallDriver(*((PDEVICE_OBJECT *)v4 + 151), Irp);
    if ( v4[1221] )
      KeWaitForSingleObject(v4 + 1224, Executive, 0, 0, 0LL);
    IoDetachDevice(*((PDEVICE_OBJECT *)v4 + 151));
    IoDeleteDevice(DeviceObject);
    return v10;
  }
}
