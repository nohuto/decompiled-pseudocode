/*
 * XREFs of sub_18003022C @ 0x18003022C
 * Callers:
 *     sub_18002D170 @ 0x18002D170 (sub_18002D170.c)
 *     sub_18002D3C0 @ 0x18002D3C0 (sub_18002D3C0.c)
 *     sub_18002D560 @ 0x18002D560 (sub_18002D560.c)
 *     sub_18002D7D0 @ 0x18002D7D0 (sub_18002D7D0.c)
 * Callees:
 *     sub_180032AD0 @ 0x180032AD0 (sub_180032AD0.c)
 */

__int64 __fastcall sub_18003022C(int a1, int a2, _QWORD *a3)
{
  __int64 result; // rax
  __int64 v5; // [rsp+30h] [rbp-28h] BYREF
  __int64 v6; // [rsp+38h] [rbp-20h] BYREF
  __int64 v7; // [rsp+40h] [rbp-18h] BYREF
  __int64 v8; // [rsp+78h] [rbp+20h] BYREF

  result = sub_180032AD0(a1, a2, (unsigned int)&v5, (unsigned int)&v8, (__int64)&v7, (__int64)&v6);
  if ( (int)result >= 0 )
  {
    *a3 = v6;
    return 0LL;
  }
  return result;
}
