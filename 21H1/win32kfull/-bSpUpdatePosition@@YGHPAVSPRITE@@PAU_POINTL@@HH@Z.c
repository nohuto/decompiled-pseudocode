/*
 * XREFs of ?bSpUpdatePosition@@YGHPAVSPRITE@@PAU_POINTL@@HH@Z @ 0xA0A28
 * Callers:
 *     ?vSpUpdateSpriteVisRgn@@YGXPAUHDEV__@@K@Z @ 0x381B6 (-vSpUpdateSpriteVisRgn@@YGXPAUHDEV__@@K@Z.c)
 *     ?vSpDeleteSprite@@YGXPAVSPRITE@@@Z @ 0x9ECB4 (-vSpDeleteSprite@@YGXPAVSPRITE@@@Z.c)
 *     ?pSpHintSpriteShape@@YGHPAVSPRITE@@PAUHBITMAP__@@H@Z @ 0x9F37A (-pSpHintSpriteShape@@YGHPAVSPRITE@@PAUHBITMAP__@@H@Z.c)
 *     ?bSpUpdateSprite@@YGHPAVSPRITE@@PAUHDC__@@PAU_POINTL@@PAUtagSIZE@@12KPAU_BLENDFUNCTION@@KPAU_RECTL@@@Z @ 0x9F6DC (-bSpUpdateSprite@@YGHPAVSPRITE@@PAUHDC__@@PAU_POINTL@@PAUtagSIZE@@12KPAU_BLENDFUNCTION@@KPAU_REC.c)
 *     ?bSpUpdatePosition@@YGHPAVSPRITE@@PAU_POINTL@@HH@Z @ 0xA0A28 (-bSpUpdatePosition@@YGHPAVSPRITE@@PAU_POINTL@@HH@Z.c)
 *     ?vSpHideSprites@@YGXPAUHDEV__@@H@Z @ 0xACFC2 (-vSpHideSprites@@YGXPAUHDEV__@@H@Z.c)
 *     ?GdiMovePointer@@YGXPAU_SURFOBJ@@JJPAU_RECTL@@H@Z @ 0x1DAB6D (-GdiMovePointer@@YGXPAU_SURFOBJ@@JJPAU_RECTL@@H@Z.c)
 *     ?GdiSetPointerShape@@YGKPAU_SURFOBJ@@00PAU_XLATEOBJ@@JJJJPAU_RECTL@@K@Z @ 0x1DB0D0 (-GdiSetPointerShape@@YGKPAU_SURFOBJ@@00PAU_XLATEOBJ@@JJJJPAU_RECTL@@K@Z.c)
 *     ?pSpConvertSpriteFromMeta@@YGPAVSPRITE@@PAUHDEV__@@0PAU_METASPRITE@@@Z @ 0x1DF031 (-pSpConvertSpriteFromMeta@@YGPAVSPRITE@@PAUHDEV__@@0PAU_METASPRITE@@@Z.c)
 *     ?pSpConvertSpriteToMeta@@YGPAU_METASPRITE@@PAUHDEV__@@0PAVSPRITE@@@Z @ 0x1DF19D (-pSpConvertSpriteToMeta@@YGPAU_METASPRITE@@PAUHDEV__@@0PAVSPRITE@@@Z.c)
 *     ?pSpTransferMetaSprite@@YGPAU_METASPRITE@@PAUHDEV__@@0PAU1@@Z @ 0x1DF57A (-pSpTransferMetaSprite@@YGPAU_METASPRITE@@PAUHDEV__@@0PAU1@@Z.c)
 *     ?pSpTransferSprite@@YGPAVSPRITE@@PAUHDEV__@@PAV1@@Z @ 0x1DF909 (-pSpTransferSprite@@YGPAVSPRITE@@PAUHDEV__@@PAV1@@Z.c)
 * Callees:
 *     ?vSpDirectDriverAccess@@YGXPAU_SPRITESTATE@@H@Z @ 0x3061A (-vSpDirectDriverAccess@@YGXPAU_SPRITESTATE@@H@Z.c)
 *     _GreClientRgnUpdatedStable@4 @ 0x334D6 (_GreClientRgnUpdatedStable@4.c)
 *     _GreClientRgnUpdated@4 @ 0x384C8 (_GreClientRgnUpdated@4.c)
 *     ?bEmpty@ERECTL@@QBEHXZ @ 0x4F396 (-bEmpty@ERECTL@@QBEHXZ.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QAEHPAXJVXEPALOBJ@@111KKKK@Z @ 0x5D130 (-bInitXlateObj@EXLATEOBJ@@QAEHPAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?SpBitBlt@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@PAU_POINTL@@4PAU_BRUSHOBJ@@4K@Z @ 0x65C80 (-SpBitBlt@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@PAU_POINTL@@4PAU_BRUSHOBJ@@4K.c)
 *     ?vAltUnlock@EXLATEOBJ@@QAEXXZ @ 0x794B6 (-vAltUnlock@EXLATEOBJ@@QAEXXZ.c)
 *     ?vSpHook@@YGXPAU_SPRITESTATE@@@Z @ 0x9E9AC (-vSpHook@@YGXPAU_SPRITESTATE@@@Z.c)
 *     ?vSpDeleteSurface@@YGXPAU_SURFOBJ@@@Z @ 0x9EDCC (-vSpDeleteSurface@@YGXPAU_SURFOBJ@@@Z.c)
 *     ?vSpOrderInY@@YGXPAVSPRITE@@@Z @ 0x9F24C (-vSpOrderInY@@YGXPAVSPRITE@@@Z.c)
 *     ?vSpRemoveAllSpriteOverlapPresents@@YGXPAUHDEV__@@@Z @ 0xA00C0 (-vSpRemoveAllSpriteOverlapPresents@@YGXPAUHDEV__@@@Z.c)
 *     ?vSpComputeSpriteRanges@@YGXPAU_SPRITESTATE@@@Z @ 0xA0662 (-vSpComputeSpriteRanges@@YGXPAU_SPRITESTATE@@@Z.c)
 *     ?bSpUpdatePosition@@YGHPAVSPRITE@@PAU_POINTL@@HH@Z @ 0xA0A28 (-bSpUpdatePosition@@YGHPAVSPRITE@@PAU_POINTL@@HH@Z.c)
 *     ?psoSpCreateSurface@@YGPAU_SURFOBJ@@PAU_SPRITESTATE@@KJJH@Z @ 0xA135A (-psoSpCreateSurface@@YGPAU_SURFOBJ@@PAU_SPRITESTATE@@KJJH@Z.c)
 *     ?vSpUnhook@@YGXPAU_SPRITESTATE@@@Z @ 0xAD018 (-vSpUnhook@@YGXPAU_SPRITESTATE@@@Z.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ?vSpBigUnderlayCopy@@YGXPAU_SPRITESTATE@@PAU_POINTL@@PAU_SURFOBJ@@PAU_RECTL@@@Z @ 0x1E015A (-vSpBigUnderlayCopy@@YGXPAU_SPRITESTATE@@PAU_POINTL@@PAU_SURFOBJ@@PAU_RECTL@@@Z.c)
 *     ?vSpCheckForWndobjOverlap@@YGXPAU_SPRITESTATE@@PAU_RECTL@@1@Z @ 0x1E0285 (-vSpCheckForWndobjOverlap@@YGXPAU_SPRITESTATE@@PAU_RECTL@@1@Z.c)
 *     ?vSpRedrawArea@@YGXPAU_SPRITESTATE@@PAU_RECTL@@H@Z @ 0x1E1DFF (-vSpRedrawArea@@YGXPAU_SPRITESTATE@@PAU_RECTL@@H@Z.c)
 *     ?vSpRedrawUncoveredArea@@YGXPAVSPRITE@@PAU_RECTL@@@Z @ 0x1E22F2 (-vSpRedrawUncoveredArea@@YGXPAVSPRITE@@PAU_RECTL@@@Z.c)
 *     ?vSpSmallUnderlayCopy@@YGXPAVSPRITE@@PAU_POINTL@@PAU_SURFOBJ@@12JJPAU_RECTL@@3@Z @ 0x1E262E (-vSpSmallUnderlayCopy@@YGXPAVSPRITE@@PAU_POINTL@@PAU_SURFOBJ@@12JJPAU_RECTL@@3@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
LONG __userpurge bSpUpdatePosition@<eax>(
        struct _SURFOBJ *a1@<edx>,
        int *a2@<ecx>,
        struct SPRITE *a3,
        struct _POINTL *a4,
        int a5,
        int a6)
{
  _DWORD **right; // esi
  LONG dhsurf; // ecx
  int v9; // eax
  HSURF hsurf; // edx
  int v11; // eax
  int v12; // eax
  int v13; // edx
  LONG v14; // ecx
  struct REGION *v15; // eax
  _DWORD *v16; // esi
  int v17; // edi
  _DWORD *v18; // ecx
  LONG *p_lDelta; // esi
  int v20; // edi
  int v21; // eax
  int v22; // ecx
  struct _SURFOBJ *v23; // eax
  struct _SURFOBJ *v24; // ecx
  HSURF v25; // edx
  struct _SPRITESTATE *v26; // eax
  LONG y; // ecx
  struct _SURFOBJ *v28; // edx
  LONG v29; // edx
  struct _POINTL *v30; // edi
  struct _SURFOBJ *v31; // esi
  int v32; // eax
  int v33; // ecx
  int v34; // eax
  LONG v35; // edx
  int v36; // ecx
  int v37; // edx
  struct SPRITE *v38; // ecx
  signed int v39; // edx
  struct _SPRITESTATE *v40; // ecx
  struct _SURFOBJ *Surface; // eax
  LONG v42; // edi
  LONG x; // ecx
  LONG v44; // edx
  int v45; // edx
  LONG v46; // edi
  BOOL v47; // esi
  int v48; // edi
  unsigned int v49; // ecx
  int v50; // eax
  int *v51; // edi
  int v52; // edi
  bool v53; // zf
  struct _RECTL *left; // eax
  int v55; // ecx
  LONG v56; // eax
  int v57; // eax
  unsigned int v58; // edi
  unsigned int v59; // ecx
  int **v60; // eax
  LONG v61; // edi
  LONG v62; // ecx
  _DWORD *v63; // eax
  struct _SURFOBJ *v65; // [esp-10h] [ebp-108h]
  struct _RECTL *v66; // [esp-8h] [ebp-100h]
  struct _RECTL *v67; // [esp-4h] [ebp-FCh]
  struct _XLATEOBJ *v68; // [esp+0h] [ebp-F8h] BYREF
  struct _CLIPOBJ *v69; // [esp+4h] [ebp-F4h] BYREF
  struct _RECTL *v70; // [esp+8h] [ebp-F0h]
  struct _POINTL v71; // [esp+Ch] [ebp-ECh] BYREF
  int v72; // [esp+14h] [ebp-E4h] BYREF
  int v73; // [esp+18h] [ebp-E0h] BYREF
  struct _RECTL v74; // [esp+1Ch] [ebp-DCh] BYREF
  LONG v75; // [esp+2Ch] [ebp-CCh]
  LONG v76; // [esp+30h] [ebp-C8h]
  int v77; // [esp+34h] [ebp-C4h]
  struct _POINTL v78; // [esp+38h] [ebp-C0h] BYREF
  _DWORD *v79; // [esp+40h] [ebp-B8h]
  _DWORD *v80; // [esp+44h] [ebp-B4h]
  struct _SURFOBJ *v81; // [esp+48h] [ebp-B0h] BYREF
  struct _POINTL v82; // [esp+4Ch] [ebp-ACh] BYREF
  signed int v83; // [esp+54h] [ebp-A4h] BYREF
  signed int v84; // [esp+58h] [ebp-A0h]
  unsigned int v85; // [esp+5Ch] [ebp-9Ch]
  int v86; // [esp+60h] [ebp-98h] BYREF
  int v87; // [esp+64h] [ebp-94h] BYREF
  int v88; // [esp+68h] [ebp-90h]
  _DWORD v89[33]; // [esp+6Ch] [ebp-8Ch] BYREF

  v81 = a1;
  v78.y = 1;
  right = (_DWORD **)a2[3];
  v86 = 0;
  v78.x = (LONG)right;
  v87 = 0;
  v88 = 0;
  v89[0] = 0;
  v77 = a2[19];
  v76 = a2[20];
  if ( a1 )
  {
    a2[19] = (int)a1->dhsurf;
    a2[20] = (int)a1->hsurf;
    dhsurf = (LONG)a1->dhsurf;
    v9 = (int)a1->dhsurf + a2[17] - a2[15];
    hsurf = a1->hsurf;
    v84 = v9;
    v11 = a2[18] - a2[16];
    v82.y = dhsurf;
    v83 = (signed int)hsurf;
    v85 = (unsigned int)hsurf + v11;
  }
  else
  {
    v85 = 0x80000000;
  }
  if ( (*(_BYTE *)a2 & 0x11) != 0
    || !bIntersect((const struct _RECTL *)(right + 5), (const struct _RECTL *)&v82.y, (struct _RECTL *)&v82.y) )
  {
    v82.x = 0x80000000;
    v12 = 0;
    v82.y = 0x80000000;
    v83 = 0x80000000;
    v84 = 0x80000000;
  }
  else
  {
    v12 = 32;
  }
  v13 = *a2;
  v14 = *a2 & 0x20;
  v73 = *a2;
  v78.y = v14;
  if ( v12 == v14 )
  {
    if ( v82.x == a2[11] && v82.y == a2[12] && v83 == a2[13] && v84 == a2[14] )
    {
      if ( a2[1] == 2 && gpto )
        vSpCheckForWndobjOverlap((struct _SPRITESTATE *)(a2 + 11), (struct _RECTL *)v69, v70);
      goto LABEL_138;
    }
    v13 = v73;
  }
  if ( v14 )
  {
    *a2 = v13 & 0xFFFFFFDF;
    right[9] = (_DWORD *)((char *)right[9] - 1);
  }
  if ( a2[28] )
  {
    if ( !a3 )
    {
      vSpRedrawUncoveredArea((struct SPRITE *)v69, v70);
      goto LABEL_52;
    }
  }
  else if ( !a3 )
  {
    goto LABEL_52;
  }
  v89[17] = 0;
  v89[18] = 0;
  v89[30] = 0;
  v89[12] = 0;
  v15 = (struct REGION *)a2[33];
  v89[28] = 1;
  if ( v15 )
  {
    XCLIPOBJ::vSetup((XCLIPOBJ *)v89, v15, (struct ERECTL *)(a2 + 11), 0);
    v70 = (struct _RECTL *)&v86;
    if ( ERECTL::bEmpty((ERECTL *)&v87) )
      goto LABEL_52;
  }
  else
  {
    v72 = 0;
  }
  if ( a2[22] )
  {
    if ( a2[41] == 3 && !*((_BYTE *)a2 + 171) || a2[1] == 1 )
    {
      vSpRedrawArea((struct _SPRITESTATE *)1, v66, (int)v67);
LABEL_51:
      GreClientRgnUpdated(0);
      GreClientRgnUpdatedStable((int)v66);
      goto LABEL_52;
    }
    vSpDirectDriverAccess(right, 0);
    v16 = right[4];
    v73 = 0;
    v17 = a2[22];
    v18 = (_DWORD *)v16[18];
    v69 = 0;
    if ( v16[11] == *(_DWORD *)(v17 + 44) && (*(_BYTE *)a2 & 0x40) == 0 )
    {
      p_lDelta = 0;
    }
    else
    {
      p_lDelta = 0;
      if ( !EXLATEOBJ::bInitXlateObj(
              (int *)&v69,
              0,
              0,
              (_DWORD *)a2[25],
              v18,
              (int)ppalDefault,
              (int)ppalDefault,
              0,
              0,
              0,
              0) )
      {
LABEL_50:
        right = (_DWORD **)v74.right;
        vSpDirectDriverAccess((_DWORD *)v74.right, 1);
        EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v68);
        SURFREFVIEW::bUnMap((SURFREFVIEW *)&v72);
        goto LABEL_51;
      }
    }
    if ( SURFREFVIEW::bMap((SURFREFVIEW *)&v73, (struct _SURFOBJ *)a2[22]) )
    {
      v20 = 0;
      v71.x = a2[11] - v74.top;
      v71.y = a2[12] - v74.left;
      v21 = *(_DWORD *)(v74.right + 16);
      if ( v21 )
      {
        v22 = *(_DWORD *)(v21 + 56);
        if ( (v22 & 0x80004000) != 0 && (v22 & 0x200) == 0 )
        {
          v20 = v21 - 16;
          GreLockDisplayDevice(*(_DWORD *)(v21 - 16 + 28));
        }
      }
      v23 = (struct _SURFOBJ *)a2[22];
      v24 = v23;
      if ( v23 )
      {
        v25 = v23[1].hsurf;
        if ( ((unsigned int)v25 & 0x80004000) != 0 && ((unsigned __int16)v25 & 0x200) == 0 )
        {
          p_lDelta = &v23[-1].lDelta;
          GreLockDisplayDevice(v23->hdev);
          v24 = (struct _SURFOBJ *)a2[22];
        }
      }
      SpBitBlt(
        *(struct _SURFOBJ **)(v74.right + 16),
        v24,
        0,
        v69,
        v68,
        (struct _RECTL *)(a2 + 11),
        &v71,
        0,
        0,
        0,
        0xCCCCu);
      if ( p_lDelta )
        GreUnlockDisplayDevice(p_lDelta[7]);
      if ( v20 )
        GreUnlockDisplayDevice(*(_DWORD *)(v20 + 28));
    }
    goto LABEL_50;
  }
LABEL_52:
  v26 = (struct _SPRITESTATE *)(v83 - v82.x);
  y = v84 - v82.y;
  v72 = v83 - v82.x;
  v71.y = v84 - v82.y;
  if ( v83 == v82.x )
  {
    if ( a4 == (struct _POINTL *)1 && right[9] == (_DWORD *)v26 && right[168] != (_DWORD *)v26 )
      vSpUnhook((struct _SPRITESTATE *)v69);
  }
  else
  {
    *a2 |= 0x20u;
    right[9] = (_DWORD *)((char *)right[9] + 1);
    if ( a4 == (struct _POINTL *)1 && !right[168] )
    {
      vSpHook(right);
      v26 = (struct _SPRITESTATE *)v72;
      y = v71.y;
    }
    v28 = (struct _SURFOBJ *)a2[28];
    v81 = v28;
    if ( v28 && (int)v26 <= v28->sizlBitmap.cx && y <= v28->sizlBitmap.cy )
    {
      if ( v82.x < a2[11] || v82.y < a2[12] || v83 > a2[13] || v84 > a2[14] )
      {
        v29 = a2[37];
        v30 = 0;
        v31 = 0;
        v71.y = v29;
        if ( v82.x >= v29 )
        {
          v32 = a2[39];
          if ( v83 > v32 )
            v30 = (struct _POINTL *)(v83 - v32);
        }
        else
        {
          v30 = (struct _POINTL *)(v82.x - v29);
        }
        v33 = a2[38];
        v34 = a2[40];
        v72 = v33;
        if ( v82.y >= v33 )
        {
          if ( v84 > v34 )
            v31 = (struct _SURFOBJ *)(v84 - v34);
          v33 = v72;
        }
        else
        {
          v31 = (struct _SURFOBJ *)(v82.y - v33);
        }
        v35 = v71.y;
        v36 = (int)v31 + v33;
        a2[39] += (int)v30;
        a2[38] = v36;
        v37 = (int)v30 + v35;
        a2[40] = (int)v31 + v34;
        a2[30] = -v36;
        a2[37] = v37;
        v68 = (struct _XLATEOBJ *)(a2 + 11);
        v38 = (struct SPRITE *)v81;
        v65 = v81;
        a2[29] = -v37;
        vSpSmallUnderlayCopy(
          v38,
          (struct _POINTL *)(a2 + 29),
          v65,
          v30,
          v31,
          (int)&v82,
          (int)v68,
          (struct _RECTL *)v69,
          v70);
      }
    }
    else
    {
      v39 = a2[32];
      if ( y > v39 )
        v39 = y;
      v40 = (struct _SPRITESTATE *)a2[31];
      if ( (int)v26 > (int)v40 )
        v40 = v26;
      Surface = psoSpCreateSurface(v40, v39, (int)v40, (int)v69, (int)v70);
      v42 = (LONG)Surface;
      if ( !Surface )
      {
        bSpUpdatePosition(0, 0, (int)v69, (int)v70);
        goto LABEL_139;
      }
      Surface->fjBitmap |= 4u;
      v74.left = -v82.x;
      v74.top = -v82.y;
      if ( v72 > 128 || v71.y > 128 )
        vSpBigUnderlayCopy((struct _SPRITESTATE *)Surface, &v82, (struct _SURFOBJ *)v69, v70);
      else
        vSpSmallUnderlayCopy(
          (struct SPRITE *)Surface,
          (struct _POINTL *)(a2 + 29),
          (struct _SURFOBJ *)a2[28],
          0,
          0,
          (int)&v82,
          (int)(a2 + 11),
          (struct _RECTL *)v69,
          v70);
      vSpDeleteSurface((SURFOBJ *)a2[28]);
      x = v82.x;
      v44 = v82.y;
      a2[29] = v74.left;
      a2[30] = v74.top;
      a2[28] = v42;
      a2[37] = x;
      a2[38] = v44;
      a2[39] = x + *(_DWORD *)(v42 + 16);
      a2[40] = v44 + *(_DWORD *)(v42 + 20);
    }
  }
  v74.left = 0;
  v74.top = 0;
  v85 = a2[11];
  v45 = *a2;
  v86 = a2[12];
  v87 = a2[13];
  v88 = a2[14];
  *(struct _POINTL *)(a2 + 11) = v82;
  a2[13] = v83;
  a2[14] = v84;
  v46 = a2[34];
  v71.y = v46;
  if ( ((v45 & 0x20) != 0) == (v78.y != 0) )
  {
    if ( !v46 || ((unsigned __int8)v73 & (unsigned __int8)v45 & 0x20) == 0 )
      goto LABEL_133;
    v57 = a2[2];
    if ( v57 && (v58 = *(_DWORD *)(v57 + 12), v59 = 0, v58) )
    {
      v60 = (int **)(v57 + 16);
      while ( *v60 == a2 || (*(_BYTE *)*v60 & 0x20) == 0 )
      {
        ++v59;
        ++v60;
        if ( v59 >= v58 )
          goto LABEL_128;
      }
      v61 = v75;
      v74.right = v76;
      v74.bottom = v75;
      RGNOBJ::vSet((RGNOBJ *)&v71.y, (struct _RECTL *)(a2 + 15));
      RGNOBJ::bOffset((RGNOBJ *)&v71, (struct _POINTL *)&v74.top);
    }
    else
    {
LABEL_128:
      v61 = v75;
    }
    if ( v71.y )
    {
      v62 = v80[1] - v61;
      v74.left = *v80 - v76;
      v74.top = v62;
      if ( v74.left || v62 )
        RGNOBJ::bOffset((RGNOBJ *)&v71.y, (struct _POINTL *)&v74);
    }
    goto LABEL_133;
  }
  v47 = !v78.y && (v45 & 0x20) != 0;
  if ( v46 )
    goto LABEL_110;
  v48 = a2[2];
  v73 = v48;
  if ( v48 )
  {
    if ( v47 )
    {
      v49 = 0;
      v72 = 0;
      if ( *(_DWORD *)(v48 + 12) )
      {
        v50 = v73;
        v51 = (int *)(v48 + 16);
        v78.y = (LONG)v51;
        while ( 1 )
        {
          v52 = *v51;
          if ( (int *)v52 != a2 )
          {
            v81 = *(struct _SURFOBJ **)(v52 + 136);
            if ( v81 )
            {
              RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v74.right);
              if ( v74.right && RGNOBJ::bCopy((RGNOBJ *)&v74.right, (struct RGNOBJ *)&v81) )
              {
                v78.x = -*(_DWORD *)(v52 + 76);
                v78.y = -*(_DWORD *)(v52 + 80);
                RGNOBJ::bOffset((RGNOBJ *)&v74.top, &v78);
                v53 = v74.top == 1;
                left = (struct _RECTL *)v74.left;
                a2[34] = v74.left;
                v70 = left;
                if ( v53 )
                  RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v74);
LABEL_110:
                if ( v71.x )
                {
                  v55 = v47 ? *v79 : -v75;
                  v73 = v55;
                  v56 = v47 ? v79[1] : -v74.bottom;
                  v74.left = v56;
                  if ( v55 || v56 )
                    RGNOBJ::bOffset((RGNOBJ *)&v71, (struct _POINTL *)&v73);
                }
                break;
              }
              RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v74.top);
              if ( v74.right == 1 )
                RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v74.top);
              v49 = v71.y;
            }
            v50 = v72;
          }
          ++v49;
          v51 = (int *)(v78.x + 4);
          v71.y = v49;
          v78.x += 4;
          if ( v49 >= *(_DWORD *)(v50 + 12) )
            goto LABEL_110;
        }
      }
    }
  }
LABEL_133:
  right = (_DWORD **)v75;
  *(_DWORD *)(v75 + 84) = 0;
  ++giSpriteUniqueness;
  vSpOrderInY(a2);
  if ( gpto )
    vSpCheckForWndobjOverlap((struct _SPRITESTATE *)&v83, v67, (struct _RECTL *)v68);
  if ( !right[21] )
    vSpComputeSpriteRanges(right);
  vSpRemoveAllSpriteOverlapPresents(*right);
LABEL_138:
  v42 = v78.x;
LABEL_139:
  if ( a4 == (struct _POINTL *)1 )
  {
    v63 = right[168];
    if ( right[9] )
    {
      if ( !v63 )
        vSpHook(right);
    }
    else if ( v63 )
    {
      vSpUnhook((struct _SPRITESTATE *)v69);
    }
  }
  return v42;
}
