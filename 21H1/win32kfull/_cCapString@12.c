/*
 * XREFs of _cCapString@12 @ 0x89EC2
 * Callers:
 *     ?bFoundExactMatch@MAPPER@@QAEHPAPAU_FONTHASH@@H@Z @ 0x4A170 (-bFoundExactMatch@MAPPER@@QAEHPAPAU_FONTHASH@@H@Z.c)
 *     ?pfsubAlternateFacename@@YGPAU_FONTSUB@@PBG@Z @ 0x886E4 (-pfsubAlternateFacename@@YGPAU_FONTSUB@@PBG@Z.c)
 *     ?bScanLists@FHOBJ@@QAEHPAVEFSOBJ@@PBGKPAU_EFFILTER_INFO@@@Z @ 0x89B06 (-bScanLists@FHOBJ@@QAEHPAVEFSOBJ@@PBGKPAU_EFFILTER_INFO@@@Z.c)
 *     _hfontCreate@20 @ 0x89DF2 (_hfontCreate@20.c)
 *     ?bUnloadEUDCFont@PFTOBJ@@QAEHPAG@Z @ 0xCD9B6 (-bUnloadEUDCFont@PFTOBJ@@QAEHPAG@Z.c)
 *     ?vDelete@FHOBJ@@QAEXAAVPFEOBJ@@@Z @ 0xCE3DA (-vDelete@FHOBJ@@QAEXAAVPFEOBJ@@@Z.c)
 *     ?bInit@PFEMEMOBJ@@QAEHPAVPFF@@KPAU_FD_GLYPHSET@@KPAU_IFIMETRICS@@KHPAU_UNIVERSAL_FONT_ID@@H@Z @ 0xDC780 (-bInit@PFEMEMOBJ@@QAEHPAVPFF@@KPAU_FD_GLYPHSET@@KPAU_IFIMETRICS@@KHPAU_UNIVERSAL_FONT_ID@@H@Z.c)
 *     ?bAppendSysDirectory@@YGHPAGPBGI@Z @ 0xDD06C (-bAppendSysDirectory@@YGHPAGPBGI@Z.c)
 *     ?bLoadAFont@PUBLIC_PFTOBJ@@QAEHPAGPAKKPAPAVPFF@@PAU_EUDCLOAD@@H@Z @ 0xDD364 (-bLoadAFont@PUBLIC_PFTOBJ@@QAEHPAGPAKKPAPAVPFF@@PAU_EUDCLOAD@@H@Z.c)
 *     ?bInsert@FHOBJ@@QAEHAAVPFEOBJ@@@Z @ 0xDE69E (-bInsert@FHOBJ@@QAEHAAVPFEOBJ@@@Z.c)
 *     ?bCheckAndCapThePath@@YGHPAGPBGKK@Z @ 0xDEE26 (-bCheckAndCapThePath@@YGHPAGPBGKK@Z.c)
 *     vProcessEntry @ 0xE2E66 (vProcessEntry.c)
 *     _FontAssocDefaultRoutine@24 @ 0x1F78F7 (_FontAssocDefaultRoutine@24.c)
 *     ?bAttemptReload@PFFOBJ@@QAEHXZ @ 0x221621 (-bAttemptReload@PFFOBJ@@QAEHXZ.c)
 *     _QueryRegistryFontMapperFamilyFallbackListRoutine@24 @ 0x293FDF (_QueryRegistryFontMapperFamilyFallbackListRoutine@24.c)
 * Callees:
 *     <none>
 */

int __fastcall cCapString(WCHAR *a1, WCHAR *a2, int a3)
{
  WCHAR *v4; // esi
  WCHAR *v5; // eax
  int v6; // esi
  UNICODE_STRING SourceString; // [esp+Ch] [ebp-10h] BYREF
  struct _UNICODE_STRING DestinationString; // [esp+14h] [ebp-8h] BYREF

  v4 = a2;
  *(_DWORD *)&DestinationString.Length = 0;
  DestinationString.Buffer = 0;
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
  if ( v6 )
  {
    SourceString.Buffer = a2;
    SourceString.Length = 2 * v6;
    SourceString.MaximumLength = 2 * a3;
    DestinationString.MaximumLength = 2 * a3;
    DestinationString.Buffer = a1;
    RtlUpcaseUnicodeString(&DestinationString, &SourceString, 0);
  }
  a1[v6] = 0;
  return v6;
}
