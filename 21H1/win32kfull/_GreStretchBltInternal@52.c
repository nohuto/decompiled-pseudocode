/*
 * XREFs of _GreStretchBltInternal@52 @ 0x78C6A
 * Callers:
 *     _NtGdiBitBltInternal@44 @ 0x57A20 (_NtGdiBitBltInternal@44.c)
 *     _NtGdiAlphaBlend@48 @ 0x5AABA (_NtGdiAlphaBlend@48.c)
 *     ?_InternalGetIconInfo@@YG_NPAUtagCURSOR@@PAU_ICONINFO@@PAU_UNICODE_STRING@@2PAK_N@Z @ 0x74C30 (-_InternalGetIconInfo@@YG_NPAUtagCURSOR@@PAU_ICONINFO@@PAU_UNICODE_STRING@@2PAK_N@Z.c)
 *     _GreStretchDIBitsInternal@64 @ 0x75662 (_GreStretchDIBitsInternal@64.c)
 *     _BltIcon@36 @ 0x90D6C (_BltIcon@36.c)
 *     _BitBltSysBmp@20 @ 0x910DA (_BitBltSysBmp@20.c)
 *     _NtGdiStretchBlt@48 @ 0xA88AC (_NtGdiStretchBlt@48.c)
 *     _NtUserBitBltSysBmp@20 @ 0x15FB34 (_NtUserBitBltSysBmp@20.c)
 *     ?CreateScaledWindowShadowFromDIB@@YGPAUHBITMAP__@@PAUtagWND@@PAUHDC__@@J@Z @ 0x19C88E (-CreateScaledWindowShadowFromDIB@@YGPAUHBITMAP__@@PAUtagWND@@PAUHDC__@@J@Z.c)
 *     _DxgkEngBltViaGDI@52 @ 0x1D3921 (_DxgkEngBltViaGDI@52.c)
 * Callees:
 *     ?vOrder@ERECTL@@QAEXXZ @ 0x4E19C (-vOrder@ERECTL@@QAEXXZ.c)
 *     ?bEmpty@ERECTL@@QBEHXZ @ 0x4F396 (-bEmpty@ERECTL@@QBEHXZ.c)
 *     _NtGdiPatBlt@24 @ 0x56C7C (_NtGdiPatBlt@24.c)
 *     ?bSpDwmValidateSurface@@YGHAAVXDCOBJ@@HHHH@Z @ 0x590DC (-bSpDwmValidateSurface@@YGHAAVXDCOBJ@@HHHH@Z.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QAEHAAVXDCOBJ@@0H@Z @ 0x59880 (-bLock@DEVLOCKBLTOBJ@@QAEHAAVXDCOBJ@@0H@Z.c)
 *     ?vLock@XDCOBJ@@QAEXPAUHDC__@@@Z @ 0x5A410 (-vLock@XDCOBJ@@QAEXPAUHDC__@@@Z.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QAEHPAXJVXEPALOBJ@@111KKKK@Z @ 0x5D130 (-bInitXlateObj@EXLATEOBJ@@QAEHPAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ??1DEVLOCKBLTOBJ@@QAE@XZ @ 0x5DBF8 (--1DEVLOCKBLTOBJ@@QAE@XZ.c)
 *     ?vUnlockFast@XDCOBJ@@QAEXXZ @ 0x5E684 (-vUnlockFast@XDCOBJ@@QAEXXZ.c)
 *     ?pSurfaceEff@XDCOBJ@@QAEPAVSURFACE@@XZ @ 0x79420 (-pSurfaceEff@XDCOBJ@@QAEPAVSURFACE@@XZ.c)
 *     ?bValidSurf@XDCOBJ@@QAEHXZ @ 0x79436 (-bValidSurf@XDCOBJ@@QAEHXZ.c)
 *     ??1BLTRECORD@@QAE@XZ @ 0x79466 (--1BLTRECORD@@QAE@XZ.c)
 *     ?SrcSurfaceAccessCheck@@YGHPAVSURFACE@@@Z @ 0x794DE (-SrcSurfaceAccessCheck@@YGHPAVSURFACE@@@Z.c)
 *     ??0DEVLOCKBLTOBJ@@QAE@XZ @ 0x79500 (--0DEVLOCKBLTOBJ@@QAE@XZ.c)
 *     ?Src@BLTRECORD@@QAEHHHHH@Z @ 0x79610 (-Src@BLTRECORD@@QAEHHHHH@Z.c)
 *     ?Trg@BLTRECORD@@QAEHHHHH@Z @ 0x79650 (-Trg@BLTRECORD@@QAEHHHHH@Z.c)
 *     ?bXform@EXFORMOBJ@@QAEHAAVERECTL@@@Z @ 0x7988A (-bXform@EXFORMOBJ@@QAEHAAVERECTL@@@Z.c)
 *     ?DestSurfaceAccessCheck@@YGHPAVSURFACE@@@Z @ 0x798DC (-DestSurfaceAccessCheck@@YGHPAVSURFACE@@@Z.c)
 *     ?bEqualExtents@BLTRECORD@@QBEHXZ @ 0x798F8 (-bEqualExtents@BLTRECORD@@QBEHXZ.c)
 *     ?bBitBlt@BLTRECORD@@QAEHAAVDCOBJ@@0K@Z @ 0x79928 (-bBitBlt@BLTRECORD@@QAEHAAVDCOBJ@@0K@Z.c)
 *     ?bStretch@BLTRECORD@@QAEHAAVDCOBJ@@0KE@Z @ 0x7AB9E (-bStretch@BLTRECORD@@QAEHAAVDCOBJ@@0KE@Z.c)
 *     ?vAccumulate@XDCOBJ@@QAEXAAVERECTL@@@Z @ 0x7B8B6 (-vAccumulate@XDCOBJ@@QAEXAAVERECTL@@@Z.c)
 *     ??1UNDORENDERLOCKCOUNTS@@QAE@XZ @ 0x7B8E2 (--1UNDORENDERLOCKCOUNTS@@QAE@XZ.c)
 *     _GreMovePointer@16 @ 0x7BA8A (_GreMovePointer@16.c)
 *     ??0UNDORENDERLOCKCOUNTS@@QAE@XZ @ 0x7BD3E (--0UNDORENDERLOCKCOUNTS@@QAE@XZ.c)
 *     ?vQuickInit@EXFORMOBJ@@QAEXAAVXDCOBJ@@K@Z @ 0x943B6 (-vQuickInit@EXFORMOBJ@@QAEXAAVXDCOBJ@@K@Z.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QAEHAAVXDCOBJ@@H@Z @ 0xBD6B8 (-bLock@DEVLOCKBLTOBJ@@QAEHAAVXDCOBJ@@H@Z.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ?bRedirHooked@XDCOBJ@@QAEHXZ @ 0x1D48A1 (-bRedirHooked@XDCOBJ@@QAEHXZ.c)
 *     ?bRotate@BLTRECORD@@QAEHAAVDCOBJ@@0KE@Z @ 0x1EC095 (-bRotate@BLTRECORD@@QAEHAAVDCOBJ@@0KE@Z.c)
 *     ?TrgPlg@BLTRECORD@@QAEHHHHH@Z @ 0x1EF88A (-TrgPlg@BLTRECORD@@QAEHHHHH@Z.c)
 */

