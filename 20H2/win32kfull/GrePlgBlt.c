/*
 * XREFs of GrePlgBlt @ 0x1C028CF70
 * Callers:
 *     NtGdiPlgBlt @ 0x1C028D5A0 (NtGdiPlgBlt.c)
 * Callees:
 *     ?bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0K@Z @ 0x1C0067BF8 (-bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0K@Z.c)
 *     ?bStretch@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z @ 0x1C00697CC (-bStretch@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z.c)
 *     ?pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ @ 0x1C0099080 (-pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ.c)
 *     ?bEqualExtents@BLTRECORD@@QEBAHXZ @ 0x1C009CC5C (-bEqualExtents@BLTRECORD@@QEBAHXZ.c)
 *     ?DestSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z @ 0x1C009CCAC (-DestSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C009D358 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ??1BLTRECORD@@QEAA@XZ @ 0x1C009D430 (--1BLTRECORD@@QEAA@XZ.c)
 *     ?bValidSurf@XDCOBJ@@QEAAHXZ @ 0x1C009E20C (-bValidSurf@XDCOBJ@@QEAAHXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C00A1484 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C00A37B0 (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C00A4450 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C00A5350 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x1C00B180C (-bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z @ 0x1C00B3D30 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C00F8FAC (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ?Src@BLTRECORD@@QEAAHHHHH@Z @ 0x1C010315C (-Src@BLTRECORD@@QEAAHHHHH@Z.c)
 *     ?SrcSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z @ 0x1C01031A8 (-SrcSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 *     ?bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z @ 0x1C028ABD4 (-bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z.c)
 *     ?bRotated@BLTRECORD@@QEAAHXZ @ 0x1C028B798 (-bRotated@BLTRECORD@@QEAAHXZ.c)
 *     ?vBound@BLTRECORD@@QEAAXPEAVERECTL@@@Z @ 0x1C028B818 (-vBound@BLTRECORD@@QEAAXPEAVERECTL@@@Z.c)
 *     ?vExtrema@BLTRECORD@@QEAAXXZ @ 0x1C028B894 (-vExtrema@BLTRECORD@@QEAAXXZ.c)
 */

