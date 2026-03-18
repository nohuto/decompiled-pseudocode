/*
 * XREFs of ?bStretch@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z @ 0x1C00697CC
 * Callers:
 *     GreStretchBltInternal @ 0x1C009E23C (GreStretchBltInternal.c)
 *     GreMaskBlt @ 0x1C0102C4C (GreMaskBlt.c)
 *     GrePlgBlt @ 0x1C028CF70 (GrePlgBlt.c)
 * Callees:
 *     ?bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0K@Z @ 0x1C0067BF8 (-bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0K@Z.c)
 *     ?vOrderStupid@BLTRECORD@@QEAAXPEAVERECTL@@@Z @ 0x1C0069C40 (-vOrderStupid@BLTRECORD@@QEAAXPEAVERECTL@@@Z.c)
 *     ?pSurfMskOut@BLTRECORD@@QEAAPEAVSURFACE@@XZ @ 0x1C0069C88 (-pSurfMskOut@BLTRECORD@@QEAAPEAVSURFACE@@XZ.c)
 *     ?vMirror@BLTRECORD@@QEAAXPEAVERECTL@@@Z @ 0x1C0069CA4 (-vMirror@BLTRECORD@@QEAAXPEAVERECTL@@@Z.c)
 *     ?pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ @ 0x1C0099080 (-pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C00993B8 (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C009D358 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C009ECF8 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C00A1148 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ?bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0KJJ@Z @ 0x1C0119164 (-bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0KJJ@Z.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C015F580 (_guard_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3333333@Z @ 0x1C028D7E4 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvid.c)
 *     ?bStretch@BLTRECORD@@QEAAHAEAVSURFMEM@@K@Z @ 0x1C028F1E0 (-bStretch@BLTRECORD@@QEAAHAEAVSURFMEM@@K@Z.c)
 */

