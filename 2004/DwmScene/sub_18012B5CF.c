/*
 * XREFs of sub_18012B5CF @ 0x18012B5CF
 * Callers:
 *     <none>
 * Callees:
 *     sub_180069DE0 @ 0x180069DE0 (sub_180069DE0.c)
 */

__int64 __fastcall sub_18012B5CF(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 52) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 52) &= ~1u;
    return sub_180069DE0();
  }
  return result;
}
