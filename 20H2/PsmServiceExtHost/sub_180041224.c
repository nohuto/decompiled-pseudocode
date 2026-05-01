/*
 * XREFs of sub_180041224 @ 0x180041224
 * Callers:
 *     sub_180040C14 @ 0x180040C14 (sub_180040C14.c)
 *     sub_18006C4A4 @ 0x18006C4A4 (sub_18006C4A4.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180041224(__int64 a1)
{
  __int64 result; // rax

  result = *(_DWORD *)(a1 + 916) >> 2;
  if ( !(_DWORD)result )
    return 1LL;
  if ( (unsigned int)result > 4 )
    return 4LL;
  return result;
}
