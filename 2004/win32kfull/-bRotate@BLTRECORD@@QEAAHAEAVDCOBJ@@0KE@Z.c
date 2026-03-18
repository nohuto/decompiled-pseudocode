/*
 * XREFs of ?bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z @ 0x1C028C124
 * Callers:
 *     GreMaskBlt @ 0x1C001456C (GreMaskBlt.c)
 *     GreStretchBltInternal @ 0x1C0019A20 (GreStretchBltInternal.c)
 *     GrePlgBlt @ 0x1C028E3D0 (GrePlgBlt.c)
 * Callees:
 *     ?pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ @ 0x1C0019348 (-pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C001ACC8 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0K@Z @ 0x1C001AD5C (-bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0K@Z.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C001BA8C (-vOrder@ERECTL@@QEAAXXZ.c)
 *     ?pSurfMskOut@BLTRECORD@@QEAAPEAVSURFACE@@XZ @ 0x1C001C7B0 (-pSurfMskOut@BLTRECORD@@QEAAPEAVSURFACE@@XZ.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C0071268 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C0075A68 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C008A108 (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?bOffsetAdd@ERECTL@@QEAAHAEBU_POINTL@@H@Z @ 0x1C01494C8 (-bOffsetAdd@ERECTL@@QEAAHAEBU_POINTL@@H@Z.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C015BD10 (_guard_dispatch_icall_nop.c)
 *     ?bCreateRegion@BLTRECORD@@QEAAHAEAVDCOBJ@@PEAU_POINTFIX@@@Z @ 0x1C028BFFC (-bCreateRegion@BLTRECORD@@QEAAHAEAVDCOBJ@@PEAU_POINTFIX@@@Z.c)
 *     ?bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@AEAVSURFMEM@@1KK@Z @ 0x1C028C7AC (-bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@AEAVSURFMEM@@1KK@Z.c)
 *     ?bRotate@BLTRECORD@@QEAAHAEAVSURFMEM@@K@Z @ 0x1C028CA10 (-bRotate@BLTRECORD@@QEAAHAEAVSURFMEM@@K@Z.c)
 *     ?vBound@BLTRECORD@@QEAAXPEAVERECTL@@@Z @ 0x1C028CC74 (-vBound@BLTRECORD@@QEAAXPEAVERECTL@@@Z.c)
 *     ?vExtrema@BLTRECORD@@QEAAXXZ @ 0x1C028CCF0 (-vExtrema@BLTRECORD@@QEAAXXZ.c)
 *     ?vMirror@BLTRECORD@@QEAAXPEAU_POINTFIX@@@Z @ 0x1C028CD88 (-vMirror@BLTRECORD@@QEAAXPEAU_POINTFIX@@@Z.c)
 *     ?vOrder@BLTRECORD@@QEAAXPEAVERECTL@@@Z @ 0x1C02907C0 (-vOrder@BLTRECORD@@QEAAXPEAVERECTL@@@Z.c)
 */

