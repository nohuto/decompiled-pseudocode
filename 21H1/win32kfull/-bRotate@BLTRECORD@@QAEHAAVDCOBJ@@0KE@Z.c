/*
 * XREFs of ?bRotate@BLTRECORD@@QAEHAAVDCOBJ@@0KE@Z @ 0x1EC095
 * Callers:
 *     _GreStretchBltInternal@52 @ 0x78C6A (_GreStretchBltInternal@52.c)
 *     _GreMaskBlt@52 @ 0x7A502 (_GreMaskBlt@52.c)
 *     _GrePlgBlt@44 @ 0x1EDD56 (_GrePlgBlt@44.c)
 * Callees:
 *     ?ULongAdd@@YGJKKPAK@Z @ 0x4591A (-ULongAdd@@YGJKKPAK@Z.c)
 *     ?vOrder@ERECTL@@QAEXXZ @ 0x4E19C (-vOrder@ERECTL@@QAEXXZ.c)
 *     ?bEmpty@ERECTL@@QBEHXZ @ 0x4F396 (-bEmpty@ERECTL@@QBEHXZ.c)
 *     ?prgnVisSnap@DC@@QBEPAVREGION@@XZ @ 0x53684 (-prgnVisSnap@DC@@QBEPAVREGION@@XZ.c)
 *     ?prgnRao@DC@@QBEPAVREGION@@XZ @ 0x538E8 (-prgnRao@DC@@QBEPAVREGION@@XZ.c)
 *     ?bOffsetAdd@ERECTL@@QAEHABU_POINTL@@H@Z @ 0x53E36 (-bOffsetAdd@ERECTL@@QAEHABU_POINTL@@H@Z.c)
 *     ?vAccumulateTight@XDCOBJ@@QAEXPAVECLIPOBJ@@AAVERECTL@@@Z @ 0x56734 (-vAccumulateTight@XDCOBJ@@QAEXPAVECLIPOBJ@@AAVERECTL@@@Z.c)
 *     ?pSurfaceEff@XDCOBJ@@QAEPAVSURFACE@@XZ @ 0x79420 (-pSurfaceEff@XDCOBJ@@QAEPAVSURFACE@@XZ.c)
 *     ?bBitBlt@BLTRECORD@@QAEHAAVDCOBJ@@0K@Z @ 0x79928 (-bBitBlt@BLTRECORD@@QAEHAAVDCOBJ@@0K@Z.c)
 *     ?vAccumulate@XDCOBJ@@QAEXAAVERECTL@@@Z @ 0x7B8B6 (-vAccumulate@XDCOBJ@@QAEXAAVERECTL@@@Z.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _UIntMult@12 @ 0x145E74 (_UIntMult@12.c)
 *     ?bCreateRegion@BLTRECORD@@QAEHAAVDCOBJ@@PAU_POINTFIX@@@Z @ 0x1EBFB9 (-bCreateRegion@BLTRECORD@@QAEHAAVDCOBJ@@PAU_POINTFIX@@@Z.c)
 *     ?bRotate@BLTRECORD@@QAEHAAVDCOBJ@@AAVSURFMEM@@1KK@Z @ 0x1EC6D3 (-bRotate@BLTRECORD@@QAEHAAVDCOBJ@@AAVSURFMEM@@1KK@Z.c)
 *     ?bRotate@BLTRECORD@@QAEHAAVSURFMEM@@K@Z @ 0x1EC88D (-bRotate@BLTRECORD@@QAEHAAVSURFMEM@@K@Z.c)
 *     ?pSurfMskOut@BLTRECORD@@QAEPAVSURFACE@@XZ @ 0x1ECA59 (-pSurfMskOut@BLTRECORD@@QAEPAVSURFACE@@XZ.c)
 *     ?vBound@BLTRECORD@@QAEXPAVERECTL@@@Z @ 0x1ECA6C (-vBound@BLTRECORD@@QAEXPAVERECTL@@@Z.c)
 *     ?vExtrema@BLTRECORD@@QAEXXZ @ 0x1ECAD0 (-vExtrema@BLTRECORD@@QAEXXZ.c)
 *     ?vMirror@BLTRECORD@@QAEXPAU_POINTFIX@@@Z @ 0x1ECB43 (-vMirror@BLTRECORD@@QAEXPAU_POINTFIX@@@Z.c)
 *     ?vOffset@BLTRECORD@@QAEXAAVEPOINTL@@@Z @ 0x1ECBC3 (-vOffset@BLTRECORD@@QAEXAAVEPOINTL@@@Z.c)
 *     ?vOrder@BLTRECORD@@QAEXPAVERECTL@@@Z @ 0x1EFC08 (-vOrder@BLTRECORD@@QAEXPAVERECTL@@@Z.c)
 */

