/*
 * XREFs of _vSpUnTearDownSprites@12 @ 0x1E3F3E
 * Callers:
 *     ?DxLddmSharedPrimaryUnLockNotification@@YGJU_LUID@@I@Z @ 0x1D32E2 (-DxLddmSharedPrimaryUnLockNotification@@YGJU_LUID@@I@Z.c)
 *     ?GreUnTearDownSprites@@YGXPAUHDEV__@@PAU_RECTL@@H@Z @ 0x1DB553 (-GreUnTearDownSprites@@YGXPAUHDEV__@@PAU_RECTL@@H@Z.c)
 * Callees:
 *     ??0SPRITEDDIACCESS@@QAE@AAVPDEVOBJ@@@Z @ 0x304FA (--0SPRITEDDIACCESS@@QAE@AAVPDEVOBJ@@@Z.c)
 *     ??1SPRITEDDIACCESS@@QAE@XZ @ 0x305EC (--1SPRITEDDIACCESS@@QAE@XZ.c)
 *     ?vSpComputeUnlockedRegion@@YGXPAU_SPRITESTATE@@@Z @ 0xA0362 (-vSpComputeUnlockedRegion@@YGXPAU_SPRITESTATE@@@Z.c)
 *     ??1ENUMAREAS@@QAE@XZ @ 0xE5C28 (--1ENUMAREAS@@QAE@XZ.c)
 *     ?bEnum@ENUMAREAS@@QAEHPAPAVSPRITE@@PAU_RECTL@@@Z @ 0xE5C5A (-bEnum@ENUMAREAS@@QAEHPAPAVSPRITE@@PAU_RECTL@@@Z.c)
 *     ??0ENUMAREAS@@QAE@PAU_SPRITESTATE@@PAU_RECTL@@K1@Z @ 0xE5CD8 (--0ENUMAREAS@@QAE@PAU_SPRITESTATE@@PAU_RECTL@@K1@Z.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ?bEnumLayers@ENUMAREAS@@QAEHPAPAVSPRITE@@@Z @ 0x1DCE2E (-bEnumLayers@ENUMAREAS@@QAEHPAPAVSPRITE@@@Z.c)
 *     ?vSpReadFromScreen@@YGXPAU_SPRITESTATE@@PAU_POINTL@@PAU_SURFOBJ@@PAU_RECTL@@@Z @ 0x1E19B3 (-vSpReadFromScreen@@YGXPAU_SPRITESTATE@@PAU_POINTL@@PAU_SURFOBJ@@PAU_RECTL@@@Z.c)
 *     ?vSpRedrawArea@@YGXPAU_SPRITESTATE@@PAU_RECTL@@H@Z @ 0x1E1DFF (-vSpRedrawArea@@YGXPAU_SPRITESTATE@@PAU_RECTL@@H@Z.c)
 */

void __stdcall vSpUnTearDownSprites(int a1, const struct _RECTL *a2, int a3)
{
  struct _SPRITESTATE *v3; // esi
  int v4; // eax
  struct SPRITE *v5; // edx
  int v6; // edi
  struct _SURFOBJ *v7; // [esp+0h] [ebp-F8h]
  struct _RECTL *v8; // [esp+4h] [ebp-F4h]
  struct SPRITE *v9; // [esp+10h] [ebp-E8h] BYREF
  int v10; // [esp+14h] [ebp-E4h] BYREF
  _BYTE v11[72]; // [esp+18h] [ebp-E0h] BYREF
  _BYTE v12[116]; // [esp+60h] [ebp-98h] BYREF
  struct _RECTL v13; // [esp+D4h] [ebp-24h] BYREF
  struct _RECTL v14; // [esp+E4h] [ebp-14h] BYREF

  memset(&v14, 0, sizeof(v14));
  v9 = 0;
  memset(&v13, 0, sizeof(v13));
  v10 = a1;
  v3 = (struct _SPRITESTATE *)(a1 + 64);
  if ( *(_DWORD *)(a1 + 100) && bIntersect(a2, (const struct _RECTL *)(a1 + 84), &v13) )
  {
    SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v12, (struct PDEVOBJ *)&v10);
    if ( a3 )
      vSpComputeUnlockedRegion((int)v3);
    ENUMAREAS::ENUMAREAS((ENUMAREAS *)v11, v3, &v13, 0, 0);
    do
    {
      v4 = ENUMAREAS::bEnum((ENUMAREAS *)v11, &v9, &v14);
      v5 = v9;
      v6 = v4;
      if ( v9 )
      {
        while ( 1 )
        {
          vSpReadFromScreen((int *)v3, *((struct _SPRITESTATE **)v5 + 28), (struct _POINTL *)&v14, v7, v8);
          if ( !ENUMAREAS::bEnumLayers((ENUMAREAS *)v11, &v9) )
            break;
          v5 = v9;
        }
      }
    }
    while ( v6 );
    vSpRedrawArea(&v13, v3, (struct _SPRITESTATE *)1, (struct _RECTL *)v7, (int)v8);
    ENUMAREAS::~ENUMAREAS((ENUMAREAS *)v11);
    SPRITEDDIACCESS::~SPRITEDDIACCESS((SPRITEDDIACCESS *)v12);
  }
}
