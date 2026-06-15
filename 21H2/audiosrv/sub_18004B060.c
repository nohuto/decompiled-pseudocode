/*
 * XREFs of sub_18004B060 @ 0x18004B060
 * Callers:
 *     sub_18001D3F0 @ 0x18001D3F0 (sub_18001D3F0.c)
 *     sub_18001E240 @ 0x18001E240 (sub_18001E240.c)
 *     sub_18001F9C0 @ 0x18001F9C0 (sub_18001F9C0.c)
 *     sub_180021660 @ 0x180021660 (sub_180021660.c)
 *     sub_180023540 @ 0x180023540 (sub_180023540.c)
 *     sub_18004AE9C @ 0x18004AE9C (sub_18004AE9C.c)
 *     sub_1800592F4 @ 0x1800592F4 (sub_1800592F4.c)
 *     sub_18005B9E8 @ 0x18005B9E8 (sub_18005B9E8.c)
 *     sub_180065E24 @ 0x180065E24 (sub_180065E24.c)
 *     sub_1801195CC @ 0x1801195CC (sub_1801195CC.c)
 * Callees:
 *     sub_180118968 @ 0x180118968 (sub_180118968.c)
 *     sub_180118A38 @ 0x180118A38 (sub_180118A38.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18004B060(unsigned __int64 *a1, unsigned __int64 a2)
{
  __int64 v3; // rax
  _BYTE v4[40]; // [rsp+20h] [rbp-28h] BYREF

  if ( a2 >= *a1 )
  {
    v3 = sub_180118A38(v4, "GSL: Precondition failure at oss\\gsl\\current\\include\\gsl\\span: 499");
    sub_180118968(v3);
  }
  return a1[1] + 24 * a2;
}