int __thiscall BLTRECORD::bRotate(
        BLTRECORD *this,
        struct DCOBJ *a2,
        struct DCOBJ *a3,
        unsigned int a4,
        unsigned __int8 a5)
{
  XDCOBJ *v5; // esi
  int v7; // ecx
  int v8; // edx
  int v10; // esi
  int v11; // eax
  int v12; // ecx
  int v13; // ecx
  struct SURFACE *v14; // eax
  unsigned int v15; // edx
  int v16; // ecx
  int v17; // ecx
  int v18; // edi
  unsigned int v19; // esi
  unsigned int v20; // ecx
  unsigned int v21; // eax
  unsigned int v22; // ecx
  bool v23; // cf
  UINT v24; // eax
  unsigned int v25; // ecx
  __int64 v26; // rax
  unsigned int v27; // esi
  UINT v28; // eax
  UINT v29; // eax
  XDCOBJ *v30; // ecx
  DC *v31; // edi
  XDCOBJ *v32; // esi
  struct SURFACE *v33; // eax
  struct SURFACE *v34; // eax
  int v35; // eax
  int v36; // edi
  int v37; // eax
  SURFOBJ *v38; // edi
  DC *v39; // ecx
  struct REGION *v40; // eax
  struct ECLIPOBJ *v41; // ecx
  int v42; // esi
  DC *v43; // eax
  struct SURFACE *v44; // eax
  unsigned int v45; // [esp+0h] [ebp-E0h]
  UINT v46; // [esp+0h] [ebp-E0h]
  unsigned int v47; // [esp+0h] [ebp-E0h]
  unsigned int *v48; // [esp+4h] [ebp-DCh]
  UINT *v49; // [esp+4h] [ebp-DCh]
  unsigned int *v50; // [esp+4h] [ebp-DCh]
  LONG v51; // [esp+Ch] [ebp-D4h] BYREF
  unsigned int v52; // [esp+10h] [ebp-D0h] BYREF
  int v53; // [esp+14h] [ebp-CCh]
  unsigned int v54; // [esp+18h] [ebp-C8h]
  unsigned int v55; // [esp+1Ch] [ebp-C4h] BYREF
  char v56; // [esp+20h] [ebp-C0h]
  unsigned int v57; // [esp+24h] [ebp-BCh]
  unsigned int v58; // [esp+28h] [ebp-B8h]
  DC *v59; // [esp+2Ch] [ebp-B4h]
  unsigned int v60; // [esp+30h] [ebp-B0h]
  XDCOBJ *v61; // [esp+34h] [ebp-ACh]
  XDCOBJ *v62; // [esp+38h] [ebp-A8h]
  unsigned int v63; // [esp+3Ch] [ebp-A4h] BYREF
  unsigned int v64; // [esp+40h] [ebp-A0h]
  UINT uMultiplicand; // [esp+44h] [ebp-9Ch] BYREF
  char v66; // [esp+48h] [ebp-98h] BYREF
  _BYTE v67[64]; // [esp+4Ch] [ebp-94h] BYREF
  int v68; // [esp+8Ch] [ebp-54h]
  int v69; // [esp+90h] [ebp-50h]
  int v70; // [esp+B8h] [ebp-28h]
  int v71; // [esp+C0h] [ebp-20h]
  _BYTE v72[8]; // [esp+CCh] [ebp-14h] BYREF
  int v73; // [esp+D4h] [ebp-Ch]
  int v74; // [esp+D8h] [ebp-8h]

  v5 = a2;
  v61 = a2;
  v62 = a3;
  BLTRECORD::vExtrema(this);
  if ( (a4 & 0xD4) != 0 )
  {
    BLTRECORD::vOrder(this, (BLTRECORD *)((char *)this + 124));
    ERECTL::vOrder((BLTRECORD *)((char *)this + 140));
    if ( (*(_BYTE *)(*(_DWORD *)(*(_DWORD *)a2 + 1020) + 148) & 1) != 0 )
    {
      v13 = *((_DWORD *)this + 35);
      *((_DWORD *)this + 35) = *((_DWORD *)this + 37);
      *((_DWORD *)this + 37) = v13;
    }
    v14 = BLTRECORD::pSurfMskOut(this);
    v15 = 0;
    if ( v14 )
    {
      if ( *((int *)this + 35) < 0 )
        goto LABEL_9;
      if ( *((int *)this + 36) < 0 )
        goto LABEL_9;
      v16 = *((_DWORD *)this + 12);
      if ( *((_DWORD *)this + 37) > *(_DWORD *)(v16 + 32) || *((_DWORD *)this + 38) > *(_DWORD *)(v16 + 36) )
        goto LABEL_9;
    }
    if ( (*(_BYTE *)(*(_DWORD *)(*(_DWORD *)a2 + 1020) + 148) & 1) != 0 && BLTRECORD::pSurfMskOut(this) )
    {
      v17 = *((_DWORD *)this + 34);
      v18 = *((_DWORD *)this + 12);
      v19 = *((_DWORD *)this + 35);
      uMultiplicand = *((_DWORD *)this + 33) - *((_DWORD *)this + 31);
      v20 = v17 - *((_DWORD *)this + 32);
      v59 = (DC *)*((_DWORD *)this + 32);
      v21 = *((_DWORD *)this + 36);
      v64 = v20;
      v22 = *(_DWORD *)(v18 + 32);
      v23 = v22 < v19;
      v60 = v19;
      v5 = v61;
      v58 = v21;
      v24 = uMultiplicand;
      v63 = v22;
      if ( !v23 )
      {
        v25 = *(_DWORD *)(v18 + 36);
        if ( v25 >= v58 )
        {
          if ( v63 - v60 >= uMultiplicand && v25 - v58 >= v64 )
            goto LABEL_41;
          v24 = uMultiplicand;
        }
        v22 = v63;
      }
      if ( *(_DWORD *)(v18 + 60) != 1 )
        goto LABEL_9;
      if ( *(_WORD *)(v18 + 64) != (_WORD)v15 )
        goto LABEL_9;
      if ( v22 < v24 )
        goto LABEL_9;
      v63 = v15;
      if ( (ULongAdd(7, v60, (int *)&v63, v45, v48) & 0x80000000) != 0 )
        goto LABEL_9;
      v60 = v63 >> 3;
      v26 = *(int *)(v18 + 52);
      uMultiplicand = 0;
      v27 = (HIDWORD(v26) ^ v26) - HIDWORD(v26);
      if ( UIntMult((UINT)&uMultiplicand, v46, v49) < 0 )
        goto LABEL_9;
      if ( (ULongAdd(uMultiplicand, v60, (int *)&uMultiplicand, v47, v50) & 0x80000000) != 0 )
        goto LABEL_9;
      v28 = *(_DWORD *)(v18 + 40);
      if ( uMultiplicand >= v28 )
        goto LABEL_9;
      v29 = (v28 - uMultiplicand) / v27;
      v5 = v61;
      if ( v64 > v29 )
        *((_DWORD *)this + 34) = (char *)v59 + v29;
      v15 = 0;
    }
LABEL_41:
    v30 = v62;
    v31 = *(DC **)v5;
    v64 = *(_DWORD *)v62;
    v32 = v61;
    if ( *((_DWORD *)v31 + 9) == *(_DWORD *)(v64 + 36)
      || (v33 = XDCOBJ::pSurfaceEff(v61), v30 = v62, *((_WORD *)v33 + 32) == (_WORD)v15)
      || (v34 = XDCOBJ::pSurfaceEff(v62), *((_WORD *)v34 + 32) == (_WORD)v15) )
    {
      v35 = *((_DWORD *)this + 41);
      if ( v35 == 52428 || v35 == 43724 )
      {
        if ( *((_DWORD *)v31 + 126) == v15 || *(_DWORD *)(v64 + 504) == v15 )
          return 1;
        BLTRECORD::vBound(this, (struct ERECTL *)v72);
        ++v73;
        ++v74;
        if ( (*((_BYTE *)v31 + 24) & 0xE0) != 0 )
        {
          XDCOBJ::vAccumulate(v61, (struct ERECTL *)v72);
          v31 = *(DC **)v61;
        }
        BLTRECORD::vOffset(this, (DC *)((char *)v31 + 8 * (*((_DWORD *)v31 + 7) & 1) + 1048));
        v38 = 0;
        ERECTL::bOffsetAdd(
          (BLTRECORD *)((char *)this + 124),
          (const struct _POINTL *)(*(_DWORD *)v62 + 1048 + 8 * (*(_DWORD *)(*(_DWORD *)v62 + 28) & 1)),
          0);
        v59 = *(DC **)v61;
        ERECTL::bOffsetAdd((ERECTL *)v72, (const struct _POINTL *)v59 + (*((_DWORD *)v59 + 7) & 1) + 131, 0);
        v40 = DC::prgnRao(v59) ? DC::prgnRao(v39) : DC::prgnVisSnap(v39);
        v68 = 0;
        v69 = 0;
        v70 = 1;
        v71 = 0;
        XCLIPOBJ::vSetup((XCLIPOBJ *)&v66, v40, (struct ERECTL *)v72, 0);
        if ( ERECTL::bEmpty((ERECTL *)v67) )
        {
          return 1;
        }
        else
        {
          if ( (*(_BYTE *)(*(_DWORD *)v61 + 24) & 0xE0) != 0 )
          {
            v51 = *(_DWORD *)v41;
            v52 = *((_DWORD *)v41 + 1);
            v53 = *((_DWORD *)v41 + 2);
            v54 = *((_DWORD *)v41 + 3);
            XDCOBJ::vAccumulateTight(v61, v41, &v51);
            v38 = 0;
          }
          v42 = *(_DWORD *)(*((_DWORD *)this + 10) + 28);
          BLTRECORD::vMirror(this, (struct _POINTFIX *)((char *)this + 68));
          ++*(_DWORD *)(*((_DWORD *)this + 10) + 56);
          v43 = *(DC **)v61;
          v59 = v43;
          if ( *((__int16 *)v43 + 57) >= 0 )
            v64 = (unsigned int)v43 + 112;
          else
            v64 = 0;
          if ( *((_DWORD *)this + 41) != 52428 )
          {
            v44 = BLTRECORD::pSurfMskOut(this);
            if ( v44 )
              v38 = (SURFOBJ *)((char *)v44 + 16);
          }
          v60 = *((_DWORD *)this + 10);
          if ( (*(_BYTE *)(v60 + 72) & 4) != 0 )
            return (*(int (__stdcall **)(unsigned int, int, SURFOBJ *, char *, _DWORD, unsigned int, char *, char *, char *, char *, _DWORD))(v42 + 2180))(
                     v60 != 0 ? v60 + 16 : 0,
                     *((_DWORD *)this + 11) != 0 ? *((_DWORD *)this + 11) + 16 : 0,
                     v38,
                     &v66,
                     *((_DWORD *)this + 13),
                     v64,
                     (char *)v59 + 1176,
                     (char *)this + 68,
                     (char *)this + 124,
                     (char *)this + 140,
                     a5);
          else
            return EngPlgBlt(
                     v60 != 0 ? (SURFOBJ *)(v60 + 16) : 0,
                     *((_DWORD *)this + 11) != 0 ? (SURFOBJ *)(*((_DWORD *)this + 11) + 16) : 0,
                     v38,
                     (CLIPOBJ *)&v66,
                     *((XLATEOBJ **)this + 13),
                     (COLORADJUSTMENT *)v64,
                     (POINTL *)v59 + 147,
                     (POINTFIX *)((char *)this + 68),
                     (RECTL *)((char *)this + 124),
                     (POINTL *)((char *)this + 140),
                     a5);
        }
      }
      else
      {
        v52 = v15;
        LOBYTE(v53) = v15;
        v54 = v15;
        v55 = v15;
        v56 = v15;
        v57 = v15;
        if ( BLTRECORD::bRotate(this, v30, (struct SURFMEM *)&v55, (struct SURFMEM *)&v52, a4, a5)
          && (BLTRECORD::vBound(this, (BLTRECORD *)((char *)this + 100)),
              BLTRECORD::bCreateRegion(this, v32, (struct _POINTFIX *)((char *)this + 68))) )
        {
          v36 = BLTRECORD::bBitBlt(this, v32, v62, a4);
          v37 = *(_DWORD *)v32;
          *(_DWORD *)(v37 + 24) |= 0x10u;
          *(_DWORD *)(v37 + 1144) = 0;
        }
        else
        {
          v36 = 0;
        }
        SURFMEM::~SURFMEM((SURFMEM *)&v55);
        SURFMEM::~SURFMEM((SURFMEM *)&v52);
        return v36;
      }
    }
LABEL_9:
    EngSetLastError(0x57u);
    return 0;
  }
  BLTRECORD::vOrder(this, (BLTRECORD *)((char *)this + 140));
  if ( (*(_BYTE *)(*(_DWORD *)(*(_DWORD *)a2 + 1020) + 148) & 1) != 0 )
  {
    v7 = *((_DWORD *)this + 35);
    *((_DWORD *)this + 35) = *((_DWORD *)this + 37);
    *((_DWORD *)this + 37) = v7;
  }
  if ( BLTRECORD::pSurfMskOut(this) )
  {
    if ( *((int *)this + 35) < 0 )
      goto LABEL_9;
    if ( *((int *)this + 36) < 0 )
      goto LABEL_9;
    v8 = *((_DWORD *)this + 12);
    if ( *((_DWORD *)this + 37) > *(_DWORD *)(v8 + 32) || *((_DWORD *)this + 38) > *(_DWORD *)(v8 + 36) )
      goto LABEL_9;
  }
  v55 = 0;
  v56 = 0;
  v57 = 0;
  if ( ((a4 & 0x10000) == 0 || BLTRECORD::bRotate(this, (struct SURFMEM *)&v55, a5))
    && (BLTRECORD::vBound(this, (BLTRECORD *)((char *)this + 100)),
        BLTRECORD::bCreateRegion(this, a2, (struct _POINTFIX *)((char *)this + 68))) )
  {
    v11 = BLTRECORD::bBitBlt(this, a2, v62, a4);
    v12 = *(_DWORD *)a2;
    *(_DWORD *)(v12 + 24) |= 0x10u;
    *(_DWORD *)(v12 + 1144) = 0;
    v10 = v11;
  }
  else
  {
    v10 = 0;
  }
  SURFMEM::~SURFMEM((SURFMEM *)&v55);
  return v10;
}
