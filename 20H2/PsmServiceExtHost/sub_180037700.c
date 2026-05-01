/*
 * XREFs of sub_180037700 @ 0x180037700
 * Callers:
 *     <none>
 * Callees:
 *     sub_180037748 @ 0x180037748 (sub_180037748.c)
 */

__int64 __fastcall sub_180037700(__int64 a1, int a2, int a3, int a4, int a5, _BYTE *a6)
{
  __int64 result; // rax
  _BYTE v7[24]; // [rsp+30h] [rbp-18h] BYREF

  result = sub_180037748(qword_1800B41A8 + 1768, a2, a3, a4, a5, (__int64)v7);
  if ( (int)result >= 0 )
  {
    *a6 = v7[0];
    return 0LL;
  }
  return result;
}
