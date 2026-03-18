/*
 * XREFs of ?bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0K@Z @ 0x1C0067BF8
 * Callers:
 *     ?bStretch@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z @ 0x1C00697CC (-bStretch@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z.c)
 *     GreStretchBltInternal @ 0x1C009E23C (GreStretchBltInternal.c)
 *     GreMaskBlt @ 0x1C0102C4C (GreMaskBlt.c)
 *     ?bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0KJJ@Z @ 0x1C0119164 (-bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0KJJ@Z.c)
 *     ?GreRectBlt@@YAHAEAVDCOBJ@@PEAVERECTL@@@Z @ 0x1C013AA94 (-GreRectBlt@@YAHAEAVDCOBJ@@PEAVERECTL@@@Z.c)
 *     ?bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z @ 0x1C028ABD4 (-bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z.c)
 *     GrePlgBlt @ 0x1C028CF70 (GrePlgBlt.c)
 * Callees:
 *     ?bTightenRao@DC@@QEAAHXZ @ 0x1C0068488 (-bTightenRao@DC@@QEAAHXZ.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C0068928 (-vOrder@ERECTL@@QEAAXXZ.c)
 *     ?pSurfMskOut@BLTRECORD@@QEAAPEAVSURFACE@@XZ @ 0x1C0069C88 (-pSurfMskOut@BLTRECORD@@QEAAPEAVSURFACE@@XZ.c)
 *     ?pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ @ 0x1C0099080 (-pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C00993B8 (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C009D358 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C009ECF8 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C00A1148 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ??XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z @ 0x1C00A2CC0 (--XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z.c)
 *     ?pfnBitBlt@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@ZXZ @ 0x1C00FC34C (-pfnBitBlt@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C015F580 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall BLTRECORD::bBitBlt(BLTRECORD *this, DC **a2, struct DCOBJ *a3, char a4)
{
  struct ERECTL *v4; // r15
  int v9; // eax
  __int64 v10; // r11
  DC *v11; // rdx
  int v12; // r12d
  unsigned int v13; // esi
  __int64 v14; // rcx
  __int64 v15; // rbx
  _DWORD *v16; // r12
  int v17; // edx
  int v18; // ecx
  DC *v19; // rcx
  __int64 v20; // r8
  int v21; // r10d
  int v22; // edx
  char v23; // r9
  __int64 v24; // rcx
  int v25; // r9d
  int v26; // r10d
  __int64 v27; // rax
  int v28; // r8d
  int v29; // edx
  __int64 v30; // rcx
  struct REGION *v31; // rax
  __m128i v32; // xmm6
  __int64 v33; // rax
  int v34; // r9d
  int v35; // r10d
  int v36; // r15d
  __int64 v37; // r11
  BOOL (__stdcall *v38)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // r10
  __int64 v39; // rax
  __int64 v40; // r9
  __int64 v41; // rcx
  bool v42; // cf
  __int128 *v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rcx
  _BYTE *v46; // r8
  struct ECLIPOBJ *v49; // rdx
  int v50; // eax
  int v51; // eax
  __int64 v52; // rsi
  __int64 v53; // r14
  struct SURFACE *v54; // rax
  SURFACE *v55; // rcx
  char *v56; // rbx
  __int64 v57; // rdi
  int (*v58)(struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *, struct _POINTL *, struct _BRUSHOBJ *, struct _POINTL *, unsigned int); // rax
  __int64 v59; // r10
  __int64 v60; // r11
  __int64 v61; // r9
  _BYTE *v62; // r9
  int v63; // edx
  int v64; // r8d
  __int64 v65; // r11
  int v66; // r15d
  struct REGION *v67; // rax
  __int64 v68; // r11
  int v69; // edx
  int v70; // r10d
  struct ECLIPOBJ *v71; // rdx
  __int64 v72; // rax
  __int64 v73; // rbx
  int (*v74)(struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *, struct _POINTL *, struct _BRUSHOBJ *, struct _POINTL *, unsigned int); // rax
  __int64 v75; // r8
  __int64 v76; // r9
  __int64 v77; // r10
  __int64 v78; // r11
  int v79; // ecx
  int v80; // ecx
  int v81; // r8d
  int v82; // r9d
  __int64 v83; // r11
  int v84; // r8d
  int v85; // ecx
  int v86; // ecx
  __int64 v87; // rcx
  int v88; // r9d
  int v89; // r10d
  __int64 v90; // rax
  int v91; // r8d
  int v92; // edx
  __int64 v93; // rcx
  struct REGION *v94; // rax
  __m128i v95; // xmm6
  int v96; // edx
  int v97; // r8d
  __int64 v98; // r9
  int v99; // r10d
  struct ECLIPOBJ *v100; // rdx
  __int64 v101; // rax
  int v102; // r8d
  int v103; // ecx
  int v104; // edx
  int v105; // eax
  int v106; // eax
  int v107; // r14d
  __int64 v108; // r8
  __int64 v109; // rax
  __int64 v110; // rcx
  __int64 v111; // rax
  __int64 v112; // rsi
  struct SURFACE *v113; // rax
  SURFACE *v114; // rcx
  char *v115; // rbx
  __int64 v116; // r9
  struct SURFACE *v117; // rax
  struct SURFACE *v118; // rax
  __int64 v119; // rax
  __int64 v120; // [rsp+28h] [rbp-E0h]
  __int128 *v121; // [rsp+30h] [rbp-D8h]
  _DWORD *v122; // [rsp+38h] [rbp-D0h]
  char *v123; // [rsp+40h] [rbp-C8h]
  __int64 v124; // [rsp+48h] [rbp-C0h]
  __int64 v125; // [rsp+50h] [rbp-B8h]
  int v126; // [rsp+58h] [rbp-B0h]
  int v127; // [rsp+68h] [rbp-A0h]
  __m128i v128; // [rsp+70h] [rbp-98h] BYREF
  __int128 v129; // [rsp+80h] [rbp-88h] BYREF
  _BYTE v130[4]; // [rsp+98h] [rbp-70h] BYREF
  __int128 v131; // [rsp+9Ch] [rbp-6Ch] BYREF
  __int64 v132; // [rsp+E8h] [rbp-20h]
  int v133; // [rsp+F0h] [rbp-18h]
  int v134; // [rsp+118h] [rbp+10h]
  __int64 v135; // [rsp+128h] [rbp+20h]
  _BYTE v136[4]; // [rsp+138h] [rbp+30h] BYREF
  __int128 v137; // [rsp+13Ch] [rbp+34h] BYREF
  __int64 v138; // [rsp+188h] [rbp+80h]
  int v139; // [rsp+190h] [rbp+88h]
  int v140; // [rsp+1B8h] [rbp+B0h]
  __int64 v141; // [rsp+1C8h] [rbp+C0h]

  v4 = (BLTRECORD *)((char *)this + 152);
  ERECTL::vOrder((BLTRECORD *)((char *)this + 152));
  v9 = DC::bTightenRao(*a2);
  LODWORD(v10) = 0;
  if ( !v9 )
    return 0LL;
  v11 = *a2;
  if ( *((_QWORD *)*a2 + 62) )
  {
    v12 = a4 & 0xD4;
    if ( !v12 || *(_QWORD *)(*(_QWORD *)a3 + 496LL) )
    {
      if ( (*((_DWORD *)v11 + 9) & 0xE0) != 0 )
      {
        XDCOBJ::vAccumulate((XDCOBJ *)a2, v4);
        v11 = *a2;
      }
      v13 = 1;
      v14 = *((_DWORD *)v11 + 10) & 1LL;
      *(_DWORD *)v4 += *((_DWORD *)v11 + 2 * v14 + 254);
      *((_DWORD *)v4 + 2) += *((_DWORD *)v11 + 2 * v14 + 254);
      *((_DWORD *)v4 + 1) += *((_DWORD *)v11 + 2 * v14 + 255);
      *((_DWORD *)v4 + 3) += *((_DWORD *)v11 + 2 * v14 + 255);
      v15 = *(_QWORD *)(*((_QWORD *)this + 8) + 48LL);
      if ( !v12 )
      {
        v67 = XDCOBJ::prgnEffRao((XDCOBJ *)a2);
        v132 = v68;
        v133 = v68;
        v134 = 1;
        v135 = v68;
        XCLIPOBJ::vSetup((XCLIPOBJ *)v130, v67, v4, 0);
        if ( (unsigned int)ERECTL::bEmpty((ERECTL *)&v131) )
          return v13;
        if ( *((int *)this + 46) < 0 )
        {
          v79 = *((_DWORD *)this + 48);
          *((_DWORD *)this + 48) = *((_DWORD *)this + 50);
          *((_DWORD *)this + 50) = v79;
        }
        if ( *((int *)this + 47) < 0 )
        {
          v80 = *((_DWORD *)this + 49);
          *((_DWORD *)this + 49) = *((_DWORD *)this + 51);
          *((_DWORD *)this + 51) = v80;
        }
        if ( BLTRECORD::pSurfMskOut(this) )
        {
          v81 = *((_DWORD *)this + 48);
          if ( v81 < 0
            || (v82 = *((_DWORD *)this + 49), v82 < 0)
            || (v83 = *((_QWORD *)this + 10), *(_DWORD *)(v83 + 56) - v81 < (int)abs32(v69))
            || *(_DWORD *)(v83 + 60) - v82 < (int)abs32(v70) )
          {
            EngSetLastError(0x57u);
            return 0;
          }
          v84 = v131 + v81 - *(_DWORD *)v4;
          *((_DWORD *)this + 49) = DWORD1(v131) + v82 - *((_DWORD *)this + 39);
          *((_DWORD *)this + 48) = v84;
        }
        if ( (*((_DWORD *)*a2 + 9) & 0xE0) != 0 )
        {
          v71 = (struct ECLIPOBJ *)(unsigned __int8)*((_DWORD *)this + 54);
          if ( ((gajRop3[*((unsigned __int8 *)this + 217)] | gajRop3[(_QWORD)v71]) & 0xE8) == 0
            || (v72 = *((_QWORD *)this + 12)) != 0 && (*(_DWORD *)(v72 + 120) & 0x100) == 0 )
          {
            v128 = (__m128i)v131;
            XDCOBJ::vAccumulateTight((XDCOBJ *)a2, v71, (struct ERECTL *)&v128);
          }
        }
        ++*(_DWORD *)(*((_QWORD *)this + 8) + 92LL);
        v73 = *((_QWORD *)this + 12);
        BLTRECORD::pSurfMskOut(this);
        v74 = SURFACE::pfnBitBlt(*((SURFACE **)this + 8));
        return ((unsigned int (__fastcall *)(__int64, _QWORD, __int64, _BYTE *, _QWORD, struct ERECTL *, _QWORD, __int64, __int64, __int64, _DWORD))v74)(
                 v77,
                 0LL,
                 v75,
                 v130,
                 0LL,
                 v4,
                 0LL,
                 v78,
                 v73,
                 v76,
                 *((_DWORD *)this + 54));
      }
      v16 = (_DWORD *)((char *)this + 184);
      v17 = *((_DWORD *)this + 46);
      v18 = *((_DWORD *)this + 47);
      if ( v17 >= *((_DWORD *)this + 44) )
        v17 = *((_DWORD *)this + 44);
      *v16 = v17;
      if ( v18 >= *((_DWORD *)this + 45) )
        v18 = *((_DWORD *)this + 45);
      *((_DWORD *)this + 47) = v18;
      if ( *((_DWORD *)this + 44) > v17 )
      {
        v85 = *((_DWORD *)this + 48);
        *((_DWORD *)this + 48) = *((_DWORD *)this + 50);
        *((_DWORD *)this + 50) = v85;
      }
      if ( *((_DWORD *)this + 45) > *((_DWORD *)this + 47) )
      {
        v86 = *((_DWORD *)this + 49);
        *((_DWORD *)this + 49) = *((_DWORD *)this + 51);
        *((_DWORD *)this + 51) = v86;
      }
      v19 = *a2;
      v20 = *(_QWORD *)a3;
      if ( *(_QWORD *)(*(_QWORD *)a3 + 496LL) != *((_QWORD *)*a2 + 62) )
      {
        v21 = *((_DWORD *)v19 + 9);
        v22 = 0x20000;
        if ( (v21 & 0x200) == 0 || !v15 || (v23 = 1, (*(_DWORD *)(v15 + 40) & 0x20000) == 0) )
          v23 = v10;
        if ( *((_QWORD *)v19 + 6) != *(_QWORD *)(v20 + 48)
          && (v21 & 0x4000) == 0
          && (*(_DWORD *)(v20 + 36) & 0x4000) == 0
          && !v23 )
        {
          v117 = XDCOBJ::pSurfaceEff((XDCOBJ *)a2);
          if ( *((_WORD *)v117 + 50) != (_WORD)v10 || *((_QWORD *)v117 + 3) != v10 )
          {
            v118 = XDCOBJ::pSurfaceEff(a3);
            if ( *((_WORD *)v118 + 50) != (_WORD)v10 || *((_QWORD *)v118 + 3) != v10 )
              goto LABEL_107;
          }
        }
        v24 = *((_QWORD *)this + 9);
        v25 = v10;
        v26 = v10;
        v27 = *(_QWORD *)(v24 + 48);
        if ( v27 && v24 == *(_QWORD *)(v27 + 2552) && (v22 & *(_DWORD *)(v27 + 40)) != 0 )
        {
          v25 = *(_DWORD *)(v27 + 2584);
          v26 = *(_DWORD *)(v27 + 2588);
        }
        v28 = *(_DWORD *)v4 - *(_DWORD *)(v20 + 8 * (*(_DWORD *)(v20 + 40) & 1LL) + 1016) - *v16;
        *((_DWORD *)this + 44) = v28;
        v29 = *((_DWORD *)this + 39)
            - *(_DWORD *)(*(_QWORD *)a3 + 8 * (*(_DWORD *)(*(_QWORD *)a3 + 40LL) & 1LL) + 1020)
            - *((_DWORD *)this + 47);
        LODWORD(v129) = v25 + v28;
        *((_DWORD *)this + 45) = v29;
        v30 = *((_QWORD *)this + 9);
        DWORD1(v129) = v26 + v29;
        DWORD2(v129) = v28 + v25 + *(_DWORD *)(v30 + 56);
        HIDWORD(v129) = v29 + v26 + *(_DWORD *)(v30 + 60);
        ERECTL::operator*=(&v129, v4);
        v31 = XDCOBJ::prgnEffRao((XDCOBJ *)a2);
        v138 = 0LL;
        v139 = 0;
        v141 = 0LL;
        v140 = 1;
        XCLIPOBJ::vSetup((XCLIPOBJ *)v136, v31, (struct ERECTL *)&v129, 0);
        v32 = (__m128i)v137;
        v129 = v137;
        if ( (unsigned int)ERECTL::bEmpty((ERECTL *)&v129) )
          return v13;
        if ( (*((_DWORD *)this + 55) & 0x10000) != 0 )
          v33 = *((_QWORD *)this + 10);
        else
          v33 = 0LL;
        v34 = DWORD1(v137);
        v35 = v137;
        if ( !v33 )
          goto LABEL_26;
        v63 = *((_DWORD *)this + 48);
        if ( v63 >= 0 )
        {
          v64 = *((_DWORD *)this + 49);
          if ( v64 >= 0 )
          {
            v65 = *((_QWORD *)this + 10);
            v127 = *(_DWORD *)v4;
            if ( *(_DWORD *)(v65 + 56) - v63 >= *((_DWORD *)this + 40) - *(_DWORD *)v4 )
            {
              v66 = *((_DWORD *)this + 39);
              if ( *(_DWORD *)(v65 + 60) - v64 >= *((_DWORD *)this + 41) - v66 )
              {
                *((_DWORD *)this + 48) = v137 + v63 - v127;
                *((_DWORD *)this + 49) = v34 + v64 - v66;
LABEL_26:
                *v16 = v35 - *((_DWORD *)this + 44);
                *((_DWORD *)this + 47) = v34 - *((_DWORD *)this + 45);
                if ( (*((_DWORD *)*a2 + 9) & 0xE0) != 0 )
                {
                  v49 = (struct ECLIPOBJ *)(unsigned __int8)*((_DWORD *)this + 54);
                  if ( ((gajRop3[*((unsigned __int8 *)this + 217)] | gajRop3[(_QWORD)v49]) & 0xE8) == 0
                    || (v119 = *((_QWORD *)this + 12)) != 0 && (*(_DWORD *)(v119 + 120) & 0x100) == 0 )
                  {
                    v128 = v32;
                    XDCOBJ::vAccumulateTight((XDCOBJ *)a2, v49, (struct ERECTL *)&v128);
                  }
                }
                if ( (*(_DWORD *)(*(_QWORD *)a3 + 36LL) & 1) != 0 )
                {
                  v50 = *((_DWORD *)this + 44);
                  LODWORD(v129) = v129 - v50;
                  DWORD2(v129) -= v50;
                  v51 = *((_DWORD *)this + 45);
                  DWORD1(v129) -= v51;
                  HIDWORD(v129) -= v51;
                }
                ++*(_DWORD *)(*((_QWORD *)this + 8) + 92LL);
                v36 = *((_DWORD *)this + 54);
                if ( v36 == 52428 )
                {
                  v37 = *((_QWORD *)this + 8);
                  if ( (*(_DWORD *)(v37 + 112) & 0x400) != 0 )
                    v38 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v15 + 2840);
                  else
                    v38 = EngCopyBits;
                  v39 = *((_QWORD *)this + 9);
                  v40 = *((_QWORD *)this + 11);
                  v41 = v39 + 24;
                  v42 = v39 != 0;
                  v43 = &v137;
                  v44 = v41 & -(__int64)v42;
                  v45 = (v37 + 24) & -(__int64)(v37 != 0);
                  v46 = v136;
                  return ((unsigned int (__fastcall *)(__int64, __int64, _BYTE *, __int64, __int128 *, char *))v38)(
                           v45,
                           v44,
                           v46,
                           v40,
                           v43,
                           (char *)this + 184);
                }
                v52 = *((_QWORD *)this + 12);
                v53 = *((_QWORD *)this + 11);
                v54 = BLTRECORD::pSurfMskOut(this);
                v55 = (SURFACE *)*((_QWORD *)this + 8);
                v56 = (char *)this + 192;
                v57 = ((unsigned __int64)v54 + 24) & -(__int64)(v54 != 0LL);
                v58 = SURFACE::pfnBitBlt(v55);
                v126 = v36;
                v125 = v61;
                v62 = v136;
                v124 = v52;
                v123 = v56;
                v122 = v16;
                v121 = &v137;
                v120 = v53;
                return ((unsigned int (__fastcall *)(__int64, __int64, __int64, _BYTE *, __int64, __int128 *, _DWORD *, char *, __int64, __int64, int))v58)(
                         v59,
                         v60,
                         v57,
                         v62,
                         v120,
                         v121,
                         v122,
                         v123,
                         v124,
                         v125,
                         v126);
              }
            }
          }
        }
LABEL_107:
        EngSetLastError(0x57u);
        return 0;
      }
      v87 = *((_QWORD *)this + 9);
      v88 = v10;
      v89 = v10;
      v90 = *(_QWORD *)(v87 + 48);
      if ( v90 && v87 == *(_QWORD *)(v90 + 2552) && (*(_DWORD *)(v90 + 40) & 0x20000) != 0 )
      {
        v88 = *(_DWORD *)(v90 + 2584);
        v89 = *(_DWORD *)(v90 + 2588);
      }
      v91 = *(_DWORD *)v4 - *(_DWORD *)(v20 + 8 * (*(_DWORD *)(v20 + 40) & 1LL) + 1016) - *v16;
      *((_DWORD *)this + 44) = v91;
      v92 = *((_DWORD *)this + 39)
          - *(_DWORD *)(*(_QWORD *)a3 + 8 * (*(_DWORD *)(*(_QWORD *)a3 + 40LL) & 1LL) + 1020)
          - *((_DWORD *)this + 47);
      LODWORD(v129) = v91 + v88;
      *((_DWORD *)this + 45) = v92;
      v93 = *((_QWORD *)this + 8);
      DWORD1(v129) = v92 + v89;
      DWORD2(v129) = v88 + v91 + *(_DWORD *)(v93 + 56);
      HIDWORD(v129) = v89 + v92 + *(_DWORD *)(v93 + 60);
      ERECTL::operator*=(&v129, v4);
      v94 = XDCOBJ::prgnEffRao((XDCOBJ *)a2);
      v134 = 1;
      v132 = 0LL;
      v133 = 0;
      v135 = 0LL;
      XCLIPOBJ::vSetup((XCLIPOBJ *)v130, v94, (struct ERECTL *)&v129, 0);
      v95 = (__m128i)v131;
      v129 = v131;
      if ( (unsigned int)ERECTL::bEmpty((ERECTL *)&v129) )
        return v13;
      if ( BLTRECORD::pSurfMskOut(this) )
      {
        v96 = *((_DWORD *)this + 48);
        if ( v96 < 0 )
          goto LABEL_107;
        v97 = *((_DWORD *)this + 49);
        if ( v97 < 0 )
          goto LABEL_107;
        v98 = *((_QWORD *)this + 10);
        if ( *(_DWORD *)(v98 + 56) - v96 < *((_DWORD *)this + 40) - *(_DWORD *)v4 )
          goto LABEL_107;
        v99 = *((_DWORD *)this + 39);
        if ( *(_DWORD *)(v98 + 60) - v97 < *((_DWORD *)this + 41) - v99 )
          goto LABEL_107;
        *((_DWORD *)this + 48) = _mm_cvtsi128_si32(v95) + v96 - *(_DWORD *)v4;
        *((_DWORD *)this + 49) = _mm_cvtsi128_si32(_mm_srli_si128(v95, 4)) + v97 - v99;
      }
      if ( (*((_DWORD *)*a2 + 9) & 0xE0) != 0 )
      {
        v100 = (struct ECLIPOBJ *)(unsigned __int8)*((_DWORD *)this + 54);
        if ( ((gajRop3[*((unsigned __int8 *)this + 217)] | gajRop3[(_QWORD)v100]) & 0xE8) == 0
          || (v101 = *((_QWORD *)this + 12)) != 0 && (*(_DWORD *)(v101 + 120) & 0x100) == 0 )
        {
          v128 = v95;
          XDCOBJ::vAccumulateTight((XDCOBJ *)a2, v100, (struct ERECTL *)&v128);
        }
      }
      v102 = v129;
      v103 = v129 - *((_DWORD *)this + 44);
      v104 = DWORD1(v129);
      v105 = DWORD1(v129);
      *v16 = v103;
      v106 = v105 - *((_DWORD *)this + 45);
      *((_DWORD *)this + 47) = v106;
      if ( v103 >= v102 )
        DWORD2(v129) += v103 - v102;
      else
        LODWORD(v129) = v103;
      if ( v106 >= v104 )
        HIDWORD(v129) += v106 - v104;
      else
        DWORD1(v129) = v106;
      ++*(_DWORD *)(*((_QWORD *)this + 8) + 92LL);
      v107 = *((_DWORD *)this + 54);
      if ( v107 == 52428 )
      {
        v108 = *((_QWORD *)this + 8);
        if ( (*(_DWORD *)(v108 + 112) & 0x400) != 0 )
          v38 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v15 + 2840);
        else
          v38 = EngCopyBits;
        v109 = *((_QWORD *)this + 9);
        v110 = v109 + 24;
        v42 = v109 != 0;
        v111 = v108 + 24;
        v44 = v110 & -(__int64)v42;
        v42 = v108 != 0;
        v46 = v130;
        v45 = v111 & -(__int64)v42;
        v43 = &v131;
        v40 = 0LL;
        return ((unsigned int (__fastcall *)(__int64, __int64, _BYTE *, __int64, __int128 *, char *))v38)(
                 v45,
                 v44,
                 v46,
                 v40,
                 v43,
                 (char *)this + 184);
      }
      v112 = *((_QWORD *)this + 12);
      v113 = BLTRECORD::pSurfMskOut(this);
      v114 = (SURFACE *)*((_QWORD *)this + 8);
      v115 = (char *)this + 192;
      v57 = ((unsigned __int64)v113 + 24) & -(__int64)(v113 != 0LL);
      v58 = SURFACE::pfnBitBlt(v114);
      v126 = v107;
      v125 = v116;
      v62 = v130;
      v124 = v112;
      v123 = v115;
      v122 = v16;
      v121 = &v131;
      v120 = 0LL;
      return ((unsigned int (__fastcall *)(__int64, __int64, __int64, _BYTE *, __int64, __int128 *, _DWORD *, char *, __int64, __int64, int))v58)(
               v59,
               v60,
               v57,
               v62,
               v120,
               v121,
               v122,
               v123,
               v124,
               v125,
               v126);
    }
  }
  return 1LL;
}
