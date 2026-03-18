/*
 * XREFs of bAddAllFlEntry @ 0x1C0021078
 * Callers:
 *     GreEnableEUDC @ 0x1C00220CC (GreEnableEUDC.c)
 *     ?bInitializeEUDCInternal@@YAHXZ @ 0x1C00221F8 (-bInitializeEUDCInternal@@YAHXZ.c)
 * Callees:
 *     vLinkEudcPFEs @ 0x1C001D3F4 (vLinkEudcPFEs.c)
 *     ?bAppendSysDirectory@@YAHPEAGPEBGI@Z @ 0x1C001FD10 (-bAppendSysDirectory@@YAHPEAGPEBGI@Z.c)
 *     ?bLoadAFont@PUBLIC_PFTOBJ@@QEAAHPEAGPEAKKPEAPEAVPFF@@PEAU_EUDCLOAD@@H@Z @ 0x1C00201BC (-bLoadAFont@PUBLIC_PFTOBJ@@QEAAHPEAGPEAKKPEAPEAVPFF@@PEAU_EUDCLOAD@@H@Z.c)
 *     ?bUnloadEUDCFont@PFTOBJ@@QEAAHPEAG@Z @ 0x1C00202C8 (-bUnloadEUDCFont@PFTOBJ@@QEAAHPEAG@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C002120C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     bReadUserSystemEUDCRegistry @ 0x1C00215DC (bReadUserSystemEUDCRegistry.c)
 *     bNotIsKeySymbolicLink @ 0x1C00217B8 (bNotIsKeySymbolicLink.c)
 *     GetUserEUDCRegistryPath @ 0x1C0021864 (GetUserEUDCRegistryPath.c)
 *     AddAllFlEntryWorker @ 0x1C0022044 (AddAllFlEntryWorker.c)
 *     ?pPFFGet@PUBLIC_PFTOBJ@@QEAAPEAVPFF@@PEBGKKPEAUtagDESIGNVECTOR@@KPEAPEAPEAV2@H@Z @ 0x1C0066344 (-pPFFGet@PUBLIC_PFTOBJ@@QEAAPEAVPFF@@PEBGKKPEAUtagDESIGNVECTOR@@KPEAPEAPEAV2@H@Z.c)
 *     ??0MALLOCOBJ@@QEAA@K@Z @ 0x1C006736C (--0MALLOCOBJ@@QEAA@K@Z.c)
 *     ?bComputeQuickLookup@@YAHPEAU_QUICKLOOKUP@@PEAVPFE@@H@Z @ 0x1C00F46D4 (-bComputeQuickLookup@@YAHPEAU_QUICKLOOKUP@@PEAVPFE@@H@Z.c)
 *     EngUnmapFontFileFD @ 0x1C0114BE0 (EngUnmapFontFileFD.c)
 *     ??0UmfdClientSideFileViewMapper@@QEAA@AEAVPFFOBJ@@@Z @ 0x1C0296CEC (--0UmfdClientSideFileViewMapper@@QEAA@AEAVPFFOBJ@@@Z.c)
 */

