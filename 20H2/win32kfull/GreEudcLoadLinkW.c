/*
 * XREFs of GreEudcLoadLinkW @ 0x1C0297150
 * Callers:
 *     NtGdiEudcLoadUnloadLink @ 0x1C02981A0 (NtGdiEudcLoadUnloadLink.c)
 * Callees:
 *     vLinkEudcPFEs @ 0x1C001D3F4 (vLinkEudcPFEs.c)
 *     bUnloadEudcFont @ 0x1C001F7B8 (bUnloadEudcFont.c)
 *     bAddFlEntry @ 0x1C001F994 (bAddFlEntry.c)
 *     ?bAppendSysDirectory@@YAHPEAGPEBGI@Z @ 0x1C001FD10 (-bAppendSysDirectory@@YAHPEAGPEBGI@Z.c)
 *     ?bLoadAFont@PUBLIC_PFTOBJ@@QEAAHPEAGPEAKKPEAPEAVPFF@@PEAU_EUDCLOAD@@H@Z @ 0x1C00201BC (-bLoadAFont@PUBLIC_PFTOBJ@@QEAAHPEAGPEAKKPEAPEAVPFF@@PEAU_EUDCLOAD@@H@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C002120C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     vUnlinkAllEudcRFONTsAndPFEs @ 0x1C0021A28 (vUnlinkAllEudcRFONTsAndPFEs.c)
 *     ?pPFFGet@PUBLIC_PFTOBJ@@QEAAPEAVPFF@@PEBGKKPEAUtagDESIGNVECTOR@@KPEAPEAPEAV2@H@Z @ 0x1C0066344 (-pPFFGet@PUBLIC_PFTOBJ@@QEAAPEAVPFF@@PEBGKKPEAUtagDESIGNVECTOR@@KPEAPEAPEAV2@H@Z.c)
 *     ??0MALLOCOBJ@@QEAA@K@Z @ 0x1C006736C (--0MALLOCOBJ@@QEAA@K@Z.c)
 *     ?GetSessionTextStackStatus@UmfdHostLifeTimeManager@@SAJXZ @ 0x1C008CBC4 (-GetSessionTextStackStatus@UmfdHostLifeTimeManager@@SAJXZ.c)
 *     ?bComputeQuickLookup@@YAHPEAU_QUICKLOOKUP@@PEAVPFE@@H@Z @ 0x1C00F46D4 (-bComputeQuickLookup@@YAHPEAU_QUICKLOOKUP@@PEAVPFE@@H@Z.c)
 *     EngUnmapFontFileFD @ 0x1C0114BE0 (EngUnmapFontFileFD.c)
 *     ??0UmfdClientSideFileViewMapper@@QEAA@AEAVPFFOBJ@@@Z @ 0x1C0296CEC (--0UmfdClientSideFileViewMapper@@QEAA@AEAVPFFOBJ@@@Z.c)
 *     bWriteUserSystemEUDCRegistry @ 0x1C0297C1C (bWriteUserSystemEUDCRegistry.c)
 */

