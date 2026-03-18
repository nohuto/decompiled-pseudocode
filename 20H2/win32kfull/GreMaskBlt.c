/*
 * XREFs of GreMaskBlt @ 0x1C0102C4C
 * Callers:
 *     ?GrePolyPatBltInternal@@YAHAEAVXDCOBJ@@KPEAU_POLYPATBLT@@KKKKKK@Z @ 0x1C009D960 (-GrePolyPatBltInternal@@YAHAEAVXDCOBJ@@KPEAU_POLYPATBLT@@KKKKKK@Z.c)
 *     ?NtGdiFlushUserBatchInternal@@YAXPEAX@Z @ 0x1C00A6200 (-NtGdiFlushUserBatchInternal@@YAXPEAX@Z.c)
 *     NtGdiPatBlt @ 0x1C00AF630 (NtGdiPatBlt.c)
 *     NtGdiMaskBlt @ 0x1C0102BD0 (NtGdiMaskBlt.c)
 * Callees:
 *     ?bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0K@Z @ 0x1C0067BF8 (-bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0K@Z.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C0068928 (-vOrder@ERECTL@@QEAAXXZ.c)
 *     ?bStretch@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z @ 0x1C00697CC (-bStretch@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z.c)
 *     ?bXform@EXFORMOBJ@@QEAAHAEAVERECTL@@@Z @ 0x1C00978D8 (-bXform@EXFORMOBJ@@QEAAHAEAVERECTL@@@Z.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@H@Z @ 0x1C00984B8 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@H@Z.c)
 *     ?pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ @ 0x1C0099080 (-pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ.c)
 *     ?bEqualExtents@BLTRECORD@@QEBAHXZ @ 0x1C009CC5C (-bEqualExtents@BLTRECORD@@QEBAHXZ.c)
 *     ?DestSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z @ 0x1C009CCAC (-DestSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C009D358 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ??0DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C009D39C (--0DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ??1BLTRECORD@@QEAA@XZ @ 0x1C009D430 (--1BLTRECORD@@QEAA@XZ.c)
 *     ?bValidSurf@XDCOBJ@@QEAAHXZ @ 0x1C009E20C (-bValidSurf@XDCOBJ@@QEAAHXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C00A1484 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C00A1580 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C00A37B0 (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C00A4450 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C00A5350 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x1C00B180C (-bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z @ 0x1C00B3D30 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C00F3124 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C00F8FAC (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ?Trg@BLTRECORD@@QEAAHHHHH@Z @ 0x1C0103114 (-Trg@BLTRECORD@@QEAAHHHHH@Z.c)
 *     ?Src@BLTRECORD@@QEAAHHHHH@Z @ 0x1C010315C (-Src@BLTRECORD@@QEAAHHHHH@Z.c)
 *     ?SrcSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z @ 0x1C01031A8 (-SrcSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C013AD18 (-vAccumulateTight@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 *     ?bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z @ 0x1C028ABD4 (-bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z.c)
 *     ?TrgPlg@BLTRECORD@@QEAAHHHHH@Z @ 0x1C028F180 (-TrgPlg@BLTRECORD@@QEAAHHHHH@Z.c)
 *     ?Msk@BLTRECORD@@QEAAHHHHH@Z @ 0x1C0293104 (-Msk@BLTRECORD@@QEAAHHHHH@Z.c)
 */

