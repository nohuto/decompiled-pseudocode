/*
 * XREFs of sub_18000769C @ 0x18000769C
 * Callers:
 *     sub_180007634 @ 0x180007634 (sub_180007634.c)
 *     sub_1800632E8 @ 0x1800632E8 (sub_1800632E8.c)
 * Callees:
 *     sub_1800076D4 @ 0x1800076D4 (sub_1800076D4.c)
 */

__int64 __fastcall sub_18000769C(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 result; // rax
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF
  __int64 v6; // [rsp+48h] [rbp+20h] BYREF

  v5 = a2;
  result = sub_1800076D4(a1, &v5, &v6);
  if ( (int)result >= 0 )
  {
    *a3 = v6;
    return 0LL;
  }
  return result;
}
