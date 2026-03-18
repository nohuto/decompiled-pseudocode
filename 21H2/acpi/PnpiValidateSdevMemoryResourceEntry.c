/*
 * XREFs of PnpiValidateSdevMemoryResourceEntry @ 0x1C00B35E4
 * Callers:
 *     PnpiValidateSdevResources @ 0x1C00B3680 (PnpiValidateSdevResources.c)
 * Callees:
 *     <none>
 */

char __fastcall PnpiValidateSdevMemoryResourceEntry(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  unsigned int v3; // r8d
  __int64 v5; // rax
  char v6; // cl
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // r9

  v2 = *(_DWORD *)(a2 + 4);
  v3 = 0;
  if ( !v2 )
    return 0;
  while ( 1 )
  {
    v5 = 32LL * v3;
    v6 = *(_BYTE *)(v5 + a2 + 9);
    if ( v6 == 3 || v6 == 7 && (*(_WORD *)(v5 + a2 + 12) & 0xE00) != 0 )
    {
      v7 = *(_QWORD *)(a1 + 8);
      if ( v7 >= *(_QWORD *)(v5 + a2 + 24) )
      {
        v8 = *(_QWORD *)(a1 + 16);
        if ( v8 + v7 <= *(_QWORD *)(v5 + a2 + 32) + 1LL && v8 <= *(unsigned int *)(v5 + a2 + 16) )
          break;
      }
    }
    if ( ++v3 >= v2 )
      return 0;
  }
  return 1;
}