__int64 __fastcall GreMaskBlt(
        HDC a1,
        int a2,
        int a3,
        int a4,
        int a5,
        HDC a6,
        int a7,
        int a8,
        __int64 a9,
        int a10,
        int a11,
        unsigned int a12,
        int a13)
{
  HDC v13; // r15
  unsigned int v15; // edi
  __int64 v16; // rdx
  __int64 v17; // rbx
  int v18; // esi
  DC *v19; // r8
  __int64 v20; // r9
  struct SURFACE *v21; // rax
  __int64 v22; // rdx
  __int64 v23; // r8
  unsigned int v24; // eax
  int v26; // ecx
  ULONG v27; // ecx
  struct SURFACE *v28; // rax
  __int64 v29; // r9
  int v30; // edx
  __int64 v31; // rdx
  int v32; // ecx
  DC *v33[2]; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v34[2]; // [rsp+70h] [rbp-90h] BYREF
  int v35; // [rsp+80h] [rbp-80h]
  int v36; // [rsp+84h] [rbp-7Ch]
  int v37; // [rsp+88h] [rbp-78h]
  _BYTE v38[16]; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v39[224]; // [rsp+A0h] [rbp-60h] BYREF
  HDC v40; // [rsp+180h] [rbp+80h] BYREF
  int v41; // [rsp+188h] [rbp+88h]
  int v42; // [rsp+18Ch] [rbp+8Ch]
  _QWORD v43[2]; // [rsp+190h] [rbp+90h] BYREF
  _QWORD v44[2]; // [rsp+1A0h] [rbp+A0h] BYREF
  __int64 v45; // [rsp+1B0h] [rbp+B0h]
  __int64 v46; // [rsp+1B8h] [rbp+B8h]
  __int64 v47; // [rsp+1C0h] [rbp+C0h]
  __int64 v48; // [rsp+1C8h] [rbp+C8h]
  __int64 v49; // [rsp+1D0h] [rbp+D0h]
  struct SURFACE *v50; // [rsp+1D8h] [rbp+D8h]
  __int64 v51; // [rsp+1E0h] [rbp+E0h]
  __int64 v52; // [rsp+1E8h] [rbp+E8h] BYREF
  char *v53; // [rsp+1F0h] [rbp+F0h]
  int v54; // [rsp+240h] [rbp+140h]
  int v55; // [rsp+244h] [rbp+144h]
  int v56; // [rsp+248h] [rbp+148h]
  int v57; // [rsp+24Ch] [rbp+14Ch]
  int v58; // [rsp+250h] [rbp+150h]
  int v59; // [rsp+254h] [rbp+154h]
  int v60; // [rsp+258h] [rbp+158h]
  int v61; // [rsp+25Ch] [rbp+15Ch]
  __int64 v62; // [rsp+260h] [rbp+160h]
  unsigned int v63; // [rsp+268h] [rbp+168h]
  int v64; // [rsp+26Ch] [rbp+16Ch]

  v13 = a6;
  v36 = a2;
  v40 = a1;
  v35 = a3;
  v51 = 0LL;
  v64 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v33, a1);
  v15 = 0;
  if ( !(unsigned int)XDCOBJ::bValidSurf((XDCOBJ *)v33) )
  {
    if ( v33[0] )
    {
      v26 = *((_DWORD *)v33[0] + 9);
      if ( (v26 & 0x10000) == 0 )
      {
        if ( (v26 & 0xE0) != 0 )
        {
          EXFORMOBJ::vQuickInit((EXFORMOBJ *)v38, (struct XDCOBJ *)v33, 516);
          v40 = (HDC)__PAIR64__(v35, v36);
          v41 = a4 + v36;
          v42 = v35 + a5;
          if ( !(unsigned int)EXFORMOBJ::bXform((EXFORMOBJ *)v38, (struct _POINTL *)&v40) )
            goto LABEL_36;
          ERECTL::vOrder((ERECTL *)&v40);
          XDCOBJ::vAccumulate((XDCOBJ *)v33, (struct ERECTL *)&v40);
        }
        v15 = 1;
        goto LABEL_36;
      }
    }
    goto LABEL_46;
  }
  if ( (*((_DWORD *)v33[0] + 9) & 0x10000) != 0 )
  {
LABEL_46:
    EngSetLastError(0x57u);
    goto LABEL_36;
  }
  v15 = 1;
  v16 = BYTE2(a12);
  if ( !a9 || BYTE2(a12) == HIBYTE(a12) )
  {
    v18 = (unsigned __int8)gajRop3[BYTE2(a12)];
    v63 = BYTE2(a12) | (BYTE2(a12) << 8);
    goto LABEL_9;
  }
  LOBYTE(v16) = 5;
  v17 = HmgShareLockCheck(a9, v16);
  if ( !v17 )
  {
    EngSetLastError(6u);
LABEL_50:
    v15 = 0;
    goto LABEL_36;
  }
  v51 = v17;
  if ( *(_WORD *)(v17 + 100) || *(_DWORD *)(v17 + 96) != 1 )
  {
    EngSetLastError(6u);
    DEC_SHARE_REF_CNT(v17);
    goto LABEL_50;
  }
  INC_SHARE_REF_CNT(v17);
  v64 |= 0x30000u;
  v63 = HIWORD(a12);
  v18 = (unsigned __int8)gajRop3[BYTE2(a12)] | (unsigned __int8)gajRop3[(unsigned __int64)HIWORD(a12) >> 8] | 0x10000;
  DEC_SHARE_REF_CNT(v17);
