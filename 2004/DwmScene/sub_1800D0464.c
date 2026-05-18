/*
 * XREFs of sub_1800D0464 @ 0x1800D0464
 * Callers:
 *     sub_1800D04EC @ 0x1800D04EC (sub_1800D04EC.c)
 * Callees:
 *     sub_1800619A8 @ 0x1800619A8 (sub_1800619A8.c)
 *     sub_180061A34 @ 0x180061A34 (sub_180061A34.c)
 *     sub_1800CF96C @ 0x1800CF96C (sub_1800CF96C.c)
 *     sub_1800D05F4 @ 0x1800D05F4 (sub_1800D05F4.c)
 *     sub_18010344C @ 0x18010344C (sub_18010344C.c)
 */

// Hidden C++ exception states: #wind=4
char __fastcall sub_1800D0464(__int64 a1, __int64 a2)
{
  char v4; // bl
  _BYTE v6[8]; // [rsp+30h] [rbp-18h] BYREF
  unsigned __int64 v7; // [rsp+38h] [rbp-10h]
  unsigned __int64 v8; // [rsp+50h] [rbp+8h] BYREF
  __int64 v9; // [rsp+60h] [rbp+18h]

  v9 = a1;
  sub_1800619A8(a1);
  sub_1800D05F4(a1, v6, a2);
  v4 = 0;
  if ( v6[0] )
  {
    v8 = v7;
    sub_1800CF96C((__int64 **)(a1 + 48), (__int64)v6, 0, &v8, v7);
    sub_18010344C(*(_QWORD *)(a1 + 16 * (v8 + 4)));
    v4 = 1;
  }
  sub_180061A34(a1);
  return v4;
}
