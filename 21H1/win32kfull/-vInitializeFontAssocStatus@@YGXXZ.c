/*
 * XREFs of ?vInitializeFontAssocStatus@@YGXXZ @ 0xD67C2
 * Callers:
 *     ?bInitializeEUDCInternal@@YGHXZ @ 0xD6668 (-bInitializeEUDCInternal@@YGHXZ.c)
 * Callees:
 *     ?bUnloadEUDCFont@PFTOBJ@@QAEHPAG@Z @ 0xCD9B6 (-bUnloadEUDCFont@PFTOBJ@@QAEHPAG@Z.c)
 *     ??0UmfdClientSideFileViewMapper@@QAE@AAVPFFOBJ@@@Z @ 0xD3126 (--0UmfdClientSideFileViewMapper@@QAE@AAVPFFOBJ@@@Z.c)
 *     ?UnmapMappedViews@UmfdClientSideFileViewMapper@@AAEXXZ @ 0xD47CC (-UnmapMappedViews@UmfdClientSideFileViewMapper@@AAEXXZ.c)
 *     ?bLoadAFont@PUBLIC_PFTOBJ@@QAEHPAGPAKKPAPAVPFF@@PAU_EUDCLOAD@@H@Z @ 0xDD364 (-bLoadAFont@PUBLIC_PFTOBJ@@QAEHPAGPAKKPAPAVPFF@@PAU_EUDCLOAD@@H@Z.c)
 *     ?bComputeQuickLookup@@YGHPAU_QUICKLOOKUP@@PAVPFE@@H@Z @ 0x1F826B (-bComputeQuickLookup@@YGHPAU_QUICKLOOKUP@@PAVPFE@@H@Z.c)
 */

void __stdcall vInitializeFontAssocStatus()
{
  bool v0; // bl
  PFTOBJ *v1; // ecx
  struct PFE *v2; // [esp+0h] [ebp-30h]
  struct PFE *v3; // [esp+0h] [ebp-30h]
  int v4; // [esp+4h] [ebp-2Ch]
  int v5; // [esp+4h] [ebp-2Ch]
  _DWORD v6[3]; // [esp+Ch] [ebp-24h] BYREF
  _DWORD v7[2]; // [esp+18h] [ebp-18h] BYREF
  struct _FONTHASH **v8; // [esp+20h] [ebp-10h] BYREF
  int v9; // [esp+24h] [ebp-Ch] BYREF
  unsigned int v10; // [esp+28h] [ebp-8h] BYREF
  struct PFF *v11; // [esp+2Ch] [ebp-4h] BYREF

  SharedQueryTable.QueryRoutine = (PRTL_QUERY_REGISTRY_ROUTINE)FontAssocCharsetRoutine;
  SharedQueryTable.Flags = 4;
  gawcSystemDBCSFontPath = 0;
  v0 = 0;
  SharedQueryTable.Name = 0;
  SharedQueryTable.EntryContext = 0;
  SharedQueryTable.DefaultType = 0;
  SharedQueryTable.DefaultData = 0;
  SharedQueryTable.DefaultLength = 0;
  dword_273FDC = 0;
  dword_273FE0 = 0;
  dword_273FE4 = 0;
  fFontAssocStatus = 0;
  if ( RtlQueryRegistryValues(0x80000002, L"FontAssoc\\Associated CharSet", &SharedQueryTable, 0, 0) < 0 )
    fFontAssocStatus = 0;
  SharedQueryTable.QueryRoutine = (PRTL_QUERY_REGISTRY_ROUTINE)FontAssocDefaultRoutine;
  word_274070 = 0;
  if ( RtlQueryRegistryValues(0x80000002, L"FontAssoc\\Associated DefaultFonts", &SharedQueryTable, 0, 0) >= 0 )
  {
    bReadyToInitializeFontAssocDefault = 1;
    if ( gawcSystemDBCSFontPath )
    {
      if ( word_274070 )
      {
        v8 = gpPFTPublic;
        v10 = 0;
        v11 = 0;
        v7[0] = &gappfeSystemDBCS;
        v7[1] = &word_274070;
        if ( PUBLIC_PFTOBJ::bLoadAFont(
               (PUBLIC_PFTOBJ *)&v8,
               &gawcSystemDBCSFontPath,
               &v10,
               8u,
               &v11,
               (struct _EUDCLOAD *)v7,
               1) )
        {
          dword_2756D0 = 0;
          GreAcquireSemaphore(ghsemEUDC1);
          if ( bComputeQuickLookup(0, v2, v4) )
            goto LABEL_13;
          v9 = (int)*gappfeSystemDBCS;
          UmfdClientSideFileViewMapper::UmfdClientSideFileViewMapper(
            (UmfdClientSideFileViewMapper *)v6,
            (struct PFFOBJ *)&v9);
          if ( v6[2] == *(_DWORD *)(v6[0] + 20) )
            v0 = bComputeQuickLookup(0, v3, v5) != 0;
          UmfdClientSideFileViewMapper::UnmapMappedViews((UmfdClientSideFileViewMapper *)v6);
          if ( v0 )
          {
LABEL_13:
            gbSystemDBCSFontEnabled = 1;
            gbAnyLinkedFonts = 1;
          }
          EtwTraceGreLockReleaseSemaphore(L"ghsemEUDC1", ghsemEUDC1);
          GreReleaseSemaphoreInternal(ghsemEUDC1);
          if ( !gbSystemDBCSFontEnabled )
            PFTOBJ::bUnloadEUDCFont(v1, &gawcSystemDBCSFontPath);
        }
      }
    }
  }
  else
  {
    bReadyToInitializeFontAssocDefault = 0;
  }
  dword_274358 = 0;
  SharedQueryTable.QueryRoutine = (PRTL_QUERY_REGISTRY_ROUTINE)CountRegistryEntryRoutine;
  SharedQueryTable.EntryContext = &dword_274358;
}
