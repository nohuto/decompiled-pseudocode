/*
 * XREFs of ?bSpSpriteOnTopOfWndObjInZ@@YGHPAVSPRITE@@PAVEWNDOBJ@@@Z @ 0x1DE405
 * Callers:
 *     ?vSpUpdateWndobjOverlap@@YGXPAU_SPRITESTATE@@PAVEWNDOBJ@@@Z @ 0x1E2DE5 (-vSpUpdateWndobjOverlap@@YGXPAU_SPRITESTATE@@PAVEWNDOBJ@@@Z.c)
 * Callees:
 *     <none>
 */

BOOL __fastcall bSpSpriteOnTopOfWndObjInZ(_DWORD *a1, int a2)
{
  int v2; // eax
  int v3; // esi
  int i; // eax

  if ( !a1[10] )
    return 0;
  v2 = a1[3];
  v3 = *(_DWORD *)(v2 + 4);
  for ( i = *(_DWORD *)(v2 + 708); v3 != i; v3 = *(_DWORD *)(v3 + 16) )
  {
    if ( *(_DWORD *)(v3 + 40) == *(_DWORD *)(a2 + 136) )
      break;
  }
  return (i != v3 ? v3 : 0) == 0 || a1[9] > *(_DWORD *)(i != v3 ? v3 + 0x24 : 36);
}
