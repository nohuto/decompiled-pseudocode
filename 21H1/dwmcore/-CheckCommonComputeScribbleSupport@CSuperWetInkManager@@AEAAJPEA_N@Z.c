/*
 * XREFs of ?CheckCommonComputeScribbleSupport@CSuperWetInkManager@@AEAAJPEA_N@Z @ 0x180198C68
 * Callers:
 *     ?CheckHostComputeScribbleSupport@CSuperWetInkManager@@AEAAJAEBUVailSuperWetStroke@1@PEA_N@Z @ 0x180198CBC (-CheckHostComputeScribbleSupport@CSuperWetInkManager@@AEAAJAEBUVailSuperWetStroke@1@PEA_N@Z.c)
 *     ?CheckLocalComputeScribbleSupport@CSuperWetInkManager@@AEAAJAEBUSuperWetStroke@1@PEA_N@Z @ 0x180198E30 (-CheckLocalComputeScribbleSupport@CSuperWetInkManager@@AEAAJAEBUSuperWetStroke@1@PEA_N@Z.c)
 * Callees:
 *     McTemplateU0q_EventWriteTransfer @ 0x180155DC4 (McTemplateU0q_EventWriteTransfer.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_SuperWetInk@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180199964 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_SuperWetInk@@@details@wil@@QEAAX_NW4Repor.c)
 */

__int64 __fastcall CSuperWetInkManager::CheckCommonComputeScribbleSupport(CSuperWetInkManager *this, bool *a2)
{
  bool *v2; // rbx
  __int64 v3; // rcx

  v2 = a2;
  *a2 = 0;
  LOBYTE(a2) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_SuperWetInk>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_SuperWetInk>::GetImpl'::`2'::impl,
    a2);
  if ( CCommonRegistryData::SuperWetEnabled )
  {
    *v2 = 1;
  }
  else if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x40000) != 0 )
  {
    McTemplateU0q_EventWriteTransfer(v3, &EVTDESC_COMPUTESCRIBBLE_INCOMPATIBLE, 9LL);
  }
  return 0LL;
}
