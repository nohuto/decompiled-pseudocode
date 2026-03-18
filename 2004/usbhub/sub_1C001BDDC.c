/*
 * XREFs of sub_1C001BDDC @ 0x1C001BDDC
 * Callers:
 *     sub_1C0008BD0 @ 0x1C0008BD0 (sub_1C0008BD0.c)
 * Callees:
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C001BEB8 @ 0x1C001BEB8 (sub_1C001BEB8.c)
 *     sub_1C002E0B4 @ 0x1C002E0B4 (sub_1C002E0B4.c)
 *     sub_1C004815C @ 0x1C004815C (sub_1C004815C.c)
 *     sub_1C004C954 @ 0x1C004C954 (sub_1C004C954.c)
 *     sub_1C004D340 @ 0x1C004D340 (sub_1C004D340.c)
 */

__int64 __fastcall sub_1C001BDDC(__int64 a1, unsigned int a2, unsigned __int8 a3, __int64 a4, __int64 a5)
{
  __int64 v6; // r14
  unsigned int v9; // edi
  int v10; // edx
  int v11; // r8d
  __int64 v12; // r9
  unsigned int v13; // ebx
  unsigned int v14; // ebx
  unsigned int v15; // ebx

  v6 = a3;
  v9 = 5;
  sub_1C000FD80(a1, 1024, 1398100816, a4, a2);
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
    sub_1C004815C(
      DeviceObject->DeviceExtension,
      *(unsigned __int16 *)(v12 + 4),
      v11,
      44,
      (__int64)&unk_1C0062100,
      *(_WORD *)(v12 + 4),
      v6,
      a2);
  v13 = a2 - 1;
  if ( !v13 )
    return (unsigned int)sub_1C004D340(a1, a4, a5);
  v14 = v13 - 7;
  if ( !v14 )
    return (unsigned int)sub_1C004C954(a1, 5, v11, a4, a5);
  v15 = v14 - 262136;
  if ( v15 )
  {
    if ( v15 == 786432 )
    {
      LOBYTE(v11) = v6;
      return (unsigned int)sub_1C001BEB8(a1, v10, v11, a4, a5);
    }
    if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
      sub_1C002E0B4(DeviceObject->DeviceExtension, 0, 1, 45, (__int64)&unk_1C0062100);
    sub_1C000FD80(a1, 1024, 1937077062, *(unsigned __int16 *)(a4 + 420), v6);
    return 4;
  }
  return v9;
}
