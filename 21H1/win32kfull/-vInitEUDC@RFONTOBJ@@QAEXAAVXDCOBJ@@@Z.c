/*
 * XREFs of ?vInitEUDC@RFONTOBJ@@QAEXAAVXDCOBJ@@@Z @ 0x208150
 * Callers:
 *     _GreGetGlyphOutlineInternal@32 @ 0x85B86 (_GreGetGlyphOutlineInternal@32.c)
 *     ?wpgdGetLinkMetricsPlus@RFONTOBJ@@QAEPAU_GLYPHDATA@@PAVXDCOBJ@@PAVESTROBJ@@PBG2KPAHH@Z @ 0xC0F30 (-wpgdGetLinkMetricsPlus@RFONTOBJ@@QAEPAU_GLYPHDATA@@PAVXDCOBJ@@PAVESTROBJ@@PBG2KPAHH@Z.c)
 * Callees:
 *     _PALLOCMEM2@12 @ 0x48D0A (_PALLOCMEM2@12.c)
 *     ??0LFONTOBJ@@QAE@PAUHLFONT__@@PAVPDEVOBJ@@@Z @ 0x4B328 (--0LFONTOBJ@@QAE@PAUHLFONT__@@PAVPDEVOBJ@@@Z.c)
 *     ?vLock@XDCOBJ@@QAEXPAUHDC__@@@Z @ 0x5A410 (-vLock@XDCOBJ@@QAEXPAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QAEXXZ @ 0x5E684 (-vUnlockFast@XDCOBJ@@QAEXXZ.c)
 *     ??1RFONTOBJ@@QAE@XZ @ 0x86B86 (--1RFONTOBJ@@QAE@XZ.c)
 *     ??0IFIOBJR@@QAE@PBU_IFIMETRICS@@AAVRFONTOBJ@@AAVDCOBJ@@@Z @ 0x8859E (--0IFIOBJR@@QAE@PBU_IFIMETRICS@@AAVRFONTOBJ@@AAVDCOBJ@@@Z.c)
 *     ?vMakeInactive@RFONTOBJ@@QAEXXZ @ 0x8D42A (-vMakeInactive@RFONTOBJ@@QAEXXZ.c)
 *     ?bMakeInactiveHelper@RFONTOBJ@@QAEHPAPAVRFONT@@@Z @ 0x8D4E8 (-bMakeInactiveHelper@RFONTOBJ@@QAEHPAPAVRFONT@@@Z.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ?ComputeEUDCLogfont@RFONTOBJ@@QAEXPAU_EUDCLOGFONT@@AAVXDCOBJ@@@Z @ 0x206DB5 (-ComputeEUDCLogfont@RFONTOBJ@@QAEXPAU_EUDCLOGFONT@@AAVXDCOBJ@@@Z.c)
 *     ?GetEUDCDefaultFontPFE@RFONTOBJ@@AAEPAVPFE@@I@Z @ 0x2074B9 (-GetEUDCDefaultFontPFE@RFONTOBJ@@AAEPAVPFE@@I@Z.c)
 *     ?bCheckEudcFontCaps@RFONTOBJ@@QBEHAAVIFIOBJ@@@Z @ 0x207859 (-bCheckEudcFontCaps@RFONTOBJ@@QBEHAAVIFIOBJ@@@Z.c)
 *     ?vInit@RFONTOBJ@@QAEXAAVXDCOBJ@@PAVPFE@@PAU_EUDCLOGFONT@@H@Z @ 0x207D5B (-vInit@RFONTOBJ@@QAEXAAVXDCOBJ@@PAVPFE@@PAU_EUDCLOGFONT@@H@Z.c)
 *     ?vInitEUDCRemote@RFONTOBJ@@QAEXAAVXDCOBJ@@@Z @ 0x2087AC (-vInitEUDCRemote@RFONTOBJ@@QAEXAAVXDCOBJ@@@Z.c)
 *     ?UpdateFontLinksLockOrder@RFONTOBJ@@AAEXXZ @ 0x208EF6 (-UpdateFontLinksLockOrder@RFONTOBJ@@AAEXXZ.c)
 */

