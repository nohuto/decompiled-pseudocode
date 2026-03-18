/*
 * XREFs of _GreMaskBlt@52 @ 0x7A502
 * Callers:
 *     _NtGdiPatBlt@24 @ 0x56C7C (_NtGdiPatBlt@24.c)
 *     ?GrePolyPatBltInternal@@YGHAAVXDCOBJ@@KPAU_POLYPATBLT@@KKKKKK@Z @ 0x57040 (-GrePolyPatBltInternal@@YGHAAVXDCOBJ@@KPAU_POLYPATBLT@@KKKKKK@Z.c)
 *     ?NtGdiFlushUserBatchInternal@@YGXPAX@Z @ 0x5EBA0 (-NtGdiFlushUserBatchInternal@@YGXPAX@Z.c)
 *     _NtGdiMaskBlt@52 @ 0x7B7A8 (_NtGdiMaskBlt@52.c)
 * Callees:
 *     ?vOrder@ERECTL@@QAEXXZ @ 0x4E19C (-vOrder@ERECTL@@QAEXXZ.c)
 *     ?bEmpty@ERECTL@@QBEHXZ @ 0x4F396 (-bEmpty@ERECTL@@QBEHXZ.c)
 *     ?bSpDwmValidateSurface@@YGHAAVXDCOBJ@@HHHH@Z @ 0x590DC (-bSpDwmValidateSurface@@YGHAAVXDCOBJ@@HHHH@Z.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QAEHAAVXDCOBJ@@0H@Z @ 0x59880 (-bLock@DEVLOCKBLTOBJ@@QAEHAAVXDCOBJ@@0H@Z.c)
 *     ?vLock@XDCOBJ@@QAEXPAUHDC__@@@Z @ 0x5A410 (-vLock@XDCOBJ@@QAEXPAUHDC__@@@Z.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QAEHPAXJVXEPALOBJ@@111KKKK@Z @ 0x5D130 (-bInitXlateObj@EXLATEOBJ@@QAEHPAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ??1DEVLOCKBLTOBJ@@QAE@XZ @ 0x5DBF8 (--1DEVLOCKBLTOBJ@@QAE@XZ.c)
 *     ?vUnlockFast@XDCOBJ@@QAEXXZ @ 0x5E684 (-vUnlockFast@XDCOBJ@@QAEXXZ.c)
 *     ?bFullScreen@XDCOBJ@@QAEHXZ @ 0x78918 (-bFullScreen@XDCOBJ@@QAEHXZ.c)
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
 *     ??_5ERECTL@@QAEXABU_RECTL@@@Z @ 0x93A0E (--_5ERECTL@@QAEXABU_RECTL@@@Z.c)
 *     ?vQuickInit@EXFORMOBJ@@QAEXAAVXDCOBJ@@K@Z @ 0x943B6 (-vQuickInit@EXFORMOBJ@@QAEXAAVXDCOBJ@@K@Z.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QAEHAAVXDCOBJ@@H@Z @ 0xBD6B8 (-bLock@DEVLOCKBLTOBJ@@QAEHAAVXDCOBJ@@H@Z.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ?bRotate@BLTRECORD@@QAEHAAVDCOBJ@@0KE@Z @ 0x1EC095 (-bRotate@BLTRECORD@@QAEHAAVDCOBJ@@0KE@Z.c)
 *     ?TrgPlg@BLTRECORD@@QAEHHHHH@Z @ 0x1EF88A (-TrgPlg@BLTRECORD@@QAEHHHHH@Z.c)
 *     ?Msk@BLTRECORD@@QAEHHHHH@Z @ 0x1F47CB (-Msk@BLTRECORD@@QAEHHHHH@Z.c)
 */

