/*
 * XREFs of bAddAllFlEntry @ 0x1C000F6D0
 * Callers:
 *     ?bInitializeEUDCInternal@@YAHXZ @ 0x1C00090D0 (-bInitializeEUDCInternal@@YAHXZ.c)
 *     GreEnableEUDC @ 0x1C0009C00 (GreEnableEUDC.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C000F68C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     vLinkEudcPFEs @ 0x1C0010450 (vLinkEudcPFEs.c)
 *     ?bAppendSysDirectory@@YAHPEAGPEBGI@Z @ 0x1C0012250 (-bAppendSysDirectory@@YAHPEAGPEBGI@Z.c)
 *     ?bLoadAFont@PUBLIC_PFTOBJ@@QEAAHPEAGPEAKKPEAPEAVPFF@@PEAU_EUDCLOAD@@H@Z @ 0x1C00126FC (-bLoadAFont@PUBLIC_PFTOBJ@@QEAAHPEAGPEAKKPEAPEAVPFF@@PEAU_EUDCLOAD@@H@Z.c)
 *     ?bUnloadEUDCFont@PFTOBJ@@QEAAHPEAG@Z @ 0x1C0012808 (-bUnloadEUDCFont@PFTOBJ@@QEAAHPEAG@Z.c)
 *     ??0MALLOCOBJ@@QEAA@K@Z @ 0x1C00D8F4C (--0MALLOCOBJ@@QEAA@K@Z.c)
 *     ?pPFFGet@PUBLIC_PFTOBJ@@QEAAPEAVPFF@@PEBGKKPEAUtagDESIGNVECTOR@@KPEAPEAPEAV2@H@Z @ 0x1C00D9CB4 (-pPFFGet@PUBLIC_PFTOBJ@@QEAAPEAVPFF@@PEBGKKPEAUtagDESIGNVECTOR@@KPEAPEAPEAV2@H@Z.c)
 *     ?bComputeQuickLookup@@YAHPEAU_QUICKLOOKUP@@PEAVPFE@@H@Z @ 0x1C00FA734 (-bComputeQuickLookup@@YAHPEAU_QUICKLOOKUP@@PEAVPFE@@H@Z.c)
 *     EngUnmapFontFileFD @ 0x1C0113EA0 (EngUnmapFontFileFD.c)
 *     bReadUserSystemEUDCRegistry @ 0x1C0125544 (bReadUserSystemEUDCRegistry.c)
 *     bNotIsKeySymbolicLink @ 0x1C0125670 (bNotIsKeySymbolicLink.c)
 *     GetUserEUDCRegistryPath @ 0x1C012571C (GetUserEUDCRegistryPath.c)
 *     AddAllFlEntryWorker @ 0x1C012B09C (AddAllFlEntryWorker.c)
 *     ??0UmfdClientSideFileViewMapper@@QEAA@AEAVPFFOBJ@@@Z @ 0x1C029813C (--0UmfdClientSideFileViewMapper@@QEAA@AEAVPFFOBJ@@@Z.c)
 */

