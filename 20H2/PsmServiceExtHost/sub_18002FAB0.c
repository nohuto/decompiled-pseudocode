/*
 * XREFs of sub_18002FAB0 @ 0x18002FAB0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18002FB90 @ 0x18002FB90 (sub_18002FB90.c)
 */

__int64 __fastcall sub_18002FAB0(int a1, int a2, int a3, int a4, __int64 a5)
{
  __int64 result; // rax

  result = sub_18002FB90(a1, a2, a3, a4, a5);
  if ( (int)result >= 0 )
    return 0LL;
  return result;
}
