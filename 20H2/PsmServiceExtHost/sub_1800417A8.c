/*
 * XREFs of sub_1800417A8 @ 0x1800417A8
 * Callers:
 *     sub_18004170C @ 0x18004170C (sub_18004170C.c)
 * Callees:
 *     sub_1800096AC @ 0x1800096AC (sub_1800096AC.c)
 */

__int64 __fastcall sub_1800417A8(_QWORD *a1)
{
  __int64 result; // rax
  _QWORD v2[3]; // [rsp+60h] [rbp-18h] BYREF

  v2[0] = sub_180003960;
  v2[1] = 0LL;
  result = sub_1800096AC(*a1, 0, 0LL, 0LL, 0, 0, 0, (__int64)v2, (__int64)a1, 0LL, a1 + 1);
  if ( (int)result >= 0 )
    return 0LL;
  return result;
}
