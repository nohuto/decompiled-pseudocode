/*
 * XREFs of _RtlpIsDuplicateAce@8 @ 0x4B2D840A
 * Callers:
 *     _RtlpGenerateInheritedAce@56 @ 0x4B2D7D3F (_RtlpGenerateInheritedAce@56.c)
 * Callees:
 *     _RtlpCompareAces@16 @ 0x4B2D8505 (_RtlpCompareAces@16.c)
 */

char __fastcall RtlpIsDuplicateAce(int a1, int a2)
{
  char v3; // dl
  int v4; // esi
  int v5; // edi
  char v6; // bl
  int v7; // ecx
  char v9; // dl
  int v10; // ecx
  int v11; // eax
  bool v12; // zf
  int v13; // edx
  int i; // [esp+14h] [ebp-10h]
  int v16; // [esp+18h] [ebp-Ch]
  int v17; // [esp+1Ch] [ebp-8h]
  char v18; // [esp+23h] [ebp-1h]

  if ( *(_BYTE *)a2 > 8u )
    return 0;
  if ( *(_BYTE *)a2 == 4 )
    return 0;
  v3 = *(_BYTE *)(a2 + 1);
  if ( (v3 & 0x10) == 0 )
    return 0;
  v17 = (v3 & 2) != 0 ? *(_DWORD *)(a2 + 4) : 0;
  v16 = (v3 & 1) != 0 ? *(_DWORD *)(a2 + 4) : 0;
  v4 = a1 + 8;
  v5 = (v3 & 8) == 0 ? *(_DWORD *)(a2 + 4) : 0;
  v6 = 0;
  v7 = 0;
  for ( i = 0; v7 < *(unsigned __int16 *)(a1 + 4) - 1; i = v7 )
  {
    if ( *(_BYTE *)v4 <= 8u && *(_BYTE *)v4 != 4 && (*(_BYTE *)(v4 + 1) & 0x10) != 0 )
    {
      if ( (unsigned __int8)RtlpCompareAces(0, 0) )
      {
        v9 = *(_BYTE *)(v4 + 1);
        v10 = v17;
        v11 = ~*(_DWORD *)(v4 + 4);
        v18 = v9;
        if ( (v9 & 2) != 0 )
        {
          v10 = v11 & v17;
          v17 &= v11;
        }
        v12 = (v9 & 1) == 0;
        v13 = v16;
        if ( !v12 )
        {
          v13 = v11 & v16;
          v16 &= v11;
        }
        if ( (v18 & 8) == 0 )
          v5 &= v11;
        if ( !(v10 | v13 | v5) )
          return 1;
      }
      v7 = i;
    }
    ++v7;
    v4 += *(unsigned __int16 *)(v4 + 2);
  }
  return v6;
}
