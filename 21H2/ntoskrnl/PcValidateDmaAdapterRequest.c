/*
 * XREFs of PcValidateDmaAdapterRequest @ 0x1404D2800
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall PcValidateDmaAdapterRequest(__int64 a1)
{
  unsigned int v1; // edx
  int v2; // r8d

  if ( *(_BYTE *)(a1 + 5) && !*(_BYTE *)(a1 + 4) )
    return 0;
  if ( *(_BYTE *)(a1 + 4) )
    return 1;
  v1 = *(_DWORD *)(a1 + 16);
  if ( (v1 & 0xFFFFFFF8) != 0 || v1 == 4 )
    return 0;
  v2 = *(_DWORD *)(a1 + 24);
  if ( !v2 )
    return v1 < 4;
  return v2 == 1 && v1 >= 4;
}
