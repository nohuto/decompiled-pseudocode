/*
 * XREFs of ?vSpDeviceControlSprites@@YGXPAUHDEV__@@PAVEWNDOBJ@@K@Z @ 0x1E1301
 * Callers:
 *     _EngControlSprites@8 @ 0x1E3508 (_EngControlSprites@8.c)
 * Callees:
 *     ??0SPRITEDDIACCESS@@QAE@AAVPDEVOBJ@@@Z @ 0x304FA (--0SPRITEDDIACCESS@@QAE@AAVPDEVOBJ@@@Z.c)
 *     ??1SPRITEDDIACCESS@@QAE@XZ @ 0x305EC (--1SPRITEDDIACCESS@@QAE@XZ.c)
 *     ?INVOKEOFFCOPYBITS@@YGHPAU_POINTL@@PAU_SURFOBJ@@01PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@0@Z @ 0x92B62 (-INVOKEOFFCOPYBITS@@YGHPAU_POINTL@@PAU_SURFOBJ@@01PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@0@Z.c)
 *     ?vSpComputeUnlockedRegion@@YGXPAU_SPRITESTATE@@@Z @ 0xA0362 (-vSpComputeUnlockedRegion@@YGXPAU_SPRITESTATE@@@Z.c)
 *     ??1ENUMAREAS@@QAE@XZ @ 0xE5C28 (--1ENUMAREAS@@QAE@XZ.c)
 *     ?bEnum@ENUMAREAS@@QAEHPAPAVSPRITE@@PAU_RECTL@@@Z @ 0xE5C5A (-bEnum@ENUMAREAS@@QAEHPAPAVSPRITE@@PAU_RECTL@@@Z.c)
 *     ??0ENUMAREAS@@QAE@PAU_SPRITESTATE@@PAU_RECTL@@K1@Z @ 0xE5CD8 (--0ENUMAREAS@@QAE@PAU_SPRITESTATE@@PAU_RECTL@@K1@Z.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ??0UNDODESKTOPCOORD@@QAE@PAVEWNDOBJ@@PAU_SPRITESTATE@@@Z @ 0x1DA5B3 (--0UNDODESKTOPCOORD@@QAE@PAVEWNDOBJ@@PAU_SPRITESTATE@@@Z.c)
 *     ??1UNDODESKTOPCOORD@@QAE@XZ @ 0x1DA6E7 (--1UNDODESKTOPCOORD@@QAE@XZ.c)
 *     ?bEnumLayers@ENUMAREAS@@QAEHPAPAVSPRITE@@@Z @ 0x1DCE2E (-bEnumLayers@ENUMAREAS@@QAEHPAPAVSPRITE@@@Z.c)
 *     ?vSpRedrawArea@@YGXPAU_SPRITESTATE@@PAU_RECTL@@H@Z @ 0x1E1DFF (-vSpRedrawArea@@YGXPAU_SPRITESTATE@@PAU_RECTL@@H@Z.c)
 */

void __userpurge vSpDeviceControlSprites(int a1@<edx>, int a2@<ecx>, HDEV a3, struct EWNDOBJ *a4, unsigned int a5)
{
  int v6; // esi
  int v7; // eax
  int v8; // eax
  int v9; // edi
  int v10; // eax
  struct SPRITE *v11; // edx
  int v12; // edi
  struct _RECTL *v13; // [esp+0h] [ebp-104h]
  struct _POINTL *v14; // [esp+4h] [ebp-100h]
  _BYTE v15[112]; // [esp+10h] [ebp-F4h] BYREF
  _BYTE v16[72]; // [esp+80h] [ebp-84h] BYREF
  _BYTE v17[12]; // [esp+C8h] [ebp-3Ch] BYREF
  int v18; // [esp+D4h] [ebp-30h] BYREF
  struct SPRITE *v19; // [esp+D8h] [ebp-2Ch] BYREF
  struct _RECTL v20; // [esp+DCh] [ebp-28h] BYREF
  struct _CLIPOBJ v21; // [esp+ECh] [ebp-18h] BYREF

  v19 = 0;
  v18 = a2;
  memset(&v21, 0, 16);
  memset(&v20, 0, sizeof(v20));
  SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v15, (struct PDEVOBJ *)&v18);
  v6 = v18 + 64;
  UNDODESKTOPCOORD::UNDODESKTOPCOORD((UNDODESKTOPCOORD *)v17, (struct EWNDOBJ *)a1, (struct _SPRITESTATE *)(v18 + 64));
  v7 = *(_DWORD *)(a1 + 140);
  if ( a3 == (HDEV)1 )
  {
    v8 = v7 | 0x1000000;
    *(_DWORD *)(a1 + 140) = v8;
    if ( (v8 & 0x2000000) != 0 && bIntersect((const struct _RECTL *)(a1 + 4), (const struct _RECTL *)(v6 + 20), &v20) )
    {
      ENUMAREAS::ENUMAREAS((ENUMAREAS *)v16, (struct _SPRITESTATE *)v6, &v20, 0, 0);
      do
      {
        v9 = ENUMAREAS::bEnum((ENUMAREAS *)v16, &v19, (struct _RECTL *)&v21);
        if ( v19 )
          INVOKEOFFCOPYBITS(
            *(SURFOBJ **)(v6 + 16),
            &gptlZero.x,
            (struct _POINTL *)((char *)v19 + 116),
            *((struct _SURFOBJ **)v19 + 28),
            (struct _POINTL *)a1,
            0,
            &v21,
            (struct _XLATEOBJ *)&v21,
            v13,
            v14);
      }
      while ( v9 );
      ENUMAREAS::~ENUMAREAS((ENUMAREAS *)v16);
    }
    vSpComputeUnlockedRegion(v6);
  }
  else
  {
    *(_DWORD *)(a1 + 140) = v7 & 0xFEFFFFFF;
    vSpComputeUnlockedRegion(v6);
    if ( (*(_DWORD *)(a1 + 140) & 0x2000000) != 0
      && bIntersect((const struct _RECTL *)(a1 + 4), (const struct _RECTL *)(v6 + 20), &v20) )
    {
      ENUMAREAS::ENUMAREAS((ENUMAREAS *)v16, (struct _SPRITESTATE *)v6, &v20, 0, 0);
      do
      {
        v10 = ENUMAREAS::bEnum((ENUMAREAS *)v16, &v19, (struct _RECTL *)&v21);
        v11 = v19;
        v12 = v10;
        if ( v19 )
        {
          while ( 1 )
          {
            INVOKEOFFCOPYBITS(
              *((SURFOBJ **)v11 + 28),
              (int *)v11 + 29,
              &gptlZero,
              *(struct _SURFOBJ **)(v6 + 16),
              (struct _POINTL *)a1,
              0,
              &v21,
              (struct _XLATEOBJ *)&v21,
              v13,
              v14);
            if ( !ENUMAREAS::bEnumLayers((ENUMAREAS *)v16, &v19) )
              break;
            v11 = v19;
          }
        }
      }
      while ( v12 );
      vSpRedrawArea((struct _SPRITESTATE *)1, v13, (int)v14);
      ENUMAREAS::~ENUMAREAS((ENUMAREAS *)v16);
    }
  }
  UNDODESKTOPCOORD::~UNDODESKTOPCOORD((UNDODESKTOPCOORD *)v17);
  SPRITEDDIACCESS::~SPRITEDDIACCESS((SPRITEDDIACCESS *)v15);
}
