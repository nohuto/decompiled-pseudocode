/*
 * XREFs of ?vSpRemoveShapeHint@@YGXPAVSPRITE@@H@Z @ 0xA1244
 * Callers:
 *     ?pSpHintSpriteShape@@YGHPAVSPRITE@@PAUHBITMAP__@@H@Z @ 0x9F37A (-pSpHintSpriteShape@@YGHPAVSPRITE@@PAUHBITMAP__@@H@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall vSpRemoveShapeHint(int a1, int a2)
{
  unsigned int v4; // eax
  int v5; // eax
  int v6; // [esp+8h] [ebp-4h] BYREF

  if ( (*(_BYTE *)a1 & 0x40) != 0 )
  {
    EngUnlockSurface(*(SURFOBJ **)(a1 + 88));
    v4 = *(_DWORD *)a1 & 0xFFFFFFBF;
    *(_DWORD *)(a1 + 88) = 0;
    *(_DWORD *)(a1 + 176) = 0;
    *(_DWORD *)a1 = v4;
    if ( a2 )
      *(_DWORD *)a1 = v4 & 0xFFFFFF7F;
    REGION::vDeleteREGION(*(REGION **)(a1 + 136));
    v5 = *(_DWORD *)(a1 + 100);
    *(_DWORD *)(a1 + 136) = 0;
    v6 = v5;
    XEPALOBJ::vUnrefPalette((XEPALOBJ *)&v6);
    *(_DWORD *)(a1 + 100) = 0;
  }
}
