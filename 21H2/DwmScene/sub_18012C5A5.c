/*
 * XREFs of sub_18012C5A5 @ 0x18012C5A5
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000F344 @ 0x18000F344 (sub_18000F344.c)
 */

__int64 __fastcall sub_18012C5A5(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 68) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 68) &= ~1u;
    return sub_18000F344((__int64 *)(a2 + 120));
  }
  return result;
}
