/*
 * XREFs of GreEudcLoadLinkW @ 0x1F7AA9
 * Callers:
 *     _NtGdiEudcLoadUnloadLink@28 @ 0x1F93F9 (_NtGdiEudcLoadUnloadLink@28.c)
 * Callees:
 *     ?GetSessionTextStackStatus@UmfdHostLifeTimeManager@@SGJXZ @ 0x49AEE (-GetSessionTextStackStatus@UmfdHostLifeTimeManager@@SGJXZ.c)
 *     ?vUnlock@SEMOBJ@@QAEXXZ @ 0x98AE4 (-vUnlock@SEMOBJ@@QAEXXZ.c)
 *     bUnloadEudcFont @ 0xCD8F6 (bUnloadEudcFont.c)
 *     vUnlinkAllEudcRFONTsAndPFEs @ 0xCE766 (vUnlinkAllEudcRFONTsAndPFEs.c)
 *     ??0UmfdClientSideFileViewMapper@@QAE@AAVPFFOBJ@@@Z @ 0xD3126 (--0UmfdClientSideFileViewMapper@@QAE@AAVPFFOBJ@@@Z.c)
 *     ?UnmapMappedViews@UmfdClientSideFileViewMapper@@AAEXXZ @ 0xD47CC (-UnmapMappedViews@UmfdClientSideFileViewMapper@@AAEXXZ.c)
 *     vLinkEudcPFEs @ 0xDC1CC (vLinkEudcPFEs.c)
 *     bAddFlEntry @ 0xDCD78 (bAddFlEntry.c)
 *     ?bAppendSysDirectory@@YGHPAGPBGI@Z @ 0xDD06C (-bAppendSysDirectory@@YGHPAGPBGI@Z.c)
 *     ??0MALLOCOBJ@@QAE@K@Z @ 0xDD190 (--0MALLOCOBJ@@QAE@K@Z.c)
 *     ?bLoadAFont@PUBLIC_PFTOBJ@@QAEHPAGPAKKPAPAVPFF@@PAU_EUDCLOAD@@H@Z @ 0xDD364 (-bLoadAFont@PUBLIC_PFTOBJ@@QAEHPAGPAKKPAPAVPFF@@PAU_EUDCLOAD@@H@Z.c)
 *     ?pPFFGet@PUBLIC_PFTOBJ@@QAEPAVPFF@@PBGKKPAUtagDESIGNVECTOR@@KPAPAPAV2@H@Z @ 0xDDADA (-pPFFGet@PUBLIC_PFTOBJ@@QAEPAVPFF@@PBGKKPAUtagDESIGNVECTOR@@KPAPAPAV2@H@Z.c)
 *     ?bComputeQuickLookup@@YGHPAU_QUICKLOOKUP@@PAVPFE@@H@Z @ 0x1F826B (-bComputeQuickLookup@@YGHPAU_QUICKLOOKUP@@PAVPFE@@H@Z.c)
 *     bWriteUserSystemEUDCRegistry @ 0x1F8DC4 (bWriteUserSystemEUDCRegistry.c)
 */

int __userpurge GreEudcLoadLinkW@<eax>(
        size_t a1@<ecx>,
        unsigned int a2@<ebx>,
        const unsigned __int16 *a3@<edi>,
        const wchar_t *a4,
        int a5,
        unsigned int a6,
        wchar_t *Src)
{
  int appended; // ebx
  unsigned __int16 *v10; // ecx
  unsigned __int16 *v11; // esi
  int v12; // ecx
  int v13; // eax
  struct PFE *v14; // [esp-8h] [ebp-2Ch]
  struct PFE *v15; // [esp-8h] [ebp-2Ch]
  int v16; // [esp-4h] [ebp-28h]
  int v17; // [esp-4h] [ebp-28h]
  _DWORD v18[3]; // [esp+4h] [ebp-20h] BYREF
  _DWORD v19[2]; // [esp+10h] [ebp-14h] BYREF
  struct PFE *v20; // [esp+18h] [ebp-Ch] BYREF
  int v21; // [esp+1Ch] [ebp-8h]
  void *v22; // [esp+20h] [ebp-4h] BYREF

  if ( UmfdHostLifeTimeManager::GetSessionTextStackStatus() )
    return 0;
  GreAcquireSemaphore(ghsemEUDC1);
  if ( gcEUDCCount <= 0 )
  {
    if ( a1 )
    {
      v22 = 0;
      v13 = (int)Src;
      if ( (unsigned int)Src >= 2 )
        v13 = 1;
      appended = bAddFlEntry(a1, (size_t)a4, v13, a6, &v22);
      if ( appended && v22 )
        vLinkEudcPFEs(v22);
    }
    else
    {
      MALLOCOBJ::MALLOCOBJ((MALLOCOBJ *)&Src, 0x20Au);
      v11 = Src;
      v20 = 0;
      v21 = 0;
      if ( Src )
      {
        appended = bAppendSysDirectory(a4, Src, v10, a3, a2);
        if ( appended )
        {
          v22 = (void *)_ghsemPublicPFT;
          GreAcquireSemaphore(_ghsemPublicPFT);
          a4 = (const wchar_t *)gpPFTPublic;
          if ( PUBLIC_PFTOBJ::pPFFGet((PUBLIC_PFTOBJ *)&a4, v11, wcslen(v11) + 1, 1u, 0, 0, 0, 1) )
          {
            appended = 0;
          }
          else
          {
            v19[1] = 0;
            v19[0] = &v20;
            a6 = 0;
            Src = 0;
            appended = PUBLIC_PFTOBJ::bLoadAFont(
                         (PUBLIC_PFTOBJ *)&a4,
                         v11,
                         &a6,
                         8u,
                         (struct PFF **)&Src,
                         (struct _EUDCLOAD *)v19,
                         0);
          }
          SEMOBJ::vUnlock((SEMOBJ *)&v22);
          if ( appended )
          {
            if ( gappfeSysEUDC || dword_27569C )
            {
              vUnlinkAllEudcRFONTsAndPFEs(v12, 0);
              bUnloadEudcFont((unsigned __int16 **)&gappfeSysEUDC);
            }
            gappfeSysEUDC = v20;
            dword_27569C = v21;
            _wcscpy_s(Dst, 0x105u, v11);
            ++dword_2785AC;
            if ( !bComputeQuickLookup((struct _QUICKLOOKUP *)1, v14, v16) )
            {
              v19[0] = *(_DWORD *)v20;
              UmfdClientSideFileViewMapper::UmfdClientSideFileViewMapper(
                (UmfdClientSideFileViewMapper *)v18,
                (struct PFFOBJ *)v19);
              if ( v18[2] == *(_DWORD *)(v18[0] + 20) )
                bComputeQuickLookup((struct _QUICKLOOKUP *)1, v15, v17);
              UmfdClientSideFileViewMapper::UnmapMappedViews((UmfdClientSideFileViewMapper *)v18);
            }
            bWriteUserSystemEUDCRegistry(Dst, wcslen(Dst) + 1);
          }
        }
        Win32FreePool((PATHOBJ *)v11);
      }
      else
      {
        appended = 0;
      }
    }
  }
  else
  {
    EngSetLastError(0xA7u);
    appended = 0;
  }
  EtwTraceGreLockReleaseSemaphore(L"ghsemEUDC1", ghsemEUDC1);
  GreReleaseSemaphoreInternal(ghsemEUDC1);
  return appended;
}