__int64 __fastcall bAddAllFlEntry(int a1, unsigned int a2)
{
  wchar_t *v3; // rbx
  unsigned __int16 *v4; // rdi
  HSEMAPHORE v5; // rcx
  char v6; // al
  __int64 v8; // rax
  int v9; // esi
  bool v10; // r12
  PFTOBJ *v11; // rcx
  __int64 v12; // r14
  unsigned int v13; // r15d
  unsigned int i; // esi
  HANDLE v15; // [rsp+40h] [rbp-40h] BYREF
  struct PFE *v16[2]; // [rsp+48h] [rbp-38h] BYREF
  _QWORD v17[2]; // [rsp+58h] [rbp-28h] BYREF
  __int64 v18; // [rsp+68h] [rbp-18h] BYREF
  unsigned int v19; // [rsp+78h] [rbp-8h]
  unsigned int v20; // [rsp+C8h] [rbp+48h] BYREF
  wchar_t *Src; // [rsp+D0h] [rbp+50h] BYREF
  HANDLE Handle; // [rsp+D8h] [rbp+58h] BYREF

  v20 = a2;
  MALLOCOBJ::MALLOCOBJ((MALLOCOBJ *)&Handle, 0x208u);
  MALLOCOBJ::MALLOCOBJ((MALLOCOBJ *)&Src, 0x208u);
  v3 = (wchar_t *)Handle;
  if ( !Handle )
  {
    if ( !Src )
      return 0LL;
    Win32FreePool(Src);
LABEL_40:
    if ( v3 )
      goto LABEL_41;
    return 0LL;
  }
  v4 = Src;
  if ( !Src )
    goto LABEL_40;
  v5 = ghsemEUDC1;
  *Src = 0;
  *v3 = 0;
  GreAcquireSemaphore(v5);
  if ( gcEUDCCount > 0 )
  {
    EngSetLastError(0xA7u);
LABEL_18:
    EtwTraceGreLockReleaseSemaphore(L"ghsemEUDC1", ghsemEUDC1);
    GreReleaseSemaphoreInternal(ghsemEUDC1);
    Win32FreePool(v4);
LABEL_41:
    Win32FreePool(v3);
    return 0LL;
  }
  if ( !a1 || *(_OWORD *)&gappfeSysEUDC != 0LL || !(unsigned int)bReadUserSystemEUDCRegistry(v3) )
    goto LABEL_7;
  *(_OWORD *)v16 = 0LL;
  if ( !(unsigned int)bAppendSysDirectory(v4, v3) )
    goto LABEL_18;
  Src = (wchar_t *)gpPFTPublic;
  v15 = (HANDLE)ghsemPublicPFT;
  GreAcquireSemaphore(ghsemPublicPFT);
  v8 = -1LL;
  do
    ++v8;
  while ( v4[v8] );
  if ( PUBLIC_PFTOBJ::pPFFGet((PUBLIC_PFTOBJ *)&Src, v4, (int)v8 + 1, 1u, 0LL, 0, 0LL, 1) )
  {
    v9 = 0;
  }
  else
  {
    v17[0] = v16;
    v17[1] = 0LL;
    v20 = 0;
    Handle = 0LL;
    v9 = PUBLIC_PFTOBJ::bLoadAFont(
           (PUBLIC_PFTOBJ *)&Src,
           v4,
           &v20,
           8u,
           (struct PFF **)&Handle,
           (struct _EUDCLOAD *)v17,
           0);
  }
  SEMOBJ::vUnlock((SEMOBJ *)&v15);
  if ( v9 )
  {
    if ( (unsigned int)bComputeQuickLookup((struct _QUICKLOOKUP *)&gqlEUDC, v16[0], 1) )
      goto LABEL_35;
    v10 = 0;
    v17[0] = *(_QWORD *)v16[0];
    UmfdClientSideFileViewMapper::UmfdClientSideFileViewMapper(
      (UmfdClientSideFileViewMapper *)&v18,
      (struct PFFOBJ *)v17);
    v12 = v18;
    v13 = v19;
    if ( v19 == *(_DWORD *)(v18 + 36) )
      v10 = (unsigned int)bComputeQuickLookup((struct _QUICKLOOKUP *)&gqlEUDC, v16[0], 1) != 0;
    for ( i = 0; i < v13; EngUnmapFontFileFD(*(_QWORD *)(*(_QWORD *)(v12 + 200) + 8LL * i++)) )
    {
      if ( i >= *(_DWORD *)(v12 + 36) )
        break;
    }
    if ( v10 )
    {
LABEL_35:
      *(_OWORD *)&gappfeSysEUDC = *(_OWORD *)v16;
      wcscpy_s(&Dst, 0x105uLL, v4);
      ++dword_1C0340A00;
      goto LABEL_7;
    }
    PFTOBJ::bUnloadEUDCFont(v11, v4);
  }
  Dst = 0;
  *(_OWORD *)&gappfeSysEUDC = 0LL;
LABEL_7:
  v6 = dword_1C033A0B8;
  if ( (dword_1C033A0B8 & 1) != 0 )
  {
    AddAllFlEntryWorker(L"\\REGISTRY\\MACHINE\\SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion\\FontLink\\SystemLink");
    v6 = dword_1C033A0B8;
  }
  if ( (v6 & 4) != 0 )
  {
    Handle = 0LL;
    v15 = 0LL;
    v20 = 0;
    if ( (int)GetUserEUDCRegistryPath(v3) >= 0 && (unsigned int)bNotIsKeySymbolicLink(v3, &Handle, &v15) && v20 )
      AddAllFlEntryWorker(v3);
    if ( Handle )
      ZwClose(Handle);
    if ( v15 )
      ZwClose(v15);
  }
  vLinkEudcPFEs(0LL);
  EtwTraceGreLockReleaseSemaphore(L"ghsemEUDC1", ghsemEUDC1);
  GreReleaseSemaphoreInternal(ghsemEUDC1);
  Win32FreePool(v4);
  Win32FreePool(v3);
  return 1LL;
}