LABEL_9:
  v34[1] = 0LL;
  v34[0] = 0LL;
  DEVLOCKBLTOBJ::DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v39);
  v37 = v18 & 0xD4;
  if ( (v18 & 0xD4) != 0 && (XDCOBJ::vLock((XDCOBJ *)v34, a6), v34[0]) )
  {
    bSpDwmValidateSurface((struct XDCOBJ *)v34, a7, a8, a4, a5);
    DEVLOCKBLTOBJ::bLock((DEVLOCKBLTOBJ *)v39, (struct XDCOBJ *)v33, (struct XDCOBJ *)v34);
  }
  else
  {
    DEVLOCKBLTOBJ::bLock((DEVLOCKBLTOBJ *)v39, (struct XDCOBJ *)v33);
  }
  if ( (v39[112] & 1) == 0 )
  {
    v24 = XDCOBJ::bFullScreen((XDCOBJ *)v33);
LABEL_33:
    v15 = v24;
    goto LABEL_34;
  }
  v49 = *((_QWORD *)v33[0] + 62);
  EXFORMOBJ::vInit((EXFORMOBJ *)v43, (struct XDCOBJ *)v33, 0x204u, 0);
  v19 = v33[0];
  v45 = *(_QWORD *)(v49 + 128);
  v46 = *((_QWORD *)v33[0] + 11);
  if ( v37 )
  {
    if ( !v34[0] )
      goto LABEL_54;
    if ( !(unsigned int)XDCOBJ::bValidSurf((XDCOBJ *)v34)
      || (*(_DWORD *)(*(_QWORD *)(v20 + 496) + 112LL) & 0x10000000) != 0 )
    {
      v28 = XDCOBJ::pSurfaceEff((XDCOBJ *)v34);
      if ( ((unsigned int)v22 & *((_DWORD *)v28 + 28)) != 0
        && *(_DWORD *)(v23 + 32) == 2
        && (*(_DWORD *)(v23 + 36) & 0xE0) != 0 )
      {
        EXFORMOBJ::vQuickInit((EXFORMOBJ *)v38, (struct XDCOBJ *)v33, 516);
        v40 = (HDC)__PAIR64__(v35, v36);
        v41 = a4 + v36;
        v42 = v35 + a5;
        if ( (unsigned int)EXFORMOBJ::bXform((EXFORMOBJ *)v38, (struct _POINTL *)&v40) )
        {
          ERECTL::vOrder((ERECTL *)&v40);
          XDCOBJ::vAccumulate((XDCOBJ *)v33, (struct ERECTL *)&v40);
          XDCOBJ::vAccumulateTight((XDCOBJ *)v33, (struct ERECTL *)&v40);
        }
        goto LABEL_34;
      }
      if ( (*(_DWORD *)(v29 + 36) & 1) == 0 )
        goto LABEL_39;
    }
    v21 = XDCOBJ::pSurfaceEff((XDCOBJ *)v34);
    if ( !(unsigned int)SrcSurfaceAccessCheck(v21) )
    {
LABEL_78:
      v27 = 5;
      goto LABEL_56;
    }
    v50 = XDCOBJ::pSurfaceEff((XDCOBJ *)v34);
    v47 = *((_QWORD *)v50 + 16);
    v48 = *(_QWORD *)(v34[0] + 88LL);
    EXFORMOBJ::vInit((EXFORMOBJ *)v44, (struct XDCOBJ *)v34, 0x204u, 0);
    if ( (*(_DWORD *)(v44[0] + 32LL) & 1) == 0 || !(unsigned int)BLTRECORD::Src((BLTRECORD *)v43, a7, a8, a4, a5) )
      goto LABEL_54;
    if ( (v18 & 0x10000) != 0 )
    {
      v58 = a10;
      v60 = a10 + v56 - v54;
      v59 = a11;
      v61 = a11 + v57 - v55;
    }
    if ( !(unsigned int)EXLATEOBJ::bInitXlateObj(
                          &v52,
                          0LL,
                          *((_DWORD *)v33[0] + 30),
                          v47,
                          v45,
                          v48,
                          v46,
                          *(_DWORD *)(*((_QWORD *)v33[0] + 122) + 184LL),
                          *(_DWORD *)(*((_QWORD *)v33[0] + 122) + 176LL),
                          a13,
                          0) )
      goto LABEL_39;
    v64 |= 2u;
    goto LABEL_24;
  }
  v50 = 0LL;
  if ( (v18 & 0x10000) != 0 )
  {
    if ( !a6 )
      v13 = v40;
    XDCOBJ::vLock((XDCOBJ *)v34, v13);
    if ( !v34[0] )
    {
      v27 = 6;
      goto LABEL_56;
    }
    EXFORMOBJ::vInit((EXFORMOBJ *)v44, (struct XDCOBJ *)v34, 0x204u, 0);
    if ( (*(_DWORD *)(v44[0] + 32LL) & 1) == 0 || !(unsigned int)BLTRECORD::Msk((BLTRECORD *)v43, a10, a11, a4, a5) )
      goto LABEL_54;
LABEL_24:
    v19 = v33[0];
  }
  if ( (v18 & 0xE8) != 0 )
  {
    v30 = *(_DWORD *)(*((_QWORD *)v19 + 122) + 152LL);
    v53 = (char *)v19 + 1184;
    if ( (v30 & 0x1000) != 0 )
    {
      GreDCSelectBrush(v19, *(_QWORD *)(*((_QWORD *)v19 + 122) + 160LL));
      v19 = v33[0];
    }
    v31 = *((_QWORD *)v19 + 122);
    v32 = *(_DWORD *)(v31 + 152);
    if ( (v32 & 1) != 0 || (*((_DWORD *)v19 + 79) & 1) != 0 )
    {
      *(_DWORD *)(v31 + 152) = v32 & 0xFFFFFFFE;
      *((_DWORD *)v33[0] + 79) &= ~1u;
      EBRUSHOBJ::vInitBrush(v53, v33[0], *((_QWORD *)v33[0] + 17), v46, v45, v49, 1);
      v19 = v33[0];
    }
    v62 = *((_QWORD *)v19 + 147);
  }
  else
  {
    v53 = 0LL;
  }
  if ( !(unsigned int)DestSurfaceAccessCheck(*((struct SURFACE **)v19 + 62)) )
    goto LABEL_78;
  if ( (*(_DWORD *)(v43[0] + 32LL) & 1) != 0 )
  {
    if ( (unsigned int)BLTRECORD::Trg((BLTRECORD *)v43, v36, v35, a4, a5) )
    {
      if ( v37 && !BLTRECORD::bEqualExtents((BLTRECORD *)v43) )
        v24 = BLTRECORD::bStretch(
                (BLTRECORD *)v43,
                (struct DCOBJ *)v33,
                (struct DCOBJ *)v34,
                v18,
                *(_BYTE *)(*((_QWORD *)v33[0] + 122) + 215LL));
      else
        v24 = BLTRECORD::bBitBlt((BLTRECORD *)v43, v33, (struct DCOBJ *)v34, v18);
      goto LABEL_33;
    }
    goto LABEL_54;
  }
  if ( (unsigned int)BLTRECORD::TrgPlg((BLTRECORD *)v43, v36, v35, a4, a5) )
  {
    v24 = BLTRECORD::bRotate(
            (BLTRECORD *)v43,
            (struct DCOBJ *)v33,
            (struct DCOBJ *)v34,
            v18,
            *(_BYTE *)(*((_QWORD *)v33[0] + 122) + 215LL));
    goto LABEL_33;
  }
LABEL_54:
  v27 = 87;
LABEL_56:
  EngSetLastError(v27);
LABEL_39:
  v15 = 0;
LABEL_34:
  DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v39, v22, (SURFACE **)v23);
  if ( v34[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v34);
LABEL_36:
  if ( v33[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v33);
  BLTRECORD::~BLTRECORD((BLTRECORD *)v43);
  return v15;
}
