/*
 * XREFs of _RtlpHpVsSubsegmentWalk@24 @ 0x4B37FF5E
 * Callers:
 *     _RtlpHpSegWalk@12 @ 0x4B37DAD6 (_RtlpHpSegWalk@12.c)
 * Callees:
 *     _RtlpHpVsChunkSize@16 @ 0x4B37ED6E (_RtlpHpVsChunkSize@16.c)
 */

int __fastcall RtlpHpVsSubsegmentWalk(int a1, int a2, int a3, int *a4, _DWORD *a5, int *a6)
{
  int v7; // ecx
  int i; // eax
  unsigned int v9; // esi
  int v10; // ecx
  unsigned int v11; // ecx
  int v12; // eax
  int v13; // edi
  int v15; // eax
  unsigned int v16; // edx

  if ( a3 == a2 )
  {
    v7 = a1 + 16;
    for ( i = (a1 + 16) ^ *(_DWORD *)(a1 + 16); i != v7; i ^= *(_DWORD *)i )
    {
      if ( i == a2 )
        goto LABEL_7;
    }
    if ( i != a2 )
      return 0;
LABEL_7:
    v9 = a2 + 24;
  }
  else
  {
    v10 = a3 - 8;
    if ( (*(_BYTE *)(a1 + 152) & 1) != 0 && (a3 & 0xFFF) == 0 )
      v10 = a3 - 16;
    v9 = v10 + 8 * (((v10 ^ (unsigned int)RtlpHpHeapGlobals ^ *(_DWORD *)v10) >> 1) & 0x7FFF);
  }
  v11 = a2 + 8 * (*(unsigned __int16 *)(a2 + 20) + 3);
  while ( v9 < v11 )
  {
    v12 = v9 ^ RtlpHpHeapGlobals ^ *(_DWORD *)v9;
    if ( v12 < 0 && (*(_DWORD *)(v9 + 4) & 0x200) == 0 )
    {
      v13 = v9 + 8;
      if ( (*(_BYTE *)(a1 + 152) & 1) != 0 && ((v9 + 16) & 0xFFF) == 0 )
        v13 = v9 + 16;
      v15 = RtlpHpVsChunkSize(a1, v13, v11, a6);
      v16 = 8 * (((v9 ^ RtlpHpHeapGlobals ^ *(_DWORD *)v9) >> 1) & 0x7FFF);
      *a4 = v15;
      *a5 = v16 - v15 - 8;
      return v13;
    }
    v9 += 8 * ((unsigned __int16)v12 >> 1);
  }
  return 0;
}
