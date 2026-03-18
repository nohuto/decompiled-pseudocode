/*
 * XREFs of ?bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z @ 0x1C00503BC
 * Callers:
 *     ?pSpHintSpriteShape@@YAHPEAVSPRITE@@PEAUHBITMAP__@@H@Z @ 0x1C004DDE8 (-pSpHintSpriteShape@@YAHPEAVSPRITE@@PEAUHBITMAP__@@H@Z.c)
 *     ?bSpUpdateSprite@@YAHPEAVSPRITE@@PEAUHDC__@@PEAU_POINTL@@PEAUtagSIZE@@12KPEAU_BLENDFUNCTION@@KPEAU_RECTL@@@Z @ 0x1C004F24C (-bSpUpdateSprite@@YAHPEAVSPRITE@@PEAUHDC__@@PEAU_POINTL@@PEAUtagSIZE@@12KPEAU_BLENDFUNCTION@@KPE.c)
 *     ?bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z @ 0x1C00503BC (-bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z.c)
 *     ?vSpDeleteSprite@@YAXPEAVSPRITE@@@Z @ 0x1C00506C4 (-vSpDeleteSprite@@YAXPEAVSPRITE@@@Z.c)
 *     ?vSpUpdateSpriteVisRgn@@YAXPEAUHDEV__@@K@Z @ 0x1C0073F4C (-vSpUpdateSpriteVisRgn@@YAXPEAUHDEV__@@K@Z.c)
 *     ?vSpHideSprites@@YAXPEAUHDEV__@@H@Z @ 0x1C0121C64 (-vSpHideSprites@@YAXPEAUHDEV__@@H@Z.c)
 *     ?GdiMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@H@Z @ 0x1C027F2C8 (-GdiMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@H@Z.c)
 *     ?GdiSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x1C027F8F8 (-GdiSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z.c)
 *     ?pSpConvertSpriteFromMeta@@YAPEAVSPRITE@@PEAUHDEV__@@0PEAU_METASPRITE@@@Z @ 0x1C0282314 (-pSpConvertSpriteFromMeta@@YAPEAVSPRITE@@PEAUHDEV__@@0PEAU_METASPRITE@@@Z.c)
 *     ?pSpConvertSpriteToMeta@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAVSPRITE@@@Z @ 0x1C02824DC (-pSpConvertSpriteToMeta@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAVSPRITE@@@Z.c)
 *     ?pSpTransferMetaSprite@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAU1@@Z @ 0x1C0282924 (-pSpTransferMetaSprite@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAU1@@Z.c)
 *     ?pSpTransferSprite@@YAPEAVSPRITE@@PEAUHDEV__@@PEAV1@@Z @ 0x1C0282D0C (-pSpTransferSprite@@YAPEAVSPRITE@@PEAUHDEV__@@PEAV1@@Z.c)
 * Callees:
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C001A554 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?psoSpCreateSurface@@YAPEAU_SURFOBJ@@PEAU_SPRITESTATE@@KJJH@Z @ 0x1C004B6E4 (-psoSpCreateSurface@@YAPEAU_SURFOBJ@@PEAU_SPRITESTATE@@KJJH@Z.c)
 *     ?vSpHook@@YAXPEAU_SPRITESTATE@@@Z @ 0x1C004BB44 (-vSpHook@@YAXPEAU_SPRITESTATE@@@Z.c)
 *     ?vSpOrderInY@@YAXPEAVSPRITE@@@Z @ 0x1C004C940 (-vSpOrderInY@@YAXPEAVSPRITE@@@Z.c)
 *     ?vSpRemoveAllSpriteOverlapPresents@@YAXPEAUHDEV__@@@Z @ 0x1C004FCA4 (-vSpRemoveAllSpriteOverlapPresents@@YAXPEAUHDEV__@@@Z.c)
 *     ?vSpComputeSpriteRanges@@YAXPEAU_SPRITESTATE@@@Z @ 0x1C004FEE0 (-vSpComputeSpriteRanges@@YAXPEAU_SPRITESTATE@@@Z.c)
 *     ?bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z @ 0x1C00503BC (-bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z.c)
 *     ?vSpDeleteSurface@@YAXPEAU_SURFOBJ@@@Z @ 0x1C0050854 (-vSpDeleteSurface@@YAXPEAU_SURFOBJ@@@Z.c)
 *     GreClientRgnUpdatedStable @ 0x1C006A32C (GreClientRgnUpdatedStable.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C0071268 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     GreClientRgnUpdated @ 0x1C00753E0 (GreClientRgnUpdated.c)
 *     ?SpBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C0083DA0 (-SpBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHO.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C0085AA0 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?vSpDirectDriverAccess@@YAXPEAU_SPRITESTATE@@H@Z @ 0x1C00A4D4C (-vSpDirectDriverAccess@@YAXPEAU_SPRITESTATE@@H@Z.c)
 *     ?vSpUnhook@@YAXPEAU_SPRITESTATE@@@Z @ 0x1C0121CE8 (-vSpUnhook@@YAXPEAU_SPRITESTATE@@@Z.c)
 *     ?vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z @ 0x1C0156044 (-vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 *     ?vSpBigUnderlayCopy@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C028327C (-vSpBigUnderlayCopy@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?vSpCheckForWndobjOverlap@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@1@Z @ 0x1C028342C (-vSpCheckForWndobjOverlap@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@1@Z.c)
 *     ?vSpRedrawUncoveredArea@@YAXPEAVSPRITE@@PEAU_RECTL@@@Z @ 0x1C0284BF0 (-vSpRedrawUncoveredArea@@YAXPEAVSPRITE@@PEAU_RECTL@@@Z.c)
 *     ?vSpSmallUnderlayCopy@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@12JJPEAU_RECTL@@3@Z @ 0x1C0284FBC (-vSpSmallUnderlayCopy@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@12JJPEAU_RECTL@@3@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall bSpUpdatePosition(struct SPRITE *a1, struct _POINTL *a2, int a3, int a4)
{
  struct _CLIPOBJ *v4; // r14
  unsigned int v5; // edi
  _QWORD **v6; // r12
  struct _POINTL *v8; // r13
  LONG x; // edx
  LONG y; // r8d
  int v12; // ecx
  int v13; // eax
  int v14; // edx
  int v15; // ecx
  struct REGION *v17; // rdx
  struct _XLATEOBJ *v18; // rsi
  _QWORD *v19; // r10
  __int64 v20; // r9
  __int64 v21; // rcx
  int v22; // r8d
  _QWORD *v23; // rdi
  _QWORD *v24; // rax
  int v25; // ecx
  __int64 v26; // rax
  __int64 v27; // rbx
  struct _SURFOBJ *v28; // rdx
  int v29; // ecx
  int v30; // esi
  int v31; // edi
  struct _SURFOBJ *v32; // r11
  int v33; // ebx
  int v34; // r10d
  int v35; // r8d
  int v36; // eax
  int v37; // ecx
  int v38; // eax
  int v39; // ecx
  unsigned int v40; // r9d
  unsigned int v41; // r8d
  struct _SURFOBJ *Surface; // rax
  struct _SURFOBJ *v43; // rbx
  LONG left; // ecx
  LONG top; // edx
  struct _POINTL v46; // rax
  struct _RECTL v47; // xmm0
  int v48; // edx
  int v49; // ecx
  struct _POINTL v50; // r8
  int v51; // eax
  bool v52; // bl
  __int64 v53; // rsi
  __int64 v54; // r13
  __int64 v55; // rdi
  struct _POINTL v56; // rax
  LONG v57; // r14d
  LONG v58; // eax
  bool v59; // zf
  __int64 v60; // rax
  unsigned int v61; // r8d
  unsigned int v62; // edx
  struct SPRITE **v63; // rcx
  LONG v64; // ecx
  struct _POINTL *v65; // rdx
  int v66; // eax
  struct _POINTL v67; // [rsp+60h] [rbp-A0h] BYREF
  int v68; // [rsp+68h] [rbp-98h]
  struct _POINTL v69; // [rsp+70h] [rbp-90h] BYREF
  int v70; // [rsp+78h] [rbp-88h]
  struct _CLIPOBJ *v71; // [rsp+80h] [rbp-80h] BYREF
  struct _POINTL v72; // [rsp+88h] [rbp-78h] BYREF
  int v73; // [rsp+90h] [rbp-70h]
  struct _POINTL *v74; // [rsp+98h] [rbp-68h]
  __int64 v75; // [rsp+A0h] [rbp-60h] BYREF
  int v76; // [rsp+A8h] [rbp-58h]
  struct _CLIPOBJ *v77; // [rsp+B0h] [rbp-50h]
  struct _RECTL si128; // [rsp+B8h] [rbp-48h] BYREF
  struct _RECTL v79; // [rsp+C8h] [rbp-38h] BYREF
  _BYTE v80[4]; // [rsp+E0h] [rbp-20h] BYREF
  char v81[52]; // [rsp+E4h] [rbp-1Ch] BYREF
  __int64 v82; // [rsp+118h] [rbp+18h]
  __int64 v83; // [rsp+130h] [rbp+30h]
  int v84; // [rsp+138h] [rbp+38h]
  int v85; // [rsp+160h] [rbp+60h]
  __int64 v86; // [rsp+170h] [rbp+70h]

  v4 = (struct _CLIPOBJ *)*((_QWORD *)a1 + 14);
  v5 = 1;
  v6 = (_QWORD **)*((_QWORD *)a1 + 2);
  v76 = 1;
  v77 = v4;
  v8 = a2;
  v70 = a4;
  v74 = a2;
  v79 = 0LL;
  if ( a2 )
  {
    *((struct _POINTL *)a1 + 14) = *a2;
    x = a2->x;
    y = v8->y;
    si128.right = x + *((_DWORD *)a1 + 26) - *((_DWORD *)a1 + 24);
    v12 = *((_DWORD *)a1 + 27) - *((_DWORD *)a1 + 25);
    si128.left = x;
    si128.bottom = y + v12;
    si128.top = y;
  }
  else
  {
    si128.bottom = 0x80000000;
  }
  if ( (*(_DWORD *)a1 & 0x11) != 0 || !bIntersect((const struct _RECTL *)(v6 + 5), &si128, &si128) )
  {
    v13 = 0;
    si128 = (struct _RECTL)_mm_load_si128((const __m128i *)&_xmm);
  }
  else
  {
    v13 = 32;
  }
  v14 = *(_DWORD *)a1;
  v15 = *(_DWORD *)a1 & 0x20;
  v68 = *(_DWORD *)a1;
  LODWORD(v75) = v15;
  if ( v13 == v15 )
  {
    if ( si128.left == *((_DWORD *)a1 + 20)
      && si128.top == *((_DWORD *)a1 + 21)
      && si128.right == *((_DWORD *)a1 + 22)
      && si128.bottom == *((_DWORD *)a1 + 23) )
    {
      if ( gpto && *((_DWORD *)a1 + 1) == 2 )
        vSpCheckForWndobjOverlap((struct _SPRITESTATE *)v6, (struct _RECTL *)a1 + 5, (struct _RECTL *)a1 + 5);
      goto LABEL_11;
    }
    v14 = v68;
  }
  if ( v15 )
  {
    *(_DWORD *)a1 = v14 & 0xFFFFFFDF;
    --*((_DWORD *)v6 + 14);
  }
  if ( !*((_QWORD *)a1 + 20) )
  {
    if ( !a3 )
      goto LABEL_53;
LABEL_25:
    v83 = 0LL;
    v84 = 0;
    v86 = 0LL;
    v82 = 0LL;
    v17 = (struct REGION *)*((_QWORD *)a1 + 23);
    v85 = 1;
    if ( v17 )
    {
      XCLIPOBJ::vSetup((XCLIPOBJ *)v80, v17, (struct SPRITE *)((char *)a1 + 80), 0);
      v71 = (struct _CLIPOBJ *)v80;
      if ( (unsigned int)ERECTL::bEmpty((ERECTL *)v81) )
        goto LABEL_53;
    }
    else
    {
      v71 = 0LL;
    }
    if ( !*((_QWORD *)a1 + 16) )
      goto LABEL_53;
    if ( *((_DWORD *)a1 + 56) == 3 && !*((_BYTE *)a1 + 231) || *((_DWORD *)a1 + 1) == 1 )
    {
      vSpRedrawArea((struct _SPRITESTATE *)v6, (struct _RECTL *)a1 + 5, 1);
      goto LABEL_52;
    }
    vSpDirectDriverAccess((struct _SPRITESTATE *)v6, 0);
    v72 = 0LL;
    v18 = 0LL;
    v19 = v6[4];
    v20 = *((_QWORD *)a1 + 18);
    v21 = v19[13];
    v22 = *(_DWORD *)(*((_QWORD *)a1 + 16) + 72LL);
    v67 = 0LL;
    if ( *((_DWORD *)v19 + 18) != v22 || (*(_DWORD *)a1 & 0x40) != 0 )
    {
      if ( !(unsigned int)EXLATEOBJ::bInitXlateObj(&v67, 0LL, 0LL, v20, v21, ppalDefault, ppalDefault, 0, 0, 0, 0) )
      {
LABEL_51:
        vSpDirectDriverAccess((struct _SPRITESTATE *)v6, 1);
        EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v67);
        SURFREFVIEW::bUnMap((SURFREFVIEW *)&v72);
LABEL_52:
        GreClientRgnUpdated(0LL);
        GreClientRgnUpdatedStable();
        goto LABEL_53;
      }
      v18 = (struct _XLATEOBJ *)v67;
    }
    if ( SURFREFVIEW::bMap((SURFREFVIEW *)&v72, *((struct _SURFOBJ **)a1 + 16)) )
    {
      v23 = 0LL;
      v69.x = *((_DWORD *)a1 + 20) - (_DWORD)v4;
      v69.y = *((_DWORD *)a1 + 21) - HIDWORD(v77);
      v24 = v6[4];
      if ( v24 )
      {
        v25 = *((_DWORD *)v24 + 22);
        if ( (v25 & 0x80004000) != 0 && (v25 & 0x200) == 0 )
        {
          v23 = v24 - 3;
          GreLockDisplayDevice(v24[3]);
        }
      }
      v26 = *((_QWORD *)a1 + 16);
      v27 = 0LL;
      v28 = (struct _SURFOBJ *)v26;
      if ( v26 )
      {
        v29 = *(_DWORD *)(v26 + 88);
        if ( (v29 & 0x80004000) != 0 && (v29 & 0x200) == 0 )
        {
          v27 = v26 - 24;
          GreLockDisplayDevice(*(_QWORD *)(v26 - 24 + 48));
          v28 = (struct _SURFOBJ *)*((_QWORD *)a1 + 16);
        }
      }
      SpBitBlt((struct _SURFOBJ *)v6[4], v28, 0LL, v71, v18, (struct _RECTL *)a1 + 5, &v69, 0LL, 0LL, 0LL, 0xCCCCu);
      if ( v27 )
        GreUnlockDisplayDevice(*(_QWORD *)(v27 + 48));
      if ( v23 )
        GreUnlockDisplayDevice(v23[6]);
      v8 = v74;
    }
    goto LABEL_51;
  }
  if ( a3 )
    goto LABEL_25;
  vSpRedrawUncoveredArea(a1, &si128);
LABEL_53:
  v30 = si128.bottom - si128.top;
  v31 = si128.right - si128.left;
  if ( si128.right == si128.left )
  {
    if ( v70 == 1 && *((_DWORD *)v6 + 14) == v31 && *((_DWORD *)v6 + 270) != v31 )
      vSpUnhook((struct _SPRITESTATE *)v6);
  }
  else
  {
    *(_DWORD *)a1 |= 0x20u;
    ++*((_DWORD *)v6 + 14);
    if ( v70 == 1 && !*((_DWORD *)v6 + 270) )
      vSpHook((struct _SPRITESTATE *)v6);
    v32 = (struct _SURFOBJ *)*((_QWORD *)a1 + 20);
    if ( v32 && v31 <= v32->sizlBitmap.cx && v30 <= v32->sizlBitmap.cy )
    {
      if ( si128.left < *((_DWORD *)a1 + 20)
        || si128.top < *((_DWORD *)a1 + 21)
        || si128.right > *((_DWORD *)a1 + 22)
        || si128.bottom > *((_DWORD *)a1 + 23) )
      {
        v33 = *((_DWORD *)a1 + 52);
        v34 = 0;
        v35 = 0;
        if ( si128.left >= v33 )
        {
          v36 = *((_DWORD *)a1 + 54);
          if ( si128.right > v36 )
            v34 = si128.right - v36;
        }
        else
        {
          v34 = si128.left - v33;
        }
        v37 = *((_DWORD *)a1 + 53);
        v38 = *((_DWORD *)a1 + 55);
        if ( si128.top >= v37 )
        {
          if ( si128.bottom > v38 )
            v35 = si128.bottom - v38;
        }
        else
        {
          v35 = si128.top - v37;
        }
        *((_DWORD *)a1 + 54) += v34;
        v39 = v35 + v37;
        *((_DWORD *)a1 + 52) = v33 + v34;
        *((_DWORD *)a1 + 53) = v39;
        *((_DWORD *)a1 + 55) = v35 + v38;
        *((_DWORD *)a1 + 42) = -(v33 + v34);
        *((_DWORD *)a1 + 43) = -v39;
        vSpSmallUnderlayCopy(
          a1,
          (struct _POINTL *)a1 + 21,
          v32,
          (struct _POINTL *)a1 + 21,
          v32,
          v34,
          v35,
          &si128,
          (struct _RECTL *)a1 + 5);
      }
    }
    else
    {
      v40 = v30;
      v41 = v31;
      if ( v30 <= *((_DWORD *)a1 + 45) )
        v40 = *((_DWORD *)a1 + 45);
      if ( v31 <= *((_DWORD *)a1 + 44) )
        v41 = *((_DWORD *)a1 + 44);
      Surface = psoSpCreateSurface((struct _SPRITESTATE *)v6, 0, v41, v40);
      v43 = Surface;
      if ( !Surface )
      {
        v5 = 0;
        bSpUpdatePosition(a1, 0LL, 0, 0);
        goto LABEL_11;
      }
      Surface->fjBitmap |= 4u;
      v67.x = -si128.left;
      v67.y = -si128.top;
      if ( v31 > 128 || v30 > 128 )
        vSpBigUnderlayCopy((struct _SPRITESTATE *)v6, &v67, Surface, &si128);
      else
        vSpSmallUnderlayCopy(
          a1,
          &v67,
          Surface,
          (struct _POINTL *)a1 + 21,
          *((struct _SURFOBJ **)a1 + 20),
          0,
          0,
          &si128,
          (struct _RECTL *)a1 + 5);
      vSpDeleteSurface(*((struct _SURFOBJ **)a1 + 20));
      left = si128.left;
      top = si128.top;
      v46 = v67;
      *((_DWORD *)a1 + 52) = si128.left;
      *((struct _POINTL *)a1 + 21) = v46;
      *((_QWORD *)a1 + 20) = v43;
      *((_DWORD *)a1 + 53) = top;
      *((_DWORD *)a1 + 54) = v43->sizlBitmap.cx + left;
      *((_DWORD *)a1 + 55) = top + v43->sizlBitmap.cy;
    }
  }
  v69 = 0LL;
  v47 = (struct _RECTL)*((_OWORD *)a1 + 5);
  v48 = *(_DWORD *)a1;
  v49 = v75 != 0;
  v50 = (struct _POINTL)*((_QWORD *)a1 + 24);
  v51 = (*(_DWORD *)a1 >> 5) & 1;
  v67 = v50;
  v79 = v47;
  *((struct _RECTL *)a1 + 5) = si128;
  if ( v51 != v49 )
  {
    v52 = (v68 & 0x20) == 0 && (v48 & 0x20) != 0;
    if ( v50 )
      goto LABEL_103;
    v53 = *((_QWORD *)a1 + 1);
    if ( !v53 )
      goto LABEL_126;
    if ( !v52 )
      goto LABEL_126;
    v54 = 0LL;
    if ( !*(_DWORD *)(v53 + 20) )
      goto LABEL_126;
    while ( 1 )
    {
      v55 = *(_QWORD *)(v53 + 8 * v54 + 24);
      if ( (struct SPRITE *)v55 != a1 )
      {
        v75 = *(_QWORD *)(v55 + 192);
        if ( v75 )
        {
          RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v72);
          if ( *(_QWORD *)&v72 && RGNOBJ::bCopy((RGNOBJ *)&v72, (struct RGNOBJ *)&v75) )
          {
            LODWORD(v71) = -*(_DWORD *)(v55 + 112);
            HIDWORD(v71) = -*(_DWORD *)(v55 + 116);
            RGNOBJ::bOffset((RGNOBJ *)&v72, (struct _POINTL *)&v71);
            v59 = v73 == 1;
            v56 = v72;
            *((struct _POINTL *)a1 + 24) = v72;
            v67 = v56;
            if ( v59 )
              RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v72);
LABEL_103:
            if ( v67 )
            {
              if ( v52 )
                v57 = v74->x;
              else
                v57 = -(int)v4;
              v69.x = v57;
              if ( v52 )
                v58 = v74->y;
              else
                v58 = -HIDWORD(v77);
              v69.y = v58;
              if ( !v57 )
              {
                v59 = v58 == 0;
                goto LABEL_124;
              }
              goto LABEL_125;
            }
            goto LABEL_126;
          }
          RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v72);
          if ( v73 == 1 )
            RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v72);
        }
      }
      v54 = (unsigned int)(v54 + 1);
      if ( (unsigned int)v54 >= *(_DWORD *)(v53 + 20) )
        goto LABEL_103;
    }
  }
  if ( !*(_QWORD *)&v50 || ((unsigned __int8)v68 & (unsigned __int8)v48 & 0x20) == 0 )
    goto LABEL_126;
  v60 = *((_QWORD *)a1 + 1);
  if ( v60 )
  {
    v61 = *(_DWORD *)(v60 + 20);
    v62 = 0;
    if ( v61 )
    {
      v63 = (struct SPRITE **)(v60 + 24);
      while ( *v63 == a1 || (*(_DWORD *)*v63 & 0x20) == 0 )
      {
        ++v62;
        ++v63;
        if ( v62 >= v61 )
          goto LABEL_121;
      }
      v71 = v4;
      RGNOBJ::vSet((RGNOBJ *)&v67, (struct _RECTL *)a1 + 6);
      RGNOBJ::bOffset((RGNOBJ *)&v67, (struct _POINTL *)&v71);
    }
  }
LABEL_121:
  if ( v67 )
  {
    v64 = v8->y - HIDWORD(v77);
    v69.x = v8->x - (_DWORD)v4;
    v69.y = v64;
    if ( v69.x )
      goto LABEL_125;
    v59 = v64 == 0;
LABEL_124:
    if ( !v59 )
LABEL_125:
      RGNOBJ::bOffset((RGNOBJ *)&v67, &v69);
  }
LABEL_126:
  *((_DWORD *)v6 + 29) = 0;
  ++giSpriteUniqueness;
  vSpOrderInY(a1);
  if ( gpto )
    vSpCheckForWndobjOverlap((struct _SPRITESTATE *)v6, &si128, &v79);
  if ( !*((_DWORD *)v6 + 29) )
    vSpComputeSpriteRanges((struct _SPRITESTATE *)v6);
  vSpRemoveAllSpriteOverlapPresents(*v6, v65);
  v5 = v76;
LABEL_11:
  if ( v70 == 1 )
  {
    v66 = *((_DWORD *)v6 + 270);
    if ( *((_DWORD *)v6 + 14) )
    {
      if ( !v66 )
        vSpHook((struct _SPRITESTATE *)v6);
    }
    else if ( v66 )
    {
      vSpUnhook((struct _SPRITESTATE *)v6);
    }
  }
  return v5;
}
