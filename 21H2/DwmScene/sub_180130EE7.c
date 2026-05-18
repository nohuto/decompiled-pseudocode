/*
 * XREFs of sub_180130EE7 @ 0x180130EE7
 * Callers:
 *     <none>
 * Callees:
 *     sub_18006F6B0 @ 0x18006F6B0 (sub_18006F6B0.c)
 */

__int64 __fastcall sub_180130EE7(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 52) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 52) &= ~1u;
    return sub_18006F6B0();
  }
  return result;
}
