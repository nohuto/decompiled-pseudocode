/*
 * XREFs of sub_1C0055820 @ 0x1C0055820
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C0011220 @ 0x1C0011220 (sub_1C0011220.c)
 *     sub_1C0011C40 @ 0x1C0011C40 (sub_1C0011C40.c)
 *     sub_1C0046B28 @ 0x1C0046B28 (sub_1C0046B28.c)
 *     sub_1C0057C60 @ 0x1C0057C60 (sub_1C0057C60.c)
 *     sub_1C0057E7C @ 0x1C0057E7C (sub_1C0057E7C.c)
 *     sub_1C0057F08 @ 0x1C0057F08 (sub_1C0057F08.c)
 */

__int64 __fastcall sub_1C0055820(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  _DWORD *v4; // rdi

  v4 = sub_1C0011220((__int64)DeviceObject);
  sub_1C0057F08(*((PDEVICE_OBJECT *)v4 + 148), DeviceObject);
  sub_1C0046B28(DeviceObject);
  sub_1C0011C40(
    *((_QWORD *)v4 + 148),
    (__int64)(v4 + 426),
    10000,
    *((unsigned __int16 *)v4 + 714),
    *((_QWORD *)v4 + 105),
    0x77464E44u);
  if ( *((_QWORD *)v4 + 301) )
    sub_1C0057C60(DeviceObject);
  if ( (v4[358] & 0x40000) != 0 )
    sub_1C0057E7C(DeviceObject);
  Irp->IoStatus.Status = 0;
  IofCompleteRequest(Irp, 0);
  return 0LL;
}
