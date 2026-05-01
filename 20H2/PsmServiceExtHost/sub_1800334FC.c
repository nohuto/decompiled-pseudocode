/*
 * XREFs of sub_1800334FC @ 0x1800334FC
 * Callers:
 *     sub_18001B300 @ 0x18001B300 (sub_18001B300.c)
 *     sub_18001E9C0 @ 0x18001E9C0 (sub_18001E9C0.c)
 *     sub_18007E664 @ 0x18007E664 (sub_18007E664.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800334FC(unsigned int a1, __int64 a2)
{
  unsigned int v2; // r8d

  v2 = (*(_DWORD *)(a2 + 24) >> 2) & 3;
  if ( a1 > v2 )
    return 0xFFFFFFFFLL;
  else
    return a1 != v2;
}
