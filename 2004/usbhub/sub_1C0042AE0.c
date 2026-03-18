/*
 * XREFs of sub_1C0042AE0 @ 0x1C0042AE0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C0012810 @ 0x1C0012810 (sub_1C0012810.c)
 *     sub_1C0015EB4 @ 0x1C0015EB4 (sub_1C0015EB4.c)
 *     sub_1C003CAB8 @ 0x1C003CAB8 (sub_1C003CAB8.c)
 */

NTSTATUS __fastcall sub_1C0042AE0(__int64 a1, IRP *a2)
{
  PDEVICE_OBJECT *v4; // rbp
  _DWORD *v5; // rsi
  unsigned int v7; // [rsp+48h] [rbp+10h] BYREF

  v7 = 0;
  v4 = (PDEVICE_OBJECT *)sub_1C000F050(a1);
  v5 = sub_1C000F050(a1) + 346;
  sub_1C000FD80(a1, 2, 1903784820, (__int64)v5, (__int64)a2);
  sub_1C003CAB8(*((_QWORD *)v5 + 1));
  if ( (int)sub_1C0015EB4(*((_QWORD *)v5 + 1), &v7) >= 0 )
    sub_1C0012810(*((struct _DEVICE_OBJECT **)v5 + 1), 6u, (__int64)v5);
  a2->IoStatus.Status = 0;
  ++a2->CurrentLocation;
  ++a2->Tail.Overlay.CurrentStackLocation;
  return IofCallDriver(v4[151], a2);
}
