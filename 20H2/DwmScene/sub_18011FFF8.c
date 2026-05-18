/*
 * XREFs of sub_18011FFF8 @ 0x18011FFF8
 * Callers:
 *     <none>
 * Callees:
 *     sub_180011374 @ 0x180011374 (sub_180011374.c)
 */

__int64 __fastcall sub_18011FFF8(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 32) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    return sub_180011374();
  }
  return result;
}
