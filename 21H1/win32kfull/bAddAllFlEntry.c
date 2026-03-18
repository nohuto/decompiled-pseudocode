/*
 * XREFs of bAddAllFlEntry @ 0xDBBB8
 * Callers:
 *     ?bInitializeEUDCInternal@@YGHXZ @ 0xD6668 (-bInitializeEUDCInternal@@YGHXZ.c)
 *     _GreEnableEUDC@4 @ 0xEBCF6 (_GreEnableEUDC@4.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QAEXXZ @ 0x98AE4 (-vUnlock@SEMOBJ@@QAEXXZ.c)
 *     ?bUnloadEUDCFont@PFTOBJ@@QAEHPAG@Z @ 0xCD9B6 (-bUnloadEUDCFont@PFTOBJ@@QAEHPAG@Z.c)
 *     ??0UmfdClientSideFileViewMapper@@QAE@AAVPFFOBJ@@@Z @ 0xD3126 (--0UmfdClientSideFileViewMapper@@QAE@AAVPFFOBJ@@@Z.c)
 *     ?UnmapMappedViews@UmfdClientSideFileViewMapper@@AAEXXZ @ 0xD47CC (-UnmapMappedViews@UmfdClientSideFileViewMapper@@AAEXXZ.c)
 *     bReadUserSystemEUDCRegistry @ 0xDB9B6 (bReadUserSystemEUDCRegistry.c)
 *     vLinkEudcPFEs @ 0xDC1CC (vLinkEudcPFEs.c)
 *     ?bAppendSysDirectory@@YGHPAGPBGI@Z @ 0xDD06C (-bAppendSysDirectory@@YGHPAGPBGI@Z.c)
 *     ??0MALLOCOBJ@@QAE@K@Z @ 0xDD190 (--0MALLOCOBJ@@QAE@K@Z.c)
 *     ?bLoadAFont@PUBLIC_PFTOBJ@@QAEHPAGPAKKPAPAVPFF@@PAU_EUDCLOAD@@H@Z @ 0xDD364 (-bLoadAFont@PUBLIC_PFTOBJ@@QAEHPAGPAKKPAPAVPFF@@PAU_EUDCLOAD@@H@Z.c)
 *     ?pPFFGet@PUBLIC_PFTOBJ@@QAEPAVPFF@@PBGKKPAUtagDESIGNVECTOR@@KPAPAPAV2@H@Z @ 0xDDADA (-pPFFGet@PUBLIC_PFTOBJ@@QAEPAVPFF@@PBGKKPAUtagDESIGNVECTOR@@KPAPAPAV2@H@Z.c)
 *     GetUserEUDCRegistryPath @ 0xEB4DE (GetUserEUDCRegistryPath.c)
 *     bNotIsKeySymbolicLink @ 0xEBC78 (bNotIsKeySymbolicLink.c)
 *     AddAllFlEntryWorker @ 0xEC6BE (AddAllFlEntryWorker.c)
 *     ?bComputeQuickLookup@@YGHPAU_QUICKLOOKUP@@PAVPFE@@H@Z @ 0x1F826B (-bComputeQuickLookup@@YGHPAU_QUICKLOOKUP@@PAVPFE@@H@Z.c)
 */

