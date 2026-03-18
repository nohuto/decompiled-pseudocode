/*
 * XREFs of ?bBitBlt@BLTRECORD@@QAEHAAVDCOBJ@@0K@Z @ 0x79928
 * Callers:
 *     _GreStretchBltInternal@52 @ 0x78C6A (_GreStretchBltInternal@52.c)
 *     _GreMaskBlt@52 @ 0x7A502 (_GreMaskBlt@52.c)
 *     ?bStretch@BLTRECORD@@QAEHAAVDCOBJ@@0KE@Z @ 0x7AB9E (-bStretch@BLTRECORD@@QAEHAAVDCOBJ@@0KE@Z.c)
 *     ?GreRectBlt@@YGHAAVDCOBJ@@PAVERECTL@@@Z @ 0xBB65A (-GreRectBlt@@YGHAAVDCOBJ@@PAVERECTL@@@Z.c)
 *     ?bRotate@BLTRECORD@@QAEHAAVDCOBJ@@0KE@Z @ 0x1EC095 (-bRotate@BLTRECORD@@QAEHAAVDCOBJ@@0KE@Z.c)
 *     _GrePlgBlt@44 @ 0x1EDD56 (_GrePlgBlt@44.c)
 *     ?bBitBlt@BLTRECORD@@QAEHAAVDCOBJ@@0KJJ@Z @ 0x1EF8C8 (-bBitBlt@BLTRECORD@@QAEHAAVDCOBJ@@0KJJ@Z.c)
 * Callees:
 *     ?vOrder@ERECTL@@QAEXXZ @ 0x4E19C (-vOrder@ERECTL@@QAEXXZ.c)
 *     ?bEmpty@ERECTL@@QBEHXZ @ 0x4F396 (-bEmpty@ERECTL@@QBEHXZ.c)
 *     ??XERECTL@@QAEAAV0@ABU_RECTL@@@Z @ 0x4F46A (--XERECTL@@QAEAAV0@ABU_RECTL@@@Z.c)
 *     _EngCopyBits@24 @ 0x519F0 (_EngCopyBits@24.c)
 *     ?prgnVisSnap@DC@@QBEPAVREGION@@XZ @ 0x53684 (-prgnVisSnap@DC@@QBEPAVREGION@@XZ.c)
 *     ?prgnRao@DC@@QBEPAVREGION@@XZ @ 0x538E8 (-prgnRao@DC@@QBEPAVREGION@@XZ.c)
 *     ?bOffsetAdd@ERECTL@@QAEHABU_POINTL@@H@Z @ 0x53E36 (-bOffsetAdd@ERECTL@@QAEHABU_POINTL@@H@Z.c)
 *     _EngBitBlt@44 @ 0x53EF2 (_EngBitBlt@44.c)
 *     ?vAccumulateTight@XDCOBJ@@QAEXPAVECLIPOBJ@@AAVERECTL@@@Z @ 0x56734 (-vAccumulateTight@XDCOBJ@@QAEXPAVECLIPOBJ@@AAVERECTL@@@Z.c)
 *     ?pSurfaceEff@XDCOBJ@@QAEPAVSURFACE@@XZ @ 0x79420 (-pSurfaceEff@XDCOBJ@@QAEPAVSURFACE@@XZ.c)
 *     ?bTightenRao@DC@@QAEHXZ @ 0x7A1A2 (-bTightenRao@DC@@QAEHXZ.c)
 *     ?vAccumulate@XDCOBJ@@QAEXAAVERECTL@@@Z @ 0x7B8B6 (-vAccumulate@XDCOBJ@@QAEXAAVERECTL@@@Z.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

int __thiscall BLTRECORD::bBitBlt(BLTRECORD *this, struct DCOBJ *a2, struct DCOBJ *a3, char a4)
{
  int v5; // ecx
  int v6; // edx
  int v7; // eax
  XDCOBJ *v8; // esi
  BRUSHOBJ *v9; // eax
  int v10; // edx
  BRUSHOBJ *v11; // edx
  char v12; // cl
  ROP4 v13; // edi
  int v14; // ecx
  _DWORD *v15; // eax
  int v16; // esi
  XDCOBJ *v17; // eax
  int v18; // edx
  BRUSHOBJ *v19; // edi
  int v20; // ecx
  DC *v21; // ecx
  struct REGION *v22; // eax
  int v23; // eax
  LONG top; // edi
  bool v25; // zf
  LONG left; // eax
  POINTL *v27; // esi
  XDCOBJ *v28; // edx
  int v29; // edx
  int v31; // ecx
  SURFOBJ *v32; // ecx
  SURFOBJ *v33; // esi
  int v34; // edx
  int v35; // esi
  int v36; // ecx
  int v37; // ecx
  int v38; // ecx
  int v39; // esi
  int v40; // eax
  int v41; // eax
  struct ECLIPOBJ *v42; // ecx
  DC *v43; // ecx
  struct REGION *v44; // eax
  int v45; // edx
  int v46; // esi
  int v47; // eax
  struct ECLIPOBJ *v48; // ecx
  int v49; // eax
  int v50; // ecx
  int v51; // esi
  SURFOBJ *v52; // ecx
  SURFOBJ *v53; // edx
  int v54; // ecx
  int v55; // ecx
  int v56; // ecx
  ROP4 v57; // edx
  int v58; // edx
  int v59; // edx
  int v60; // ecx
  _DWORD *v61; // eax
  XLATEOBJ *v62; // ecx
  BRUSHOBJ *v63; // eax
  int v64; // esi
  XDCOBJ *v65; // eax
  int v66; // edx
  char *v67; // eax
  int v68; // ecx
  DC *v69; // ecx
  struct REGION *v70; // eax
  int v71; // eax
  int v72; // edx
  int v73; // esi
  ROP4 v74; // edi
  int v75; // ecx
  int v76; // eax
  int v77; // edi
  int v78; // esi
  struct ECLIPOBJ *v79; // ecx
  int v80; // eax
  LONG v81; // ecx
  LONG v82; // eax
  LONG v83; // eax
  int v84; // edx
  int v85; // ecx
  SURFOBJ *v86; // ecx
  SURFOBJ *v87; // edx
  SURFOBJ *v88; // esi
  struct SURFACE *v89; // eax
  struct SURFACE *v90; // eax
  BRUSHOBJ *v91; // ecx
  ROP4 v92; // eax
  int v93; // eax
  RECTL v94; // [esp+10h] [ebp-144h] BYREF
  XDCOBJ *v95; // [esp+20h] [ebp-134h]
  XDCOBJ *v96; // [esp+24h] [ebp-130h]
  XLATEOBJ *pxlo; // [esp+28h] [ebp-12Ch]
  BRUSHOBJ *v98; // [esp+2Ch] [ebp-128h]
  BRUSHOBJ *pbo; // [esp+30h] [ebp-124h]
  ROP4 rop4; // [esp+34h] [ebp-120h]
  CLIPOBJ pco; // [esp+38h] [ebp-11Ch] BYREF
  int v102; // [esp+7Ch] [ebp-D8h]
  int v103; // [esp+80h] [ebp-D4h]
  int v104; // [esp+A8h] [ebp-ACh]
  int v105; // [esp+B0h] [ebp-A4h]
  CLIPOBJ v106; // [esp+B8h] [ebp-9Ch] BYREF
  int v107; // [esp+FCh] [ebp-58h]
  int v108; // [esp+100h] [ebp-54h]
  int v109; // [esp+128h] [ebp-2Ch]
  int v110; // [esp+130h] [ebp-24h]
  RECTL rclBounds; // [esp+13Ch] [ebp-18h] BYREF
  unsigned int v112; // [esp+164h] [ebp+10h]

  v95 = a3;
  v96 = a2;
  ERECTL::vOrder((BLTRECORD *)((char *)this + 100));
  if ( !DC::bTightenRao(*(DC **)a2) )
    return 0;
  v5 = *(_DWORD *)a2;
  if ( !*(_DWORD *)(*(_DWORD *)a2 + 504) )
    return 1;
  v112 = a4 & 0xD4;
  if ( v112 )
  {
    if ( !*(_DWORD *)(*(_DWORD *)v95 + 504) )
      return 1;
  }
  if ( (*(_BYTE *)(v5 + 24) & 0xE0) != 0 )
  {
    XDCOBJ::vAccumulate(a2, (BLTRECORD *)((char *)this + 100));
    v5 = *(_DWORD *)a2;
  }
  ERECTL::bOffsetAdd(
    (BLTRECORD *)((char *)this + 100),
    (const struct _POINTL *)(v5 + 1048 + 8 * (*(_DWORD *)(v5 + 28) & 1)),
    0);
  v98 = *(BRUSHOBJ **)(*((_DWORD *)this + 10) + 28);
  if ( v112 )
  {
    v6 = *((_DWORD *)this + 33);
    if ( v6 >= *((_DWORD *)this + 31) )
      v6 = *((_DWORD *)this + 31);
    v7 = *((_DWORD *)this + 34);
    *((_DWORD *)this + 33) = v6;
    if ( v7 >= *((_DWORD *)this + 32) )
      v7 = *((_DWORD *)this + 32);
    v8 = v96;
    *((_DWORD *)this + 34) = v7;
    v9 = v98;
    if ( *((_DWORD *)this + 31) > v6 )
    {
      v58 = *((_DWORD *)this + 35);
      *((_DWORD *)this + 35) = *((_DWORD *)this + 37);
      *((_DWORD *)this + 37) = v58;
    }
    if ( *((_DWORD *)this + 32) > *((_DWORD *)this + 34) )
    {
      v59 = *((_DWORD *)this + 36);
      *((_DWORD *)this + 36) = *((_DWORD *)this + 38);
      *((_DWORD *)this + 38) = v59;
    }
    v10 = *(_DWORD *)v8;
    pbo = (BRUSHOBJ *)v10;
    rop4 = *(_DWORD *)v95;
    if ( *(_DWORD *)(rop4 + 504) != *(_DWORD *)(v10 + 504) )
    {
      pxlo = *(XLATEOBJ **)(v10 + 24);
      if ( ((unsigned __int16)pxlo & 0x200) != 0 && v9 && ((unsigned int)&loc_20000 & v9[2].iSolidColor) != 0 )
      {
        v12 = 1;
        v11 = 0;
      }
      else
      {
        v11 = 0;
        v12 = 0;
      }
      v13 = rop4;
      if ( pbo[3].iSolidColor != *(_DWORD *)(rop4 + 36)
        && ((unsigned __int16)pxlo & 0x4000) == 0
        && (*(_DWORD *)(rop4 + 24) & 0x4000) == 0
        && !v12 )
      {
        v89 = XDCOBJ::pSurfaceEff(v8);
        if ( *((_WORD *)v89 + 32) != (_WORD)v11 || *((BRUSHOBJ **)v89 + 4) != v11 )
        {
          v90 = XDCOBJ::pSurfaceEff(v95);
          if ( *((_WORD *)v90 + 32) != (_WORD)v11 || *((BRUSHOBJ **)v90 + 4) != v11 )
            goto LABEL_71;
        }
      }
      v14 = *((_DWORD *)this + 11);
      pbo = v11;
      rop4 = (ROP4)v11;
      v15 = *(_DWORD **)(v14 + 28);
      if ( v15 && v14 == v15[455] && ((unsigned int)&loc_20000 & v15[6]) != 0 )
      {
        v91 = (BRUSHOBJ *)v15[459];
        v92 = v15[460];
        pbo = v91;
        rop4 = v92;
      }
      v16 = *((_DWORD *)this + 25) - *(_DWORD *)(v13 + 8 * (*(_DWORD *)(v13 + 28) & 1) + 1048) - *((_DWORD *)this + 33);
      v17 = v95;
      *((_DWORD *)this + 31) = v16;
      v18 = *((_DWORD *)this + 26)
          - *(_DWORD *)(*(_DWORD *)v17 + 8 * (*(_DWORD *)(*(_DWORD *)v17 + 28) & 1) + 1052)
          - *((_DWORD *)this + 34);
      v19 = pbo;
      *((_DWORD *)this + 32) = v18;
      v20 = *((_DWORD *)this + 11);
      rclBounds.left = (LONG)v19 + v16;
      rclBounds.top = v18 + rop4;
      rclBounds.right = (LONG)v19 + *(_DWORD *)(v20 + 32) + v16;
      rclBounds.bottom = v18 + rop4 + *(_DWORD *)(v20 + 36);
      ERECTL::operator*=(&rclBounds.left, (int *)this + 25);
      if ( DC::prgnRao(*(DC **)v96) )
        v22 = DC::prgnRao(v21);
      else
        v22 = DC::prgnVisSnap(v21);
      v104 = 1;
      v102 = 0;
      v103 = 0;
      v105 = 0;
      XCLIPOBJ::vSetup((XCLIPOBJ *)&pco, v22, (struct ERECTL *)&rclBounds, 0);
      rclBounds = pco.rclBounds;
      v23 = ERECTL::bEmpty((ERECTL *)&rclBounds);
      if ( !v23 )
      {
        if ( (*((_DWORD *)this + 42) & 0x10000) != 0 )
          v23 = *((_DWORD *)this + 12);
        top = pco.rclBounds.top;
        v25 = v23 == 0;
        left = pco.rclBounds.left;
        if ( v25 )
          goto LABEL_28;
        v34 = *((_DWORD *)this + 35);
        if ( v34 >= 0 )
        {
          v35 = *((_DWORD *)this + 36);
          if ( v35 >= 0 )
          {
            v36 = *((_DWORD *)this + 27);
            rop4 = *((_DWORD *)this + 12);
            v37 = v36 - *((_DWORD *)this + 25);
            pbo = (BRUSHOBJ *)*((_DWORD *)this + 25);
            if ( *(_DWORD *)(rop4 + 32) - v34 >= v37 )
            {
              v38 = *((_DWORD *)this + 28) - *((_DWORD *)this + 26);
              pxlo = (XLATEOBJ *)*((_DWORD *)this + 26);
              if ( *(_DWORD *)(rop4 + 36) - v35 >= v38 )
              {
                left = pco.rclBounds.left;
                v39 = pco.rclBounds.top + v35 - (_DWORD)pxlo;
                *((_DWORD *)this + 35) = pco.rclBounds.left + v34 - (_DWORD)pbo;
                *((_DWORD *)this + 36) = v39;
LABEL_28:
                v27 = (POINTL *)((char *)this + 132);
                v28 = v96;
                *((_DWORD *)this + 33) = left - *((_DWORD *)this + 31);
                *((_DWORD *)this + 34) = top - *((_DWORD *)this + 32);
                if ( (*(_BYTE *)(*(_DWORD *)v28 + 24) & 0xE0) != 0 )
                {
                  v42 = (struct ECLIPOBJ *)*((unsigned __int8 *)this + 165);
                  if ( ((gajRop3[(_DWORD)v42] | (unsigned __int8)gajRop3[*((unsigned __int8 *)this + 164)]) & 0xE8) == 0
                    || (v93 = *((_DWORD *)this + 14)) != 0 && (*(_DWORD *)(v93 + 76) & 0x100) == 0 )
                  {
                    v94 = pco.rclBounds;
                    XDCOBJ::vAccumulateTight(v28, v42, &v94.left);
                    v27 = (POINTL *)((char *)this + 132);
                  }
                }
                if ( (*(_BYTE *)(*(_DWORD *)v95 + 24) & 1) != 0 )
                {
                  v40 = *((_DWORD *)this + 31);
                  rclBounds.left -= v40;
                  rclBounds.right -= v40;
                  v41 = *((_DWORD *)this + 32);
                  rclBounds.top -= v41;
                  rclBounds.bottom -= v41;
                }
                ++*(_DWORD *)(*((_DWORD *)this + 10) + 56);
                rop4 = *((_DWORD *)this + 41);
                if ( rop4 == 52428 )
                {
                  v29 = *((_DWORD *)this + 10);
                  if ( (*(_DWORD *)(v29 + 72) & 0x400) != 0 )
                    return ((BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))v98[164].flColorType)(
                             v29 != 0 ? (SURFOBJ *)(v29 + 16) : 0,
                             *((_DWORD *)this + 11) != 0 ? (SURFOBJ *)(*((_DWORD *)this + 11) + 16) : 0,
                             &pco,
                             *((XLATEOBJ **)this + 13),
                             &pco.rclBounds,
                             v27);
                  else
                    return EngCopyBits(
                             v29 != 0 ? (SURFOBJ *)(v29 + 16) : 0,
                             *((_DWORD *)this + 11) != 0 ? (SURFOBJ *)(*((_DWORD *)this + 11) + 16) : 0,
                             &pco,
                             *((XLATEOBJ **)this + 13),
                             &pco.rclBounds,
                             v27);
                }
                else
                {
                  v25 = (*((_DWORD *)this + 42) & 0x10000) == 0;
                  pbo = (BRUSHOBJ *)*((_DWORD *)this + 14);
                  pxlo = (XLATEOBJ *)*((_DWORD *)this + 13);
                  if ( v25 )
                    v31 = 0;
                  else
                    v31 = *((_DWORD *)this + 12);
                  v32 = v31 != 0 ? (SURFOBJ *)(v31 + 16) : 0;
                  v33 = *((_DWORD *)this + 11) != 0 ? (SURFOBJ *)(*((_DWORD *)this + 11) + 16) : 0;
                  v98 = (BRUSHOBJ *)*((_DWORD *)this + 10);
                  if ( (v98[6].iSolidColor & 1) != 0 )
                    return (*((BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))v98[2].pvRbrush
                            + 493))(
                             v98 != 0 ? (SURFOBJ *)&v98[1].pvRbrush : 0,
                             v33,
                             v32,
                             &pco,
                             pxlo,
                             &pco.rclBounds,
                             (POINTL *)((char *)this + 132),
                             (POINTL *)((char *)this + 140),
                             pbo,
                             (POINTL *)((char *)this + 156),
                             rop4);
                  else
                    return EngBitBlt(
                             v98 != 0 ? (SURFOBJ *)&v98[1].pvRbrush : 0,
                             v33,
                             v32,
                             &pco,
                             pxlo,
                             &pco.rclBounds,
                             (POINTL *)((char *)this + 132),
                             (POINTL *)((char *)this + 140),
                             pbo,
                             (POINTL *)((char *)this + 156),
                             rop4);
                }
              }
            }
          }
        }
LABEL_71:
        EngSetLastError(0x57u);
        return 0;
      }
      return 1;
    }
    v60 = *((_DWORD *)this + 11);
    pxlo = 0;
    pbo = 0;
    v61 = *(_DWORD **)(v60 + 28);
    if ( v61 && v60 == v61[455] && ((unsigned int)&loc_20000 & v61[6]) != 0 )
    {
      v62 = (XLATEOBJ *)v61[459];
      v63 = (BRUSHOBJ *)v61[460];
      pxlo = v62;
      pbo = v63;
    }
    v64 = *((_DWORD *)this + 25) - *(_DWORD *)(rop4 + 8 * (*(_DWORD *)(rop4 + 28) & 1) + 1048) - *((_DWORD *)this + 33);
    v65 = v95;
    *((_DWORD *)this + 31) = v64;
    v66 = *((_DWORD *)this + 26)
        - *(_DWORD *)(*(_DWORD *)v65 + 8 * (*(_DWORD *)(*(_DWORD *)v65 + 28) & 1) + 1052)
        - *((_DWORD *)this + 34);
    v67 = (char *)pxlo + v64;
    *((_DWORD *)this + 32) = v66;
    v68 = *((_DWORD *)this + 10);
    rclBounds.left = (LONG)v67;
    rclBounds.top = (LONG)pbo + v66;
    rclBounds.right = (LONG)pxlo + v64 + *(_DWORD *)(v68 + 32);
    rclBounds.bottom = (LONG)pbo + v66 + *(_DWORD *)(v68 + 36);
    ERECTL::operator*=(&rclBounds.left, (int *)this + 25);
    if ( DC::prgnRao(*(DC **)v96) )
      v70 = DC::prgnRao(v69);
    else
      v70 = DC::prgnVisSnap(v69);
    v107 = 0;
    v108 = 0;
    v109 = 1;
    v110 = 0;
    XCLIPOBJ::vSetup((XCLIPOBJ *)&v106, v70, (struct ERECTL *)&rclBounds, 0);
    rclBounds = v106.rclBounds;
    if ( ERECTL::bEmpty((ERECTL *)&rclBounds) )
      return 1;
    if ( (*((_DWORD *)this + 42) & 0x10000) != 0 )
      v71 = *((_DWORD *)this + 12);
    else
      v71 = 0;
    if ( v71 )
    {
      v72 = *((_DWORD *)this + 35);
      if ( v72 < 0 )
        goto LABEL_71;
      v73 = *((_DWORD *)this + 36);
      if ( v73 < 0 )
        goto LABEL_71;
      v74 = *((_DWORD *)this + 12);
      v75 = *((_DWORD *)this + 27) - *((_DWORD *)this + 25);
      pbo = (BRUSHOBJ *)*((_DWORD *)this + 25);
      v76 = *(_DWORD *)(v74 + 32) - v72;
      rop4 = v74;
      if ( v76 < v75 )
        goto LABEL_71;
      v77 = *((_DWORD *)this + 26);
      if ( *(_DWORD *)(rop4 + 36) - v73 < *((_DWORD *)this + 28) - v77 )
        goto LABEL_71;
      v78 = v106.rclBounds.top + v73 - v77;
      *((_DWORD *)this + 35) = v106.rclBounds.left + v72 - (_DWORD)pbo;
      *((_DWORD *)this + 36) = v78;
    }
    if ( (*(_BYTE *)(*(_DWORD *)v96 + 24) & 0xE0) != 0 )
    {
      v79 = (struct ECLIPOBJ *)*((unsigned __int8 *)this + 165);
      if ( ((gajRop3[(_DWORD)v79] | (unsigned __int8)gajRop3[*((unsigned __int8 *)this + 164)]) & 0xE8) == 0
        || (v80 = *((_DWORD *)this + 14)) != 0 && (*(_DWORD *)(v80 + 76) & 0x100) == 0 )
      {
        v94 = v106.rclBounds;
        XDCOBJ::vAccumulateTight(v96, v79, &v94.left);
      }
    }
    v81 = rclBounds.left - *((_DWORD *)this + 31);
    v82 = rclBounds.top;
    *((_DWORD *)this + 33) = v81;
    v83 = v82 - *((_DWORD *)this + 32);
    *((_DWORD *)this + 34) = v83;
    if ( v81 >= rclBounds.left )
      rclBounds.right += v81 - rclBounds.left;
    else
      rclBounds.left = v81;
    if ( v83 >= rclBounds.top )
      rclBounds.bottom += v83 - rclBounds.top;
    else
      rclBounds.top = v83;
    ++*(_DWORD *)(*((_DWORD *)this + 10) + 56);
    rop4 = *((_DWORD *)this + 41);
    if ( rop4 == 52428 )
    {
      v84 = *((_DWORD *)this + 10);
      if ( (*(_DWORD *)(v84 + 72) & 0x400) != 0 )
        return ((int (__stdcall *)(int, int, CLIPOBJ *, _DWORD, RECTL *, char *))v98[164].flColorType)(
                 v84 != 0 ? v84 + 16 : 0,
                 *((_DWORD *)this + 11) != 0 ? *((_DWORD *)this + 11) + 16 : 0,
                 &v106,
                 0,
                 &v106.rclBounds,
                 (char *)this + 132);
      else
        return EngCopyBits(
                 v84 != 0 ? (SURFOBJ *)(v84 + 16) : 0,
                 *((_DWORD *)this + 11) != 0 ? (SURFOBJ *)(*((_DWORD *)this + 11) + 16) : 0,
                 &v106,
                 0,
                 &v106.rclBounds,
                 (POINTL *)((char *)this + 132));
    }
    else
    {
      v25 = (*((_DWORD *)this + 42) & 0x10000) == 0;
      pbo = (BRUSHOBJ *)*((_DWORD *)this + 14);
      if ( v25 )
        v85 = 0;
      else
        v85 = *((_DWORD *)this + 12);
      v86 = v85 != 0 ? (SURFOBJ *)(v85 + 16) : 0;
      v87 = *((_DWORD *)this + 11) != 0 ? (SURFOBJ *)(*((_DWORD *)this + 11) + 16) : 0;
      v98 = (BRUSHOBJ *)*((_DWORD *)this + 10);
      v88 = v98 != 0 ? (SURFOBJ *)&v98[1].pvRbrush : 0;
      if ( (v98[6].iSolidColor & 1) != 0 )
      {
        return (*((int (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, _DWORD, RECTL *, char *, char *, BRUSHOBJ *, char *, ROP4))v98[2].pvRbrush
                + 493))(
                 v88,
                 v87,
                 v86,
                 &v106,
                 0,
                 &v106.rclBounds,
                 (char *)this + 132,
                 (char *)this + 140,
                 pbo,
                 (char *)this + 156,
                 rop4);
      }
      else
      {
        v98 = (BRUSHOBJ *)EngBitBlt;
        return EngBitBlt(
                 v88,
                 v87,
                 v86,
                 &v106,
                 0,
                 &v106.rclBounds,
                 (POINTL *)((char *)this + 132),
                 (POINTL *)((char *)this + 140),
                 pbo,
                 (POINTL *)((char *)this + 156),
                 rop4);
      }
    }
  }
  else
  {
    if ( DC::prgnRao(*(DC **)a2) )
      v44 = DC::prgnRao(v43);
    else
      v44 = DC::prgnVisSnap(v43);
    v107 = 0;
    v108 = 0;
    v109 = 1;
    v110 = 0;
    XCLIPOBJ::vSetup((XCLIPOBJ *)&v106, v44, (BLTRECORD *)((char *)this + 100), 0);
    if ( ERECTL::bEmpty((ERECTL *)&v106.rclBounds) )
      return 1;
    v45 = *((_DWORD *)this + 33);
    if ( v45 < 0 )
    {
      v54 = *((_DWORD *)this + 35);
      *((_DWORD *)this + 35) = *((_DWORD *)this + 37);
      *((_DWORD *)this + 37) = v54;
    }
    v46 = *((_DWORD *)this + 34);
    if ( v46 < 0 )
    {
      v55 = *((_DWORD *)this + 36);
      *((_DWORD *)this + 36) = *((_DWORD *)this + 38);
      *((_DWORD *)this + 38) = v55;
    }
    if ( (*((_DWORD *)this + 42) & 0x10000) != 0 )
      v47 = *((_DWORD *)this + 12);
    else
      v47 = 0;
    if ( v47 )
    {
      v56 = *((_DWORD *)this + 35);
      if ( v56 < 0 )
        goto LABEL_84;
      rop4 = *((_DWORD *)this + 36);
      if ( (rop4 & 0x80000000) != 0 )
        goto LABEL_84;
      if ( v45 < 0 )
        v45 = -v45;
      v98 = (BRUSHOBJ *)*((_DWORD *)this + 12);
      if ( (signed int)(v98[2].flColorType - v56) < v45 )
        goto LABEL_84;
      if ( v46 < 0 )
        v46 = -v46;
      if ( (int)(v98[3].iSolidColor - rop4) < v46 )
      {
LABEL_84:
        EngSetLastError(0x57u);
        return 0;
      }
      v57 = v106.rclBounds.top + rop4 - *((_DWORD *)this + 26);
      *((_DWORD *)this + 35) = v106.rclBounds.left + v56 - *((_DWORD *)this + 25);
      *((_DWORD *)this + 36) = v57;
    }
    if ( (*(_BYTE *)(*(_DWORD *)v96 + 24) & 0xE0) != 0 )
    {
      v48 = (struct ECLIPOBJ *)*((unsigned __int8 *)this + 165);
      if ( ((gajRop3[(_DWORD)v48] | (unsigned __int8)gajRop3[*((unsigned __int8 *)this + 164)]) & 0xE8) == 0
        || (v49 = *((_DWORD *)this + 14)) != 0 && (*(_DWORD *)(v49 + 76) & 0x100) == 0 )
      {
        v94 = v106.rclBounds;
        XDCOBJ::vAccumulateTight(v96, v48, &v94.left);
      }
    }
    ++*(_DWORD *)(*((_DWORD *)this + 10) + 56);
    v25 = (*((_DWORD *)this + 42) & 0x10000) == 0;
    v98 = (BRUSHOBJ *)*((_DWORD *)this + 14);
    if ( v25 )
      v50 = 0;
    else
      v50 = *((_DWORD *)this + 12);
    v51 = *((_DWORD *)this + 10);
    v52 = v50 != 0 ? (SURFOBJ *)(v50 + 16) : 0;
    v53 = v51 != 0 ? (SURFOBJ *)(v51 + 16) : 0;
    if ( (*(_BYTE *)(v51 + 72) & 1) != 0 )
      return (*(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))(*(_DWORD *)(v51 + 28) + 1972))(
               v53,
               0,
               v52,
               &v106,
               0,
               (RECTL *)((char *)this + 100),
               0,
               (POINTL *)((char *)this + 140),
               v98,
               (POINTL *)((char *)this + 156),
               *((_DWORD *)this + 41));
    else
      return EngBitBlt(
               v53,
               0,
               v52,
               &v106,
               0,
               (RECTL *)((char *)this + 100),
               0,
               (POINTL *)((char *)this + 140),
               v98,
               (POINTL *)((char *)this + 156),
               *((_DWORD *)this + 41));
  }
}
