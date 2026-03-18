/*
 * XREFs of sub_1C0042980 @ 0x1C0042980
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C002E0B4 @ 0x1C002E0B4 (sub_1C002E0B4.c)
 *     sub_1C002E188 @ 0x1C002E188 (sub_1C002E188.c)
 *     sub_1C004A608 @ 0x1C004A608 (sub_1C004A608.c)
 */

NTSTATUS __fastcall sub_1C0042980(__int64 a1, IRP *a2)
{
  PDEVICE_OBJECT *v4; // rdi
  unsigned int v5; // ecx
  int v7; // [rsp+28h] [rbp-40h]

  v4 = (PDEVICE_OBJECT *)sub_1C000F050(a1);
  sub_1C000FD80(a1, 2, 1934650960, *((unsigned int *)v4 + 643), (__int64)a2);
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
    sub_1C002E0B4((__int64)DeviceObject->DeviceExtension, 0, 1u, 0x10u, (__int64)&unk_1C0062F40);
  if ( *((_DWORD *)v4 + 643) )
  {
    v5 = *((_DWORD *)v4 + 643);
    if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
    {
      v7 = *((_DWORD *)v4 + 643);
      sub_1C002E188((__int64)DeviceObject->DeviceExtension, 0, 1u, 0x11u, (__int64)&unk_1C0062F40, v7);
      v5 = *((_DWORD *)v4 + 643);
    }
    a2->IoStatus.Information |= v5;
    a2->IoStatus.Status = 0;
    sub_1C004A608(a1, 0, 87, (_DWORD)a2 + 56, 8, 0, 0, (__int64)aPnpC, 2265, 0);
  }
  ++a2->CurrentLocation;
  ++a2->Tail.Overlay.CurrentStackLocation;
  return IofCallDriver(v4[151], a2);
}
