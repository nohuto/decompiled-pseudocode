/*
 * XREFs of _RtlImageRvaToSection@12 @ 0x4B34D2C0
 * Callers:
 *     _RtlImageRvaToVa@16 @ 0x4B34D310 (_RtlImageRvaToVa@16.c)
 * Callees:
 *     <none>
 */

int __stdcall RtlImageRvaToSection(int a1, int a2, unsigned int a3)
{
  int v3; // esi
  int v4; // edx

  v3 = 0;
  v4 = *(unsigned __int16 *)(a1 + 20) + a1 + 24;
  if ( !*(_WORD *)(a1 + 6) )
    return 0;
  while ( a3 < *(_DWORD *)(v4 + 12) || a3 >= *(_DWORD *)(v4 + 12) + *(_DWORD *)(v4 + 16) )
  {
    v4 += 40;
    if ( ++v3 >= (unsigned int)*(unsigned __int16 *)(a1 + 6) )
      return 0;
  }
  return v4;
}
