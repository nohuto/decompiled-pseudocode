/*
 * XREFs of sub_18007B9DF @ 0x18007B9DF
 * Callers:
 *     <none>
 * Callees:
 *     sub_180072E14 @ 0x180072E14 (sub_180072E14.c)
 */

__int64 __fastcall sub_18007B9DF(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 32) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    return sub_180072E14(*(__int64 **)(a2 + 80));
  }
  return result;
}
