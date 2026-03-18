/*
 * XREFs of ?vSpCorrectHdevReferences@@YGXPAU_SPRITESTATE@@PAUHDEV__@@@Z @ 0x9F09A
 * Callers:
 *     _vSpDynamicModeChange@8 @ 0x9EE36 (_vSpDynamicModeChange@8.c)
 * Callees:
 *     <none>
 */

void __fastcall vSpCorrectHdevReferences(_DWORD *a1, int a2)
{
  _DWORD *v2; // eax
  int v3; // edi
  int v4; // eax
  int i; // eax
  int v6; // esi
  int v7; // esi

  *a1 = a2;
  v2 = a1 + 26;
  v3 = 64;
  do
  {
    if ( *v2 )
      *(_DWORD *)(*v2 + 12) = a2;
    ++v2;
    --v3;
  }
  while ( v3 );
  v4 = a1[160];
  if ( v4 )
    *(_DWORD *)(v4 + 12) = a2;
  for ( i = a1[1]; i; i = *(_DWORD *)(i + 16) )
  {
    v6 = *(_DWORD *)(i + 88);
    *(_DWORD *)(i + 12) = a1;
    if ( v6 && (*(_BYTE *)i & 0x40) == 0 )
      *(_DWORD *)(v6 + 12) = a2;
    v7 = *(_DWORD *)(i + 112);
    if ( v7 )
      *(_DWORD *)(v7 + 12) = a2;
  }
}