__int64 __fastcall BLTRECORD::bRotate(
        struct _POINTFIX *this,
        struct DCOBJ *a2,
        struct DCOBJ *a3,
        unsigned int a4,
        unsigned __int8 a5)
{
  FIX v9; // ecx
  unsigned int v10; // esi
  struct _POINTFIX v11; // rcx
  unsigned int v13; // eax
  __int64 v14; // rcx
  ERECTL *v15; // r13
  ERECTL *v16; // r9
  unsigned int v17; // r14d
  FIX x; // ecx
  char *v19; // rsi
  struct _POINTFIX v20; // rcx
  struct _POINTFIX v21; // rcx
  unsigned int v22; // r8d
  unsigned int v23; // r11d
  unsigned int v24; // r10d
  unsigned int v25; // r9d
  __int64 y; // r13
  unsigned int v27; // edx
  unsigned int v28; // r8d
  unsigned int v29; // r9d
  unsigned __int64 v30; // rdx
  unsigned int v31; // r11d
  unsigned int v32; // eax
  unsigned int v33; // eax
  __int64 v34; // rdx
  __int64 v35; // r10
  FIX v36; // eax
  unsigned int v37; // ebx
  __int64 v38; // rax
  __int64 v39; // r10
  __int64 v40; // rcx
  struct REGION *v41; // rax
  struct ECLIPOBJ *v42; // rdx
  __int64 v43; // r10
  __int64 v44; // r14
  __int64 v45; // rdx
  struct SURFACE *v46; // rax
  struct _POINTFIX v47; // r8
  struct _POINTFIX *v49; // [rsp+60h] [rbp-A0h] BYREF
  char v50; // [rsp+68h] [rbp-98h]
  int v51; // [rsp+6Ch] [rbp-94h]
  __m128i v52; // [rsp+70h] [rbp-90h] BYREF
  char v53[8]; // [rsp+80h] [rbp-80h] BYREF
  int v54; // [rsp+88h] [rbp-78h]
  int v55; // [rsp+8Ch] [rbp-74h]
  _BYTE v56[4]; // [rsp+90h] [rbp-70h] BYREF
  __m128i v57[4]; // [rsp+94h] [rbp-6Ch] BYREF
  __int64 v58; // [rsp+E0h] [rbp-20h]
  int v59; // [rsp+E8h] [rbp-18h]
  int v60; // [rsp+110h] [rbp+10h]
  __int64 v61; // [rsp+120h] [rbp+20h]

  BLTRECORD::vExtrema((BLTRECORD *)this);
  if ( (a4 & 0xD4) != 0 )
  {
    v15 = (ERECTL *)&this[22];
    BLTRECORD::vOrder((BLTRECORD *)this, (struct ERECTL *)&this[22]);
    ERECTL::vOrder(v16);
    v17 = 1;
    if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 976LL) + 108LL) & 1) != 0 )
    {
      x = this[24].x;
      this[24].x = this[25].x;
      this[25].x = x;
    }
    v19 = 0LL;
    if ( BLTRECORD::pSurfMskOut((BLTRECORD *)this) )
    {
      if ( this[24].x < 0 )
        goto LABEL_9;
      if ( this[24].y < 0 )
        goto LABEL_9;
      v20 = this[10];
      if ( this[25].x > *(_DWORD *)(*(_QWORD *)&v20 + 56LL) || this[25].y > *(_DWORD *)(*(_QWORD *)&v20 + 60LL) )
        goto LABEL_9;
    }
    if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 976LL) + 108LL) & 1) != 0 && BLTRECORD::pSurfMskOut((BLTRECORD *)this) )
    {
      v21 = this[10];
      v22 = this[23].x - *(_DWORD *)v15;
      v23 = *(_DWORD *)(*(_QWORD *)&v21 + 56LL);
      v24 = this[23].y - this[22].y;
      v25 = this[24].x;
      y = (unsigned int)this[24].y;
      LODWORD(v49) = this[22].y;
      if ( v23 >= v25
        && (v27 = *(_DWORD *)(*(_QWORD *)&v21 + 60LL), v27 >= (unsigned int)y)
        && v23 - v25 >= v22
        && v27 - (unsigned int)y >= v24 )
      {
        v15 = (ERECTL *)&this[22];
      }
      else
      {
        if ( *(_DWORD *)(*(_QWORD *)&v21 + 96LL) != 1 )
          goto LABEL_9;
        if ( *(_WORD *)(*(_QWORD *)&v21 + 100LL) )
          goto LABEL_9;
        if ( v23 < v22 )
          goto LABEL_9;
        if ( v25 + 7 < v25 )
          goto LABEL_9;
        v28 = (v25 + 7) >> 3;
        v29 = abs32(*(_DWORD *)(*(_QWORD *)&v21 + 88LL));
        v30 = y * v29;
        if ( v30 > 0xFFFFFFFF )
          goto LABEL_9;
        v31 = v30 + v28;
        if ( (unsigned int)v30 + v28 < v28 )
          goto LABEL_9;
        v32 = *(_DWORD *)(*(_QWORD *)&v21 + 64LL);
        if ( v31 >= v32 )
          goto LABEL_9;
        v15 = (ERECTL *)&this[22];
        v33 = (v32 - v31) / v29;
        if ( v24 > v33 )
          this[23].y = (_DWORD)v49 + v33;
      }
    }
    v34 = *(_QWORD *)a3;
    v35 = *(_QWORD *)a2;
    if ( *(_QWORD *)(*(_QWORD *)a2 + 48LL) == *(_QWORD *)(*(_QWORD *)a3 + 48LL)
      || !*((_WORD *)XDCOBJ::pSurfaceEff(a2) + 50)
      || !*((_WORD *)XDCOBJ::pSurfaceEff(a3) + 50) )
    {
      v36 = this[27].x;
      if ( v36 == 52428 || v36 == 43724 )
      {
        if ( *(_QWORD *)(v35 + 496) && *(_QWORD *)(v34 + 496) )
        {
          BLTRECORD::vBound((BLTRECORD *)this, (struct ERECTL *)v53);
          ++v54;
          ++v55;
          if ( (*(_DWORD *)(v39 + 36) & 0xE0) != 0 )
          {
            XDCOBJ::vAccumulate(a2, (struct ERECTL *)v53);
            v39 = *(_QWORD *)a2;
          }
          v40 = *(_DWORD *)(v39 + 40) & 1LL;
          v49 = this + 15;
          this[15].x += 16 * *(_DWORD *)(v39 + 8 * v40 + 1016);
          this[15].y += 16 * *(_DWORD *)(v39 + 8 * v40 + 1020);
          this[16].x += 16 * *(_DWORD *)(v39 + 8 * v40 + 1016);
          this[16].y += 16 * *(_DWORD *)(v39 + 8 * v40 + 1020);
          this[17].x += 16 * *(_DWORD *)(v39 + 8 * v40 + 1016);
          this[17].y += 16 * *(_DWORD *)(v39 + 8 * v40 + 1020);
          this[18].x += 16 * *(_DWORD *)(v39 + 8 * v40 + 1016);
          this[18].y += 16 * *(_DWORD *)(v39 + 8 * v40 + 1020);
          ERECTL::bOffsetAdd(
            v15,
            (const struct _POINTL *)(*(_QWORD *)a3 + 1016LL + 8 * (*(_DWORD *)(*(_QWORD *)a3 + 40LL) & 1LL)),
            0);
          ERECTL::bOffsetAdd(
            (ERECTL *)v53,
            (const struct _POINTL *)(*(_QWORD *)a2 + 1016LL + 8 * (*(_DWORD *)(*(_QWORD *)a2 + 40LL) & 1LL)),
            0);
          v41 = XDCOBJ::prgnEffRao((DC **)a2);
          v58 = 0LL;
          v59 = 0;
          v60 = 1;
          v61 = 0LL;
          XCLIPOBJ::vSetup((XCLIPOBJ *)v56, v41, (struct ERECTL *)v53, 0);
          if ( !ERECTL::bEmpty((ERECTL *)v57) )
          {
            if ( (*(_DWORD *)(*(_QWORD *)a2 + 36LL) & 0xE0) != 0 )
            {
              v52 = v57[0];
              XDCOBJ::vAccumulateTight(a2, v42, &v52);
            }
            BLTRECORD::vMirror((BLTRECORD *)this, this + 15);
            ++*(_DWORD *)(*(_QWORD *)&this[8] + 92LL);
            v44 = 0LL;
            v45 = *(_QWORD *)a2;
            if ( *(__int16 *)(*(_QWORD *)a2 + 178LL) >= 0 )
              v44 = *(_QWORD *)a2 + 176LL;
            if ( this[27].x != 52428 )
            {
              v46 = BLTRECORD::pSurfMskOut((BLTRECORD *)this);
              if ( v46 )
                v19 = (char *)v46 + 24;
            }
            v47 = this[8];
            if ( (*(_DWORD *)(*(_QWORD *)&v47 + 112LL) & 4) != 0 )
              return (unsigned int)(*(__int64 (__fastcall **)(__int64, __int64, char *, _BYTE *, _QWORD, __int64, __int64, struct _POINTFIX *, ERECTL *, struct _POINTFIX *, _DWORD))(v43 + 3248))(
                                     (*(_QWORD *)&v47 + 24LL) & -(__int64)(v47 != 0LL),
                                     (*(_QWORD *)&this[9] + 24LL) & -(__int64)(*(_QWORD *)&this[9] != 0LL),
                                     v19,
                                     v56,
                                     *(_QWORD *)&this[11],
                                     v44,
                                     v45 + 1176,
                                     v49,
                                     v15,
                                     this + 24,
                                     a5);
            else
              return (unsigned int)((__int64 (__fastcall *)(__int64, __int64, char *, _BYTE *, _QWORD, __int64, __int64, struct _POINTFIX *, ERECTL *, struct _POINTFIX *, _DWORD))EngPlgBlt)(
                                     (*(_QWORD *)&v47 + 24LL) & -(__int64)(v47 != 0LL),
                                     (*(_QWORD *)&this[9] + 24LL) & -(__int64)(*(_QWORD *)&this[9] != 0LL),
                                     v19,
                                     v56,
                                     *(_QWORD *)&this[11],
                                     v44,
                                     v45 + 1176,
                                     v49,
                                     v15,
                                     &this[24],
                                     a5);
          }
        }
        return v17;
      }
      else
      {
        v52.m128i_i64[0] = 0LL;
        v52.m128i_i8[8] = 0;
        v52.m128i_i32[3] = 0;
        v49 = 0LL;
        v50 = 0;
        v51 = 0;
        if ( (unsigned int)BLTRECORD::bRotate(
                             (BLTRECORD *)this,
                             a3,
                             (struct SURFMEM *)&v49,
                             (struct SURFMEM *)&v52,
                             a4,
                             a5)
          && (BLTRECORD::vBound((BLTRECORD *)this, (struct ERECTL *)&this[19]),
              (unsigned int)BLTRECORD::bCreateRegion((BLTRECORD *)this, a2, this + 15)) )
        {
          v37 = BLTRECORD::bBitBlt((BLTRECORD *)this, (DC **)a2, a3, a4);
          v38 = *(_QWORD *)a2;
          *(_DWORD *)(v38 + 36) |= 0x10u;
          *(_QWORD *)(v38 + 1112) = 0LL;
        }
        else
        {
          v37 = 0;
        }
        SURFMEM::~SURFMEM((SURFMEM *)&v49);
        SURFMEM::~SURFMEM((SURFMEM *)&v52);
        return v37;
      }
    }
