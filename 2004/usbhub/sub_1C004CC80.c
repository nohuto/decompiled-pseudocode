/*
 * XREFs of sub_1C004CC80 @ 0x1C004CC80
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C00029EC @ 0x1C00029EC (sub_1C00029EC.c)
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C0012400 @ 0x1C0012400 (sub_1C0012400.c)
 *     sub_1C0013AE0 @ 0x1C0013AE0 (sub_1C0013AE0.c)
 *     sub_1C002E188 @ 0x1C002E188 (sub_1C002E188.c)
 *     sub_1C00361E8 @ 0x1C00361E8 (sub_1C00361E8.c)
 *     sub_1C004A608 @ 0x1C004A608 (sub_1C004A608.c)
 */

__int64 __fastcall sub_1C004CC80(__int64 a1, __int64 a2)
{
  _DWORD *v4; // rsi
  int v6; // [rsp+28h] [rbp-30h]

  v4 = sub_1C000F050(a1);
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
  {
    v6 = *(unsigned __int16 *)(a2 + 4);
    sub_1C002E188((__int64)DeviceObject->DeviceExtension, 0, 1u, 0x16u, (__int64)&unk_1C0062100, v6);
  }
  sub_1C000FD80(a1, 1024, 1883391045, a2, 0LL);
  sub_1C0013AE0(a1, a2, 0);
  if ( v4[768] == *(unsigned __int16 *)(a2 + 4) )
  {
    sub_1C00361E8(a1);
    sub_1C00029EC(a1, *(_QWORD *)(a2 + 376), *(_WORD *)(a2 + 4));
  }
  sub_1C0012400(a1, 0LL, 0LL, &stru_1C0062828);
  sub_1C004A608(a1, *(_WORD *)(a2 + 4), 0x3Eu, (char *)a2, 0xB70u, -1, -1, aBusfuncC, 1061, 0);
  return 3LL;
}