int __fastcall GreMaskBlt(
        HDC a1,
        int a2,
        LONG a3,
        int a4,
        int a5,
        HDC a6,
        LONG a7,
        struct XDCOBJ *a8,
        int a9,
        int a10,
        int a11,
        unsigned int a12,
        int a13)
{
  HDC v13; // esi
  int v14; // edi
  int v15; // edx
  int v16; // eax
  int v17; // esi
  int v18; // ebx
  int v19; // ecx
  DC *v20; // esi
  struct SURFACE *v21; // eax
  struct XDCOBJ *v22; // ecx
  int v23; // eax
  int v25; // eax
  struct ERECTL *v26; // ecx
  int v27; // edx
  struct ERECTL *v28; // ecx
  struct _POINTL *v29; // ecx
  HDC v30; // eax
  int v31; // ecx
  int v32; // ecx
  int v33; // eax
  int v34; // [esp+24h] [ebp-190h]
  int v35; // [esp+28h] [ebp-18Ch]
  DC *v36[3]; // [esp+30h] [ebp-184h] BYREF
  int v37; // [esp+3Ch] [ebp-178h]
  int v38; // [esp+40h] [ebp-174h]
  DC *v39[3]; // [esp+44h] [ebp-170h] BYREF
  int v40; // [esp+50h] [ebp-164h]
  char v41[4]; // [esp+54h] [ebp-160h]
  int v42; // [esp+58h] [ebp-15Ch]
  HDC v43; // [esp+5Ch] [ebp-158h]
  unsigned int v44; // [esp+60h] [ebp-154h]
  int v45; // [esp+64h] [ebp-150h]
  _BYTE v46[12]; // [esp+68h] [ebp-14Ch] BYREF
  _BYTE v47[112]; // [esp+74h] [ebp-140h] BYREF
  struct _POINTL v48; // [esp+E4h] [ebp-D0h] BYREF
  int v49; // [esp+ECh] [ebp-C8h]
  LONG v50; // [esp+F0h] [ebp-C4h]
  _DWORD v51[3]; // [esp+F4h] [ebp-C0h] BYREF
  _DWORD v52[3]; // [esp+100h] [ebp-B4h] BYREF
  _DWORD *v53; // [esp+10Ch] [ebp-A8h]
  int v54; // [esp+110h] [ebp-A4h]
  _DWORD *v55; // [esp+114h] [ebp-A0h]
  int v56; // [esp+118h] [ebp-9Ch]
  int v57; // [esp+11Ch] [ebp-98h]
  struct SURFACE *v58; // [esp+120h] [ebp-94h]
  int v59; // [esp+124h] [ebp-90h]
  int v60; // [esp+128h] [ebp-8Ch] BYREF
  char *v61; // [esp+12Ch] [ebp-88h]
  int v62; // [esp+170h] [ebp-44h]
  int v63; // [esp+174h] [ebp-40h]
  int v64; // [esp+178h] [ebp-3Ch]
  int v65; // [esp+17Ch] [ebp-38h]
  int v66; // [esp+180h] [ebp-34h]
  int v67; // [esp+184h] [ebp-30h]
  int v68; // [esp+188h] [ebp-2Ch]
  int v69; // [esp+18Ch] [ebp-28h]
  int v70; // [esp+190h] [ebp-24h]
  int v71; // [esp+194h] [ebp-20h]
  unsigned int v72; // [esp+198h] [ebp-1Ch]
  int v73; // [esp+19Ch] [ebp-18h]

  v13 = a6;
  v38 = a4;
  v14 = 0;
  *(_DWORD *)v41 = a1;
  v37 = a5;
  v42 = a2;
  v43 = a6;
  v40 = a9;
  v59 = 0;
  v73 = 0;
  memset(v36, 0, sizeof(v36));
  XDCOBJ::vLock((XDCOBJ *)v36, a1);
  if ( XDCOBJ::bValidSurf(v36) )
  {
    if ( (*((_DWORD *)v36[0] + 6) & 0x10000) == 0 )
    {
      v45 = BYTE2(a12);
      if ( !v40 || (v44 = HIBYTE(a12), BYTE2(a12) == HIBYTE(a12)) )
      {
        v18 = (unsigned __int8)gajRop3[BYTE2(a12)];
        v72 = BYTE2(a12) | (BYTE2(a12) << 8);
      }
      else
      {
        LOBYTE(v15) = 5;
        v16 = HmgShareLockCheck(v40, v15);
        v17 = v16;
        if ( !v16 )
        {
          EngSetLastError(6u);
          goto LABEL_36;
        }
        v59 = v16;
        if ( *(_WORD *)(v16 + 64) || *(_DWORD *)(v16 + 60) != 1 )
        {
          EngSetLastError(6u);
          DEC_SHARE_REF_CNT(v17);
          goto LABEL_36;
        }
        INC_SHARE_REF_CNT(v16);
        v73 |= 0x30000u;
        v72 = HIWORD(a12);
        v18 = (unsigned __int8)gajRop3[v45] | (unsigned __int8)gajRop3[v44] | 0x10000;
        DEC_SHARE_REF_CNT(v17);
        v13 = v43;
      }
      memset(v39, 0, sizeof(v39));
      DEVLOCKBLTOBJ::DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v47);
      v40 = v18 & 0xD4;
      if ( (v18 & 0xD4) != 0 && (XDCOBJ::vLock((XDCOBJ *)v39, v13), v39[0]) )
      {
        bSpDwmValidateSurface(a7, (struct XDCOBJ *)v39, a8, v38, v37, v34, v35);
        DEVLOCKBLTOBJ::bLock((DEVLOCKBLTOBJ *)v47, v36, v39, 0);
      }
      else
      {
        DEVLOCKBLTOBJ::bLock((DEVLOCKBLTOBJ *)v47, (struct XDCOBJ *)v36, v19);
      }
      if ( (v47[40] & 1) == 0 )
      {
        v23 = XDCOBJ::bFullScreen(v36);
LABEL_33:
        v14 = v23;
        goto LABEL_34;
      }
      v57 = *((_DWORD *)v36[0] + 126);
      EXFORMOBJ::vInit((EXFORMOBJ *)v51, (struct XDCOBJ *)v36, 0x204u, 0);
      v20 = v36[0];
      v53 = *(_DWORD **)(v57 + 88);
      v54 = *((_DWORD *)v36[0] + 15);
      if ( v40 )
      {
        if ( !v39[0] )
          goto LABEL_39;
        if ( XDCOBJ::bValidSurf(v39) && (*(_DWORD *)(*((_DWORD *)v39[0] + 126) + 72) & 0x10000000) == 0 )
          goto LABEL_17;
        if ( (*((_DWORD *)XDCOBJ::pSurfaceEff((XDCOBJ *)v39) + 18) & 0x10000000) != 0
          && *((_DWORD *)v20 + 5) == 2
          && (*((_BYTE *)v20 + 24) & 0xE0) != 0 )
        {
          EXFORMOBJ::vQuickInit((EXFORMOBJ *)v46, (struct XDCOBJ *)v36, 0x204u);
          v49 = v42 + v38;
          v48.y = a3;
          v50 = a3 + v37;
          v48.x = v42;
          if ( EXFORMOBJ::bXform((EXFORMOBJ *)v46, &v48) )
          {
            ERECTL::vOrder((ERECTL *)&v48);
            XDCOBJ::vAccumulate((XDCOBJ *)v36, v28);
            if ( (*((_BYTE *)v36[0] + 24) & 0x40) != 0 )
            {
              if ( ERECTL::bEmpty((DC *)((char *)v36[0] + 1112)) )
              {
                *v29 = v48;
                v29[1].x = v49;
                v29[1].y = v50;
              }
              else
              {
                ERECTL::operator|=(&v48);
              }
            }
          }
          v14 = 1;
          goto LABEL_34;
        }
        if ( (*(_BYTE *)(v27 + 24) & 1) != 0 )
        {
LABEL_17:
          v21 = XDCOBJ::pSurfaceEff((XDCOBJ *)v39);
          if ( !SrcSurfaceAccessCheck(v21) )
          {
LABEL_79:
            EngSetLastError(5u);
            goto LABEL_34;
          }
          v58 = XDCOBJ::pSurfaceEff((XDCOBJ *)v39);
          v55 = (_DWORD *)*((_DWORD *)v58 + 22);
          v56 = *((_DWORD *)v39[0] + 15);
          EXFORMOBJ::vInit((EXFORMOBJ *)v52, v22, 0x204u, 0);
          if ( (*(_BYTE *)(v52[0] + 56) & 1) == 0 || !BLTRECORD::Src((BLTRECORD *)v51, a7, (int)a8, v38, v37) )
            goto LABEL_39;
          if ( (v18 & 0x10000) != 0 )
          {
            v68 = a10 + v64 - v62;
            v66 = a10;
            v67 = a11;
            v69 = a11 + v65 - v63;
          }
          if ( !EXLATEOBJ::bInitXlateObj(
                  &v60,
                  0,
                  *((_DWORD *)v36[0] + 20),
                  v55,
                  v53,
                  v56,
                  v54,
                  *(_DWORD *)(*((_DWORD *)v36[0] + 255) + 204),
                  *(_DWORD *)(*((_DWORD *)v36[0] + 255) + 196),
                  a13,
                  0) )
            goto LABEL_34;
          v73 |= 2u;
          goto LABEL_24;
        }
      }
      else
      {
        v58 = 0;
        if ( (v18 & 0x10000) == 0 )
        {
LABEL_25:
          if ( (v18 & 0xE8) != 0 )
          {
            v31 = *(_DWORD *)(*((_DWORD *)v20 + 255) + 184);
            v61 = (char *)v20 + 1184;
            if ( (v31 & 0x1000) != 0 )
            {
              GreDCSelectBrush(v20, *(_DWORD *)(*((_DWORD *)v20 + 255) + 188));
              v20 = v36[0];
            }
            v32 = *((_DWORD *)v20 + 255);
            v33 = *(_DWORD *)(v32 + 184);
            if ( (v33 & 1) != 0 || (*((_BYTE *)v20 + 236) & 1) != 0 )
            {
              *(_DWORD *)(v32 + 184) = v33 & 0xFFFFFFFE;
              *((_DWORD *)v36[0] + 59) &= ~1u;
              EBRUSHOBJ::vInitBrush(v61, v36[0], *((_DWORD *)v36[0] + 23), v54, v53, v57, 1);
              v20 = v36[0];
            }
            v70 = *((_DWORD *)v20 + 294);
            v71 = *((_DWORD *)v20 + 295);
          }
          else
          {
            v61 = 0;
          }
          if ( DestSurfaceAccessCheck(*((_DWORD **)v20 + 126)) )
          {
            if ( (*(_BYTE *)(v51[0] + 56) & 1) != 0 )
            {
              if ( BLTRECORD::Trg((BLTRECORD *)v51, v42, a3, v38, v37) )
              {
                if ( v40 && !BLTRECORD::bEqualExtents((BLTRECORD *)v51) )
                {
                  v41[0] = *(_BYTE *)(*((_DWORD *)v36[0] + 255) + 235);
                  v23 = BLTRECORD::bStretch((BLTRECORD *)v51, (struct DCOBJ *)v36, (struct DCOBJ *)v39, v18, v41[0]);
                }
                else
                {
                  v23 = BLTRECORD::bBitBlt((BLTRECORD *)v51, (struct DCOBJ *)v36, (struct DCOBJ *)v39, v18);
                }
                goto LABEL_33;
              }
              goto LABEL_39;
            }
            if ( BLTRECORD::TrgPlg((BLTRECORD *)v51, v42, a3, v38, v37) )
            {
              v41[0] = *(_BYTE *)(*((_DWORD *)v36[0] + 255) + 235);
              v23 = BLTRECORD::bRotate((BLTRECORD *)v51, (struct DCOBJ *)v36, (struct DCOBJ *)v39, v18, v41[0]);
              goto LABEL_33;
            }
LABEL_39:
            EngSetLastError(0x57u);
            goto LABEL_34;
          }
          goto LABEL_79;
        }
        v30 = v43;
        if ( !v43 )
          v30 = *(HDC *)v41;
        XDCOBJ::vLock((XDCOBJ *)v39, v30);
        if ( v39[0] )
        {
          EXFORMOBJ::vInit((EXFORMOBJ *)v52, (struct XDCOBJ *)v39, 0x204u, 0);
          if ( (*(_BYTE *)(v52[0] + 56) & 1) == 0 || !BLTRECORD::Msk((BLTRECORD *)v51, a10, a11, v38, v37) )
            goto LABEL_39;
LABEL_24:
          v20 = v36[0];
          goto LABEL_25;
        }
        EngSetLastError(6u);
      }
LABEL_34:
      DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v47);
      if ( v39[0] )
        XDCOBJ::vUnlockFast((XDCOBJ *)v39);
      goto LABEL_36;
    }
LABEL_46:
    EngSetLastError(0x57u);
    goto LABEL_36;
  }
  if ( !v36[0] )
    goto LABEL_46;
  v25 = *((_DWORD *)v36[0] + 6);
  if ( (v25 & 0x10000) != 0 )
    goto LABEL_46;
  if ( (v25 & 0xE0) != 0 )
  {
    EXFORMOBJ::vQuickInit((EXFORMOBJ *)v46, (struct XDCOBJ *)v36, 0x204u);
    v49 = v42 + v38;
    v48.y = a3;
    v50 = a3 + v37;
    v48.x = v42;
    if ( !EXFORMOBJ::bXform((EXFORMOBJ *)v46, &v48) )
      goto LABEL_36;
    ERECTL::vOrder((ERECTL *)&v48);
    XDCOBJ::vAccumulate((XDCOBJ *)v36, v26);
  }
  v14 = 1;
LABEL_36:
  if ( v36[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v36);
  BLTRECORD::~BLTRECORD((BLTRECORD *)v51);
  return v14;
}
