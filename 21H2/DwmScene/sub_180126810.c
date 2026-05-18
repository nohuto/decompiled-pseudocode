/*
 * XREFs of sub_180126810 @ 0x180126810
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000F344 @ 0x18000F344 (sub_18000F344.c)
 */

__int64 __fastcall sub_180126810(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 96) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 96) &= ~1u;
    return sub_18000F344((__int64 *)(a2 + 80));
  }
  return result;
}
