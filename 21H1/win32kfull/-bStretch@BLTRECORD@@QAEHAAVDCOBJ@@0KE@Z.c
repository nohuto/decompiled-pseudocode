/*
 * XREFs of ?bStretch@BLTRECORD@@QAEHAAVDCOBJ@@0KE@Z @ 0x7AB9E
 * Callers:
 *     _GreStretchBltInternal@52 @ 0x78C6A (_GreStretchBltInternal@52.c)
 *     _GreMaskBlt@52 @ 0x7A502 (_GreMaskBlt@52.c)
 *     _GrePlgBlt@44 @ 0x1EDD56 (_GrePlgBlt@44.c)
 * Callees:
 *     ?bEmpty@ERECTL@@QBEHXZ @ 0x4F396 (-bEmpty@ERECTL@@QBEHXZ.c)
 *     ?prgnVisSnap@DC@@QBEPAVREGION@@XZ @ 0x53684 (-prgnVisSnap@DC@@QBEPAVREGION@@XZ.c)
 *     ?prgnRao@DC@@QBEPAVREGION@@XZ @ 0x538E8 (-prgnRao@DC@@QBEPAVREGION@@XZ.c)
 *     ?bOffsetAdd@ERECTL@@QAEHABU_POINTL@@H@Z @ 0x53E36 (-bOffsetAdd@ERECTL@@QAEHABU_POINTL@@H@Z.c)
 *     ?vAccumulateTight@XDCOBJ@@QAEXPAVECLIPOBJ@@AAVERECTL@@@Z @ 0x56734 (-vAccumulateTight@XDCOBJ@@QAEXPAVECLIPOBJ@@AAVERECTL@@@Z.c)
 *     ?pSurfaceEff@XDCOBJ@@QAEPAVSURFACE@@XZ @ 0x79420 (-pSurfaceEff@XDCOBJ@@QAEPAVSURFACE@@XZ.c)
 *     ?bBitBlt@BLTRECORD@@QAEHAAVDCOBJ@@0K@Z @ 0x79928 (-bBitBlt@BLTRECORD@@QAEHAAVDCOBJ@@0K@Z.c)
 *     ?vOrderStupid@BLTRECORD@@QAEXPAVERECTL@@@Z @ 0x7AF10 (-vOrderStupid@BLTRECORD@@QAEXPAVERECTL@@@Z.c)
 *     ?vMirror@BLTRECORD@@QAEXPAVERECTL@@@Z @ 0x7B4CE (-vMirror@BLTRECORD@@QAEXPAVERECTL@@@Z.c)
 *     ?vOrderAmnesia@BLTRECORD@@QBEXPAVERECTL@@@Z @ 0x7B500 (-vOrderAmnesia@BLTRECORD@@QBEXPAVERECTL@@@Z.c)
 *     ?vAccumulate@XDCOBJ@@QAEXAAVERECTL@@@Z @ 0x7B8B6 (-vAccumulate@XDCOBJ@@QAEXAAVERECTL@@@Z.c)
 *     __tlgKeywordOn@12 @ 0xB223C (__tlgKeywordOn@12.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapperByVal@$03@@3333333@Z @ 0x1EE3C5 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@U1@U1@@-$_tlgWriteTemplate@$$A6GJPBU_tlgProvide.c)
 *     ?bBitBlt@BLTRECORD@@QAEHAAVDCOBJ@@0KJJ@Z @ 0x1EF8C8 (-bBitBlt@BLTRECORD@@QAEHAAVDCOBJ@@0KJJ@Z.c)
 *     ?bStretch@BLTRECORD@@QAEHAAVSURFMEM@@K@Z @ 0x1EFAF2 (-bStretch@BLTRECORD@@QAEHAAVSURFMEM@@K@Z.c)
 */

