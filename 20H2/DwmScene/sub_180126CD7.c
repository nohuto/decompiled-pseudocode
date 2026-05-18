/*
 * XREFs of sub_180126CD7 @ 0x180126CD7
 * Callers:
 *     <none>
 * Callees:
 *     sub_18002E270 @ 0x18002E270 (sub_18002E270.c)
 */

__int64 __fastcall sub_180126CD7(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 64) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 64) &= ~1u;
    return sub_18002E270(*(__int64 **)(a2 + 272));
  }
  return result;
}