__int64 __fastcall bAddAllFlEntry(int a1, unsigned int a2)
{
  wchar_t *v3; // rbx
  unsigned __int16 *v4; // rdi
  HSEMAPHORE v5; // rcx
  unsigned int v6; // r8d
  char v7; // al
  __int64 v9; // rax
  int v10; // esi
  bool v11; // r12
  PFTOBJ *v12; // rcx
  __int64 v13; // r14
  unsigned int v14; // r15d
  unsigned int i; // esi
  HANDLE v16; // [rsp+40h] [rbp-40h] BYREF
  struct PFE *v17[2]; // [rsp+48h] [rbp-38h] BYREF
  _QWORD v18[2]; // [rsp+58h] [rbp-28h] BYREF
  __int64 v19; // [rsp+68h] [rbp-18h] BYREF
  unsigned int v20; // [rsp+78h] [rbp-8h]
  unsigned int v21; // [rsp+C8h] [rbp+48h] BYREF
  wchar_t *Src; // [rsp+D0h] [rbp+50h] BYREF
  HANDLE Handle; // [rsp+D8h] [rbp+58h] BYREF

  v21 = a2;
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
  *(_OWORD *)v17 = 0LL;
  if ( !(unsigned int)bAppendSysDirectory(v4, v3, v6) )
    goto LABEL_18;
  Src = (wchar_t *)gpPFTPublic;
  v16 = (HANDLE)ghsemPublicPFT;
  GreAcquireSemaphore(ghsemPublicPFT);
  v9 = -1LL;
  do
    ++v9;
  while ( v4[v9] );
  if ( PUBLIC_PFTOBJ::pPFFGet((PUBLIC_PFTOBJ *)&Src, v4, (int)v9 + 1, 1u, 0LL, 0, 0LL, 1) )
  {
    v10 = 0;
  }
  else
  {
    v18[0] = v17;
    v18[1] = 0LL;
    v21 = 0;
    Handle = 0LL;
    v10 = PUBLIC_PFTOBJ::bLoadAFont(
            (PUBLIC_PFTOBJ *)&Src,
            v4,
            &v21,
            8u,
            (struct PFF **)&Handle,
            (struct _EUDCLOAD *)v18,
            0);
  }
  SEMOBJ::vUnlock((SEMOBJ *)&v16);
  if ( v10 )
  {
    if ( (unsigned int)bComputeQuickLookup((struct _QUICKLOOKUP *)&gqlEUDC, v17[0], 1) )
      goto LABEL_35;
    v11 = 0;
    v18[0] = *(_QWORD *)v17[0];
    UmfdClientSideFileViewMapper::UmfdClientSideFileViewMapper(
      (UmfdClientSideFileViewMapper *)&v19,
      (struct PFFOBJ *)v18);
    v13 = v19;
    v14 = v20;
    if ( v20 == *(_DWORD *)(v19 + 36) )
      v11 = (unsigned int)bComputeQuickLookup((struct _QUICKLOOKUP *)&gqlEUDC, v17[0], 1) != 0;
    for ( i = 0; i < v14; EngUnmapFontFileFD(*(_QWORD *)(*(_QWORD *)(v13 + 200) + 8LL * i++)) )
    {
      if ( i >= *(_DWORD *)(v13 + 36) )
        break;
    }
    if ( v11 )
    {
LABEL_35:
      *(_OWORD *)&gappfeSysEUDC = *(_OWORD *)v17;
      wcscpy_s(&Dst, 0x105uLL, v4);
      ++dword_1C03419F0;
      goto LABEL_7;
    }
    PFTOBJ::bUnloadEUDCFont(v12, v4);
  }
  Dst = 0;
  *(_OWORD *)&gappfeSysEUDC = 0LL;
LABEL_7:
  v7 = dword_1C033B088;
  if ( (dword_1C033B088 & 1) != 0 )
  {
    AddAllFlEntryWorker(L"\\REGISTRY\\MACHINE\\SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion\\FontLink\\SystemLink");
    v7 = dword_1C033B088;
  }
  if ( (v7 & 4) != 0 )
  {
    Handle = 0LL;
    v16 = 0LL;
    v21 = 0;
    if ( (int)GetUserEUDCRegistryPath(v3) >= 0 && (unsigned int)bNotIsKeySymbolicLink(v3, &Handle, &v16) && v21 )
      AddAllFlEntryWorker(v3);
    if ( Handle )
      ZwClose(Handle);
    if ( v16 )
      ZwClose(v16);
  }
  vLinkEudcPFEs(0LL);
  EtwTraceGreLockReleaseSemaphore(L"ghsemEUDC1", ghsemEUDC1);
  GreReleaseSemaphoreInternal(ghsemEUDC1);
  Win32FreePool(v4);
  Win32FreePool(v3);
  return 1LL;
}