__int64 __fastcall BLTRECORD::bStretch(BLTRECORD *this, struct DCOBJ *a2, struct DCOBJ *a3, int a4, unsigned __int8 a5)
{
  struct ERECTL *v5; // r15
  _QWORD *v8; // rcx
  __int64 v9; // r11
  char v10; // r9
  char *v11; // r14
  unsigned int v12; // r13d
  int v13; // r8d
  __int64 v14; // rbx
  char v15; // r9
  int *v16; // r12
  int v17; // ecx
  int v18; // eax
  int v19; // ecx
  int v20; // eax
  __int64 v21; // rcx
  int v22; // r9d
  _DWORD *v23; // r9
  struct DCOBJ *v24; // r11
  unsigned int v25; // r10d
  int v26; // ecx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rcx
  struct REGION *v31; // rax
  struct ECLIPOBJ *v32; // rdx
  __int64 v33; // r10
  __int64 v34; // rdx
  _DWORD *v35; // rax
  BOOL (__stdcall *v36)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG, BRUSHOBJ *, DWORD); // r15
  char *v37; // r8
  bool v38; // cc
  struct ERECTL *v39; // rbx
  __int64 v40; // r8
  __int64 v41; // r11
  int v42; // r13d
  struct SURFACE *v44; // rax
  int v45; // edx
  BLTRECORD *v46; // rcx
  int *v47; // rdx
  __int64 v48; // rcx
  int v49; // r10d
  unsigned int v50; // r14d
  __int64 v51; // rcx
  int v52; // eax
  struct SURFACE *v53; // rax
  XDCOBJ *v54; // r11
  struct SURFACE *v55; // rax
  int v56; // edx
  __int64 v57; // rax
  int v58; // ecx
  int v59; // r9d
  char v60; // [rsp+70h] [rbp-90h]
  int v61; // [rsp+74h] [rbp-8Ch] BYREF
  int v62; // [rsp+78h] [rbp-88h] BYREF
  int v63; // [rsp+7Ch] [rbp-84h] BYREF
  int v64; // [rsp+80h] [rbp-80h] BYREF
  int v65; // [rsp+84h] [rbp-7Ch] BYREF
  int v66; // [rsp+88h] [rbp-78h] BYREF
  int v67; // [rsp+8Ch] [rbp-74h] BYREF
  int v68; // [rsp+90h] [rbp-70h] BYREF
  __int128 v69; // [rsp+98h] [rbp-68h] BYREF
  _BYTE v70[4]; // [rsp+B0h] [rbp-50h] BYREF
  __int128 v71[4]; // [rsp+B4h] [rbp-4Ch] BYREF
  __int64 v72; // [rsp+100h] [rbp+0h]
  int v73; // [rsp+108h] [rbp+8h]
  int v74; // [rsp+130h] [rbp+30h]
  __int64 v75; // [rsp+140h] [rbp+40h]

  v5 = (BLTRECORD *)((char *)this + 152);
  v61 = a4;
  BLTRECORD::vOrderStupid(this, (BLTRECORD *)((char *)this + 152));
  if ( (v10 & 0xD4) != 0 )
  {
    v11 = 0LL;
    v12 = 1;
    v13 = *(_DWORD *)(*(_QWORD *)a2 + 36LL);
    v14 = *(_QWORD *)(v8[8] + 48LL);
    if ( (v13 & 0x200) == 0 || !v14 || (v15 = 1, (*(_DWORD *)(v14 + 40) & 0x20000) == 0) )
      v15 = 0;
    v60 = v15;
    if ( *(_QWORD *)(*(_QWORD *)a2 + 48LL) != *(_QWORD *)(*(_QWORD *)v9 + 48LL)
      && (v13 & 0x4000) == 0
      && (*(_DWORD *)(*(_QWORD *)v9 + 36LL) & 0x4000) == 0
      && !v15 )
    {
      v53 = XDCOBJ::pSurfaceEff(a2);
      if ( *((_WORD *)v53 + 50) || *((_QWORD *)v53 + 3) )
      {
        v55 = XDCOBJ::pSurfaceEff(v54);
        if ( *((_WORD *)v55 + 50) || *((_QWORD *)v55 + 3) )
          goto LABEL_78;
      }
    }
    v16 = (int *)((char *)this + 192);
    v17 = *((_DWORD *)this + 48);
    v18 = *((_DWORD *)this + 50);
    if ( v17 > v18 )
    {
      *v16 = v18 + 1;
      *((_DWORD *)this + 50) = v17 + 1;
    }
    v19 = *((_DWORD *)this + 49);
    v20 = *((_DWORD *)this + 51);
    if ( v19 > v20 )
    {
      *((_DWORD *)this + 49) = v20 + 1;
      *((_DWORD *)this + 51) = v19 + 1;
    }
    if ( BLTRECORD::pSurfMskOut(this) )
    {
      v56 = *v16;
      if ( *v16 < 0
        || *((int *)this + 49) < 0
        || (v21 = *((_QWORD *)this + 10), *((_DWORD *)this + 50) > *(_DWORD *)(v21 + 56))
        || *((_DWORD *)this + 51) > *(_DWORD *)(v21 + 60) )
      {
        if ( (unsigned int)dword_1C032A3F8 > 5
          && (qword_1C032A408 & 0x200000000000LL) != 0
          && (qword_1C032A410 & 0x200000000000LL) == qword_1C032A410 )
        {
          v61 = *((_DWORD *)this + 47);
          v62 = *((_DWORD *)this + 46);
          v63 = *((_DWORD *)this + 45);
          v64 = *((_DWORD *)this + 44);
          v65 = *((_DWORD *)this + 51);
          v66 = *((_DWORD *)this + 50);
          v67 = *((_DWORD *)this + 49);
          v68 = v56;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
            v21,
            (unsigned int)&unk_1C02F2B9D,
            0,
            v22,
            (__int64)&v68,
            (__int64)&v67,
            (__int64)&v66,
            (__int64)&v65,
            (__int64)&v64,
            (__int64)&v63,
            (__int64)&v62,
            (__int64)&v61);
        }
LABEL_78:
        EngSetLastError(0x57u);
        return (unsigned int)v11;
      }
    }
    BLTRECORD::vOrderStupid(this, (BLTRECORD *)((char *)this + 176));
    if ( a5 != 4
      && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 976LL) + 208LL) != 2
      && !BLTRECORD::pSurfMskOut(this)
      && (*((_DWORD *)this + 55) & 0x18) == 0 )
    {
      v26 = *v23 + *((_DWORD *)this + 40) - *((_DWORD *)this + 46) - *(_DWORD *)v5;
      if ( (unsigned int)(v26 + 1) <= 2 )
      {
        v45 = *((_DWORD *)this + 41) + *((_DWORD *)this + 45) - *((_DWORD *)this + 47) - *((_DWORD *)this + 39);
        if ( (unsigned int)(v45 + 1) <= 2 )
        {
          LODWORD(v11) = BLTRECORD::bBitBlt(this, a2, v24, v25, v26, v45);
          return (unsigned int)v11;
        }
      }
    }
    v27 = *(_QWORD *)a2;
    if ( !*(_QWORD *)(*(_QWORD *)a2 + 496LL) || !*(_QWORD *)(*(_QWORD *)v24 + 496LL) )
    {
      LODWORD(v11) = 1;
      return (unsigned int)v11;
    }
    if ( (*(_DWORD *)(v27 + 36) & 0xE0) != 0 )
    {
      XDCOBJ::vAccumulate(a2, v5);
      v27 = *(_QWORD *)a2;
    }
    v28 = *(_DWORD *)(v27 + 40) & 1LL;
    *(_DWORD *)v5 += *(_DWORD *)(v27 + 8 * v28 + 1016);
    *((_DWORD *)v5 + 2) += *(_DWORD *)(v27 + 8 * v28 + 1016);
    *((_DWORD *)v5 + 1) += *(_DWORD *)(v27 + 8 * v28 + 1020);
    *((_DWORD *)v5 + 3) += *(_DWORD *)(v27 + 8 * v28 + 1020);
    v29 = *(_QWORD *)v24;
    v30 = *(_DWORD *)(*(_QWORD *)v24 + 40LL) & 1LL;
    *v23 += *(_DWORD *)(*(_QWORD *)v24 + 8 * v30 + 1016);
    v23[2] += *(_DWORD *)(v29 + 8 * v30 + 1016);
    v23[1] += *(_DWORD *)(v29 + 8 * v30 + 1020);
    v23[3] += *(_DWORD *)(v29 + 8 * v30 + 1020);
    v31 = XDCOBJ::prgnEffRao(a2);
    v72 = 0LL;
    v73 = 0;
    v74 = 1;
    v75 = 0LL;
    XCLIPOBJ::vSetup((XCLIPOBJ *)v70, v31, v5, 0);
    if ( (unsigned int)ERECTL::bEmpty((ERECTL *)v71) )
      return v12;
    if ( (*(_DWORD *)(*(_QWORD *)a2 + 36LL) & 0xE0) != 0
      && ((v61 & 0xE8) == 0 || (v57 = *((_QWORD *)this + 12)) != 0 && (*(_DWORD *)(v57 + 120) & 0x100) == 0) )
    {
      v69 = v71[0];
      XDCOBJ::vAccumulateTight(a2, v32, (struct ERECTL *)&v69);
    }
    v33 = *((_QWORD *)this + 8);
    v34 = *((_QWORD *)this + 9);
    v35 = *(_DWORD **)(v34 + 48);
    if ( (*(_DWORD *)(v33 + 112) & 0x2000) != 0 )
      v36 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG, BRUSHOBJ *, DWORD))(v14 + 3240);
    else
      v36 = EngStretchBltROP;
    if ( v60 )
    {
      v39 = (BLTRECORD *)((char *)this + 152);
LABEL_34:
      BLTRECORD::vMirror(this, v39);
      v40 = 0LL;
      ++*(_DWORD *)(*((_QWORD *)this + 8) + 92LL);
      v41 = *(_QWORD *)a2;
      v42 = *((_DWORD *)this + 54);
      if ( *(__int16 *)(*(_QWORD *)a2 + 178LL) >= 0 )
        v40 = *(_QWORD *)a2 + 176LL;
      if ( v42 != 52428 )
      {
        v44 = BLTRECORD::pSurfMskOut(this);
        if ( v44 )
          v11 = (char *)v44 + 24;
      }
      return ((unsigned int (__fastcall *)(__int64, _QWORD, char *, _BYTE *, _QWORD, __int64, __int64, char *, char *, char *, _DWORD, _QWORD, int))v36)(
               (*((_QWORD *)this + 8) + 24LL) & -(__int64)(*((_QWORD *)this + 8) != 0LL),
               (*((_QWORD *)this + 9) + 24LL) & ((unsigned __int128)-(__int128)*((unsigned __int64 *)this + 9) >> 64),
               v11,
               v70,
               *((_QWORD *)this + 11),
               v40,
               v41 + 1176,
               (char *)this + 152,
               (char *)this + 176,
               (char *)this + 192,
               a5,
               *((_QWORD *)this + 12),
               v42);
    }
    if ( a5 == 4 && (*(_BYTE *)(v14 + 1824) & 0x10) == 0 )
      v36 = EngStretchBltROP;
    if ( *(_WORD *)(v34 + 100) == 1 && v35 && (v35[10] & 0x20000) != 0 )
    {
      v58 = v35[646];
      v37 = (char *)this + 176;
      if ( *((_DWORD *)this + 44) < v58 )
        goto LABEL_88;
      v59 = v35[647];
      if ( *((_DWORD *)this + 45) < v59 || *((_DWORD *)this + 46) > *(_DWORD *)(v34 + 56) + v58 )
        goto LABEL_88;
      v38 = *((_DWORD *)this + 47) <= v59 + *(_DWORD *)(v34 + 60);
    }
    else
    {
      v37 = (char *)this + 176;
      if ( *((int *)this + 44) < 0 || *((int *)this + 45) < 0 || *((_DWORD *)this + 46) > *(_DWORD *)(v34 + 56) )
        goto LABEL_88;
      v38 = *((_DWORD *)this + 47) <= *(_DWORD *)(v34 + 60);
    }
    if ( v38 )
    {
LABEL_33:
      v39 = (BLTRECORD *)((char *)this + 152);
      if ( v33 == v34 && (unsigned int)bIntersect(v37, (char *)this + 152) )
        v36 = EngStretchBltROP;
      goto LABEL_34;
    }
