/*
 * XREFs of GreMaskBlt @ 0x1C001456C
 * Callers:
 *     NtGdiMaskBlt @ 0x1C00144F0 (NtGdiMaskBlt.c)
 *     ?NtGdiFlushUserBatchInternal@@YAXPEAX@Z @ 0x1C007AD40 (-NtGdiFlushUserBatchInternal@@YAXPEAX@Z.c)
 *     NtGdiPatBlt @ 0x1C0084BB0 (NtGdiPatBlt.c)
 *     ?GrePolyPatBltInternal@@YAHAEAVXDCOBJ@@KPEAU_POLYPATBLT@@KKKKKK@Z @ 0x1C0086DC0 (-GrePolyPatBltInternal@@YAHAEAVXDCOBJ@@KPEAU_POLYPATBLT@@KKKKKK@Z.c)
 * Callees:
 *     ?Trg@BLTRECORD@@QEAAHHHHH@Z @ 0x1C0014A1C (-Trg@BLTRECORD@@QEAAHHHHH@Z.c)
 *     ?Src@BLTRECORD@@QEAAHHHHH@Z @ 0x1C0014A64 (-Src@BLTRECORD@@QEAAHHHHH@Z.c)
 *     ?SrcSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z @ 0x1C00177EC (-SrcSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z.c)
 *     ?pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ @ 0x1C0019348 (-pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ.c)
 *     ?bXform@EXFORMOBJ@@QEAAHAEAVERECTL@@@Z @ 0x1C00193E8 (-bXform@EXFORMOBJ@@QEAAHAEAVERECTL@@@Z.c)
 *     ?bValidSurf@XDCOBJ@@QEAAHXZ @ 0x1C001A4BC (-bValidSurf@XDCOBJ@@QEAAHXZ.c)
 *     ??1BLTRECORD@@QEAA@XZ @ 0x1C001A4EC (--1BLTRECORD@@QEAA@XZ.c)
 *     ??0DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C001A598 (--0DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ?DestSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z @ 0x1C001A61C (-DestSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C001ACC8 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?bEqualExtents@BLTRECORD@@QEBAHXZ @ 0x1C001AD0C (-bEqualExtents@BLTRECORD@@QEBAHXZ.c)
 *     ?bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0K@Z @ 0x1C001AD5C (-bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0K@Z.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C001BA8C (-vOrder@ERECTL@@QEAAXXZ.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@H@Z @ 0x1C001BD00 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@H@Z.c)
 *     ?bStretch@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z @ 0x1C001C2F4 (-bStretch@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0076414 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C0076510 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C0077CC0 (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z @ 0x1C00783D0 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C0079EB0 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x1C00843B8 (-bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C0085AA0 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C00F7658 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C00FEC0C (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C0138D20 (-vAccumulateTight@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 *     ?bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z @ 0x1C028C124 (-bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z.c)
 *     ?TrgPlg@BLTRECORD@@QEAAHHHHH@Z @ 0x1C02905D0 (-TrgPlg@BLTRECORD@@QEAAHHHHH@Z.c)
 *     ?Msk@BLTRECORD@@QEAAHHHHH@Z @ 0x1C0294554 (-Msk@BLTRECORD@@QEAAHHHHH@Z.c)
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
  unsigned int v18; // esi
  int v19; // r8d
  __int64 v20; // r8
  __int64 v21; // r9
  struct SURFACE *v22; // rax
  unsigned int v23; // eax
  int v25; // ecx
  ULONG v26; // ecx
  struct SURFACE *v27; // rax
  __int64 v28; // r8
  __int64 v29; // r9
  int v30; // edx
  int v31; // edx
  __int64 v32; // rdx
  int v33; // ecx
  _QWORD v34[2]; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v35[2]; // [rsp+70h] [rbp-90h] BYREF
  int v36; // [rsp+80h] [rbp-80h]
  int v37; // [rsp+84h] [rbp-7Ch]
  int v38; // [rsp+88h] [rbp-78h]
  _BYTE v39[16]; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v40[192]; // [rsp+A0h] [rbp-60h] BYREF
  HDC v41; // [rsp+160h] [rbp+60h] BYREF
  int v42; // [rsp+168h] [rbp+68h]
  int v43; // [rsp+16Ch] [rbp+6Ch]
  _QWORD v44[2]; // [rsp+170h] [rbp+70h] BYREF
  _QWORD v45[2]; // [rsp+180h] [rbp+80h] BYREF
  __int64 v46; // [rsp+190h] [rbp+90h]
  __int64 v47; // [rsp+198h] [rbp+98h]
  __int64 v48; // [rsp+1A0h] [rbp+A0h]
  __int64 v49; // [rsp+1A8h] [rbp+A8h]
  __int64 v50; // [rsp+1B0h] [rbp+B0h]
  struct SURFACE *v51; // [rsp+1B8h] [rbp+B8h]
  __int64 v52; // [rsp+1C0h] [rbp+C0h]
  _BYTE v53[8]; // [rsp+1C8h] [rbp+C8h] BYREF
  __int64 v54; // [rsp+1D0h] [rbp+D0h]
  int v55; // [rsp+220h] [rbp+120h]
  int v56; // [rsp+224h] [rbp+124h]
  int v57; // [rsp+228h] [rbp+128h]
  int v58; // [rsp+22Ch] [rbp+12Ch]
  int v59; // [rsp+230h] [rbp+130h]
  int v60; // [rsp+234h] [rbp+134h]
  int v61; // [rsp+238h] [rbp+138h]
  int v62; // [rsp+23Ch] [rbp+13Ch]
  __int64 v63; // [rsp+240h] [rbp+140h]
  unsigned int v64; // [rsp+248h] [rbp+148h]
  int v65; // [rsp+24Ch] [rbp+14Ch]

  v13 = a6;
  v37 = a2;
  v41 = a1;
  v36 = a3;
  v52 = 0LL;
  v65 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v34, a1);
  v15 = 0;
  if ( !(unsigned int)XDCOBJ::bValidSurf((XDCOBJ *)v34) )
  {
    if ( v34[0] )
    {
      v25 = *(_DWORD *)(v34[0] + 36LL);
      if ( (v25 & 0x10000) == 0 )
      {
        if ( (v25 & 0xE0) != 0 )
        {
          EXFORMOBJ::vQuickInit((EXFORMOBJ *)v39, (struct XDCOBJ *)v34, 0x204u);
          v41 = (HDC)__PAIR64__(v36, v37);
          v42 = a4 + v37;
          v43 = v36 + a5;
          if ( !(unsigned int)EXFORMOBJ::bXform((EXFORMOBJ *)v39, (struct ERECTL *)&v41) )
            goto LABEL_36;
          ERECTL::vOrder((ERECTL *)&v41);
          XDCOBJ::vAccumulate((XDCOBJ *)v34, (struct ERECTL *)&v41);
        }
        v15 = 1;
        goto LABEL_36;
      }
    }
    goto LABEL_46;
  }
  if ( (*(_DWORD *)(v34[0] + 36LL) & 0x10000) != 0 )
  {
LABEL_46:
    EngSetLastError(0x57u);
    goto LABEL_36;
  }
  v15 = 1;
  v16 = BYTE2(a12);
  if ( !a9 || BYTE2(a12) == HIBYTE(a12) )
  {
    v18 = gajRop3[BYTE2(a12)];
    v64 = BYTE2(a12) | (BYTE2(a12) << 8);
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
  v52 = v17;
  if ( *(_WORD *)(v17 + 100) || *(_DWORD *)(v17 + 96) != 1 )
  {
    EngSetLastError(6u);
    DEC_SHARE_REF_CNT(v17);
    goto LABEL_50;
  }
  INC_SHARE_REF_CNT(v17);
  v65 |= 0x30000u;
  v64 = HIWORD(a12);
  v18 = gajRop3[BYTE2(a12)] | gajRop3[(unsigned __int64)HIWORD(a12) >> 8] | 0x10000;
  DEC_SHARE_REF_CNT(v17);
LABEL_9:
  v35[1] = 0LL;
  v35[0] = 0LL;
  DEVLOCKBLTOBJ::DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v40);
  v38 = v18 & 0xD4;
  if ( (v18 & 0xD4) != 0 && (XDCOBJ::vLock((XDCOBJ *)v35, a6), v35[0]) )
  {
    bSpDwmValidateSurface((struct XDCOBJ *)v35, a7, a8, a4, a5);
    DEVLOCKBLTOBJ::bLock((DEVLOCKBLTOBJ *)v40, (struct XDCOBJ *)v34, (struct XDCOBJ *)v35, 0);
  }
  else
  {
    DEVLOCKBLTOBJ::bLock((DEVLOCKBLTOBJ *)v40, (struct XDCOBJ *)v34, v19);
  }
  if ( (v40[72] & 1) == 0 )
  {
    v23 = XDCOBJ::bFullScreen((XDCOBJ *)v34);
LABEL_33:
    v15 = v23;
    goto LABEL_34;
  }
  v50 = *(_QWORD *)(v34[0] + 496LL);
  EXFORMOBJ::vInit((EXFORMOBJ *)v44, (struct XDCOBJ *)v34, 0x204u, 0);
  v20 = v34[0];
  v46 = *(_QWORD *)(v50 + 128);
  v47 = *(_QWORD *)(v34[0] + 88LL);
  if ( v38 )
  {
    if ( !v35[0] )
      goto LABEL_54;
    if ( !(unsigned int)XDCOBJ::bValidSurf((XDCOBJ *)v35)
      || (*(_DWORD *)(*(_QWORD *)(v21 + 496) + 112LL) & 0x10000000) != 0 )
    {
      v27 = XDCOBJ::pSurfaceEff((XDCOBJ *)v35);
      if ( (v30 & *((_DWORD *)v27 + 28)) != 0 && *(_DWORD *)(v28 + 32) == 2 && (*(_DWORD *)(v28 + 36) & 0xE0) != 0 )
      {
        EXFORMOBJ::vQuickInit((EXFORMOBJ *)v39, (struct XDCOBJ *)v34, 0x204u);
        v41 = (HDC)__PAIR64__(v36, v37);
        v42 = a4 + v37;
        v43 = v36 + a5;
        if ( (unsigned int)EXFORMOBJ::bXform((EXFORMOBJ *)v39, (struct ERECTL *)&v41) )
        {
          ERECTL::vOrder((ERECTL *)&v41);
          XDCOBJ::vAccumulate((XDCOBJ *)v34, (struct ERECTL *)&v41);
          XDCOBJ::vAccumulateTight((XDCOBJ *)v34, (struct ERECTL *)&v41);
        }
        goto LABEL_34;
      }
      if ( (*(_DWORD *)(v29 + 36) & 1) == 0 )
        goto LABEL_39;
    }
    v22 = XDCOBJ::pSurfaceEff((XDCOBJ *)v35);
    if ( !(unsigned int)SrcSurfaceAccessCheck(v22) )
    {
LABEL_78:
      v26 = 5;
      goto LABEL_56;
    }
    v51 = XDCOBJ::pSurfaceEff((XDCOBJ *)v35);
    v48 = *((_QWORD *)v51 + 16);
    v49 = *(_QWORD *)(v35[0] + 88LL);
    EXFORMOBJ::vInit((EXFORMOBJ *)v45, (struct XDCOBJ *)v35, 0x204u, 0);
    if ( (*(_DWORD *)(v45[0] + 32LL) & 1) == 0 || !(unsigned int)BLTRECORD::Src((BLTRECORD *)v44, a7, a8, a4, a5) )
      goto LABEL_54;
    if ( (v18 & 0x10000) != 0 )
    {
      v59 = a10;
      v61 = a10 + v57 - v55;
      v60 = a11;
      v62 = a11 + v58 - v56;
    }
    if ( !(unsigned int)EXLATEOBJ::bInitXlateObj(
                          v53,
                          0LL,
                          *(unsigned int *)(v34[0] + 120LL),
                          v48,
                          v46,
                          v49,
                          v47,
                          *(_DWORD *)(*(_QWORD *)(v34[0] + 976LL) + 184LL),
                          *(_DWORD *)(*(_QWORD *)(v34[0] + 976LL) + 176LL),
                          a13,
                          0) )
      goto LABEL_39;
    v65 |= 2u;
    goto LABEL_24;
  }
  v51 = 0LL;
  if ( (v18 & 0x10000) != 0 )
  {
    if ( !a6 )
      v13 = v41;
    XDCOBJ::vLock((XDCOBJ *)v35, v13);
    if ( !v35[0] )
    {
      v26 = 6;
      goto LABEL_56;
    }
    EXFORMOBJ::vInit((EXFORMOBJ *)v45, (struct XDCOBJ *)v35, 0x204u, 0);
    if ( (*(_DWORD *)(v45[0] + 32LL) & 1) == 0 || !(unsigned int)BLTRECORD::Msk((BLTRECORD *)v44, a10, a11, a4, a5) )
      goto LABEL_54;
LABEL_24:
    v20 = v34[0];
  }
  if ( (v18 & 0xE8) != 0 )
  {
    v31 = *(_DWORD *)(*(_QWORD *)(v20 + 976) + 152LL);
    v54 = v20 + 1184;
    if ( (v31 & 0x1000) != 0 )
    {
      GreDCSelectBrush(v20, *(_QWORD *)(*(_QWORD *)(v20 + 976) + 160LL));
      v20 = v34[0];
    }
    v32 = *(_QWORD *)(v20 + 976);
    v33 = *(_DWORD *)(v32 + 152);
    if ( (v33 & 1) != 0 || (*(_DWORD *)(v20 + 316) & 1) != 0 )
    {
      *(_DWORD *)(v32 + 152) = v33 & 0xFFFFFFFE;
      *(_DWORD *)(v34[0] + 316LL) &= ~1u;
      EBRUSHOBJ::vInitBrush(v54, v34[0], *(_QWORD *)(v34[0] + 136LL), v47, v46, v50, 1);
      v20 = v34[0];
    }
    v63 = *(_QWORD *)(v20 + 1176);
  }
  else
  {
    v54 = 0LL;
  }
  if ( !(unsigned int)DestSurfaceAccessCheck(*(struct SURFACE **)(v20 + 496)) )
    goto LABEL_78;
  if ( (*(_DWORD *)(v44[0] + 32LL) & 1) != 0 )
  {
    if ( (unsigned int)BLTRECORD::Trg((BLTRECORD *)v44, v37, v36, a4, a5) )
    {
      if ( v38 && !(unsigned int)BLTRECORD::bEqualExtents((BLTRECORD *)v44) )
        v23 = BLTRECORD::bStretch(
                (BLTRECORD *)v44,
                (struct DCOBJ *)v34,
                (struct DCOBJ *)v35,
                v18,
                *(_BYTE *)(*(_QWORD *)(v34[0] + 976LL) + 215LL));
      else
        v23 = BLTRECORD::bBitBlt((BLTRECORD *)v44, (struct DCOBJ *)v34, (struct DCOBJ *)v35, v18);
      goto LABEL_33;
    }
    goto LABEL_54;
  }
  if ( (unsigned int)BLTRECORD::TrgPlg((BLTRECORD *)v44, v37, v36, a4, a5) )
  {
    v23 = BLTRECORD::bRotate(
            (BLTRECORD *)v44,
            (struct DCOBJ *)v34,
            (struct DCOBJ *)v35,
            v18,
            *(_BYTE *)(*(_QWORD *)(v34[0] + 976LL) + 215LL));
    goto LABEL_33;
  }
LABEL_54:
  v26 = 87;
LABEL_56:
  EngSetLastError(v26);
LABEL_39:
  v15 = 0;
LABEL_34:
  DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v40);
  if ( v35[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v35);
LABEL_36:
  if ( v34[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v34);
  BLTRECORD::~BLTRECORD((BLTRECORD *)v44);
  return v15;
}
