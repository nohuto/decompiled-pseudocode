/*
 * XREFs of ?vSpRedrawAreaExMirror@@YGXPAU_SPRITESTATE@@PAU_RECTL@@@Z @ 0x1E1FC9
 * Callers:
 *     ?bSpBltFromScreen@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@PAU_POINTL@@4PAU_BRUSHOBJ@@4K@Z @ 0xE52D4 (-bSpBltFromScreen@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@PAU_POINTL@@4PAU_BRUS.c)
 * Callees:
 *     ??0PUSHLOCKEX@@QAE@PAU_EX_PUSH_LOCK@@@Z @ 0x23BEC (--0PUSHLOCKEX@@QAE@PAU_EX_PUSH_LOCK@@@Z.c)
 *     ?bEmpty@ERECTL@@QBEHXZ @ 0x4F396 (-bEmpty@ERECTL@@QBEHXZ.c)
 *     ?INVOKEOFFCOPYBITS@@YGHPAU_POINTL@@PAU_SURFOBJ@@01PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@0@Z @ 0x92B62 (-INVOKEOFFCOPYBITS@@YGHPAU_POINTL@@PAU_SURFOBJ@@01PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@0@Z.c)
 *     ?vSpDeleteSurface@@YGXPAU_SURFOBJ@@@Z @ 0x9EDCC (-vSpDeleteSurface@@YGXPAU_SURFOBJ@@@Z.c)
 *     ??1ENUMAREAS@@QAE@XZ @ 0xE5C28 (--1ENUMAREAS@@QAE@XZ.c)
 *     ?bEnum@ENUMAREAS@@QAEHPAPAVSPRITE@@PAU_RECTL@@@Z @ 0xE5C5A (-bEnum@ENUMAREAS@@QAEHPAPAVSPRITE@@PAU_RECTL@@@Z.c)
 *     ??0ENUMAREAS@@QAE@PAU_SPRITESTATE@@PAU_RECTL@@K1@Z @ 0xE5CD8 (--0ENUMAREAS@@QAE@PAU_SPRITESTATE@@PAU_RECTL@@K1@Z.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ?bAdvanceToTopMostOpaqueLayer@ENUMAREAS@@QAEHPAPAVSPRITE@@@Z @ 0x1DCD53 (-bAdvanceToTopMostOpaqueLayer@ENUMAREAS@@QAEHPAPAVSPRITE@@@Z.c)
 *     ?bConcurrent@@YGHPAU_SPRITESTATE@@@Z @ 0x1DCDEA (-bConcurrent@@YGHPAU_SPRITESTATE@@@Z.c)
 *     ?bEnumLayers@ENUMAREAS@@QAEHPAPAVSPRITE@@@Z @ 0x1DCE2E (-bEnumLayers@ENUMAREAS@@QAEHPAPAVSPRITE@@@Z.c)
 *     ?psoSpGetComposite@@YGPAU_SURFOBJ@@PAU_SPRITESTATE@@PAU_RECTL@@PAK@Z @ 0x1DFA3C (-psoSpGetComposite@@YGPAU_SURFOBJ@@PAU_SPRITESTATE@@PAU_RECTL@@PAK@Z.c)
 *     ?vSetup@ECLIPOBJTMPIFNEEDED@@QAEXHPAVREGION@@AAVERECTL@@H@Z @ 0x1DFC7A (-vSetup@ECLIPOBJTMPIFNEEDED@@QAEXHPAVREGION@@AAVERECTL@@H@Z.c)
 *     ?vSpComposite@@YGXPAVSPRITE@@PAU_POINTL@@PAU_SURFOBJ@@PAU_RECTL@@@Z @ 0x1E0318 (-vSpComposite@@YGXPAVSPRITE@@PAU_POINTL@@PAU_SURFOBJ@@PAU_RECTL@@@Z.c)
 *     ?vSpWriteToExMirror@@YGXPAU_SPRITESTATE@@PAU_POINTL@@PAU_SURFOBJ@@PAU_RECTL@@@Z @ 0x1E3184 (-vSpWriteToExMirror@@YGXPAU_SPRITESTATE@@PAU_POINTL@@PAU_SURFOBJ@@PAU_RECTL@@@Z.c)
 */

