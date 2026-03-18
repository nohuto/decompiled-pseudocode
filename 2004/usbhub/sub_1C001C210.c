/*
 * XREFs of sub_1C001C210 @ 0x1C001C210
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C003C33C @ 0x1C003C33C (sub_1C003C33C.c)
 */

__int64 __fastcall sub_1C001C210(PDEVICE_OBJECT DeviceObject, PIRP Irp, PVOID Context)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rbx
  _DWORD *v6; // rax
  __int64 LowPart; // rbx
  _DWORD *v8; // rbp
  _DWORD *v9; // rax
  NTSTATUS v10; // eax
  unsigned int v11; // ebx

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  v6 = sub_1C000F050((__int64)DeviceObject);
  LowPart = (int)CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  v8 = v6;
  sub_1C000FD80((__int64)DeviceObject, 16, 1901295731, LowPart, (__int64)Irp);
  v9 = sub_1C000F050((__int64)DeviceObject);
  v10 = PoRequestPowerIrp(
          DeviceObject,
          3u,
          (POWER_STATE)((v9[LowPart + 1252] != 3) + 3),
          (PREQUEST_POWER_COMPLETE)sub_1C0012DD0,
          Irp,
          0LL);
  v11 = v10;
  if ( v10 == 259 )
    return 3221225494LL;
  Irp->IoStatus.Status = v10;
  sub_1C003C33C(DeviceObject, Irp, 1273LL);
  IofCompleteRequest(Irp, 0);
  IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v8 + 306), Irp, 0x20u);
  return v11;
}