LABEL_88:
    v36 = EngStretchBltROP;
    goto LABEL_33;
  }
  BLTRECORD::vOrderStupid((BLTRECORD *)v8, (struct ERECTL *)(v8 + 24));
  v50 = 0;
  if ( BLTRECORD::pSurfMskOut(v46) )
  {
    if ( *v47 < 0
      || *(int *)(v48 + 196) < 0
      || (v51 = *(_QWORD *)(v48 + 80), *((_DWORD *)this + 50) > *(_DWORD *)(v51 + 56))
      || *((_DWORD *)this + 51) > *(_DWORD *)(v51 + 60) )
    {
      EngSetLastError(0x57u);
      return 0LL;
    }
  }
  *(_QWORD *)&v69 = 0LL;
  BYTE8(v69) = 0;
  HIDWORD(v69) = 0;
  if ( (v49 & 0x10000) == 0 )
    goto LABEL_60;
  if ( (unsigned int)BLTRECORD::bStretch(this, (struct SURFMEM *)&v69, a5) )
  {
    LOBYTE(v49) = v61;
LABEL_60:
    v52 = *((_DWORD *)this + 40) + *((_DWORD *)this + 44) - *(_DWORD *)v5;
    *((_DWORD *)this + 47) = *((_DWORD *)this + 41) + *((_DWORD *)this + 45) - *((_DWORD *)this + 39);
    *((_DWORD *)this + 46) = v52;
    v50 = BLTRECORD::bBitBlt(this, (DC **)a2, a2, v49);
  }
  SURFMEM::~SURFMEM((SURFMEM *)&v69);
  return v50;
}
