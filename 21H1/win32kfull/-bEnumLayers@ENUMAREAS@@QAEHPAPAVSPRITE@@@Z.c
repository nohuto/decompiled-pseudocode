/*
 * XREFs of ?bEnumLayers@ENUMAREAS@@QAEHPAPAVSPRITE@@@Z @ 0x1DCE2E
 * Callers:
 *     ?bSpBltScreenToScreen@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@PAU_POINTL@@4PAU_BRUSHOBJ@@4K@Z @ 0x1DD39B (-bSpBltScreenToScreen@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@PAU_POINTL@@4PAU_.c)
 *     ?vSpDeviceControlSprites@@YGXPAUHDEV__@@PAVEWNDOBJ@@K@Z @ 0x1E1301 (-vSpDeviceControlSprites@@YGXPAUHDEV__@@PAVEWNDOBJ@@K@Z.c)
 *     ?vSpRedrawArea@@YGXPAU_SPRITESTATE@@PAU_RECTL@@H@Z @ 0x1E1DFF (-vSpRedrawArea@@YGXPAU_SPRITESTATE@@PAU_RECTL@@H@Z.c)
 *     ?vSpRedrawAreaExMirror@@YGXPAU_SPRITESTATE@@PAU_RECTL@@@Z @ 0x1E1FC9 (-vSpRedrawAreaExMirror@@YGXPAU_SPRITESTATE@@PAU_RECTL@@@Z.c)
 *     ?vSpUpdateLockedScreenAreas@@YGXPAU_SPRITESTATE@@PAU_POINTL@@PAU_RECTL@@PAU_CLIPOBJ@@H@Z @ 0x1E28CD (-vSpUpdateLockedScreenAreas@@YGXPAU_SPRITESTATE@@PAU_POINTL@@PAU_RECTL@@PAU_CLIPOBJ@@H@Z.c)
 *     _vSpUnTearDownSprites@12 @ 0x1E3F3E (_vSpUnTearDownSprites@12.c)
 * Callees:
 *     <none>
 */

int __thiscall ENUMAREAS::bEnumLayers(ENUMAREAS *this, struct SPRITE **a2)
{
  int v2; // ebx
  _DWORD *v3; // edi
  _DWORD *v4; // esi
  _DWORD *v5; // edx
  int result; // eax

  v2 = 0;
  if ( (*(_BYTE *)this & 1) != 0 )
  {
    v5 = (_DWORD *)*((_DWORD *)this + 14);
    v4 = v5;
    if ( (unsigned int)v5 > *((_DWORD *)this + 13) + 16 && *(v5 - 3) == *v5 )
    {
      *((_DWORD *)this + 14) = v5 - 3;
      v4 = v5 - 3;
      goto LABEL_8;
    }
  }
  else
  {
    v3 = (_DWORD *)*((_DWORD *)this + 14);
    v4 = v3;
    if ( (unsigned int)v3 < *((_DWORD *)this + 13) + *(_DWORD *)(*((_DWORD *)this + 13) + 8) - 12 && v3[3] == *v3 )
    {
      *((_DWORD *)this + 14) = v3 + 3;
      v4 = v3 + 3;
LABEL_8:
      v2 = 1;
    }
  }
  result = v2;
  *a2 = (struct SPRITE *)v4[2];
  return result;
}
