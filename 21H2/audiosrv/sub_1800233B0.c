/*
 * XREFs of sub_1800233B0 @ 0x1800233B0
 * Callers:
 *     sub_18001BF70 @ 0x18001BF70 (sub_18001BF70.c)
 *     sub_180020B94 @ 0x180020B94 (sub_180020B94.c)
 *     sub_1800229D0 @ 0x1800229D0 (sub_1800229D0.c)
 *     sub_180022AC0 @ 0x180022AC0 (sub_180022AC0.c)
 *     sub_180023050 @ 0x180023050 (sub_180023050.c)
 *     sub_1800271DC @ 0x1800271DC (sub_1800271DC.c)
 *     sub_1800272C0 @ 0x1800272C0 (sub_1800272C0.c)
 *     sub_1800374C8 @ 0x1800374C8 (sub_1800374C8.c)
 *     sub_1800375D0 @ 0x1800375D0 (sub_1800375D0.c)
 *     sub_180037744 @ 0x180037744 (sub_180037744.c)
 *     sub_1800485D0 @ 0x1800485D0 (sub_1800485D0.c)
 *     sub_180048B1C @ 0x180048B1C (sub_180048B1C.c)
 *     sub_18004978C @ 0x18004978C (sub_18004978C.c)
 *     sub_18004D600 @ 0x18004D600 (sub_18004D600.c)
 *     sub_180054760 @ 0x180054760 (sub_180054760.c)
 *     sub_1800592F4 @ 0x1800592F4 (sub_1800592F4.c)
 *     sub_180059458 @ 0x180059458 (sub_180059458.c)
 *     sub_180059A8C @ 0x180059A8C (sub_180059A8C.c)
 *     sub_18005AC34 @ 0x18005AC34 (sub_18005AC34.c)
 *     sub_18005B7B4 @ 0x18005B7B4 (sub_18005B7B4.c)
 *     sub_18005B9E8 @ 0x18005B9E8 (sub_18005B9E8.c)
 *     sub_18005BB40 @ 0x18005BB40 (sub_18005BB40.c)
 *     sub_18011C680 @ 0x18011C680 (sub_18011C680.c)
 *     sub_18011C754 @ 0x18011C754 (sub_18011C754.c)
 *     sub_18011D640 @ 0x18011D640 (sub_18011D640.c)
 * Callees:
 *     sub_180118968 @ 0x180118968 (sub_180118968.c)
 *     sub_180118A38 @ 0x180118A38 (sub_180118A38.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800233B0(unsigned __int64 *a1, unsigned __int64 a2)
{
  __int64 v3; // rax
  _BYTE v4[40]; // [rsp+20h] [rbp-28h] BYREF

  if ( a2 >= *a1 )
  {
    v3 = sub_180118A38(v4, "GSL: Precondition failure at oss\\gsl\\current\\include\\gsl\\span: 499");
    sub_180118968(v3);
  }
  return a1[1] + 96 * a2;
}
