/*
 * XREFs of sub_18012A60D @ 0x18012A60D
 * Callers:
 *     <none>
 * Callees:
 *     sub_18006AFD4 @ 0x18006AFD4 (sub_18006AFD4.c)
 */

__int64 __fastcall sub_18012A60D(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 32) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    return sub_18006AFD4();
  }
  return result;
}