_BOOL8 __fastcall GrePlgBlt(
        HDC a1,
        struct _POINTL *a2,
        HDC a3,
        unsigned int a4,
        int a5,
        int a6,
        int a7,
        __int64 a8,
        int a9,
        int a10,
        int a11)
{
  BOOL v14; // edi
  __int64 v15; // rdx
  DC *v16; // r8
  int valid; // eax
  __int64 v18; // r9
  __int64 v19; // rdx
  ULONG v20; // ecx
  struct SURFACE *v21; // rax
  struct SURFACE *v22; // rax
  __int64 v23; // rdx
  int v24; // esi
  __int64 v25; // rax
  __int64 v26; // rbx
  int v27; // eax
  __int64 v28; // rcx
  int v29; // eax
  unsigned __int8 v30; // r9
  DC *v32[2]; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v33[2]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v34[16]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v35[40]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v36; // [rsp+B8h] [rbp-48h]
  char v37; // [rsp+C0h] [rbp-40h]
  int v38; // [rsp+C4h] [rbp-3Ch]
  int v39; // [rsp+E8h] [rbp-18h]
  char v40; // [rsp+100h] [rbp+0h]
  __int64 v41; // [rsp+108h] [rbp+8h]
  __int64 v42; // [rsp+110h] [rbp+10h]
  __int16 v43; // [rsp+118h] [rbp+18h]
  __int64 v44; // [rsp+120h] [rbp+20h]
  __int64 v45; // [rsp+128h] [rbp+28h]
  __int16 v46; // [rsp+130h] [rbp+30h]
  struct _POINTL v47[2]; // [rsp+170h] [rbp+70h] BYREF
  __int64 v48; // [rsp+180h] [rbp+80h] BYREF
  __int64 v49; // [rsp+190h] [rbp+90h]
  __int64 v50; // [rsp+198h] [rbp+98h]
  __int64 v51; // [rsp+1A0h] [rbp+A0h]
  __int64 v52; // [rsp+1A8h] [rbp+A8h]
  struct SURFACE *v53; // [rsp+1B0h] [rbp+B0h]
  struct SURFACE *v54; // [rsp+1B8h] [rbp+B8h]
  __int64 v55; // [rsp+1C0h] [rbp+C0h]
  __int64 v56[4]; // [rsp+1C8h] [rbp+C8h] BYREF
  struct _POINTFIX v57[7]; // [rsp+1E8h] [rbp+E8h] BYREF
  int v58; // [rsp+220h] [rbp+120h]
  int v59; // [rsp+224h] [rbp+124h]
  int v60; // [rsp+228h] [rbp+128h]
  int v61; // [rsp+22Ch] [rbp+12Ch]
  int v62; // [rsp+230h] [rbp+130h]
  int v63; // [rsp+234h] [rbp+134h]
  int v64; // [rsp+238h] [rbp+138h]
  int v65; // [rsp+23Ch] [rbp+13Ch]
  int v66; // [rsp+248h] [rbp+148h]
  int v67; // [rsp+24Ch] [rbp+14Ch]

  v55 = 0LL;
  v67 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v32, a1);
  DCOBJ::DCOBJ((DCOBJ *)v33, a3);
  if ( v32[0] && v33[0] && (*((_DWORD *)v32[0] + 9) & 0x10000) == 0 )
  {
    bSpDwmValidateSurface((struct XDCOBJ *)v33, a4, a5, a6, a7);
    v36 = 0LL;
    v37 = 0;
    v38 = 0;
    v39 = 0;
    v41 = 0LL;
    v14 = 1;
    v42 = 0LL;
    v43 = 256;
    v44 = 0LL;
    v45 = 0LL;
    v46 = 256;
    DEVLOCKBLTOBJ::bLock((DEVLOCKBLTOBJ *)v35, (struct XDCOBJ *)v32, (struct XDCOBJ *)v33);
    if ( (v40 & 1) == 0 )
    {
      if ( (unsigned int)XDCOBJ::bFullScreen((XDCOBJ *)v32) || (unsigned int)XDCOBJ::bFullScreen((XDCOBJ *)v33) )
        goto LABEL_47;
      goto LABEL_46;
    }
    valid = XDCOBJ::bValidSurf((XDCOBJ *)v32);
    v18 = v33[0];
    if ( !valid
      || !(unsigned int)XDCOBJ::bValidSurf((XDCOBJ *)v33)
      || (*(_DWORD *)(*(_QWORD *)(v18 + 496) + 112LL) & 0x10000000) != 0 )
    {
      v16 = v32[0];
      v19 = *((_QWORD *)v32[0] + 122);
      if ( (*(_DWORD *)(v19 + 152) & 0x1000) != 0 )
      {
        GreDCSelectBrush(v32[0], *(_QWORD *)(v19 + 160));
        v16 = v32[0];
        v18 = v33[0];
      }
      v15 = *(_QWORD *)(v18 + 976);
      if ( (*(_DWORD *)(v15 + 152) & 0x1000) != 0 )
      {
        GreDCSelectBrush(v18, *(_QWORD *)(v15 + 160));
        v16 = v32[0];
        v18 = v33[0];
      }
      if ( (*((_DWORD *)v16 + 8) == 2 || !(unsigned int)XDCOBJ::bValidSurf((XDCOBJ *)v33))
        && (*((_DWORD *)v16 + 9) & 0xE0) != 0 )
      {
        EXFORMOBJ::vInit((EXFORMOBJ *)v47, (struct XDCOBJ *)v32, 0x204u, 0);
        if ( !EXFORMOBJ::bXform((EXFORMOBJ *)v47, a2, v57, 3uLL) )
        {
LABEL_19:
          v20 = 87;
LABEL_45:
          EngSetLastError(v20);
          goto LABEL_46;
        }
        BLTRECORD::vExtrema((BLTRECORD *)v47);
        BLTRECORD::vBound((BLTRECORD *)v47, (struct ERECTL *)v34);
        XDCOBJ::vAccumulate((XDCOBJ *)v32, (struct ERECTL *)v34);
        v16 = v32[0];
        v18 = v33[0];
      }
      if ( (*(_DWORD *)(v18 + 36) & 1) == 0 )
      {
        v14 = *((_QWORD *)v16 + 62) == 0LL;
LABEL_47:
        DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v35, v15, (SURFACE **)v16);
        goto LABEL_49;
      }
    }
    v21 = XDCOBJ::pSurfaceEff((XDCOBJ *)v33);
    if ( !(unsigned int)SrcSurfaceAccessCheck(v21)
      || (v22 = XDCOBJ::pSurfaceEff((XDCOBJ *)v32), !(unsigned int)DestSurfaceAccessCheck(v22)) )
    {
      v20 = 5;
      goto LABEL_45;
    }
    EXFORMOBJ::vInit((EXFORMOBJ *)v47, (struct XDCOBJ *)v32, 0x204u, 0);
    v53 = XDCOBJ::pSurfaceEff((XDCOBJ *)v32);
    v49 = *((_QWORD *)v53 + 16);
    v50 = *((_QWORD *)v32[0] + 11);
    EXFORMOBJ::vInit((EXFORMOBJ *)&v48, (struct XDCOBJ *)v33, 0x204u, 0);
    v54 = XDCOBJ::pSurfaceEff((XDCOBJ *)v33);
    v51 = *((_QWORD *)v54 + 16);
    v52 = *(_QWORD *)(v33[0] + 88LL);
    if ( (unsigned int)EXLATEOBJ::bInitXlateObj(
                         v56,
                         0LL,
                         *((_DWORD *)v32[0] + 30),
                         v51,
                         v49,
                         v52,
                         v50,
                         *(_DWORD *)(*((_QWORD *)v32[0] + 122) + 184LL),
                         *(_DWORD *)(*((_QWORD *)v32[0] + 122) + 176LL),
                         a11,
                         0) )
    {
      v67 |= 2u;
      v56[1] = 0LL;
      if ( (*(_DWORD *)(v48 + 32) & 1) == 0 || !(unsigned int)BLTRECORD::Src(v47, a4, a5, a6, a7) )
        goto LABEL_19;
      if ( !a8 )
      {
        v55 = 0LL;
        v24 = 4;
        v66 = 52428;
        goto LABEL_35;
      }
      LOBYTE(v23) = 5;
      v25 = HmgShareLockCheck(a8, v23);
      v26 = v25;
      if ( !v25 )
      {
        v20 = 6;
        goto LABEL_45;
      }
      INC_SHARE_REF_CNT(v25);
      v67 |= 0x30000u;
      v24 = 65540;
      v55 = v26;
      v66 = 43724;
      if ( !*(_WORD *)(v26 + 100) && *(_DWORD *)(v26 + 96) == 1 )
      {
        v62 = a9;
        v64 = a9 + v60 - v58;
        v63 = a10;
        v65 = a10 + v61 - v59;
        DEC_SHARE_REF_CNT(v26);
LABEL_35:
        if ( EXFORMOBJ::bXform((EXFORMOBJ *)v47, a2, v57, 3uLL) )
        {
          v27 = BLTRECORD::bRotated((BLTRECORD *)v47);
          v28 = *((_QWORD *)v32[0] + 122);
          if ( v27 )
          {
            v29 = BLTRECORD::bRotate(
                    (struct _POINTFIX *)v47,
                    (struct DCOBJ *)v32,
                    (struct DCOBJ *)v33,
                    v24,
                    *(_BYTE *)(v28 + 215));
          }
          else
          {
            v30 = *(_BYTE *)(v28 + 215);
            if ( v30 == 4 || !BLTRECORD::bEqualExtents((BLTRECORD *)v47) )
              v29 = BLTRECORD::bStretch((BLTRECORD *)v47, (struct DCOBJ *)v32, (struct DCOBJ *)v33, v24, v30);
            else
              v29 = BLTRECORD::bBitBlt((BLTRECORD *)v47, v32, (struct DCOBJ *)v33, v24);
          }
          v14 = v29;
          goto LABEL_47;
        }
        goto LABEL_19;
      }
      EngSetLastError(6u);
      DEC_SHARE_REF_CNT(v26);
    }
LABEL_46:
    v14 = 0;
    goto LABEL_47;
  }
  EngSetLastError(6u);
  v14 = 0;
LABEL_49:
  if ( v33[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v33);
  if ( v32[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v32);
  BLTRECORD::~BLTRECORD((BLTRECORD *)v47);
  return v14;
}
