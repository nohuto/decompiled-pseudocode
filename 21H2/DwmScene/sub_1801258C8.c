/*
 * XREFs of sub_1801258C8 @ 0x1801258C8
 * Callers:
 *     <none>
 * Callees:
 *     sub_180011454 @ 0x180011454 (sub_180011454.c)
 */

__int64 __fastcall sub_1801258C8(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 32) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    return sub_180011454();
  }
  return result;
}