__int64 __fastcall GreEudcLoadLinkW(
        wchar_t *a1,
        __int64 a2,
        const unsigned __int16 *a3,
        unsigned int a4,
        int a5,
        unsigned int a6)
{
  unsigned int v8; // edi
  unsigned __int16 *v10; // rbx
  unsigned int appended; // esi
  __int64 v12; // r14
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // r13
  unsigned int v16; // eax
  unsigned int v17; // r12d
  int v18; // r8d
  wchar_t *Src; // [rsp+48h] [rbp-29h] BYREF
  struct PFF *v20; // [rsp+50h] [rbp-21h] BYREF
  __int64 v21; // [rsp+58h] [rbp-19h] BYREF
  struct PFE *v22[2]; // [rsp+60h] [rbp-11h] BYREF
  _QWORD v23[2]; // [rsp+70h] [rbp-1h] BYREF
  __int64 v24; // [rsp+80h] [rbp+Fh] BYREF
  unsigned int v25; // [rsp+90h] [rbp+1Fh]
  unsigned int v26; // [rsp+E0h] [rbp+6Fh] BYREF

  v26 = a4;
  v8 = 0;
  if ( (unsigned int)UmfdHostLifeTimeManager::GetSessionTextStackStatus() )
    return 0LL;
  GreAcquireSemaphore(ghsemEUDC1);
  if ( gcEUDCCount <= 0 )
  {
    if ( a1 )
    {
      v18 = a6;
      Src = 0LL;
      if ( a6 > 1 )
        v18 = 1;
      appended = bAddFlEntry(a1, a3, v18, a5, (__int64 *)&Src);
      if ( appended && Src )
        vLinkEudcPFEs((__int64)Src);
    }
    else
    {
      MALLOCOBJ::MALLOCOBJ((MALLOCOBJ *)&Src, 0x20Au);
      v10 = Src;
      *(_OWORD *)v22 = 0LL;
      appended = Src != 0LL;
      if ( Src )
      {
        appended = bAppendSysDirectory(Src, a3);
        if ( appended )
        {
          v21 = ghsemPublicPFT;
          GreAcquireSemaphore(ghsemPublicPFT);
          v12 = -1LL;
          Src = (wchar_t *)gpPFTPublic;
          v13 = -1LL;
          do
            ++v13;
          while ( v10[v13] );
          if ( PUBLIC_PFTOBJ::pPFFGet((PUBLIC_PFTOBJ *)&Src, v10, (int)v13 + 1, 1, 0LL, 0, 0LL, 1) )
          {
            appended = 0;
          }
          else
          {
            v23[0] = v22;
            v23[1] = 0LL;
            v26 = 0;
            v20 = 0LL;
            appended = PUBLIC_PFTOBJ::bLoadAFont((PUBLIC_PFTOBJ *)&Src, v10, &v26, 8u, &v20, (struct _EUDCLOAD *)v23, 0);
          }
          SEMOBJ::vUnlock((SEMOBJ *)&v21);
          if ( appended )
          {
            if ( *(_OWORD *)&gappfeSysEUDC != 0LL )
            {
              vUnlinkAllEudcRFONTsAndPFEs(v14, 0);
              bUnloadEudcFont((__int64 *)&gappfeSysEUDC);
            }
            *(_OWORD *)&gappfeSysEUDC = *(_OWORD *)v22;
            wcscpy_s(Dst, 0x105uLL, v10);
            ++dword_1C0340A00;
            if ( !(unsigned int)bComputeQuickLookup((struct _QUICKLOOKUP *)&gqlEUDC, v22[0], 1) )
            {
              v23[0] = *(_QWORD *)v22[0];
              UmfdClientSideFileViewMapper::UmfdClientSideFileViewMapper(
                (UmfdClientSideFileViewMapper *)&v24,
                (struct PFFOBJ *)v23);
              v15 = v24;
              v16 = v25;
              if ( v25 == *(_DWORD *)(v24 + 36) )
              {
                bComputeQuickLookup((struct _QUICKLOOKUP *)&gqlEUDC, v22[0], 1);
                v16 = v25;
              }
              v17 = 0;
              if ( v16 )
              {
                do
                {
                  if ( v17 >= *(_DWORD *)(v15 + 36) )
                    break;
                  EngUnmapFontFileFD(*(_QWORD *)(*(_QWORD *)(v15 + 200) + 8LL * v17++));
                }
                while ( v17 < v25 );
              }
            }
            do
              ++v12;
            while ( Dst[v12] );
            bWriteUserSystemEUDCRegistry(Dst);
          }
        }
      }
      if ( v10 )
        Win32FreePool(v10);
    }
    v8 = appended;
  }
  else
  {
    EngSetLastError(0xA7u);
  }
  EtwTraceGreLockReleaseSemaphore(L"ghsemEUDC1", ghsemEUDC1);
  GreReleaseSemaphoreInternal(ghsemEUDC1);
  return v8;
}
