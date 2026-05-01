/*
 * XREFs of sub_18002B030 @ 0x18002B030
 * Callers:
 *     <none>
 * Callees:
 *     sub_18002B954 @ 0x18002B954 (sub_18002B954.c)
 */

__int64 __fastcall sub_18002B030(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 *v3; // rbx
  __int64 v5; // rcx
  __int64 v7; // [rsp+38h] [rbp+10h] BYREF

  v3 = (__int64 *)(a2 + 64);
  sub_18002B954(a2, a2 + 64, 8LL);
  v5 = *v3;
  *v3 *= 2LL;
  v7 = -10000000 * v5;
  return TpSetTimer(a3, &v7, 0LL, 0LL);
}
