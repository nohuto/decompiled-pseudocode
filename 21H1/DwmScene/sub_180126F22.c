/*
 * XREFs of sub_180126F22 @ 0x180126F22
 * Callers:
 *     <none>
 * Callees:
 *     sub_18009EDAC @ 0x18009EDAC (sub_18009EDAC.c)
 */

__int64 __fastcall sub_180126F22(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 52) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 52) &= ~1u;
    return sub_18009EDAC(*(__int64 **)(a2 + 56));
  }
  return result;
}