int __thiscall BLTRECORD::bStretch(
        struct ECLIPOBJ **this,
        struct DCOBJ *a2,
        struct DCOBJ *a3,
        unsigned int a4,
        unsigned __int8 a5)
{
  BLTRECORD *v6; // ecx
  int v7; // eax
  int v8; // ecx
  struct ECLIPOBJ *v9; // esi
  BLTRECORD *v10; // ecx
  char *v11; // edi
  struct ECLIPOBJ *v12; // eax
  struct ERECTL *v13; // edx
  int v14; // ecx
  DC *v15; // ecx
  struct REGION *v16; // eax
  struct ECLIPOBJ *v17; // ecx
  _DWORD *v18; // eax
  bool v19; // cc
  DC *v20; // eax
  struct ECLIPOBJ *v21; // eax
  unsigned int v23; // ecx
  int v25; // ecx
  bool v26; // zf
  struct ECLIPOBJ *v27; // eax
  struct ECLIPOBJ *v28; // edx
  int v29; // esi
  struct SURFACE *v30; // eax
  int v31; // edx
  struct SURFACE *v32; // eax
  int v33; // edx
  struct ECLIPOBJ *v34; // ecx
  int v35; // ecx
  struct ECLIPOBJ *v36; // eax
  int v37; // edx
  int v38; // esi
  LONG v39; // [esp+Ch] [ebp-BCh] BYREF
  int v40; // [esp+10h] [ebp-B8h] BYREF
  int v41; // [esp+14h] [ebp-B4h]
  int v42; // [esp+18h] [ebp-B0h]
  struct ECLIPOBJ *v43; // [esp+1Ch] [ebp-ACh] BYREF
  struct ECLIPOBJ *v44; // [esp+20h] [ebp-A8h] BYREF
  struct ECLIPOBJ *v45; // [esp+24h] [ebp-A4h] BYREF
  DC *v46; // [esp+28h] [ebp-A0h] BYREF
  int v47; // [esp+2Ch] [ebp-9Ch] BYREF
  struct ECLIPOBJ *v48; // [esp+30h] [ebp-98h] BYREF
  XDCOBJ *v49; // [esp+34h] [ebp-94h] BYREF
  struct ECLIPOBJ *v50; // [esp+38h] [ebp-90h] BYREF
  char v51; // [esp+3Fh] [ebp-89h]
  char v52[4]; // [esp+40h] [ebp-88h] BYREF
  _DWORD v53[32]; // [esp+44h] [ebp-84h] BYREF

  v49 = a3;
  v50 = a2;
  BLTRECORD::vOrderStupid((BLTRECORD *)this, (struct ERECTL *)(this + 25));
  if ( (a4 & 0xD4) == 0 )
  {
    BLTRECORD::vOrderStupid(v6, (struct ERECTL *)(this + 35));
    if ( ((unsigned int)this[42] & 0x10000) != 0 )
      v27 = this[12];
    else
      v27 = 0;
    if ( v27 )
    {
      if ( (int)this[35] < 0
        || (int)this[36] < 0
        || (v28 = this[12], (int)this[37] > *((_DWORD *)v28 + 8))
        || (int)this[38] > *((_DWORD *)v28 + 9) )
      {
        EngSetLastError(0x57u);
        return 0;
      }
    }
    v40 = 0;
    LOBYTE(v41) = 0;
    v42 = 0;
    if ( (a4 & 0x10000) == 0 || BLTRECORD::bStretch((BLTRECORD *)this, (struct SURFMEM *)&v40, a5) )
    {
      this[33] = (struct ECLIPOBJ *)((struct ECLIPOBJ *)((char *)this[31] + (_DWORD)this[27]) - this[25]);
      this[34] = (struct ECLIPOBJ *)((char *)this[28] + this[32] - this[26]);
      v29 = BLTRECORD::bBitBlt((BLTRECORD *)this, a2, a2, a4);
    }
    else
    {
      v29 = 0;
    }
    SURFMEM::~SURFMEM((SURFMEM *)&v40);
    return v29;
  }
  v7 = *(_DWORD *)a2;
  v8 = *(_DWORD *)(*(_DWORD *)a2 + 24);
  v9 = (struct ECLIPOBJ *)*((_DWORD *)this[10] + 7);
  v48 = v9;
  v47 = v8;
  if ( (v8 & 0x200) == 0 || !v9 || (v26 = ((unsigned int)&loc_20000 & *((_DWORD *)v9 + 6)) == 0, v51 = 1, v26) )
    v51 = 0;
  v10 = *(BLTRECORD **)v49;
  if ( *(_DWORD *)(v7 + 36) != *(_DWORD *)(*(_DWORD *)v49 + 36)
    && (v47 & 0x4000) == 0
    && (*((_DWORD *)v10 + 6) & 0x4000) == 0
    && !v51 )
  {
    v30 = XDCOBJ::pSurfaceEff(a2);
    if ( *((_WORD *)v30 + 32) != (_WORD)v31 || *((_DWORD *)v30 + 4) != v31 )
    {
      v32 = XDCOBJ::pSurfaceEff(v49);
      if ( *((_WORD *)v32 + 32) != (_WORD)v33 || *((_DWORD *)v32 + 4) != v33 )
        goto LABEL_81;
    }
  }
  BLTRECORD::vOrderAmnesia(v10, (struct ERECTL *)(this + 35));
  v11 = 0;
  if ( ((unsigned int)this[42] & 0x10000) != 0 )
    v12 = this[12];
  else
    v12 = 0;
  if ( v12 )
  {
    v47 = (int)this[35];
    if ( v47 < 0
      || (int)this[36] < 0
      || (v34 = this[12], (int)this[37] > *((_DWORD *)v34 + 8))
      || (int)this[38] > *((_DWORD *)v34 + 9) )
    {
      if ( (unsigned int)dword_266280 > 5 && (unsigned __int8)_tlgKeywordOn(0, 0x2000) )
      {
        v49 = this[34];
        v50 = this[33];
        v45 = this[32];
        v44 = this[31];
        v43 = this[38];
        v46 = this[37];
        v48 = this[36];
        _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          v35,
          v35,
          &v47,
          &v48,
          &v46,
          &v43,
          &v44,
          &v45,
          &v50,
          &v49);
      }
LABEL_81:
      EngSetLastError(0x57u);
      return 0;
    }
  }
  BLTRECORD::vOrderStupid((BLTRECORD *)this, (struct ERECTL *)(this + 31));
  if ( a5 == 4 || *(_DWORD *)(*(_DWORD *)(*(_DWORD *)v50 + 1020) + 228) == 2 )
    goto LABEL_9;
  v23 = (unsigned int)this[42];
  if ( (v23 & 0x10000) != 0 ? this[12] : 0 )
    goto LABEL_9;
  v13 = (struct ERECTL *)(this + 25);
  if ( (v23 & 0x18) == 0 )
  {
    v25 = (int)this[31] + this[27] - this[33] - *(_DWORD *)v13;
    if ( (unsigned int)(v25 + 1) <= 2 )
    {
      if ( (unsigned int)this[28] + this[32] - this[34] - (_DWORD)this[26] + 1 <= 2 )
        return BLTRECORD::bBitBlt(
                 (BLTRECORD *)this,
                 v50,
                 v49,
                 a4,
                 v25,
                 (int)this[28] + this[32] - this[34] - (_DWORD)this[26]);
LABEL_9:
      v13 = (struct ERECTL *)(this + 25);
    }
  }
  v14 = *(_DWORD *)v50;
  if ( !*(_DWORD *)(*(_DWORD *)v50 + 504) || !*(_DWORD *)(*(_DWORD *)v49 + 504) )
    return 1;
  if ( (*(_BYTE *)(v14 + 24) & 0xE0) != 0 )
  {
    XDCOBJ::vAccumulate(v50, v13);
    v14 = *(_DWORD *)v50;
  }
  ERECTL::bOffsetAdd((ERECTL *)(this + 25), (const struct _POINTL *)(v14 + 1048 + 8 * (*(_DWORD *)(v14 + 28) & 1)), 0);
  ERECTL::bOffsetAdd(
    (ERECTL *)(this + 31),
    (const struct _POINTL *)(*(_DWORD *)v49 + 1048 + 8 * (*(_DWORD *)(*(_DWORD *)v49 + 28) & 1)),
    0);
  if ( DC::prgnRao(*(DC **)v50) )
    v16 = DC::prgnRao(v15);
  else
    v16 = DC::prgnVisSnap(v15);
  v53[16] = 0;
  v53[17] = 0;
  v53[27] = 1;
  v53[29] = 0;
  XCLIPOBJ::vSetup((XCLIPOBJ *)v52, v16, (struct ERECTL *)(this + 25), 0);
  if ( ERECTL::bEmpty((ERECTL *)v53) )
    return 1;
  if ( (*(_BYTE *)(*(_DWORD *)v50 + 24) & 0xE0) != 0
    && ((a4 & 0xE8) == 0 || (v36 = this[14]) != 0 && (*((_DWORD *)v36 + 19) & 0x100) == 0) )
  {
    v39 = v53[0];
    v40 = v53[1];
    v41 = v53[2];
    v42 = v53[3];
    XDCOBJ::vAccumulateTight(v50, v50, &v39);
    v9 = v48;
    v11 = 0;
  }
  v17 = this[11];
  v48 = this[10];
  v18 = (_DWORD *)*((_DWORD *)v17 + 7);
  if ( (*((_DWORD *)v48 + 18) & 0x2000) != 0 )
    v49 = (XDCOBJ *)*((_DWORD *)v9 + 544);
  else
    v49 = (XDCOBJ *)EngStretchBltROP;
  if ( !v51 )
  {
    if ( a5 == 4 && (*((_BYTE *)v9 + 1120) & 0x10) == 0 )
      v49 = (XDCOBJ *)EngStretchBltROP;
    if ( *((_WORD *)v17 + 32) == 1 && v18 && ((unsigned int)&loc_20000 & v18[6]) != 0 )
    {
      v37 = v18[459];
      if ( (int)this[31] < v37 )
        goto LABEL_96;
      v38 = v18[460];
      if ( (int)this[32] < v38 || (int)this[33] > v37 + *((_DWORD *)v17 + 8) )
        goto LABEL_96;
      v19 = (int)this[34] <= v38 + *((_DWORD *)v17 + 9);
    }
    else
    {
      if ( (int)this[31] < 0 || (int)this[32] < 0 || (int)this[33] > *((_DWORD *)v17 + 8) )
        goto LABEL_96;
      v19 = (int)this[34] <= *((_DWORD *)v17 + 9);
    }
    if ( v19 )
    {
LABEL_30:
      if ( v48 == v17 && bIntersect(this + 31, this + 25) )
        v49 = (XDCOBJ *)EngStretchBltROP;
      goto LABEL_31;
    }
LABEL_96:
    v49 = (XDCOBJ *)EngStretchBltROP;
    goto LABEL_30;
  }
