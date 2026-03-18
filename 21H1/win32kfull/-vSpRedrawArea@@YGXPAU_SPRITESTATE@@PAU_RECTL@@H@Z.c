/*
 * XREFs of ?vSpRedrawArea@@YGXPAU_SPRITESTATE@@PAU_RECTL@@H@Z @ 0x1E1DFF
 * Callers:
 *     ?vSpRedrawSpriteOverlapPresent@@YGXPAUHDEV__@@@Z @ 0x3046E (-vSpRedrawSpriteOverlapPresent@@YGXPAUHDEV__@@@Z.c)
 *     ?bEnum@ENUMUNDERLAYS@@QAEHPAPAU_SURFOBJ@@PAU_POINTL@@PAPAU_CLIPOBJ@@@Z @ 0x66A00 (-bEnum@ENUMUNDERLAYS@@QAEHPAPAU_SURFOBJ@@PAU_POINTL@@PAPAU_CLIPOBJ@@@Z.c)
 *     ?bSpUpdateSprite@@YGHPAVSPRITE@@PAUHDC__@@PAU_POINTL@@PAUtagSIZE@@12KPAU_BLENDFUNCTION@@KPAU_RECTL@@@Z @ 0x9F6DC (-bSpUpdateSprite@@YGHPAVSPRITE@@PAUHDC__@@PAU_POINTL@@PAUtagSIZE@@12KPAU_BLENDFUNCTION@@KPAU_REC.c)
 *     ?bSpUpdatePosition@@YGHPAVSPRITE@@PAU_POINTL@@HH@Z @ 0xA0A28 (-bSpUpdatePosition@@YGHPAVSPRITE@@PAU_POINTL@@HH@Z.c)
 *     ?bSpBltScreenToScreen@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@PAU_POINTL@@4PAU_BRUSHOBJ@@4K@Z @ 0x1DD39B (-bSpBltScreenToScreen@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@PAU_POINTL@@4PAU_.c)
 *     ?vSpDeviceControlSprites@@YGXPAUHDEV__@@PAVEWNDOBJ@@K@Z @ 0x1E1301 (-vSpDeviceControlSprites@@YGXPAUHDEV__@@PAVEWNDOBJ@@K@Z.c)
 *     _vSpUnTearDownSprites@12 @ 0x1E3F3E (_vSpUnTearDownSprites@12.c)
 * Callees:
 *     ??0PUSHLOCKEX@@QAE@PAU_EX_PUSH_LOCK@@@Z @ 0x23BEC (--0PUSHLOCKEX@@QAE@PAU_EX_PUSH_LOCK@@@Z.c)
 *     ?INVOKEOFFCOPYBITS@@YGHPAU_POINTL@@PAU_SURFOBJ@@01PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@0@Z @ 0x92B62 (-INVOKEOFFCOPYBITS@@YGHPAU_POINTL@@PAU_SURFOBJ@@01PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@0@Z.c)
 *     ?vSpDeleteSurface@@YGXPAU_SURFOBJ@@@Z @ 0x9EDCC (-vSpDeleteSurface@@YGXPAU_SURFOBJ@@@Z.c)
 *     ??1ENUMAREAS@@QAE@XZ @ 0xE5C28 (--1ENUMAREAS@@QAE@XZ.c)
 *     ?bEnum@ENUMAREAS@@QAEHPAPAVSPRITE@@PAU_RECTL@@@Z @ 0xE5C5A (-bEnum@ENUMAREAS@@QAEHPAPAVSPRITE@@PAU_RECTL@@@Z.c)
 *     ??0ENUMAREAS@@QAE@PAU_SPRITESTATE@@PAU_RECTL@@K1@Z @ 0xE5CD8 (--0ENUMAREAS@@QAE@PAU_SPRITESTATE@@PAU_RECTL@@K1@Z.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ?bAdvanceToTopMostOpaqueLayer@ENUMAREAS@@QAEHPAPAVSPRITE@@@Z @ 0x1DCD53 (-bAdvanceToTopMostOpaqueLayer@ENUMAREAS@@QAEHPAPAVSPRITE@@@Z.c)
 *     ?bEnumLayers@ENUMAREAS@@QAEHPAPAVSPRITE@@@Z @ 0x1DCE2E (-bEnumLayers@ENUMAREAS@@QAEHPAPAVSPRITE@@@Z.c)
 *     ?psoSpGetComposite@@YGPAU_SURFOBJ@@PAU_SPRITESTATE@@PAU_RECTL@@PAK@Z @ 0x1DFA3C (-psoSpGetComposite@@YGPAU_SURFOBJ@@PAU_SPRITESTATE@@PAU_RECTL@@PAK@Z.c)
 *     ?vSpComposite@@YGXPAVSPRITE@@PAU_POINTL@@PAU_SURFOBJ@@PAU_RECTL@@@Z @ 0x1E0318 (-vSpComposite@@YGXPAVSPRITE@@PAU_POINTL@@PAU_SURFOBJ@@PAU_RECTL@@@Z.c)
 *     ?vSpWriteToScreen@@YGXPAU_SPRITESTATE@@PAU_POINTL@@PAU_SURFOBJ@@PAU_RECTL@@@Z @ 0x1E3239 (-vSpWriteToScreen@@YGXPAU_SPRITESTATE@@PAU_POINTL@@PAU_SURFOBJ@@PAU_RECTL@@@Z.c)
 */

