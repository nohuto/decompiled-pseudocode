/*
 * XREFs of sub_1C004A150 @ 0x1C004A150
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C002E0B4 @ 0x1C002E0B4 (sub_1C002E0B4.c)
 */

__int64 __fastcall sub_1C004A150(PDEVICE_OBJECT DeviceObject)
{
  _DWORD *v2; // rbx

  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(::DeviceObject->DeviceType) )
    sub_1C002E0B4((__int64)::DeviceObject->DeviceExtension, 0, 1u, 0xBu, (__int64)&unk_1C0063950);
  v2 = sub_1C000F050((__int64)DeviceObject);
  v2[718] = 6;
  *((_QWORD *)v2 + 360) = &qword_1C006B3C0;
  *((_QWORD *)v2 + 361) = sub_1C0049B30;
  *((_QWORD *)v2 + 362) = sub_1C0049900;
  *((_QWORD *)v2 + 363) = sub_1C0049BA0;
  *((_QWORD *)v2 + 365) = sub_1C0048BA0;
  *((_QWORD *)v2 + 364) = 0LL;
  *((_QWORD *)v2 + 366) = 0LL;
  IoWMIRegistrationControl(DeviceObject, 1u);
  v2[640] |= 2u;
  sub_1C000FD80((__int64)DeviceObject, 64, 1098345833, 0LL, 0LL);
  return 0LL;
}
