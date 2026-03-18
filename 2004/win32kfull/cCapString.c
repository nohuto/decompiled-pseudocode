/*
 * XREFs of cCapString @ 0x1C00D9C0C
 * Callers:
 *     ?bInsert@FHOBJ@@QEAAHAEAVPFEOBJ@@@Z @ 0x1C0010A10 (-bInsert@FHOBJ@@QEAAHAEAVPFEOBJ@@@Z.c)
 *     ?vDelete@FHOBJ@@QEAAXAEAVPFEOBJ@@@Z @ 0x1C0010D0C (-vDelete@FHOBJ@@QEAAXAEAVPFEOBJ@@@Z.c)
 *     ?bInit@PFEMEMOBJ@@QEAAHPEAVPFF@@KPEAU_FD_GLYPHSET@@_KPEAU_IFIMETRICS@@2HPEAU_UNIVERSAL_FONT_ID@@H@Z @ 0x1C00111D4 (-bInit@PFEMEMOBJ@@QEAAHPEAVPFF@@KPEAU_FD_GLYPHSET@@_KPEAU_IFIMETRICS@@2HPEAU_UNIVERSAL_FONT_ID@@.c)
 *     ?bAppendSysDirectory@@YAHPEAGPEBGI@Z @ 0x1C0012250 (-bAppendSysDirectory@@YAHPEAGPEBGI@Z.c)
 *     ?bLoadAFont@PUBLIC_PFTOBJ@@QEAAHPEAGPEAKKPEAPEAVPFF@@PEAU_EUDCLOAD@@H@Z @ 0x1C00126FC (-bLoadAFont@PUBLIC_PFTOBJ@@QEAAHPEAGPEAKKPEAPEAVPFF@@PEAU_EUDCLOAD@@H@Z.c)
 *     ?bUnloadEUDCFont@PFTOBJ@@QEAAHPEAG@Z @ 0x1C0012808 (-bUnloadEUDCFont@PFTOBJ@@QEAAHPEAG@Z.c)
 *     hfontCreate @ 0x1C001DB80 (hfontCreate.c)
 *     ?bFoundExactMatch@MAPPER@@QEAAHPEAPEAU_FONTHASH@@H@Z @ 0x1C009E080 (-bFoundExactMatch@MAPPER@@QEAAHPEAPEAU_FONTHASH@@H@Z.c)
 *     ?pfsubAlternateFacename@@YAPEAU_FONTSUB@@PEBG@Z @ 0x1C00D863C (-pfsubAlternateFacename@@YAPEAU_FONTSUB@@PEBG@Z.c)
 *     ?bScanLists@FHOBJ@@QEAAHPEAVEFSOBJ@@PEBGKPEAU_EFFILTER_INFO@@@Z @ 0x1C00DB150 (-bScanLists@FHOBJ@@QEAAHPEAVEFSOBJ@@PEBGKPEAU_EFFILTER_INFO@@@Z.c)
 *     ?bCheckAndCapThePath@@YAHPEAGPEBGKK@Z @ 0x1C0105E78 (-bCheckAndCapThePath@@YAHPEAGPEBGKK@Z.c)
 *     vProcessEntry @ 0x1C010FBD8 (vProcessEntry.c)
 *     FontAssocDefaultRoutine @ 0x1C02983D0 (FontAssocDefaultRoutine.c)
 *     ?bAttemptReload@PFFOBJ@@QEAAHXZ @ 0x1C02BB3FC (-bAttemptReload@PFFOBJ@@QEAAHXZ.c)
 *     QueryRegistryFontMapperFamilyFallbackListRoutine @ 0x1C0396670 (QueryRegistryFontMapperFamilyFallbackListRoutine.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall cCapString(WCHAR *a1, WCHAR *a2, int a3)
{
  WCHAR *v4; // rbx
  WCHAR *v5; // r9
  __int64 v6; // rbx
  __int64 result; // rax
  UNICODE_STRING SourceString; // [rsp+20h] [rbp-28h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF

  *(_DWORD *)(&SourceString.MaximumLength + 1) = 0;
  DestinationString = 0LL;
  v4 = a2;
  v5 = &a2[a3 - 1];
  if ( a2 < v5 )
  {
    do
    {
      if ( !*v4 )
        break;
      ++v4;
    }
    while ( v4 < v5 );
  }
  v6 = v4 - a2;
  if ( (_DWORD)v6 )
  {
    SourceString.Buffer = a2;
    SourceString.MaximumLength = 2 * a3;
    DestinationString.MaximumLength = 2 * a3;
    SourceString.Length = 2 * v6;
    DestinationString.Buffer = a1;
    RtlUpcaseUnicodeString(&DestinationString, &SourceString, 0);
  }
  result = (unsigned int)v6;
  a1[(int)v6] = 0;
  return result;
}
