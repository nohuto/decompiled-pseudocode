/*
 * XREFs of sub_18012C5EF @ 0x18012C5EF
 * Callers:
 *     <none>
 * Callees:
 *     sub_180033B40 @ 0x180033B40 (sub_180033B40.c)
 */

__int64 __fastcall sub_18012C5EF(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 64) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 64) &= ~1u;
    return sub_180033B40(*(__int64 **)(a2 + 272));
  }
  return result;
}
