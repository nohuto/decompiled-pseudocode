/*
 * XREFs of sub_18012A898 @ 0x18012A898
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800A36DC @ 0x1800A36DC (sub_1800A36DC.c)
 */

__int64 __fastcall sub_18012A898(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 76) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 76) &= ~1u;
    return sub_1800A36DC();
  }
  return result;
}
