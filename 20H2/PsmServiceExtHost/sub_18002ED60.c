/*
 * XREFs of sub_18002ED60 @ 0x18002ED60
 * Callers:
 *     <none>
 * Callees:
 *     sub_18002EE08 @ 0x18002EE08 (sub_18002EE08.c)
 */

__int64 __fastcall sub_18002ED60(int a1, int a2, int a3, int a4, int a5)
{
  __int64 result; // rax

  result = sub_18002EE08(a1, a2, a3, a4, a5);
  if ( (int)result >= 0 )
    return 0LL;
  return result;
}