void __thiscall RFONTOBJ::vInitEUDC(RFONTOBJ *this, struct XDCOBJ *a2)
{
  struct PFE *v2; // ebx
  int v3; // edx
  _DWORD *v4; // ecx
  int v5; // esi
  int v6; // eax
  HDC v7; // eax
  _DWORD *v8; // edx
  struct PFE *v9; // eax
  int v10; // eax
  _BYTE *v11; // edi
  bool v12; // zf
  _DWORD *v13; // ecx
  unsigned int v14; // ecx
  int v15; // eax
  struct XDCOBJ *v16; // eax
  unsigned int v17; // ecx
  int v18; // eax
  int v19; // ecx
  struct PFE *EUDCDefaultFontPFE; // eax
  int v21; // eax
  int v22; // ecx
  unsigned int v23; // ecx
  int v24; // eax
  struct PFE *v25; // edi
  int v26; // eax
  struct PFE *v27; // edi
  struct _LIST_ENTRY *v28; // eax
  int v29; // eax
  int v30; // esi
  int v31; // ecx
  unsigned int v32; // edx
  unsigned int v33; // eax
  int v34; // ecx
  _BYTE *v35; // edx
  unsigned int v36; // edx
  unsigned int v37; // esi
  int v38; // ecx
  int v39; // ecx
  unsigned int v40; // ebx
  unsigned int j; // esi
  struct PFE *v42; // [esp+10h] [ebp-D0h] BYREF
  struct RFONT *v43; // [esp+14h] [ebp-CCh] BYREF
  struct HLFONT__ *v44; // [esp+18h] [ebp-C8h] BYREF
  struct PFE *v45; // [esp+1Ch] [ebp-C4h]
  unsigned int v46; // [esp+20h] [ebp-C0h]
  struct XDCOBJ *v47; // [esp+24h] [ebp-BCh]
  unsigned int i; // [esp+28h] [ebp-B8h]
  _BYTE *v49; // [esp+2Ch] [ebp-B4h]
  struct PFE *v50; // [esp+30h] [ebp-B0h]
  BOOL v51; // [esp+34h] [ebp-ACh]
  int v52; // [esp+38h] [ebp-A8h]
  struct LFONT *v53; // [esp+3Ch] [ebp-A4h] BYREF
  _DWORD v54[3]; // [esp+40h] [ebp-A0h] BYREF
  _DWORD v55[3]; // [esp+4Ch] [ebp-94h] BYREF
  _DWORD v56[9]; // [esp+58h] [ebp-88h] BYREF
  _DWORD v57[14]; // [esp+7Ch] [ebp-64h] BYREF
  _BYTE v58[40]; // [esp+B4h] [ebp-2Ch] BYREF

  v2 = this;
  v47 = a2;
  v42 = this;
  v3 = *(_DWORD *)a2;
  if ( *(_DWORD *)(*(_DWORD *)a2 + 224) )
  {
    RFONTOBJ::vInitEUDCRemote(this, a2);
    return;
  }
  v4 = *(_DWORD **)this;
  v5 = *(_DWORD *)(*(_DWORD *)v2 + 80);
  v52 = v5;
  if ( !v4[180] && (gappfeSysEUDC || dword_27569C)
    || (bFinallyInitializeFontAssocDefault || gbSystemDBCSFontEnabled) && !v4[181]
    || (v6 = *(_DWORD *)(v5 + 76)) != 0 && (!v4[182] || v4[193] != 1 || v4[194] != *(_DWORD *)(v6 + 88)) )
  {
    v44 = *(struct HLFONT__ **)(v3 + 36);
    LFONTOBJ::LFONTOBJ((LFONTOBJ *)&v53, *(struct HLFONT__ **)(v3 + 1552), &v44);
    v44 = *(struct HLFONT__ **)v2;
    v7 = **(HDC **)a2;
    memset(v54, 0, sizeof(v54));
    XDCOBJ::vLock((XDCOBJ *)v54, v7);
    IFIOBJR::IFIOBJR(
      (IFIOBJR *)v57,
      *(const struct _IFIMETRICS **)(v5 + 20),
      (struct RFONTOBJ *)&v44,
      (struct DCOBJ *)v54);
    memset(v56, 0, sizeof(v56));
    RFONTOBJ::ComputeEUDCLogfont(v2, (struct _EUDCLOGFONT *)v56, (HDC **)v47);
    v8 = *(_DWORD **)v2;
    v9 = *(struct PFE **)(*(_DWORD *)v2 + 720);
    v45 = *(struct PFE **)(*(_DWORD *)v2 + 724);
    v50 = v9;
    v46 = 0;
    v51 = 0;
    memset(v58, 0, sizeof(v58));
    v10 = *(_DWORD *)(v5 + 76);
    v11 = v58;
    v49 = v58;
    v44 = (struct HLFONT__ *)Win32FreePool;
    if ( v10 )
    {
      v12 = v8[182] == 0;
      v51 = v8[193] == 0;
      v13 = v8;
      if ( !v12 && v8[194] != *(_DWORD *)(v10 + 88) )
      {
        v14 = 0;
        for ( i = 0; v14 < v8[195]; i = v14 )
        {
          if ( *(_DWORD *)(v8[182] + 4 * v14) )
          {
            v43 = *(struct RFONT **)(v8[182] + 4 * v14);
            RFONTOBJ::bMakeInactiveHelper(&v43, 0);
            v15 = *(_DWORD *)v2;
            v43 = 0;
            *(_DWORD *)(*(_DWORD *)(v15 + 728) + 4 * i) = 0;
            RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v43);
            v8 = *(_DWORD **)v2;
            v14 = i;
          }
          ++v14;
        }
        if ( (_DWORD *)v8[182] != v8 + 183 )
        {
          ((void (__stdcall *)(_DWORD))v44)(v8[182]);
          v8 = *(_DWORD **)v2;
        }
        v8[182] = 0;
        *(_DWORD *)(*(_DWORD *)v2 + 780) = 0;
        v13 = *(_DWORD **)v2;
      }
      v8 = v13;
      if ( !v13[182] )
        v51 = 1;
    }
    v16 = v47;
    v8[177] |= 0x200u;
    if ( (*(_DWORD *)(*(_DWORD *)(*(_DWORD *)v16 + 36) + 24) & 0x8000) != 0 )
    {
      EtwTraceGreLockReleaseSemaphore(L"prfnt->hsemEUDC", *(_DWORD *)(*(_DWORD *)v2 + 788));
      GreReleaseSemaphoreInternal(*(_DWORD *)(*(_DWORD *)v42 + 788));
      EtwTraceGreLockReleaseSemaphore(L"prfnt->hsemCache", *(_DWORD *)(*(_DWORD *)v42 + 548));
      v2 = v42;
      GreReleaseSemaphoreInternal(*(_DWORD *)(*(_DWORD *)v42 + 548));
      v11 = v58;
    }
    v17 = *(_DWORD *)(*(_DWORD *)v2 + 784) != 0;
    i = v17;
    if ( !v50 )
    {
      v18 = (int)*(&gappfeSysEUDC + v17);
      v42 = (struct PFE *)v18;
      if ( v18 )
      {
        v43 = 0;
        v55[0] = *(_DWORD *)(v18 + 20);
        if ( RFONTOBJ::bCheckEudcFontCaps(v2, (struct IFIOBJ *)v55) )
        {
          RFONTOBJ::vInit((RFONTOBJ *)&v43, v47, v42, (struct _EUDCLOGFONT *)v56, v19);
          if ( v43 )
            v50 = v43;
        }
        else
        {
          v50 = 0;
        }
        RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v43);
        v17 = i;
      }
    }
    if ( bFinallyInitializeFontAssocDefault )
    {
      if ( v45 )
        goto LABEL_43;
      EUDCDefaultFontPFE = RFONTOBJ::GetEUDCDefaultFontPFE(v2, v17);
      v42 = EUDCDefaultFontPFE;
      if ( EUDCDefaultFontPFE )
      {
        v21 = *((_DWORD *)EUDCDefaultFontPFE + 5);
        v43 = 0;
        v55[0] = v21;
        if ( RFONTOBJ::bCheckEudcFontCaps(v2, (struct IFIOBJ *)v55) )
        {
          RFONTOBJ::vInit((RFONTOBJ *)&v43, v47, v42, (struct _EUDCLOGFONT *)v56, v22);
          if ( v43 )
            v45 = v43;
        }
        else
        {
          v45 = 0;
        }
        RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v43);
        goto LABEL_43;
      }
    }
    v45 = 0;
