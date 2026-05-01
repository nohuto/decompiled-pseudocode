/*
 * XREFs of ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x18016E9D8
 * Callers:
 *     ??$CloakTypeChange@AEAV?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAW4APPLICATION_VIEW_CLOAK_TYPE@@@ApplicationViewTraceLogging@ApplicationViewManagement@@SAXAEAV?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAW4APPLICATION_VIEW_CLOAK_TYPE@@@Z @ 0x18016E734 (--$CloakTypeChange@AEAV-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@.c)
 *     ??$ApplicationViewManagerInitializationFailed@AEAY06$$CBGAEAJ@ApplicationViewTelemetry@ApplicationViewManagement@@SAXAEAY06$$CBGAEAJ@Z @ 0x180173168 (--$ApplicationViewManagerInitializationFailed@AEAY06$$CBGAEAJ@ApplicationViewTelemetry@Applicati.c)
 *     ??$ApplicationViewManagerInitializationFailed@AEAY0L@$$CBGAEAJ@ApplicationViewTelemetry@ApplicationViewManagement@@SAXAEAY0L@$$CBGAEAJ@Z @ 0x18017325C (--$ApplicationViewManagerInitializationFailed@AEAY0L@$$CBGAEAJ@ApplicationViewTelemetry@Applicat.c)
 *     _lambda_c090d7652c135c9cd65a3cd3ef3aa100_::operator() @ 0x1801C45FC (_lambda_c090d7652c135c9cd65a3cd3ef3aa100_--operator().c)
 *     ??$EnterFullScreenForView@PEBGAEAI@HolographicPositionerTelemetry@@SAX$$QEAPEBGAEAI@Z @ 0x180219910 (--$EnterFullScreenForView@PEBGAEAI@HolographicPositionerTelemetry@@SAX$$QEAPEBGAEAI@Z.c)
 *     ??$ExitFullScreenForView@PEBGAEAI@HolographicPositionerTelemetry@@SAX$$QEAPEBGAEAI@Z @ 0x180219990 (--$ExitFullScreenForView@PEBGAEAI@HolographicPositionerTelemetry@@SAX$$QEAPEBGAEAI@Z.c)
 *     ??$HolographicViewAdded@PEBGAEAI@HolographicPositionerTelemetry@@SAX$$QEAPEBGAEAI@Z @ 0x180219B00 (--$HolographicViewAdded@PEBGAEAI@HolographicPositionerTelemetry@@SAX$$QEAPEBGAEAI@Z.c)
 *     ??$HolographicViewRemoved@PEBGAEAI@HolographicPositionerTelemetry@@SAX$$QEAPEBGAEAI@Z @ 0x180219BE0 (--$HolographicViewRemoved@PEBGAEAI@HolographicPositionerTelemetry@@SAX$$QEAPEBGAEAI@Z.c)
 *     ??$HolographicViewRequestNavigateToView@PEBGAEAI@HolographicPositionerTelemetry@@SAX$$QEAPEBGAEAI@Z @ 0x180219C60 (--$HolographicViewRequestNavigateToView@PEBGAEAI@HolographicPositionerTelemetry@@SAX$$QEAPEBGAEA.c)
 *     ??$TransitionViewFromHolographic@PEBGAEAI@HolographicPositionerTelemetry@@SAX$$QEAPEBGAEAI@Z @ 0x18021AA10 (--$TransitionViewFromHolographic@PEBGAEAI@HolographicPositionerTelemetry@@SAX$$QEAPEBGAEAI@Z.c)
 *     ??$TransitionViewToHolographic@PEBGAEAI@HolographicPositionerTelemetry@@SAX$$QEAPEBGAEAI@Z @ 0x18021AA90 (--$TransitionViewToHolographic@PEBGAEAI@HolographicPositionerTelemetry@@SAX$$QEAPEBGAEAI@Z.c)
 *     ??$GetLastActiveItem@PEBGAEAI@HolographicPositionerTelemetry@@SAX$$QEAPEBGAEAI@Z @ 0x180224DE0 (--$GetLastActiveItem@PEBGAEAI@HolographicPositionerTelemetry@@SAX$$QEAPEBGAEAI@Z.c)
 *     ?GetLastActiveItem@HolographicViewHostItemLedger@@UEAAJPEAPEAUIViewHostItem@Holographic@Shell@Internal@Windows@@@Z @ 0x1802257A0 (-GetLastActiveItem@HolographicViewHostItemLedger@@UEAAJPEAPEAUIViewHostItem@Holographic@Shell@In.c)
 *     ??$WindowEventDispatcher_OnAppViewRemoved@PEBGI@ViewManagerInteropTraceLogging@@SAX$$QEAPEBG$$QEAI@Z @ 0x18028E340 (--$WindowEventDispatcher_OnAppViewRemoved@PEBGI@ViewManagerInteropTraceLogging@@SAX$$QEAPEBG$$QE.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18001CF68 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 */

ULONG __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        const WCHAR **a5,
        __int64 a6)
{
  const WCHAR *v8; // rcx
  __int64 v9; // rax
  int v10; // edx
  struct _EVENT_DATA_DESCRIPTOR v12; // [rsp+30h] [rbp-58h] BYREF
  const WCHAR *v13; // [rsp+50h] [rbp-38h]
  int v14; // [rsp+58h] [rbp-30h]
  int v15; // [rsp+5Ch] [rbp-2Ch]
  __int64 v16; // [rsp+60h] [rbp-28h]
  __int64 v17; // [rsp+68h] [rbp-20h]

  v16 = a6;
  v17 = 4LL;
  v8 = *a5;
  if ( *a5 )
  {
    v9 = -1LL;
    do
      ++v9;
    while ( v8[v9] );
    v10 = 2 * v9 + 2;
  }
  else
  {
    v8 = &word_1804BE2A8;
    v10 = 2;
  }
  v13 = v8;
  v14 = v10;
  v15 = 0;
  return tlgWriteTransfer_EventWriteTransfer(a1, a2, 0LL, 0LL, 4u, &v12);
}
