/*
 * XREFs of ?bSpUpdateAlpha@@YGHPAVSPRITE@@PAU_BLENDFUNCTION@@H@Z @ 0x1DE62C
 * Callers:
 *     ?bSpUpdateSprite@@YGHPAVSPRITE@@PAUHDC__@@PAU_POINTL@@PAUtagSIZE@@12KPAU_BLENDFUNCTION@@KPAU_RECTL@@@Z @ 0x9F6DC (-bSpUpdateSprite@@YGHPAVSPRITE@@PAUHDC__@@PAU_POINTL@@PAUtagSIZE@@12KPAU_BLENDFUNCTION@@KPAU_REC.c)
 *     ?bSpUpdateShape@@YGHPAVSPRITE@@KPAUHDC__@@1KPAU_BLENDFUNCTION@@PAU_POINTL@@PAUtagSIZE@@PAU_RECTL@@@Z @ 0x1DE86D (-bSpUpdateShape@@YGHPAVSPRITE@@KPAUHDC__@@1KPAU_BLENDFUNCTION@@PAU_POINTL@@PAUtagSIZE@@PAU_RECTL.c)
 * Callees:
 *     <none>
 */

int __userpurge bSpUpdateAlpha@<eax>(int a1@<edx>, int a2@<ecx>, struct SPRITE *a3, struct _BLENDFUNCTION *a4, int a5)
{
  int v5; // esi
  int v6; // ebx
  int v7; // eax

  v5 = 0;
  if ( !*(_BYTE *)a1 && !*(_BYTE *)(a1 + 1) && (*(_BYTE *)(a1 + 3) & 0xFE) == 0 )
  {
    v6 = *(_DWORD *)(a2 + 4);
    if ( (v6 & 2) != 0 || !*(_DWORD *)(a2 + 88) )
    {
      v5 = 1;
      if ( a3 )
        *(_BYTE *)(a2 + 142) = *(_BYTE *)(a1 + 2);
      else
        *(_DWORD *)(a2 + 140) = *(_DWORD *)a1;
      v7 = *(_DWORD *)(a2 + 12);
      *(_DWORD *)(a2 + 4) = v6 & 0xFFFFFFF9 | 2;
      if ( *(_DWORD *)(v7 + 76) <= 3u || (*(_BYTE *)(a1 + 3) & 1) == 0 && *(_BYTE *)(a1 + 2) == 0xFF )
        *(_DWORD *)a2 |= 8u;
      else
        *(_DWORD *)a2 &= ~8u;
    }
  }
  return v5;
}