LABEL_9:
    EngSetLastError(0x57u);
    return 0LL;
  }
  BLTRECORD::vOrder((BLTRECORD *)this, (struct ERECTL *)&this[24]);
  if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 976LL) + 108LL) & 1) != 0 )
  {
    v9 = this[24].x;
    this[24].x = this[25].x;
    this[25].x = v9;
  }
  v10 = 0;
  if ( BLTRECORD::pSurfMskOut((BLTRECORD *)this) )
  {
    if ( this[24].x < 0 )
      goto LABEL_9;
    if ( this[24].y < 0 )
      goto LABEL_9;
    v11 = this[10];
    if ( this[25].x > *(_DWORD *)(*(_QWORD *)&v11 + 56LL) || this[25].y > *(_DWORD *)(*(_QWORD *)&v11 + 60LL) )
      goto LABEL_9;
  }
  v49 = 0LL;
  v50 = 0;
  v51 = 0;
  if ( (a4 & 0x10000) == 0 || (unsigned int)BLTRECORD::bRotate((BLTRECORD *)this, (struct SURFMEM *)&v49, a5) )
  {
    BLTRECORD::vBound((BLTRECORD *)this, (struct ERECTL *)&this[19]);
    if ( (unsigned int)BLTRECORD::bCreateRegion((BLTRECORD *)this, a2, this + 15) )
    {
      v13 = BLTRECORD::bBitBlt((BLTRECORD *)this, (DC **)a2, a3, a4);
      v14 = *(_QWORD *)a2;
      *(_DWORD *)(v14 + 36) |= 0x10u;
      *(_QWORD *)(v14 + 1112) = 0LL;
      v10 = v13;
    }
  }
  SURFMEM::~SURFMEM((SURFMEM *)&v49);
  return v10;
}
