/*
 * XREFs of sub_1C004E120 @ 0x1C004E120
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C0012400 @ 0x1C0012400 (sub_1C0012400.c)
 *     sub_1C0013AE0 @ 0x1C0013AE0 (sub_1C0013AE0.c)
 *     sub_1C002E188 @ 0x1C002E188 (sub_1C002E188.c)
 *     sub_1C00361E8 @ 0x1C00361E8 (sub_1C00361E8.c)
 *     sub_1C004C7A4 @ 0x1C004C7A4 (sub_1C004C7A4.c)
 */

__int64 __fastcall sub_1C004E120(__int64 a1, __int64 a2, __int64 a3)
{
  int v7; // [rsp+28h] [rbp-10h]

  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
  {
    v7 = *(unsigned __int16 *)(a2 + 4);
    sub_1C002E188((__int64)DeviceObject->DeviceExtension, 0, 1u, 0x1Eu, (__int64)&unk_1C0062100, v7);
  }
  sub_1C000FD80(a1, 1024, 1697793106, a2, 0LL);
  sub_1C0013AE0(a1, a2, 0);
  sub_1C00361E8(a1);
  sub_1C0012400(a1, 0LL, 0LL, &stru_1C0062B28);
  sub_1C004C7A4(a1, a2, a3);
  return 0LL;
}