void __userpurge vSpRedrawArea(
        struct _RECTL *a1@<edx>,
        struct _SPRITESTATE *a2@<ecx>,
        struct _SPRITESTATE *a3,
        struct _RECTL *a4,
        int a5)
{
  int v5; // esi
  ENUMAREAS *v6; // ecx
  int v7; // ebx
  struct _SURFOBJ *Composite; // ebx
  int v9; // edi
  int v10; // eax
  int v11; // ecx
  HSURF hsurf; // eax
  LONG *p_lDelta; // esi
  struct _RECTL *v14; // [esp+0h] [ebp-8Ch]
  struct _RECTL *v15; // [esp+0h] [ebp-8Ch]
  struct _SURFOBJ *v16; // [esp+0h] [ebp-8Ch]
  unsigned int *v17; // [esp+4h] [ebp-88h]
  struct _POINTL *v18; // [esp+4h] [ebp-88h]
  struct _RECTL *v19; // [esp+4h] [ebp-88h]
  _BYTE v20[72]; // [esp+10h] [ebp-7Ch] BYREF
  int v21; // [esp+58h] [ebp-34h] BYREF
  struct _SPRITESTATE *v22; // [esp+5Ch] [ebp-30h]
  ULONG v23; // [esp+60h] [ebp-2Ch] BYREF
  int v24; // [esp+64h] [ebp-28h]
  int v25; // [esp+68h] [ebp-24h]
  ULONG StartingIndex; // [esp+6Ch] [ebp-20h] BYREF
  struct SPRITE *v27; // [esp+70h] [ebp-1Ch] BYREF
  struct _CLIPOBJ v28; // [esp+74h] [ebp-18h] BYREF

  memset(&v28, 0, 16);
  v5 = (int)a2;
  v22 = a2;
  v23 = 0;
  v24 = 0;
  v27 = 0;
  if ( (*(_DWORD *)(*(_DWORD *)a2 + 24) & 0x400) == 0 )
  {
    ENUMAREAS::ENUMAREAS((ENUMAREAS *)v20, a2, a1, 0, 0);
    do
    {
      v7 = ENUMAREAS::bEnum((ENUMAREAS *)v20, &v27, (struct _RECTL *)&v28);
      v25 = v7;
      if ( v27 && (!ENUMAREAS::bAdvanceToTopMostOpaqueLayer(v6, &v27) || a3) )
      {
        StartingIndex = 0;
        Composite = psoSpGetComposite((unsigned int)&v28, v5, (struct _SPRITESTATE *)&StartingIndex, v14, v17);
        if ( !Composite )
          break;
        v9 = 0;
        v23 = -v28.iUniq;
        v24 = -v28.rclBounds.left;
        v10 = *((_DWORD *)v27 + 28);
        if ( v10 )
        {
          v11 = *(_DWORD *)(v10 + 56);
          if ( (v11 & 0x80004000) != 0 && (v11 & 0x200) == 0 )
          {
            v9 = v10 - 16;
            GreLockDisplayDevice(*(_DWORD *)(v10 - 16 + 28));
          }
        }
        hsurf = Composite[1].hsurf;
        p_lDelta = 0;
        if ( ((unsigned int)hsurf & 0x80004000) != 0 && ((unsigned __int16)hsurf & 0x200) == 0 )
        {
          p_lDelta = &Composite[-1].lDelta;
          GreLockDisplayDevice(Composite->hdev);
        }
        INVOKEOFFCOPYBITS(
          Composite,
          (int *)&v23,
          (struct _POINTL *)((char *)v27 + 116),
          *((struct _SURFOBJ **)v27 + 28),
          0,
          0,
          &v28,
          (struct _XLATEOBJ *)&v28,
          v15,
          v18);
        if ( p_lDelta )
          GreUnlockDisplayDevice(p_lDelta[7]);
        if ( v9 )
          GreUnlockDisplayDevice(*(_DWORD *)(v9 + 28));
        do
          vSpComposite(&v23, (int)v27, (struct SPRITE *)Composite, (struct _POINTL *)&v28, v16, v19);
        while ( ENUMAREAS::bEnumLayers((ENUMAREAS *)v20, &v27) );
        v5 = (int)v22;
        vSpWriteToScreen((struct _SPRITESTATE *)Composite, (struct _POINTL *)&v28, v16, v19);
        if ( StartingIndex == -1 )
        {
          vSpDeleteSurface(Composite);
        }
        else
        {
          PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)&v21, (struct _EX_PUSH_LOCK *)(v5 + 376));
          RtlClearBits((PRTL_BITMAP)(v5 + 360), StartingIndex, 1u);
          if ( v21 )
          {
            ExReleasePushLockExclusiveEx(v21, 0);
            KeLeaveCriticalRegion();
          }
        }
        v7 = v25;
      }
    }
    while ( v7 );
    ENUMAREAS::~ENUMAREAS((ENUMAREAS *)v20);
  }
}
