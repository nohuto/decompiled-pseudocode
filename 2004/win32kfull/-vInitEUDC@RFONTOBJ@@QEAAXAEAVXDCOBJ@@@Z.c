/*
 * XREFs of ?vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C00FDA34
 * Callers:
 *     ?wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@PEBG2KPEAHH@Z @ 0x1C00DB280 (-wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@PEBG2KPEAHH@Z.c)
 *     GreGetGlyphOutlineInternal @ 0x1C00E344C (GreGetGlyphOutlineInternal.c)
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0076414 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C0079EB0 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C008502C (--1RFONTOBJ@@QEAA@XZ.c)
 *     ??0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAVPDEVOBJ@@@Z @ 0x1C00A1E3C (--0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAVPDEVOBJ@@@Z.c)
 *     ??0IFIOBJR@@QEAA@PEBU_IFIMETRICS@@AEAVRFONTOBJ@@AEAVDCOBJ@@@Z @ 0x1C00A1F38 (--0IFIOBJR@@QEAA@PEBU_IFIMETRICS@@AEAVRFONTOBJ@@AEAVDCOBJ@@@Z.c)
 *     PALLOCMEM2 @ 0x1C00D8F8C (PALLOCMEM2.c)
 *     ?pGetLinkedFontList@PFEOBJ@@QEAAPEAU_LIST_ENTRY@@XZ @ 0x1C00DBD64 (-pGetLinkedFontList@PFEOBJ@@QEAAPEAU_LIST_ENTRY@@XZ.c)
 *     ?vMakeInactive@RFONTOBJ@@QEAAXXZ @ 0x1C00DBE1C (-vMakeInactive@RFONTOBJ@@QEAAXXZ.c)
 *     ?bMakeInactiveHelper@RFONTOBJ@@QEAAHPEAPEAVRFONT@@@Z @ 0x1C00DBF50 (-bMakeInactiveHelper@RFONTOBJ@@QEAAHPEAPEAVRFONT@@@Z.c)
 *     ?vInit@RFONTOBJ@@QEAAXAEAVXDCOBJ@@PEAVPFE@@PEAU_EUDCLOGFONT@@H@Z @ 0x1C00FDE6C (-vInit@RFONTOBJ@@QEAAXAEAVXDCOBJ@@PEAVPFE@@PEAU_EUDCLOGFONT@@H@Z.c)
 *     ?bCheckEudcFontCaps@RFONTOBJ@@QEBAHAEAVIFIOBJ@@@Z @ 0x1C00FE5F0 (-bCheckEudcFontCaps@RFONTOBJ@@QEBAHAEAVIFIOBJ@@@Z.c)
 *     ?UpdateFontLinksLockOrder@RFONTOBJ@@AEAAXXZ @ 0x1C00FE640 (-UpdateFontLinksLockOrder@RFONTOBJ@@AEAAXXZ.c)
 *     ?ComputeEUDCLogfont@RFONTOBJ@@QEAAXPEAU_EUDCLOGFONT@@AEAVXDCOBJ@@@Z @ 0x1C00FE784 (-ComputeEUDCLogfont@RFONTOBJ@@QEAAXPEAU_EUDCLOGFONT@@AEAVXDCOBJ@@@Z.c)
 *     ?GetEUDCDefaultFontPFE@RFONTOBJ@@AEAAPEAVPFE@@I@Z @ 0x1C0142F78 (-GetEUDCDefaultFontPFE@RFONTOBJ@@AEAAPEAVPFE@@I@Z.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 *     memset @ 0x1C015C000 (memset.c)
 *     ?vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C02A8018 (-vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 */