void __fastcall vSpRedrawAreaExMirror(int *a1, struct _RECTL *a2)
{
  int v2; // ebx
  int v3; // esi
  int v4; // eax
  int v5; // eax
  int v6; // ecx
  SURFOBJ *v7; // eax
  LONG *p_lDelta; // edi
  SURFOBJ *v9; // edx
  HSURF hsurf; // ecx
  ENUMAREAS *v11; // ecx
  struct _RECTL *v12; // esi
  struct _SPRITESTATE *Composite; // eax
  int v14; // edi
  int v15; // ecx
  int v16; // edx
  int v17; // ecx
  char *v18; // esi
  struct SPRITE *v19; // ebx
  struct REGION *v20; // [esp-Ch] [ebp-11Ch]
  struct _SPRITESTATE *v22; // [esp-8h] [ebp-118h]
  struct _RECTL *v23; // [esp+0h] [ebp-110h]
  struct _RECTL *v24; // [esp+0h] [ebp-110h]
  struct _SURFOBJ *v25; // [esp+0h] [ebp-110h]
  struct _POINTL *v26; // [esp+4h] [ebp-10Ch]
  struct _POINTL *v27; // [esp+4h] [ebp-10Ch]
  struct _RECTL *v28; // [esp+4h] [ebp-10Ch]
  _BYTE v29[72]; // [esp+10h] [ebp-100h] BYREF
  int v30; // [esp+58h] [ebp-B8h] BYREF
  int *v31; // [esp+5Ch] [ebp-B4h]
  int v32; // [esp+60h] [ebp-B0h] BYREF
  int v33; // [esp+64h] [ebp-ACh]
  ULONG StartingIndex; // [esp+68h] [ebp-A8h] BYREF
  struct _SPRITESTATE *v35; // [esp+6Ch] [ebp-A4h]
  struct _RECTL *v36; // [esp+70h] [ebp-A0h]
  struct SPRITE *v37; // [esp+74h] [ebp-9Ch] BYREF
  struct _POINTL v38; // [esp+78h] [ebp-98h] BYREF
  REGION *v39; // [esp+A8h] [ebp-68h]
  int v40; // [esp+BCh] [ebp-54h]
  int v41; // [esp+C0h] [ebp-50h]
  int v42; // [esp+E8h] [ebp-28h]
  int v43; // [esp+F0h] [ebp-20h]
  int v44; // [esp+F4h] [ebp-1Ch]
  int v45; // [esp+FCh] [ebp-14h] BYREF
  int v46; // [esp+100h] [ebp-10h]
  int v47; // [esp+104h] [ebp-Ch]
  int v48; // [esp+108h] [ebp-8h]

  v36 = a2;
  v2 = (int)a1;
  v45 = 0;
  v3 = 0;
  v32 = 0;
  v33 = 0;
  v31 = a1;
  v46 = 0;
  v37 = 0;
  v47 = 0;
  v48 = 0;
  if ( (*(_DWORD *)(*a1 + 24) & 0x400) == 0 )
  {
    v20 = (struct REGION *)a1[95];
    v40 = 0;
    v41 = 0;
    v42 = 1;
    v43 = 0;
    v39 = 0;
    v44 = 0;
    v4 = bConcurrent(a1);
    ECLIPOBJTMPIFNEEDED::vSetup((ECLIPOBJTMPIFNEEDED *)&v38, v4, v20, (struct ERECTL *)a2, 0);
    if ( !ERECTL::bEmpty((ERECTL *)&v38.y) )
    {
      v5 = *(_DWORD *)(v2 + 16);
      if ( v5 )
      {
        v6 = *(_DWORD *)(v5 + 56);
        if ( (v6 & 0x80004000) != 0 && (v6 & 0x200) == 0 )
        {
          v3 = v5 - 16;
          GreLockDisplayDevice(*(_DWORD *)(v5 - 16 + 28));
        }
      }
      v7 = *(SURFOBJ **)(v2 + 820);
      p_lDelta = 0;
      v9 = v7;
      if ( v7 )
      {
        hsurf = v7[1].hsurf;
        if ( ((unsigned int)hsurf & 0x80004000) != 0 && ((unsigned __int16)hsurf & 0x200) == 0 )
        {
          p_lDelta = &v7[-1].lDelta;
          GreLockDisplayDevice(v7->hdev);
          v9 = *(SURFOBJ **)(v2 + 820);
        }
      }
      INVOKEOFFCOPYBITS(
        v9,
        &gptlZero.x,
        &gptlZero,
        *(struct _SURFOBJ **)(v2 + 16),
        &v38,
        0,
        (struct _CLIPOBJ *)(v2 + 20),
        (struct _XLATEOBJ *)&gptlZero,
        v23,
        v26);
      if ( p_lDelta )
        GreUnlockDisplayDevice(p_lDelta[7]);
      if ( v3 )
        GreUnlockDisplayDevice(*(_DWORD *)(v3 + 28));
    }
    ENUMAREAS::ENUMAREAS((ENUMAREAS *)v29, (struct _SPRITESTATE *)v2, v36, 0, 0);
    do
    {
      v12 = (struct _RECTL *)ENUMAREAS::bEnum((ENUMAREAS *)v29, &v37, (struct _RECTL *)&v45);
      v36 = v12;
      if ( v37 && !ENUMAREAS::bAdvanceToTopMostOpaqueLayer(v11, &v37) )
      {
        StartingIndex = 0;
        Composite = (struct _SPRITESTATE *)psoSpGetComposite(
                                             (unsigned int)&v45,
                                             v2,
                                             (struct _SPRITESTATE *)&StartingIndex,
                                             v23,
                                             (unsigned int *)v26);
        v35 = Composite;
        if ( !Composite )
          break;
        v14 = 0;
        v32 = -v45;
        v33 = -v46;
        v15 = *((_DWORD *)v37 + 28);
        if ( v15 )
        {
          v16 = *(_DWORD *)(v15 + 56);
          if ( (v16 & 0x80004000) != 0 && (v16 & 0x200) == 0 )
          {
            v14 = v15 - 16;
            GreLockDisplayDevice(*(_DWORD *)(v15 - 16 + 28));
            Composite = v35;
          }
        }
        v17 = *((_DWORD *)Composite + 14);
        v18 = 0;
        if ( (v17 & 0x80004000) != 0 && (v17 & 0x200) == 0 )
        {
          v18 = (char *)Composite - 16;
          GreLockDisplayDevice(*((_DWORD *)Composite + 3));
        }
        INVOKEOFFCOPYBITS(
          (SURFOBJ *)v35,
          &v32,
          (struct _POINTL *)((char *)v37 + 116),
          *((struct _SURFOBJ **)v37 + 28),
          0,
          0,
          (struct _CLIPOBJ *)&v45,
          (struct _XLATEOBJ *)&v45,
          v24,
          v27);
        if ( v18 )
          GreUnlockDisplayDevice(*((_DWORD *)v18 + 7));
        if ( v14 )
          GreUnlockDisplayDevice(*(_DWORD *)(v14 + 28));
        v19 = v35;
        do
        {
          if ( (*(_DWORD *)v37 & 0x100) == 0 )
            vSpComposite(&v32, (int)v37, v19, (struct _POINTL *)&v45, v25, v28);
        }
        while ( ENUMAREAS::bEnumLayers((ENUMAREAS *)v29, &v37) );
        v22 = v19;
        v2 = (int)v31;
        vSpWriteToExMirror(v22, (struct _POINTL *)&v45, v25, v28);
        if ( StartingIndex == -1 )
        {
          vSpDeleteSurface((SURFOBJ *)v35);
        }
        else
        {
          PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)&v30, (struct _EX_PUSH_LOCK *)(v2 + 376));
          RtlClearBits((PRTL_BITMAP)(v2 + 360), StartingIndex, 1u);
          if ( v30 )
          {
            ExReleasePushLockExclusiveEx(v30, 0);
            KeLeaveCriticalRegion();
          }
        }
        v12 = v36;
      }
    }
    while ( v12 );
    ENUMAREAS::~ENUMAREAS((ENUMAREAS *)v29);
    if ( v44 )
      REGION::vDeleteREGION(v39);
  }
}