LABEL_31:
  BLTRECORD::vMirror((BLTRECORD *)this, (struct ERECTL *)(this + 25));
  ++*((_DWORD *)this[10] + 14);
  v20 = *(DC **)v50;
  v46 = v20;
  if ( *((__int16 *)v20 + 57) >= 0 )
    v50 = (DC *)((char *)v20 + 112);
  else
    v50 = 0;
  v48 = this[41];
  if ( v48 != (struct ECLIPOBJ *)52428 )
  {
    if ( ((unsigned int)this[42] & 0x10000) != 0 )
      v21 = this[12];
    else
      v21 = 0;
    if ( v21 )
      v11 = (char *)v21 + 16;
  }
  return ((int (__stdcall *)(char *, char *, char *, char *, struct ECLIPOBJ *, struct ECLIPOBJ *, char *, struct ECLIPOBJ **, struct ECLIPOBJ **, struct ECLIPOBJ **, _DWORD, struct ECLIPOBJ *, struct ECLIPOBJ *))v49)(
           this[10] != 0 ? (char *)this[10] + 16 : 0,
           this[11] != 0 ? (char *)this[11] + 16 : 0,
           v11,
           v52,
           this[13],
           v50,
           (char *)v46 + 1176,
           this + 25,
           this + 31,
           this + 35,
           a5,
           this[14],
           v48);
}
