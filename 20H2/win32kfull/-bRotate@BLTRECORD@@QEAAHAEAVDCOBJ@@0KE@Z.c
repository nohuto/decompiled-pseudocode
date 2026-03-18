/*
 * XREFs of ?bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z @ 0x1C028ABD4
 * Callers:
 *     GreStretchBltInternal @ 0x1C009E23C (GreStretchBltInternal.c)
 *     GreMaskBlt @ 0x1C0102C4C (GreMaskBlt.c)
 *     GrePlgBlt @ 0x1C028CF70 (GrePlgBlt.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@33@Z @ 0x1C0001008 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU.c)
 *     _tlgKeywordOn @ 0x1C0016DD8 (_tlgKeywordOn.c)
 *     ?bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0K@Z @ 0x1C0067BF8 (-bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0K@Z.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C0068928 (-vOrder@ERECTL@@QEAAXXZ.c)
 *     ?pSurfMskOut@BLTRECORD@@QEAAPEAVSURFACE@@XZ @ 0x1C0069C88 (-pSurfMskOut@BLTRECORD@@QEAAPEAVSURFACE@@XZ.c)
 *     ?pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ @ 0x1C0099080 (-pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C00993B8 (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C009D358 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C009ECF8 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C00A1148 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ?bOffsetAdd@ERECTL@@QEAAHAEBU_POINTL@@H@Z @ 0x1C014BAB8 (-bOffsetAdd@ERECTL@@QEAAHAEBU_POINTL@@H@Z.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 *     LongLongMult @ 0x1C015DC30 (LongLongMult.c)
 *     _guard_dispatch_icall_nop @ 0x1C015F580 (_guard_dispatch_icall_nop.c)
 *     ?bCreateRegion@BLTRECORD@@QEAAHAEAVDCOBJ@@PEAU_POINTFIX@@@Z @ 0x1C028AAAC (-bCreateRegion@BLTRECORD@@QEAAHAEAVDCOBJ@@PEAU_POINTFIX@@@Z.c)
 *     ?bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@AEAVSURFMEM@@1KK@Z @ 0x1C028B350 (-bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@AEAVSURFMEM@@1KK@Z.c)
 *     ?bRotate@BLTRECORD@@QEAAHAEAVSURFMEM@@K@Z @ 0x1C028B5B4 (-bRotate@BLTRECORD@@QEAAHAEAVSURFMEM@@K@Z.c)
 *     ?vBound@BLTRECORD@@QEAAXPEAVERECTL@@@Z @ 0x1C028B818 (-vBound@BLTRECORD@@QEAAXPEAVERECTL@@@Z.c)
 *     ?vExtrema@BLTRECORD@@QEAAXXZ @ 0x1C028B894 (-vExtrema@BLTRECORD@@QEAAXXZ.c)
 *     ?vMirror@BLTRECORD@@QEAAXPEAU_POINTFIX@@@Z @ 0x1C028B92C (-vMirror@BLTRECORD@@QEAAXPEAU_POINTFIX@@@Z.c)
 *     ?vOrder@BLTRECORD@@QEAAXPEAVERECTL@@@Z @ 0x1C028F370 (-vOrder@BLTRECORD@@QEAAXPEAVERECTL@@@Z.c)
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
  ERECTL *v15; // r9
  unsigned int v16; // edi
  FIX x; // ecx
  char *v18; // rsi
  struct _POINTFIX v19; // rcx
  _DWORD *v20; // r11
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
  ERECTL *v40; // r11
  struct _POINTFIX *v41; // r13
  __int64 v42; // rcx
  struct REGION *v43; // rax
  struct ECLIPOBJ *v44; // rdx
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r10
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  __int64 v51; // rdx
  __int64 v52; // r14
  struct SURFACE *v53; // rax
  struct _POINTFIX v54; // r8
  FIX v56; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v57; // [rsp+68h] [rbp-98h] BYREF
  char v58; // [rsp+70h] [rbp-90h]
  int v59; // [rsp+74h] [rbp-8Ch]
  __m128i v60; // [rsp+78h] [rbp-88h] BYREF
  __int64 v61; // [rsp+88h] [rbp-78h] BYREF
  char v62[8]; // [rsp+90h] [rbp-70h] BYREF
  int v63; // [rsp+98h] [rbp-68h]
  int v64; // [rsp+9Ch] [rbp-64h]
  _BYTE v65[4]; // [rsp+A0h] [rbp-60h] BYREF
  __m128i v66[4]; // [rsp+A4h] [rbp-5Ch] BYREF
  __int64 v67; // [rsp+F0h] [rbp-10h]
  int v68; // [rsp+F8h] [rbp-8h]
  int v69; // [rsp+120h] [rbp+20h]
  __int64 v70; // [rsp+130h] [rbp+30h]

  BLTRECORD::vExtrema((BLTRECORD *)this);
  if ( (a4 & 0xD4) != 0 )
  {
    v57 = (__int64)&this[22];
    BLTRECORD::vOrder((BLTRECORD *)this, (struct ERECTL *)&this[22]);
    ERECTL::vOrder(v15);
    v16 = 1;
    if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 976LL) + 108LL) & 1) != 0 )
    {
      x = this[24].x;
      this[24].x = this[25].x;
      this[25].x = x;
    }
    v18 = 0LL;
    if ( BLTRECORD::pSurfMskOut((BLTRECORD *)this) )
    {
      if ( this[24].x < 0 )
        goto LABEL_9;
      if ( this[24].y < 0 )
        goto LABEL_9;
      v19 = this[10];
      if ( this[25].x > *(_DWORD *)(*(_QWORD *)&v19 + 56LL) || this[25].y > *(_DWORD *)(*(_QWORD *)&v19 + 60LL) )
        goto LABEL_9;
    }
    if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 976LL) + 108LL) & 1) != 0 )
    {
      if ( BLTRECORD::pSurfMskOut((BLTRECORD *)this) )
      {
        v21 = this[10];
        v22 = this[23].x - *v20;
        v23 = *(_DWORD *)(*(_QWORD *)&v21 + 56LL);
        v24 = this[23].y - this[22].y;
        v25 = this[24].x;
        y = (unsigned int)this[24].y;
        v56 = this[22].y;
        if ( v23 < v25
          || (v27 = *(_DWORD *)(*(_QWORD *)&v21 + 60LL), v27 < (unsigned int)y)
          || v23 - v25 < v22
          || v27 - (unsigned int)y < v24 )
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
          v33 = (v32 - v31) / v29;
          if ( v24 > v33 )
            this[23].y = v56 + v33;
        }
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
          BLTRECORD::vBound((BLTRECORD *)this, (struct ERECTL *)v62);
          ++v63;
          ++v64;
          if ( (*(_DWORD *)(v39 + 36) & 0xE0) != 0 )
          {
            XDCOBJ::vAccumulate(a2, (struct ERECTL *)v62);
            v39 = *(_QWORD *)a2;
          }
          v41 = this + 15;
          v42 = *(_DWORD *)(v39 + 40) & 1LL;
          this[15].x += 16 * *(_DWORD *)(v39 + 8 * v42 + 1016);
          this[15].y += 16 * *(_DWORD *)(v39 + 8 * v42 + 1020);
          this[16].x += 16 * *(_DWORD *)(v39 + 8 * v42 + 1016);
          this[16].y += 16 * *(_DWORD *)(v39 + 8 * v42 + 1020);
          this[17].x += 16 * *(_DWORD *)(v39 + 8 * v42 + 1016);
          this[17].y += 16 * *(_DWORD *)(v39 + 8 * v42 + 1020);
          this[18].x += 16 * *(_DWORD *)(v39 + 8 * v42 + 1016);
          this[18].y += 16 * *(_DWORD *)(v39 + 8 * v42 + 1020);
          ERECTL::bOffsetAdd(
            v40,
            (const struct _POINTL *)(*(_QWORD *)a3 + 1016LL + 8 * (*(_DWORD *)(*(_QWORD *)a3 + 40LL) & 1LL)),
            0);
          ERECTL::bOffsetAdd(
            (ERECTL *)v62,
            (const struct _POINTL *)(*(_QWORD *)a2 + 1016LL + 8 * (*(_DWORD *)(*(_QWORD *)a2 + 40LL) & 1LL)),
            0);
          v43 = XDCOBJ::prgnEffRao((DC **)a2);
          v67 = 0LL;
          v68 = 0;
          v69 = 1;
          v70 = 0LL;
          XCLIPOBJ::vSetup((XCLIPOBJ *)v65, v43, (struct ERECTL *)v62, 0);
          if ( !ERECTL::bEmpty((ERECTL *)v66) )
          {
            if ( (*(_DWORD *)(*(_QWORD *)a2 + 36LL) & 0xE0) != 0 )
            {
              v60 = v66[0];
              XDCOBJ::vAccumulateTight(a2, v44, &v60);
            }
            BLTRECORD::vMirror((BLTRECORD *)this, this + 15);
            v45 = this[17].x - (__int64)v41->x;
            v46 = this[16].y - (__int64)this[15].y;
            v61 = 0LL;
            v60.m128i_i64[0] = 0LL;
            if ( (int)LongLongMult(v46, v45, &v61) < 0
              || (int)LongLongMult(this[17].y - (__int64)this[15].y, this[16].x - (__int64)v41->x, &v60) < 0 )
            {
              EngSetLastError(0x57u);
              return 0;
            }
            else if ( v61 == v60.m128i_i64[0] )
            {
              if ( (unsigned int)dword_1C032A3F8 > 5 && tlgKeywordOn((__int64)&dword_1C032A3F8, 0x400000000000LL) )
              {
                v56 = 0;
                LODWORD(v61) = 1;
                v57 = 0x1000000LL;
                v60.m128i_i32[0] = 75632;
                _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
                  v48,
                  (int)&unk_1C02F2AEF,
                  v49,
                  v50,
                  (__int64)&v60,
                  (__int64)&v57,
                  (__int64)&v61,
                  (__int64)&v56);
              }
            }
            else
            {
              ++*(_DWORD *)(*(_QWORD *)&this[8] + 92LL);
              v51 = *(_QWORD *)a2;
              v52 = 0LL;
              if ( *(__int16 *)(v51 + 178) >= 0 )
                v52 = v51 + 176;
              if ( this[27].x != 52428 )
              {
                v53 = BLTRECORD::pSurfMskOut((BLTRECORD *)this);
                if ( v53 )
                  v18 = (char *)v53 + 24;
              }
              v54 = this[8];
              if ( (*(_DWORD *)(*(_QWORD *)&v54 + 112LL) & 4) != 0 )
                return (unsigned int)(*(__int64 (__fastcall **)(__int64, __int64, char *, _BYTE *, _QWORD, __int64, __int64, struct _POINTFIX *, __int64, struct _POINTFIX *, _DWORD))(v47 + 3248))(
                                       (*(_QWORD *)&v54 + 24LL) & -(__int64)(v54 != 0LL),
                                       (*(_QWORD *)&this[9] + 24LL) & -(__int64)(*(_QWORD *)&this[9] != 0LL),
                                       v18,
                                       v65,
                                       *(_QWORD *)&this[11],
                                       v52,
                                       v51 + 1176,
                                       v41,
                                       v57,
                                       this + 24,
                                       a5);
              else
                return (unsigned int)((__int64 (__fastcall *)(__int64, __int64, char *, _BYTE *, _QWORD, __int64, __int64, struct _POINTFIX *, __int64, struct _POINTFIX *, _DWORD))EngPlgBlt)(
                                       (*(_QWORD *)&v54 + 24LL) & -(__int64)(v54 != 0LL),
                                       (*(_QWORD *)&this[9] + 24LL) & -(__int64)(*(_QWORD *)&this[9] != 0LL),
                                       v18,
                                       v65,
                                       *(_QWORD *)&this[11],
                                       v52,
                                       v51 + 1176,
                                       v41,
                                       v57,
                                       &this[24],
                                       a5);
            }
          }
        }
        return v16;
      }
      else
      {
        v60.m128i_i64[0] = 0LL;
        v60.m128i_i8[8] = 0;
        v60.m128i_i32[3] = 0;
        v57 = 0LL;
        v58 = 0;
        v59 = 0;
        if ( (unsigned int)BLTRECORD::bRotate(
                             (BLTRECORD *)this,
                             a3,
                             (struct SURFMEM *)&v57,
                             (struct SURFMEM *)&v60,
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
        SURFMEM::~SURFMEM((SURFMEM *)&v57);
        SURFMEM::~SURFMEM((SURFMEM *)&v60);
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
  v57 = 0LL;
  v58 = 0;
  v59 = 0;
  if ( (a4 & 0x10000) == 0 || (unsigned int)BLTRECORD::bRotate((BLTRECORD *)this, (struct SURFMEM *)&v57, a5) )
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
  SURFMEM::~SURFMEM((SURFMEM *)&v57);
  return v10;
}
