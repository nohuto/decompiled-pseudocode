/*
 * XREFs of sub_1C003D2E4 @ 0x1C003D2E4
 * Callers:
 *     sub_1C001A550 @ 0x1C001A550 (sub_1C001A550.c)
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C002E188 @ 0x1C002E188 (sub_1C002E188.c)
 *     sub_1C0031838 @ 0x1C0031838 (sub_1C0031838.c)
 */

__int64 __fastcall sub_1C003D2E4(__int64 a1, int a2)
{
  __int64 v3; // rbx
  _DWORD *v4; // rbp
  unsigned int v5; // edi

  v3 = a2;
  v4 = sub_1C000F050(*(_QWORD *)(a1 + 8));
  sub_1C000F050(*(_QWORD *)(a1 + 8));
  v5 = *(_DWORD *)(a1 + 68);
  sub_1C000FD80(*(_QWORD *)(a1 + 8), 16, 1920156755, a1, v3);
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
    sub_1C002E188((__int64)DeviceObject->DeviceExtension, 0, 1u, 0xBu, (__int64)&unk_1C0062E08, v3);
  switch ( (_DWORD)v3 )
  {
    case 1:
      v5 = 2;
      return sub_1C0031838(*(_QWORD *)(a1 + 8), a1, v5);
    case 2:
      goto LABEL_12;
    case 3:
    case 9:
      v4[640] |= 0x10u;
LABEL_12:
      v5 = 1;
      return sub_1C0031838(*(_QWORD *)(a1 + 8), a1, v5);
  }
  if ( (int)v3 > 9 && (int)v3 <= 11 )
    goto LABEL_12;
  return sub_1C0031838(*(_QWORD *)(a1 + 8), a1, v5);
}
