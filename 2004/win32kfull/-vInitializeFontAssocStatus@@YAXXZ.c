/*
 * XREFs of ?vInitializeFontAssocStatus@@YAXXZ @ 0x1C00092A4
 * Callers:
 *     ?bInitializeEUDCInternal@@YAHXZ @ 0x1C00090D0 (-bInitializeEUDCInternal@@YAHXZ.c)
 * Callees:
 *     ?bLoadAFont@PUBLIC_PFTOBJ@@QEAAHPEAGPEAKKPEAPEAVPFF@@PEAU_EUDCLOAD@@H@Z @ 0x1C00126FC (-bLoadAFont@PUBLIC_PFTOBJ@@QEAAHPEAGPEAKKPEAPEAVPFF@@PEAU_EUDCLOAD@@H@Z.c)
 *     ?bUnloadEUDCFont@PFTOBJ@@QEAAHPEAG@Z @ 0x1C0012808 (-bUnloadEUDCFont@PFTOBJ@@QEAAHPEAG@Z.c)
 *     ?bComputeQuickLookup@@YAHPEAU_QUICKLOOKUP@@PEAVPFE@@H@Z @ 0x1C00FA734 (-bComputeQuickLookup@@YAHPEAU_QUICKLOOKUP@@PEAVPFE@@H@Z.c)
 *     EngUnmapFontFileFD @ 0x1C0113EA0 (EngUnmapFontFileFD.c)
 *     ??0UmfdClientSideFileViewMapper@@QEAA@AEAVPFFOBJ@@@Z @ 0x1C029813C (--0UmfdClientSideFileViewMapper@@QEAA@AEAVPFFOBJ@@@Z.c)
 */

void vInitializeFontAssocStatus(void)
{
  bool v0; // r14
  __int64 v1; // rdi
  unsigned int v2; // esi
  unsigned int i; // ebx
  PFTOBJ *v4; // rcx
  _QWORD v5[2]; // [rsp+40h] [rbp-40h] BYREF
  __int64 v6; // [rsp+50h] [rbp-30h] BYREF
  __int64 v7; // [rsp+60h] [rbp-20h] BYREF
  unsigned int v8; // [rsp+70h] [rbp-10h]
  unsigned int v9; // [rsp+B0h] [rbp+30h] BYREF
  struct PFF *v10; // [rsp+B8h] [rbp+38h] BYREF
  struct _FONTHASH **v11; // [rsp+C0h] [rbp+40h] BYREF

  SharedQueryTable.Flags = 4;
  SharedQueryTable.DefaultType = 0;
  SharedQueryTable.QueryRoutine = (PRTL_QUERY_REGISTRY_ROUTINE)FontAssocCharsetRoutine;
  *(_OWORD *)&SharedQueryTable.Name = 0LL;
  SharedQueryTable.DefaultData = 0LL;
  SharedQueryTable.DefaultLength = 0;
  qword_1C033A848 = 0LL;
  dword_1C033A850 = 0;
  qword_1C033A858 = 0LL;
  fFontAssocStatus = 0;
  gawcSystemDBCSFontPath = 0;
  if ( RtlQueryRegistryValues(0x80000002, L"FontAssoc\\Associated CharSet", &SharedQueryTable, 0LL, 0LL) < 0 )
    fFontAssocStatus = 0;
  word_1C033ABD0 = 0;
  SharedQueryTable.QueryRoutine = (PRTL_QUERY_REGISTRY_ROUTINE)FontAssocDefaultRoutine;
  if ( RtlQueryRegistryValues(0x80000002, L"FontAssoc\\Associated DefaultFonts", &SharedQueryTable, 0LL, 0LL) >= 0 )
  {
    bReadyToInitializeFontAssocDefault = 1;
    if ( gawcSystemDBCSFontPath )
    {
      if ( word_1C033ABD0 )
      {
        v11 = gpPFTPublic;
        v5[0] = &gappfeSystemDBCS;
        v9 = 0;
        v5[1] = &word_1C033ABD0;
        v10 = 0LL;
        if ( (unsigned int)PUBLIC_PFTOBJ::bLoadAFont(
                             (PUBLIC_PFTOBJ *)&v11,
                             &gawcSystemDBCSFontPath,
                             &v9,
                             8u,
                             &v10,
                             (struct _EUDCLOAD *)v5,
                             1) )
        {
          qword_1C033C8A8 = 0LL;
          GreAcquireSemaphore(ghsemEUDC1);
          if ( (unsigned int)bComputeQuickLookup((struct _QUICKLOOKUP *)&gqlTTSystem, gappfeSystemDBCS, 0) )
            goto LABEL_16;
          v0 = 0;
          v6 = *(_QWORD *)gappfeSystemDBCS;
          UmfdClientSideFileViewMapper::UmfdClientSideFileViewMapper(
            (UmfdClientSideFileViewMapper *)&v7,
            (struct PFFOBJ *)&v6);
          v1 = v7;
          v2 = v8;
          if ( v8 == *(_DWORD *)(v7 + 36) )
            v0 = (unsigned int)bComputeQuickLookup((struct _QUICKLOOKUP *)&gqlTTSystem, gappfeSystemDBCS, 0) != 0;
          for ( i = 0; i < v2; EngUnmapFontFileFD(*(_QWORD *)(*(_QWORD *)(v1 + 200) + 8LL * i++)) )
          {
            if ( i >= *(_DWORD *)(v1 + 36) )
              break;
          }
          if ( v0 )
          {
LABEL_16:
            gbSystemDBCSFontEnabled = 1;
            gbAnyLinkedFonts = 1;
          }
          EtwTraceGreLockReleaseSemaphore(L"ghsemEUDC1", ghsemEUDC1);
          GreReleaseSemaphoreInternal(ghsemEUDC1);
          if ( !gbSystemDBCSFontEnabled )
            PFTOBJ::bUnloadEUDCFont(v4, &gawcSystemDBCSFontPath);
        }
      }
    }
  }
  else
  {
    bReadyToInitializeFontAssocDefault = 0;
  }
  SharedQueryTable.QueryRoutine = (PRTL_QUERY_REGISTRY_ROUTINE)CountRegistryEntryRoutine;
  SharedQueryTable.EntryContext = &dword_1C033B074;
  dword_1C033B074 = 0;
}
