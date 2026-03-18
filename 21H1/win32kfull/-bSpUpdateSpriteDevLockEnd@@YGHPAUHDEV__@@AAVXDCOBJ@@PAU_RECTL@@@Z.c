/*
 * XREFs of ?bSpUpdateSpriteDevLockEnd@@YGHPAUHDEV__@@AAVXDCOBJ@@PAU_RECTL@@@Z @ 0x1DEDCA
 * Callers:
 *     ?GdiUpdateSpriteDevLockEnd@@YGHAAVXDCOBJ@@@Z @ 0x12266 (-GdiUpdateSpriteDevLockEnd@@YGHAAVXDCOBJ@@@Z.c)
 * Callees:
 *     ?bSpUpdateSprite@@YGHPAVSPRITE@@PAUHDC__@@PAU_POINTL@@PAUtagSIZE@@12KPAU_BLENDFUNCTION@@KPAU_RECTL@@@Z @ 0x9F6DC (-bSpUpdateSprite@@YGHPAVSPRITE@@PAUHDC__@@PAU_POINTL@@PAUtagSIZE@@12KPAU_BLENDFUNCTION@@KPAU_REC.c)
 *     ?pSpGetSprite@@YGPAVSPRITE@@PAU_SPRITESTATE@@PAUHWND__@@PAX@Z @ 0x9FC28 (-pSpGetSprite@@YGPAVSPRITE@@PAU_SPRITESTATE@@PAUHWND__@@PAX@Z.c)
 *     ?pSpGetMetaSprite@@YGPAU_METASPRITE@@PBU_SPRITESTATE@@PAUHWND__@@PAX@Z @ 0x1DF410 (-pSpGetMetaSprite@@YGPAU_METASPRITE@@PBU_SPRITESTATE@@PAUHWND__@@PAX@Z.c)
 */

int __userpurge bSpUpdateSpriteDevLockEnd@<eax>(
        struct _POINTL ***a1@<edx>,
        int a2@<ecx>,
        struct _POINTL *a3,
        struct XDCOBJ *a4,
        struct _RECTL *a5)
{
  int v5; // esi
  bool v6; // zf
  int v7; // edi
  struct _POINTL **v8; // ebx
  int v9; // edx
  struct _METASPRITE *MetaSprite; // eax
  int v11; // ebx
  int *v12; // ecx
  struct SPRITE *Sprite; // ecx
  HWND v15; // [esp+0h] [ebp-24h]
  unsigned int v16; // [esp+0h] [ebp-24h]
  unsigned int v17; // [esp+0h] [ebp-24h]
  void *v18; // [esp+4h] [ebp-20h]
  struct _RECTL *v19; // [esp+4h] [ebp-20h]
  struct _RECTL *v20; // [esp+4h] [ebp-20h]
  struct HDC__ v21; // [esp+Ch] [ebp-18h] BYREF
  struct _POINTL *v22; // [esp+10h] [ebp-14h]
  struct _POINTL ***v23; // [esp+14h] [ebp-10h]
  int v24; // [esp+18h] [ebp-Ch]
  char *v25; // [esp+1Ch] [ebp-8h]
  unsigned int v26; // [esp+20h] [ebp-4h]

  v5 = 0;
  v6 = (*(_DWORD *)(a2 + 24) & 0x400) == 0;
  v23 = a1;
  v7 = 0;
  if ( v6 )
  {
    v8 = *a1;
    v9 = (int)(*a1)[122];
    v21.unused = (int)v8[128];
    v22 = v8[129];
    v25 = *(char **)(a2 + 104);
    v24 = a2 + 64;
    if ( v25 )
    {
      MetaSprite = pSpGetMetaSprite(0, v15, v18);
      if ( MetaSprite )
      {
        v7 = 1;
        v26 = 0;
        v11 = v24;
        v12 = (int *)((char *)MetaSprite + 16);
        v25 = (char *)MetaSprite + 16;
        do
        {
          v7 &= bSpUpdateSprite(
                  0,
                  *v12,
                  0,
                  (struct _BLENDFUNCTION *)&v21,
                  **v23,
                  (struct tagSIZE *)&gptlZero,
                  0,
                  0,
                  0x40200000u,
                  a3,
                  v16,
                  v19);
          v12 = (int *)(v25 + 4);
          v25 += 4;
          ++v26;
        }
        while ( v26 < *(_DWORD *)(v11 + 40) );
      }
    }
    else
    {
      Sprite = pSpGetSprite(v9, a2 + 64, 0, v15, v18);
      if ( Sprite )
        return bSpUpdateSprite(
                 0,
                 (int)Sprite,
                 0,
                 (struct _BLENDFUNCTION *)&v21,
                 *v8,
                 (struct tagSIZE *)&gptlZero,
                 0,
                 0,
                 0x40200000u,
                 a3,
                 v17,
                 v20);
    }
    return v7;
  }
  return v5;
}