LABEL_43:
    if ( v51 )
    {
      v23 = *(_DWORD *)(*(_DWORD *)(v5 + 76) + 84);
      if ( v23 <= 0xA )
      {
        v11 = v58;
        v49 = v58;
      }
      else
      {
        v11 = PALLOCMEM2(4 * v23, 1718382187, 1);
        v49 = v11;
      }
      if ( v11 )
      {
        v24 = *(_DWORD *)(v5 + 76);
        v25 = (struct PFE *)(v24 + 8);
        if ( !v24 )
          v25 = (struct PFE *)&NullListHead;
        v46 = 0;
        while ( 1 )
        {
          v26 = *(_DWORD *)(v5 + 76);
          v27 = *(struct PFE **)v25;
          v42 = v27;
          v28 = v26 ? (struct _LIST_ENTRY *)(v26 + 8) : &NullListHead;
          if ( v27 == (struct PFE *)v28 )
            break;
          qmemcpy(v57, v56, 0x24u);
          v25 = v42;
          v29 = *((_DWORD *)v42 + 4);
          if ( v29 )
            v57[3] = v56[3] * v29 / *((_DWORD *)v42 + 5);
          v30 = *((_DWORD *)v42 + (*((_DWORD *)v42 + i + 6) != 0 ? i : 0) + 6);
          v55[0] = *(_DWORD *)(v30 + 20);
          if ( RFONTOBJ::bCheckEudcFontCaps(v2, (struct IFIOBJ *)v55) )
          {
            v42 = 0;
            RFONTOBJ::vInit((RFONTOBJ *)&v42, v47, (struct PFE *)v30, (struct _EUDCLOGFONT *)v57, v31);
            if ( v42 )
            {
              v32 = v46;
              *(_DWORD *)&v49[4 * v46] = v42;
              v46 = v32 + 1;
            }
            RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v42);
          }
          v5 = v52;
        }
        v11 = v49;
      }
    }
    if ( (*(_DWORD *)(*(_DWORD *)(*(_DWORD *)v47 + 36) + 24) & 0x8000) != 0 )
    {
      GreAcquireSemaphore(*(_DWORD *)(*(_DWORD *)v2 + 548));
      GreAcquireSemaphore(*(_DWORD *)(*(_DWORD *)v2 + 788));
      v11 = v49;
    }
    if ( (*(_DWORD *)(*(_DWORD *)v2 + 708) & 0x200) != 0 )
    {
      v12 = !v51;
      *(_DWORD *)(*(_DWORD *)v2 + 720) = v50;
      *(_DWORD *)(*(_DWORD *)v2 + 724) = v45;
      if ( !v12 )
      {
        v33 = v46;
        v34 = *(_DWORD *)v2;
        if ( v46 )
        {
          v35 = v11;
          if ( v46 <= 0xA )
            v35 = (_BYTE *)(v34 + 732);
          *(_DWORD *)(v34 + 728) = v35;
          v36 = 0;
          if ( v33 )
          {
            v37 = v46;
            do
            {
              *(_DWORD *)(*(_DWORD *)(*(_DWORD *)v2 + 728) + 4 * v36) = *(_DWORD *)&v11[4 * v36];
              ++v36;
            }
            while ( v36 < v37 );
            v5 = v52;
          }
        }
        else
        {
          *(_DWORD *)(v34 + 728) = 0;
        }
        *(_DWORD *)(*(_DWORD *)v2 + 780) = v46;
        v38 = *(_DWORD *)(v5 + 76);
        if ( v38 )
          v39 = *(_DWORD *)(v38 + 88);
        else
          v39 = 0;
        *(_DWORD *)(*(_DWORD *)v2 + 776) = v39;
        *(_DWORD *)(*(_DWORD *)v2 + 772) = 1;
      }
      if ( *(_BYTE **)(*(_DWORD *)v2 + 728) != v11 && v11 && v11 != v58 )
        ((void (__stdcall *)(_BYTE *))v44)(v11);
      RFONTOBJ::UpdateFontLinksLockOrder(v2);
      *(_DWORD *)(*(_DWORD *)v2 + 708) &= ~0x200u;
    }
    else
    {
      v42 = v50;
      RFONTOBJ::vMakeInactive((RFONTOBJ *)&v42);
      v42 = v45;
      RFONTOBJ::vMakeInactive((RFONTOBJ *)&v42);
      v40 = v46;
      for ( j = 0; j < v40; ++j )
      {
        v42 = *(struct PFE **)&v11[4 * j];
        RFONTOBJ::vMakeInactive((RFONTOBJ *)&v42);
        v42 = 0;
        RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v42);
      }
      if ( v11 != v58 )
        ((void (__stdcall *)(_BYTE *))v44)(v11);
      v42 = 0;
      RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v42);
      v42 = 0;
      RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v42);
    }
    if ( v54[0] )
      XDCOBJ::vUnlockFast((XDCOBJ *)v54);
    v44 = 0;
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v44);
    if ( v53 )
      DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(v53);
  }
}