int __thiscall bAddAllFlEntry(struct _FONTHASH **this)
{
  WCHAR *v1; // esi
  unsigned __int16 *v2; // edi
  HSEMAPHORE v3; // ecx
  char v4; // al
  unsigned __int16 *v6; // ecx
  int AFont; // ebx
  bool v9; // bl
  PFTOBJ *v10; // ecx
  const unsigned __int16 *v11; // [esp+0h] [ebp-38h]
  struct PFE *v12; // [esp+0h] [ebp-38h]
  struct PFE *v13; // [esp+0h] [ebp-38h]
  unsigned int v14; // [esp+4h] [ebp-34h]
  int v15; // [esp+4h] [ebp-34h]
  int v16; // [esp+4h] [ebp-34h]
  _DWORD v17[3]; // [esp+Ch] [ebp-2Ch] BYREF
  _DWORD v18[2]; // [esp+18h] [ebp-20h] BYREF
  struct PFE *v19; // [esp+20h] [ebp-18h] BYREF
  int v20; // [esp+24h] [ebp-14h]
  PCWSTR Path; // [esp+28h] [ebp-10h] BYREF
  struct _FONTHASH **v22; // [esp+2Ch] [ebp-Ch] BYREF
  wchar_t *Src; // [esp+30h] [ebp-8h] BYREF
  HANDLE Handle; // [esp+34h] [ebp-4h] BYREF

  v22 = this;
  MALLOCOBJ::MALLOCOBJ((MALLOCOBJ *)&Path, 0x208u);
  MALLOCOBJ::MALLOCOBJ((MALLOCOBJ *)&Src, 0x208u);
  v1 = (WCHAR *)Path;
  if ( !Path )
  {
    if ( !Src )
      return 0;
    Win32FreePool(Src);
LABEL_36:
    if ( v1 )
      Win32FreePool(v1);
    return 0;
  }
  v2 = Src;
  if ( !Src )
    goto LABEL_36;
  v3 = ghsemEUDC1;
  *Src = 0;
  *v1 = 0;
  GreAcquireSemaphore(v3);
  if ( gcEUDCCount > 0 )
  {
    EngSetLastError(0xA7u);
LABEL_20:
    EtwTraceGreLockReleaseSemaphore(L"ghsemEUDC1", ghsemEUDC1);
    GreReleaseSemaphoreInternal(ghsemEUDC1);
    Win32FreePool(v2);
    Win32FreePool(v1);
    return 0;
  }
  if ( !v22 || gappfeSysEUDC || dword_27569C || !bReadUserSystemEUDCRegistry(v1) )
    goto LABEL_5;
  v19 = 0;
  v20 = 0;
  if ( !bAppendSysDirectory(v6, v11, v14) )
    goto LABEL_20;
  v22 = gpPFTPublic;
  Handle = (HANDLE)_ghsemPublicPFT;
  GreAcquireSemaphore(_ghsemPublicPFT);
  AFont = 0;
  if ( !PUBLIC_PFTOBJ::pPFFGet((PUBLIC_PFTOBJ *)&v22, v2, wcslen(v2) + 1, 1u, 0, 0, 0, 1) )
  {
    v18[1] = 0;
    v18[0] = &v19;
    Src = 0;
    Path = 0;
    AFont = PUBLIC_PFTOBJ::bLoadAFont(
              (PUBLIC_PFTOBJ *)&v22,
              v2,
              (unsigned int *)&Src,
              8u,
              (struct PFF **)&Path,
              (struct _EUDCLOAD *)v18,
              0);
  }
  SEMOBJ::vUnlock((SEMOBJ *)&Handle);
  if ( AFont )
  {
    if ( bComputeQuickLookup((struct _QUICKLOOKUP *)1, v12, v15) )
      goto LABEL_31;
    v9 = 0;
    v18[0] = *(_DWORD *)v19;
    UmfdClientSideFileViewMapper::UmfdClientSideFileViewMapper(
      (UmfdClientSideFileViewMapper *)v17,
      (struct PFFOBJ *)v18);
    if ( v17[2] == *(_DWORD *)(v17[0] + 20) )
      v9 = bComputeQuickLookup((struct _QUICKLOOKUP *)1, v13, v16) != 0;
    UmfdClientSideFileViewMapper::UnmapMappedViews((UmfdClientSideFileViewMapper *)v17);
    if ( v9 )
    {
LABEL_31:
      gappfeSysEUDC = v19;
      dword_27569C = v20;
      _wcscpy_s(&Dst, 0x105u, v2);
      ++dword_2785AC;
      goto LABEL_5;
    }
    PFTOBJ::bUnloadEUDCFont(v10, v2);
  }
  gappfeSysEUDC = 0;
  dword_27569C = 0;
  Dst = 0;
LABEL_5:
  v4 = dword_27436C;
  if ( (dword_27436C & 1) != 0 )
  {
    AddAllFlEntryWorker(L"\\REGISTRY\\MACHINE\\SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion\\FontLink\\SystemLink");
    v4 = dword_27436C;
  }
  if ( (v4 & 4) != 0 )
  {
    Handle = 0;
    Src = 0;
    Path = 0;
    if ( GetUserEUDCRegistryPath(v1) >= 0 && bNotIsKeySymbolicLink(v1, &Handle, (PHANDLE)&Src, (int)&Path) && Path )
      AddAllFlEntryWorker(v1);
    if ( Handle )
      ZwClose(Handle);
    if ( Src )
      ZwClose(Src);
  }
  vLinkEudcPFEs(0);
  EtwTraceGreLockReleaseSemaphore(L"ghsemEUDC1", ghsemEUDC1);
  GreReleaseSemaphoreInternal(ghsemEUDC1);
  Win32FreePool(v2);
  Win32FreePool(v1);
  return 1;
}