int __fastcall GreStretchBltInternal(
        HDC a1,
        int a2,
        struct XDCOBJ *a3,
        int a4,
        int a5,
        HDC a6,
        LONG a7,
        struct XDCOBJ *a8,
        int a9,
        int a10,
        int a11,
        int a12,
        char a13)
{
  int v13; // edi
  unsigned int v14; // ebx
  int v15; // edx
  unsigned int v16; // ecx
  unsigned int v17; // esi
  DC *v18; // eax
  int v19; // ecx
  DEVLOCKBLTOBJ *v20; // ecx
  int valid; // eax
  DC *v22; // ebx
  int v23; // ecx
  struct SURFACE *v24; // eax
  DC *v25; // edx
  _DWORD *v26; // esi
  unsigned int v27; // ebx
  int v28; // edi
  char v29; // bl
  BLTRECORD *v30; // ecx
  int v31; // eax
  int v32; // ebx
  DC *v33; // eax
  DC *v35; // eax
  int v36; // ebx
  SURFACE *v37; // ecx
  int v38; // ecx
  int v39; // edx
  DC *v40; // eax
  unsigned int v41; // ebx
  DC *v42; // ecx
  SURFACE *v43; // eax
  int v44; // ecx
  DC *v45; // eax
  DC *v46; // esi
  int v47; // esi
  DC *v48; // ecx
  int v49; // edx
  int v50; // eax
  struct ERECTL *v51; // ecx
  int v52; // [esp+24h] [ebp-1A8h]
  struct SURFACE *v53; // [esp+24h] [ebp-1A8h]
  int v54; // [esp+28h] [ebp-1A4h]
  DC *v55[3]; // [esp+30h] [ebp-19Ch] BYREF
  HDC v56; // [esp+3Ch] [ebp-190h]
  int v57; // [esp+40h] [ebp-18Ch]
  char v58[4]; // [esp+44h] [ebp-188h]
  DC *v59[3]; // [esp+48h] [ebp-184h] BYREF
  int v60; // [esp+54h] [ebp-178h]
  unsigned int v61; // [esp+58h] [ebp-174h]
  int v62; // [esp+5Ch] [ebp-170h]
  unsigned int v63; // [esp+60h] [ebp-16Ch]
  struct XDCOBJ *v64; // [esp+64h] [ebp-168h]
  int v65; // [esp+68h] [ebp-164h]
  HDC v66; // [esp+6Ch] [ebp-160h]
  int v67; // [esp+70h] [ebp-15Ch]
  unsigned int v68; // [esp+74h] [ebp-158h]
  unsigned int v69; // [esp+78h] [ebp-154h]
  int v70; // [esp+7Ch] [ebp-150h]
  _BYTE v71[12]; // [esp+80h] [ebp-14Ch] BYREF
  _BYTE v72[112]; // [esp+8Ch] [ebp-140h] BYREF
  _DWORD v73[4]; // [esp+FCh] [ebp-D0h] BYREF
  _DWORD v74[3]; // [esp+10Ch] [ebp-C0h] BYREF
  int v75[3]; // [esp+118h] [ebp-B4h] BYREF
  _DWORD *v76; // [esp+124h] [ebp-A8h]
  int v77; // [esp+128h] [ebp-A4h]
  HDC v78; // [esp+12Ch] [ebp-A0h]
  int v79; // [esp+130h] [ebp-9Ch]
  struct SURFACE *v80; // [esp+134h] [ebp-98h]
  struct SURFACE *v81; // [esp+138h] [ebp-94h]
  int v82; // [esp+13Ch] [ebp-90h]
  int v83; // [esp+140h] [ebp-8Ch] BYREF
  char *v84; // [esp+144h] [ebp-88h]
  char v85[32]; // [esp+188h] [ebp-44h] BYREF
  int v86; // [esp+1A8h] [ebp-24h]
  int v87; // [esp+1ACh] [ebp-20h]
  unsigned int v88; // [esp+1B0h] [ebp-1Ch]
  int v89; // [esp+1B4h] [ebp-18h]

  v64 = a3;
  v62 = a4;
  v56 = a1;
  v65 = a5;
  v66 = a6;
  v82 = 0;
  v13 = 0;
  v89 = 0;
  v69 = 0;
  v67 = a11;
  v14 = a11 & 0x7FFFFFFF;
  v60 = a2;
  *(_DWORD *)v58 = a11 & 0x40000000;
  if ( (a11 & 0x40000000) != 0 )
    v14 = a11 & 0x3FFFFFFF;
  v57 = (a11 & 0x40000000) != 0;
  v73[0] = v14 >> 8;
  v15 = (unsigned __int8)((unsigned __int16)(v14 >> 8) >> 8);
  v88 = ((v14 >> 8) | v14 & 0xFF0000) >> 8;
  v16 = ((v14 >> 8) | v14 & 0xFF0000) >> 16;
  v61 = (unsigned __int8)gajRop3[v16] | (unsigned __int8)gajRop3[v15];
  v17 = v61 & 0xD4;
  v63 = v17;
  if ( (v61 & 0xD4) == 0 && v15 == v16 )
  {
    v13 = NtGdiPatBlt(v56, v60, v64, v62, v65, (struct EXFORMOBJ *)v14);
    goto LABEL_52;
  }
  memset(v55, 0, sizeof(v55));
  XDCOBJ::vLock((XDCOBJ *)v55, v56);
  if ( (((unsigned __int8)gajRop3[LOBYTE(v73[0])] | (unsigned __int8)gajRop3[(unsigned __int8)v14]) & 2) != 0
    && v14 != 16711778
    && v14 != 66 )
  {
    bSpDwmValidateSurface(v60, (struct XDCOBJ *)v55, v64, v62, v65, v52, v54);
  }
  memset(v59, 0, sizeof(v59));
  XDCOBJ::vLock((XDCOBJ *)v59, v66);
  bSpDwmValidateSurface(a7, (struct XDCOBJ *)v59, a8, a9, a10, v52, v54);
  v18 = v55[0];
  if ( v55[0] )
  {
    if ( (*((_DWORD *)v55[0] + 6) & 0x10000) == 0 )
    {
      v19 = *((_DWORD *)v55[0] + 255);
      if ( (*(_DWORD *)(v19 + 184) & 0x1000) != 0 )
      {
        GreDCSelectBrush(v55[0], *(_DWORD *)(v19 + 188));
        v18 = v55[0];
      }
    }
    if ( v18 && (*((_DWORD *)v18 + 6) & 0x10000) == 0 && (v59[0] || !v17) )
    {
      DEVLOCKBLTOBJ::DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v72);
      if ( v17 )
        DEVLOCKBLTOBJ::bLock(v20, v55, v59, v57);
      else
        DEVLOCKBLTOBJ::bLock((DEVLOCKBLTOBJ *)v72, (struct XDCOBJ *)v55, (int)v20);
      if ( (v72[40] & 1) == 0 )
      {
        EngSetLastError(8u);
        goto LABEL_47;
      }
      valid = XDCOBJ::bValidSurf((XDCOBJ *)v55);
      v22 = v59[0];
      if ( !valid || !XDCOBJ::bValidSurf((XDCOBJ *)v59) || (*(_DWORD *)(*((_DWORD *)v22 + 126) + 72) & 0x10000000) != 0 )
      {
        v46 = v55[0];
        if ( !*((_DWORD *)v55[0] + 126) || !XDCOBJ::bValidSurf((XDCOBJ *)v59) )
        {
          if ( (*((_BYTE *)v46 + 24) & 0xE0) != 0 )
          {
            EXFORMOBJ::vQuickInit((EXFORMOBJ *)v71, (struct XDCOBJ *)v55, 0x204u);
            v73[0] = v60;
            v73[2] = v62 + v60;
            v73[1] = v64;
            v73[3] = (char *)v64 + v65;
            if ( EXFORMOBJ::bXform((EXFORMOBJ *)v71, (struct ERECTL *)v73) )
            {
              ERECTL::vOrder((ERECTL *)v73);
              XDCOBJ::vAccumulate((XDCOBJ *)v55, v51);
            }
          }
          v13 = 1;
          goto LABEL_47;
        }
        if ( (*((_BYTE *)v22 + 24) & 1) == 0 )
        {
LABEL_100:
          v13 = 0;
LABEL_47:
          DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v72);
          v33 = v59[0];
          goto LABEL_48;
        }
        v17 = v63;
      }
      if ( (!v17 || (XDCOBJ::pSurfaceEff((XDCOBJ *)v59), SrcSurfaceAccessCheck(v53)))
        && (XDCOBJ::pSurfaceEff((XDCOBJ *)v55), DestSurfaceAccessCheck(v53)) )
      {
        if ( (unsigned __int8)v88 == BYTE1(v88) )
        {
          if ( (v67 < 0 && (v23 = *((_DWORD *)v55[0] + 255), (*(_BYTE *)(v23 + 148) & 1) != 0)
             || (v23 = *((_DWORD *)v55[0] + 255), (*(_BYTE *)(v23 + 148) & 9) == 9))
            && v66 != v56 )
          {
            v47 = *(_DWORD *)(v23 + 308);
            v69 = DC::dwSetLayout(v55[0], -1, 0);
            v60 = v47 - v62 - v60;
            v68 = 0x80000000;
          }
          else
          {
            v68 = 0;
          }
          v66 = 0;
          v24 = XDCOBJ::pSurfaceEff((XDCOBJ *)v59);
          v67 = 0;
          v70 = 0;
          v73[0] = v24;
          v26 = (_DWORD *)*((_DWORD *)v24 + 7);
          if ( !*(_DWORD *)v58 )
            goto LABEL_26;
          v35 = v59[0];
          v56 = (HDC)*((_DWORD *)v59[0] + 6);
          if ( ((unsigned __int8)v56 & 1) != 0 )
          {
            v36 = *((_DWORD *)v59[0] + 9);
            if ( *(char *)(v36 + 24) >= 0 )
            {
              *(_DWORD *)v58 = *((_DWORD *)v25 + 9);
              if ( v36 != *(_DWORD *)v58 )
              {
                if ( !XDCOBJ::bRedirHooked((XDCOBJ *)v55) || v36 != *(_DWORD *)(*(_DWORD *)v58 + 2316) )
                  goto LABEL_123;
                v35 = v59[0];
              }
              if ( v26 )
              {
                v27 = v63;
                if ( v63 )
                {
                  if ( ((unsigned __int16)v56 & 0x4000) != 0 )
                  {
                    v37 = (SURFACE *)*((_DWORD *)v35 + 126);
                    if ( v37 != *((SURFACE **)v25 + 126) )
                    {
                      SURFACE::bUnMap(v37, 0, 0);
                      v25 = v55[0];
                    }
                  }
                }
                if ( (*((_DWORD *)v25 + 6) & 0x4000) != 0 )
                  SURFACE::bUnMap(*((SURFACE **)v25 + 126), 0, v25);
                GreAcquireSemaphore(v26[10]);
                EtwTraceGreLockAcquireSemaphoreExclusive(L"pdoSrc.hsemPointer()", v26[10], 4);
                v67 = v26[11];
                v70 = v26[12];
                UNDORENDERLOCKCOUNTS::UNDORENDERLOCKCOUNTS((UNDORENDERLOCKCOUNTS *)v71);
                if ( (a13 & 2) == 0 || !gbForceSoftwareCursor )
                  GreMovePointer(*(_DWORD *)(v73[0] + 28), -1, -1, 0);
                SURFACE::vSetIncludeSprites();
                v38 = 0;
                v56 = 0;
                if ( v27 && (*((_DWORD *)v59[0] + 6) & 0x4000) != 0 )
                {
                  v39 = *((_DWORD *)v59[0] + 126);
                  v40 = v55[0];
                  if ( v39 == *((_DWORD *)v55[0] + 126) )
                  {
LABEL_75:
                    if ( (*((_DWORD *)v40 + 6) & 0x4000) != 0 )
                    {
                      if ( SURFACE::Map(*((_DWORD *)v40 + 126), 0, v40) == 2 )
                      {
                        *((_DWORD *)v55[0] + 8) |= 1u;
                        v38 = 1;
                      }
                      else
                      {
                        v38 = (int)v56;
                      }
                    }
                    if ( v38 )
                    {
                      UNDORENDERLOCKCOUNTS::~UNDORENDERLOCKCOUNTS((UNDORENDERLOCKCOUNTS *)v71);
                      goto LABEL_44;
                    }
                    UNDORENDERLOCKCOUNTS::~UNDORENDERLOCKCOUNTS((UNDORENDERLOCKCOUNTS *)v71);
LABEL_27:
                    EXFORMOBJ::vInit((EXFORMOBJ *)v74, (struct XDCOBJ *)v55, 0x204u, 0);
                    v80 = XDCOBJ::pSurfaceEff((XDCOBJ *)v55);
                    v76 = (_DWORD *)*((_DWORD *)v80 + 22);
                    v77 = *((_DWORD *)v55[0] + 15);
                    EXFORMOBJ::vInit((EXFORMOBJ *)v75, (struct XDCOBJ *)v59, 0x204u, 0);
                    v28 = a12;
                    v81 = XDCOBJ::pSurfaceEff((XDCOBJ *)v59);
                    v78 = (HDC)*((_DWORD *)v81 + 22);
                    v56 = v78;
                    *(_DWORD *)v58 = *((_DWORD *)v59[0] + 15);
                    v79 = *(_DWORD *)v58;
                    if ( a12 == -1 )
                      v28 = *(_DWORD *)(*((_DWORD *)v59[0] + 255) + 200);
                    if ( (a13 & 1) != 0 )
                      v66 = *(HDC *)(*((_DWORD *)v55[0] + 255) + 264);
                    if ( EXLATEOBJ::bInitXlateObj(
                           &v83,
                           (int)v66,
                           *((_DWORD *)v55[0] + 20),
                           v56,
                           v76,
                           *(int *)v58,
                           v77,
                           *(_DWORD *)(*((_DWORD *)v55[0] + 255) + 204),
                           *(_DWORD *)(*((_DWORD *)v55[0] + 255) + 196),
                           v28,
                           0) )
                    {
                      v89 |= 2u;
                      if ( (v61 & 0xE8) != 0 )
                      {
                        v48 = v55[0];
                        v84 = (char *)v55[0] + 1184;
                        v49 = *((_DWORD *)v55[0] + 255);
                        v50 = *(_DWORD *)(v49 + 184);
                        if ( (v50 & 1) != 0 || (*((_BYTE *)v55[0] + 236) & 1) != 0 )
                        {
                          *(_DWORD *)(v49 + 184) = v50 & 0xFFFFFFFE;
                          *((_DWORD *)v55[0] + 59) &= ~1u;
                          EBRUSHOBJ::vInitBrush(v84, v55[0], *((_DWORD *)v55[0] + 23), v77, v76, v80, 1);
                          v48 = v55[0];
                        }
                        v86 = *((_DWORD *)v48 + 294);
                        v87 = *((_DWORD *)v48 + 295);
                      }
                      else
                      {
                        v84 = 0;
                      }
                      v82 = 0;
                      if ( (*(_BYTE *)(v75[0] + 56) & 1) != 0 && BLTRECORD::Src((BLTRECORD *)v74, a7, (int)a8, a9, a10) )
                      {
                        if ( v27 && ERECTL::bEmpty((ERECTL *)v85) )
                        {
                          v13 = 1;
                          goto LABEL_44;
                        }
                        if ( (*(_BYTE *)(v74[0] + 56) & 1) == 0 )
                        {
                          BLTRECORD::TrgPlg((BLTRECORD *)v74, v60, (int)v64, v62, v65);
                          v58[0] = *(_BYTE *)(*((_DWORD *)v55[0] + 255) + 235);
                          v31 = BLTRECORD::bRotate(
                                  (BLTRECORD *)v74,
                                  (struct DCOBJ *)v55,
                                  (struct DCOBJ *)v59,
                                  v61,
                                  v58[0]);
LABEL_43:
                          v13 = v31;
                          goto LABEL_44;
                        }
                        if ( BLTRECORD::Trg((BLTRECORD *)v74, v60, (int)v64, v62, v65) )
                        {
                          v29 = *(_BYTE *)(*((_DWORD *)v55[0] + 255) + 235);
                          if ( v29 == 4 || !BLTRECORD::bEqualExtents((BLTRECORD *)v74) )
                          {
                            v58[0] = v29;
                            v31 = BLTRECORD::bStretch(
                                    (BLTRECORD *)v74,
                                    (struct DCOBJ *)v55,
                                    (struct DCOBJ *)v59,
                                    v61,
                                    v29);
                          }
                          else
                          {
                            v31 = BLTRECORD::bBitBlt(v30, (struct DCOBJ *)v55, (struct DCOBJ *)v59, v61);
                          }
                          goto LABEL_43;
                        }
                      }
                      EngSetLastError(0x57u);
                    }
                    v13 = 0;
LABEL_44:
                    v32 = v57;
                    if ( v68 )
                      DC::dwSetLayout(v55[0], -1, v69);
                    if ( !v32 )
                      goto LABEL_47;
                    SURFACE::vClearIncludeSprites();
                    v41 = v63;
                    if ( v63 && (*((_DWORD *)v59[0] + 6) & 0x4000) != 0 )
                    {
                      v42 = v55[0];
                      v43 = (SURFACE *)*((_DWORD *)v59[0] + 126);
                      if ( v43 == *((SURFACE **)v55[0] + 126) )
                        goto LABEL_83;
                      SURFACE::bUnMap(v43, 0, 0);
                    }
                    v42 = v55[0];
LABEL_83:
                    if ( (*((_DWORD *)v42 + 6) & 0x4000) != 0 )
                      SURFACE::bUnMap(*((SURFACE **)v42 + 126), 0, v42);
                    UNDORENDERLOCKCOUNTS::UNDORENDERLOCKCOUNTS((UNDORENDERLOCKCOUNTS *)v71);
                    if ( (a13 & 2) == 0 || !gbForceSoftwareCursor )
                      GreMovePointer(*(_DWORD *)(v73[0] + 28), v67, v70, 0);
                    EtwTraceGreLockReleaseSemaphore(L"pdoSrc.hsemPointer()", v26[10]);
                    GreReleaseSemaphoreInternal(v26[10]);
                    if ( v41 && (*((_DWORD *)v59[0] + 6) & 0x4000) != 0 )
                    {
                      v44 = *((_DWORD *)v59[0] + 126);
                      v45 = v55[0];
                      if ( v44 == *((_DWORD *)v55[0] + 126) )
                        goto LABEL_93;
                      if ( SURFACE::Map(v44, 0, 0) == 2 )
                        *((_DWORD *)v59[0] + 8) |= 1u;
                    }
                    v45 = v55[0];
LABEL_93:
                    if ( (*((_DWORD *)v45 + 6) & 0x4000) != 0 && SURFACE::Map(*((_DWORD *)v45 + 126), 0, v45) == 2 )
                      *((_DWORD *)v55[0] + 8) |= 1u;
                    UNDORENDERLOCKCOUNTS::~UNDORENDERLOCKCOUNTS((UNDORENDERLOCKCOUNTS *)v71);
                    goto LABEL_47;
                  }
                  if ( SURFACE::Map(v39, 0, 0) == 2 )
                  {
                    *((_DWORD *)v59[0] + 8) |= 1u;
                    v38 = 1;
                    v56 = (HDC)1;
                  }
                  else
                  {
                    v38 = 0;
                  }
                }
                v40 = v55[0];
                goto LABEL_75;
              }
            }
          }
LABEL_123:
          v57 = 0;
LABEL_26:
          v27 = v63;
          goto LABEL_27;
        }
        EngSetLastError(0x57u);
      }
      else
      {
        EngSetLastError(5u);
      }
      goto LABEL_100;
    }
  }
  EngSetLastError(6u);
  v33 = v59[0];
  if ( !v17 || v59[0] )
  {
    v13 = 1;
LABEL_48:
    if ( v33 )
      XDCOBJ::vUnlockFast((XDCOBJ *)v59);
  }
  if ( v55[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v55);
LABEL_52:
  BLTRECORD::~BLTRECORD((BLTRECORD *)v74);
  return v13;
}
