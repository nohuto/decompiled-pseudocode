/*
 * XREFs of sub_18002D4A0 @ 0x18002D4A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18009AE50 @ 0x18009AE50 (sub_18009AE50.c)
 */

__int64 __fastcall sub_18002D4A0(__int64 a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( *(_QWORD *)(a1 + 96) )
    return sub_18009AE50();
  return result;
}
