/*
 * XREFs of sub_18004701C @ 0x18004701C
 * Callers:
 *     sub_18001F490 @ 0x18001F490 (sub_18001F490.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18004701C(__int64 a1)
{
  unsigned int v2; // r9d
  int v3; // edx
  unsigned int v4; // ecx

  v2 = 0;
  if ( *(_WORD *)(a1 + 2) && (((*(_WORD *)(a1 + 14) - 8) & 0xFFF7) == 0 || ((*(_WORD *)(a1 + 14) - 24) & 0xFFF7) == 0) )
  {
    v3 = *(unsigned __int16 *)(a1 + 12);
    if ( v3 == *(unsigned __int16 *)(a1 + 2) * (*(unsigned __int16 *)(a1 + 14) >> 3) )
    {
      v4 = v3 * *(_DWORD *)(a1 + 4);
      v2 = 1;
      if ( *(_DWORD *)(a1 + 8) > v4 / 0x14 + v4 || *(_DWORD *)(a1 + 8) < v4 - v4 / 0x14 )
        return 0;
    }
  }
  return v2;
}
