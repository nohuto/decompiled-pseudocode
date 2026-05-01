/*
 * XREFs of sub_1800427A0 @ 0x1800427A0
 * Callers:
 *     sub_1800425F4 @ 0x1800425F4 (sub_1800425F4.c)
 * Callees:
 *     sub_1800301E8 @ 0x1800301E8 (sub_1800301E8.c)
 *     sub_180034344 @ 0x180034344 (sub_180034344.c)
 */

__int64 __fastcall sub_1800427A0(__int64 a1, unsigned int a2, __int64 a3, int a4)
{
  __int64 result; // rax

  result = sub_180034344(a1, 0LL, a4);
  if ( (int)result >= 0 )
  {
    result = sub_1800301E8(a1, a2, 0LL);
    if ( (int)result >= 0 )
      return 0LL;
  }
  return result;
}