void __fastcall RFONTOBJ::vInitEUDC(RFONTOBJ *this, struct XDCOBJ *a2)
{
  struct XDCOBJ *v2; // r13
  __int64 v3; // rdx
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rax
  struct HLFONT__ *v9; // rdx
  HDC *v10; // rdx
  __int64 v11; // rsi
  __int64 v12; // r12
  __int64 v13; // rax
  _BYTE *v14; // r14
  __int64 v15; // r15
  __int64 v16; // rcx
  __int64 v17; // rsi
  unsigned int v18; // ecx
  struct PFE * near *v19; // r10
  BOOL v20; // esi
  unsigned int v21; // ecx
  struct _LIST_ENTRY *LinkedFontList; // rax
  __int64 v23; // rbx
  struct _LIST_ENTRY *i; // rsi
  int Blink; // ecx
  struct PFE *v26; // r10
  __int64 v27; // rax
  _BYTE *v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // rax
  int v32; // ecx
  __int64 v33; // r13
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rcx
  struct PFE *v38; // r10
  struct PFE *EUDCDefaultFontPFE; // rax
  __int64 v40; // rcx
  struct PFE *v41; // r11
  __int64 *v42; // rbx
  __int64 v43; // rdi
  int v44; // [rsp+20h] [rbp-E0h]
  __int64 v45; // [rsp+30h] [rbp-D0h] BYREF
  BOOL v46; // [rsp+38h] [rbp-C8h]
  struct RFONT *v47; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v48; // [rsp+48h] [rbp-B8h]
  _QWORD v49[2]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v50; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v51; // [rsp+68h] [rbp-98h]
  struct LFONT *v52; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v53[2]; // [rsp+78h] [rbp-88h] BYREF
  __int128 v54; // [rsp+88h] [rbp-78h] BYREF
  __int128 v55; // [rsp+98h] [rbp-68h]
  _OWORD v56[4]; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v57[80]; // [rsp+F0h] [rbp-10h] BYREF

  v2 = a2;
  v49[0] = a2;
  v3 = *(_QWORD *)a2;
  if ( *(_DWORD *)(v3 + 304) )
  {
    RFONTOBJ::vInitEUDCRemote(this, v2);
    return;
  }
  v5 = *(_QWORD *)this;
  v6 = *(_QWORD *)(v5 + 120);
  v51 = v6;
  v50 = v6;
  if ( !*(_QWORD *)(v5 + 728) && *(_OWORD *)&gappfeSysEUDC != 0LL
    || (bFinallyInitializeFontAssocDefault || gbSystemDBCSFontEnabled) && !*(_QWORD *)(v5 + 736)
    || (v7 = *(_QWORD *)(v6 + 120)) != 0
    && (!*(_QWORD *)(v5 + 744) || *(_DWORD *)(v5 + 832) != 1 || *(_DWORD *)(v5 + 836) != *(_DWORD *)(v7 + 104)) )
  {
    v8 = *(_QWORD *)(v3 + 48);
    v9 = *(struct HLFONT__ **)(v3 + 1728);
    v45 = v8;
    LFONTOBJ::LFONTOBJ((LFONTOBJ *)&v52, v9, (struct PDEVOBJ *)&v45);
    v10 = *(HDC **)v2;
    v45 = *(_QWORD *)this;
    DCOBJ::DCOBJ((DCOBJ *)v53, *v10);
    IFIOBJR::IFIOBJR(
      (IFIOBJR *)v56,
      *(const struct _IFIMETRICS **)(v6 + 32),
      (struct RFONTOBJ *)&v45,
      (struct DCOBJ *)v53);
    v54 = 0LL;
    v55 = 0LL;
    RFONTOBJ::ComputeEUDCLogfont(this, (struct _EUDCLOGFONT *)&v54, v2);
    v11 = *(_QWORD *)this;
    v12 = *(_QWORD *)(*(_QWORD *)this + 736LL);
    v48 = *(_QWORD *)(*(_QWORD *)this + 728LL);
    memset(v57, 0, sizeof(v57));
    v13 = *(_QWORD *)(v6 + 120);
    v14 = v57;
    v15 = 0LL;
    v46 = 0;
    if ( v13 )
    {
      v16 = v11;
      v46 = *(_DWORD *)(v11 + 832) == 0;
      if ( *(_QWORD *)(v11 + 744) && *(_DWORD *)(v11 + 836) != *(_DWORD *)(v13 + 104) )
      {
        v33 = 0LL;
        if ( *(_DWORD *)(v11 + 840) )
        {
          v34 = v11;
          do
          {
            v35 = *(_QWORD *)(v34 + 744);
            if ( *(_QWORD *)(v35 + 8 * v33) )
            {
              v47 = *(struct RFONT **)(v35 + 8 * v33);
              RFONTOBJ::bMakeInactiveHelper(&v47, 0LL);
              v36 = *(_QWORD *)this;
              v47 = 0LL;
              *(_QWORD *)(*(_QWORD *)(v36 + 744) + 8 * v33) = 0LL;
              RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v47);
              v11 = *(_QWORD *)this;
            }
            v33 = (unsigned int)(v33 + 1);
            v34 = v11;
          }
          while ( (unsigned int)v33 < *(_DWORD *)(v11 + 840) );
        }
        v37 = *(_QWORD *)(v11 + 744);
        if ( v37 != v11 + 752 )
        {
          Win32FreePool(v37);
          v11 = *(_QWORD *)this;
        }
        *(_QWORD *)(v11 + 744) = 0LL;
        v2 = (struct XDCOBJ *)v49[0];
        *(_DWORD *)(*(_QWORD *)this + 840LL) = 0;
        v16 = *(_QWORD *)this;
      }
      v11 = v16;
      if ( !*(_QWORD *)(v16 + 744) )
        v46 = 1;
    }
    *(_DWORD *)(v11 + 712) |= 0x200u;
    if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v2 + 48LL) + 40LL) & 0x8000) != 0 )
    {
      EtwTraceGreLockReleaseSemaphore(L"prfnt->hsemEUDC", *(_QWORD *)(*(_QWORD *)this + 848LL));
      GreReleaseSemaphoreInternal(*(_QWORD *)(*(_QWORD *)this + 848LL));
      EtwTraceGreLockReleaseSemaphore(L"prfnt->hsemCache", *(_QWORD *)(*(_QWORD *)this + 504LL));
      GreReleaseSemaphoreInternal(*(_QWORD *)(*(_QWORD *)this + 504LL));
    }
    v17 = v48;
    v18 = *(_DWORD *)(*(_QWORD *)this + 844LL) != 0;
    LODWORD(v47) = v18;
    if ( !v48 )
    {
      v19 = (&gappfeSysEUDC)[v18];
      if ( v19 )
      {
        v45 = 0LL;
        v49[0] = v19[4];
        if ( (unsigned int)RFONTOBJ::bCheckEudcFontCaps(this, (struct IFIOBJ *)v49) )
        {
          RFONTOBJ::vInit((RFONTOBJ *)&v45, v2, v38, (struct _EUDCLOGFONT *)&v54, v44);
          if ( v45 )
            v17 = v45;
          v48 = v17;
        }
        else
        {
          v48 = 0LL;
        }
        RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v45);
        v18 = (unsigned int)v47;
      }
    }
    if ( bFinallyInitializeFontAssocDefault )
    {
      if ( v12 )
      {
LABEL_18:
        v20 = v46;
        if ( v46 )
        {
          v21 = *(_DWORD *)(*(_QWORD *)(v6 + 120) + 100LL);
          v14 = v21 > 0xA ? PALLOCMEM2(8 * v21, 1718382187LL, 1) : v57;
          if ( v14 )
          {
            LinkedFontList = PFEOBJ::pGetLinkedFontList((PFEOBJ *)&v50);
            v23 = (unsigned int)v47;
            for ( i = LinkedFontList->Flink; i != PFEOBJ::pGetLinkedFontList((PFEOBJ *)&v50); i = i->Flink )
            {
              Blink = (int)i[1].Blink;
              v56[0] = v54;
              v56[1] = v55;
              if ( Blink )
                HIDWORD(v56[0]) = Blink * HIDWORD(v54) / SHIDWORD(i[1].Blink);
              v49[0] = *(_QWORD *)(*((_QWORD *)&i[2].Flink + (*((_QWORD *)&i[2].Flink + v23) != 0LL ? v23 : 0)) + 32LL);
              if ( (unsigned int)RFONTOBJ::bCheckEudcFontCaps(this, (struct IFIOBJ *)v49) )
              {
                v45 = 0LL;
                RFONTOBJ::vInit((RFONTOBJ *)&v45, v2, v26, (struct _EUDCLOGFONT *)v56, v44);
                if ( v45 )
                {
                  *(_QWORD *)&v14[8 * v15] = v45;
                  v15 = (unsigned int)(v15 + 1);
                }
                RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v45);
              }
            }
            v6 = v51;
            v20 = v46;
          }
        }
        if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v2 + 48LL) + 40LL) & 0x8000) != 0 )
        {
          GreAcquireSemaphore(*(_QWORD *)(*(_QWORD *)this + 504LL));
          GreAcquireSemaphore(*(_QWORD *)(*(_QWORD *)this + 848LL));
        }
        if ( (*(_DWORD *)(*(_QWORD *)this + 712LL) & 0x200) != 0 )
        {
          *(_QWORD *)(*(_QWORD *)this + 728LL) = v48;
          *(_QWORD *)(*(_QWORD *)this + 736LL) = v12;
          if ( v20 )
          {
            v27 = *(_QWORD *)this;
            if ( (_DWORD)v15 )
            {
              v28 = v14;
              if ( (unsigned int)v15 <= 0xA )
                v28 = (_BYTE *)(v27 + 752);
              *(_QWORD *)(v27 + 744) = v28;
              v29 = 0LL;
              v30 = (unsigned int)v15;
              do
              {
                *(_QWORD *)(v29 + *(_QWORD *)(*(_QWORD *)this + 744LL)) = *(_QWORD *)&v14[v29];
                v29 += 8LL;
                --v30;
              }
              while ( v30 );
            }
            else
            {
              *(_QWORD *)(v27 + 744) = 0LL;
            }
            *(_DWORD *)(*(_QWORD *)this + 840LL) = v15;
            v31 = *(_QWORD *)(v6 + 120);
            if ( v31 )
              v32 = *(_DWORD *)(v31 + 104);
            else
              v32 = 0;
            *(_DWORD *)(*(_QWORD *)this + 836LL) = v32;
            *(_DWORD *)(*(_QWORD *)this + 832LL) = 1;
          }
          if ( *(_BYTE **)(*(_QWORD *)this + 744LL) != v14 && v14 && v14 != v57 )
            Win32FreePool(v14);
          RFONTOBJ::UpdateFontLinksLockOrder(this);
          *(_DWORD *)(*(_QWORD *)this + 712LL) &= ~0x200u;
        }
        else
        {
          v45 = v48;
          RFONTOBJ::vMakeInactive((RFONTOBJ *)&v45);
          v45 = v12;
          RFONTOBJ::vMakeInactive((RFONTOBJ *)&v45);
          if ( (_DWORD)v15 )
          {
            v42 = (__int64 *)v14;
            v43 = (unsigned int)v15;
            do
            {
              v45 = *v42;
              RFONTOBJ::vMakeInactive((RFONTOBJ *)&v45);
              v45 = 0LL;
              RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v45);
              ++v42;
              --v43;
            }
            while ( v43 );
          }
          if ( v14 != v57 )
            Win32FreePool(v14);
          v45 = 0LL;
          RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v45);
          v45 = 0LL;
          RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v45);
        }
        if ( v53[0] )
          XDCOBJ::vUnlockFast((XDCOBJ *)v53);
        v45 = 0LL;
        RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v45);
        if ( v52 )
          DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(v52);
        return;
      }
      EUDCDefaultFontPFE = RFONTOBJ::GetEUDCDefaultFontPFE(this, v18);
      if ( EUDCDefaultFontPFE )
      {
        v40 = *((_QWORD *)EUDCDefaultFontPFE + 4);
        v45 = 0LL;
        v49[0] = v40;
        if ( (unsigned int)RFONTOBJ::bCheckEudcFontCaps(this, (struct IFIOBJ *)v49) )
        {
          RFONTOBJ::vInit((RFONTOBJ *)&v45, v2, v41, (struct _EUDCLOGFONT *)&v54, v44);
          if ( v45 )
            v12 = v45;
        }
        RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v45);
        goto LABEL_18;
      }
    }
    v12 = 0LL;
    goto LABEL_18;
  }
}
