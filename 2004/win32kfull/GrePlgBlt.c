/*
 * XREFs of GrePlgBlt @ 0x1C028E3D0
 * Callers:
 *     NtGdiPlgBlt @ 0x1C028E9F0 (NtGdiPlgBlt.c)
 * Callees:
 *     ?Src@BLTRECORD@@QEAAHHHHH@Z @ 0x1C0014A64 (-Src@BLTRECORD@@QEAAHHHHH@Z.c)
 *     ?SrcSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z @ 0x1C00177EC (-SrcSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z.c)
 *     ?pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ @ 0x1C0019348 (-pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ.c)
 *     ?bValidSurf@XDCOBJ@@QEAAHXZ @ 0x1C001A4BC (-bValidSurf@XDCOBJ@@QEAAHXZ.c)
 *     ??1BLTRECORD@@QEAA@XZ @ 0x1C001A4EC (--1BLTRECORD@@QEAA@XZ.c)
 *     ?DestSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z @ 0x1C001A61C (-DestSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C001ACC8 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?bEqualExtents@BLTRECORD@@QEBAHXZ @ 0x1C001AD0C (-bEqualExtents@BLTRECORD@@QEBAHXZ.c)
 *     ?bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0K@Z @ 0x1C001AD5C (-bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0K@Z.c)
 *     ?bStretch@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z @ 0x1C001C2F4 (-bStretch@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0076414 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C0077CC0 (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z @ 0x1C00783D0 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C0079EB0 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x1C00843B8 (-bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C0085AA0 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C00FEC0C (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 *     ?bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z @ 0x1C028C124 (-bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z.c)
 *     ?bRotated@BLTRECORD@@QEAAHXZ @ 0x1C028CBF4 (-bRotated@BLTRECORD@@QEAAHXZ.c)
 *     ?vBound@BLTRECORD@@QEAAXPEAVERECTL@@@Z @ 0x1C028CC74 (-vBound@BLTRECORD@@QEAAXPEAVERECTL@@@Z.c)
 *     ?vExtrema@BLTRECORD@@QEAAXXZ @ 0x1C028CCF0 (-vExtrema@BLTRECORD@@QEAAXXZ.c)
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
  char v39; // [rsp+D8h] [rbp-28h]
  __int64 v40; // [rsp+E0h] [rbp-20h]
  __int64 v41; // [rsp+E8h] [rbp-18h]
  __int16 v42; // [rsp+F0h] [rbp-10h]
  __int64 v43; // [rsp+F8h] [rbp-8h]
  __int64 v44; // [rsp+100h] [rbp+0h]
  __int16 v45; // [rsp+108h] [rbp+8h]
  struct _POINTFIX v46[2]; // [rsp+150h] [rbp+50h] BYREF
  __int64 v47; // [rsp+160h] [rbp+60h] BYREF
  __int64 v48; // [rsp+170h] [rbp+70h]
  __int64 v49; // [rsp+178h] [rbp+78h]
  __int64 v50; // [rsp+180h] [rbp+80h]
  __int64 v51; // [rsp+188h] [rbp+88h]
  struct SURFACE *v52; // [rsp+190h] [rbp+90h]
  struct SURFACE *v53; // [rsp+198h] [rbp+98h]
  __int64 v54; // [rsp+1A0h] [rbp+A0h]
  __int64 v55[4]; // [rsp+1A8h] [rbp+A8h] BYREF
  struct _POINTFIX v56[7]; // [rsp+1C8h] [rbp+C8h] BYREF
  int v57; // [rsp+200h] [rbp+100h]
  int v58; // [rsp+204h] [rbp+104h]
  int v59; // [rsp+208h] [rbp+108h]
  int v60; // [rsp+20Ch] [rbp+10Ch]
  int v61; // [rsp+210h] [rbp+110h]
  int v62; // [rsp+214h] [rbp+114h]
  int v63; // [rsp+218h] [rbp+118h]
  int v64; // [rsp+21Ch] [rbp+11Ch]
  int v65; // [rsp+228h] [rbp+128h]
  int v66; // [rsp+22Ch] [rbp+12Ch]

  v54 = 0LL;
  v66 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v32, a1);
  DCOBJ::DCOBJ((DCOBJ *)v33, a3);
  if ( v32[0] && v33[0] && (*((_DWORD *)v32[0] + 9) & 0x10000) == 0 )
  {
    bSpDwmValidateSurface((struct XDCOBJ *)v33, a4, a5, a6, a7);
    v36 = 0LL;
    v37 = 0;
    v38 = 0;
    v40 = 0LL;
    v41 = 0LL;
    v14 = 1;
    v42 = 256;
    v43 = 0LL;
    v44 = 0LL;
    v45 = 256;
    DEVLOCKBLTOBJ::bLock((DEVLOCKBLTOBJ *)v35, (struct XDCOBJ *)v32, (struct XDCOBJ *)v33);
    if ( (v39 & 1) == 0 )
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
        EXFORMOBJ::vInit((EXFORMOBJ *)v46, (struct XDCOBJ *)v32, 0x204u, 0);
        if ( !EXFORMOBJ::bXform((EXFORMOBJ *)v46, a2, v56, 3uLL) )
        {
LABEL_19:
          v20 = 87;
LABEL_45:
          EngSetLastError(v20);
          goto LABEL_46;
        }
        BLTRECORD::vExtrema((BLTRECORD *)v46);
        BLTRECORD::vBound((BLTRECORD *)v46, (struct ERECTL *)v34);
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
    EXFORMOBJ::vInit((EXFORMOBJ *)v46, (struct XDCOBJ *)v32, 0x204u, 0);
    v52 = XDCOBJ::pSurfaceEff((XDCOBJ *)v32);
    v48 = *((_QWORD *)v52 + 16);
    v49 = *((_QWORD *)v32[0] + 11);
    EXFORMOBJ::vInit((EXFORMOBJ *)&v47, (struct XDCOBJ *)v33, 0x204u, 0);
    v53 = XDCOBJ::pSurfaceEff((XDCOBJ *)v33);
    v50 = *((_QWORD *)v53 + 16);
    v51 = *(_QWORD *)(v33[0] + 88LL);
    if ( (unsigned int)EXLATEOBJ::bInitXlateObj(
                         v55,
                         0LL,
                         *((_DWORD *)v32[0] + 30),
                         v50,
                         v48,
                         v51,
                         v49,
                         *(_DWORD *)(*((_QWORD *)v32[0] + 122) + 184LL),
                         *(_DWORD *)(*((_QWORD *)v32[0] + 122) + 176LL),
                         a11,
                         0) )
    {
      v66 |= 2u;
      v55[1] = 0LL;
      if ( (*(_DWORD *)(v47 + 32) & 1) == 0 || !(unsigned int)BLTRECORD::Src((struct _POINTL *)v46, a4, a5, a6, a7) )
        goto LABEL_19;
      if ( !a8 )
      {
        v54 = 0LL;
        v24 = 4;
        v65 = 52428;
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
      v66 |= 0x30000u;
      v24 = 65540;
      v54 = v26;
      v65 = 43724;
      if ( !*(_WORD *)(v26 + 100) && *(_DWORD *)(v26 + 96) == 1 )
      {
        v61 = a9;
        v63 = a9 + v59 - v57;
        v62 = a10;
        v64 = a10 + v60 - v58;
        DEC_SHARE_REF_CNT(v26);
LABEL_35:
        if ( EXFORMOBJ::bXform((EXFORMOBJ *)v46, a2, v56, 3uLL) )
        {
          v27 = BLTRECORD::bRotated((BLTRECORD *)v46);
          v28 = *((_QWORD *)v32[0] + 122);
          if ( v27 )
          {
            v29 = BLTRECORD::bRotate(v46, (struct DCOBJ *)v32, (struct DCOBJ *)v33, v24, *(_BYTE *)(v28 + 215));
          }
          else
          {
            v30 = *(_BYTE *)(v28 + 215);
            if ( v30 == 4 || !BLTRECORD::bEqualExtents((BLTRECORD *)v46) )
              v29 = BLTRECORD::bStretch((BLTRECORD *)v46, (struct DCOBJ *)v32, (struct DCOBJ *)v33, v24, v30);
            else
              v29 = BLTRECORD::bBitBlt((BLTRECORD *)v46, v32, (struct DCOBJ *)v33, v24);
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
  BLTRECORD::~BLTRECORD((BLTRECORD *)v46);
  return v14;
}
