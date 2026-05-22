/*
 * XREFs of ?GetWeakInputSinkHandle@LegacyInputSinkData@@QEBAPEAXXZ @ 0x1800F136C
 * Callers:
 *     ?GetLuid@LegacyInputSinkData@@QEBAAEBU_LUID@@XZ @ 0x180005510 (-GetLuid@LegacyInputSinkData@@QEBAAEBU_LUID@@XZ.c)
 *     ?UpdateHierarchyFromInputSinkTreeCache@InputSiteHierarchyManager@@UEAAXXZ @ 0x180015620 (-UpdateHierarchyFromInputSinkTreeCache@InputSiteHierarchyManager@@UEAAXXZ.c)
 *     ?HitTest@DWMInputRouter@@UEAAJPEAU_InputHitTestRequest@@PEAU_InputHitTestResult@@PEAVInputContext@@PEAUIInputBuffer@@PEAPEAUIInputTarget@@@Z @ 0x1800167F0 (-HitTest@DWMInputRouter@@UEAAJPEAU_InputHitTestRequest@@PEAU_InputHitTestResult@@PEAVInputContex.c)
 *     ?GetInputSiteListFromDITCallbackStruct@InputSiteManager@@QEAA?AV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@AEBUtagDITCALLBACKSTRUCT@@@Z @ 0x1800171D0 (-GetInputSiteListFromDITCallbackStruct@InputSiteManager@@QEAA-AV-$vector@V-$ComPtr@VInputSite@@@.c)
 *     ?GetTargetFromInputSite@DWMInputRouter@@AEAA?AV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@AEBV?$ComPtr@VInputSite@@@34@W4InputType@@AEBUHitTestResult@@AEBU_LUID@@AEAV?$ComPtr@UIDCompInputTarget@@@34@@Z @ 0x180017EB0 (-GetTargetFromInputSite@DWMInputRouter@@AEAA-AV-$ComPtr@UIInputTarget@@@WRL@Microsoft@@AEBV-$Com.c)
 *     ?GetCompositionInputQueue@LegacyInputSinkData@@QEBAAEBUCOMPOSITION_INPUT_QUEUE@@W4CompositionInputType@@@Z @ 0x180018060 (-GetCompositionInputQueue@LegacyInputSinkData@@QEBAAEBUCOMPOSITION_INPUT_QUEUE@@W4CompositionInp.c)
 *     ?GetInputSinkHandle@LegacyInputSinkData@@QEBA?AV?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AJPEAX@Z$1?NtCloseCompositionInputSink@@YAJ0@Z@details@wil@@@details@wil@@@wil@@XZ @ 0x180044574 (-GetInputSinkHandle@LegacyInputSinkData@@QEBA-AV-$unique_any_t@V-$unique_storage@U-$handle_null_.c)
 *     ?GetViewInstanceId@LegacyInputSinkData@@QEBAAEBIXZ @ 0x180044614 (-GetViewInstanceId@LegacyInputSinkData@@QEBAAEBIXZ.c)
 *     ?AddDwmInputRoutingData@DWMInputTarget@@AEAAJPEAUInputInfo@@@Z @ 0x1800B6708 (-AddDwmInputRoutingData@DWMInputTarget@@AEAAJPEAUInputInfo@@@Z.c)
 *     ?GetInputSinkHandle@DWMInputTarget@@AEBAPEAXXZ @ 0x1800B6F90 (-GetInputSinkHandle@DWMInputTarget@@AEBAPEAXXZ.c)
 *     ?GetTransform@LegacyInputSinkData@@QEBA?AUtagINPUT_TRANSFORM@@XZ @ 0x1800F12DC (-GetTransform@LegacyInputSinkData@@QEBA-AUtagINPUT_TRANSFORM@@XZ.c)
 * Callees:
 *     ??$get@PEAXPEAXV?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AJPEAX@Z$1?NtCloseCompositionInputSink@@YAJ0@Z@details@wil@@@details@wil@@@wil@@@std@@YAAEBQEAXAEBV?$variant@PEAXV?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AJPEAX@Z$1?NtCloseCompositionInputSink@@YAJ0@Z@details@wil@@@details@wil@@@wil@@@0@@Z @ 0x180044380 (--$get@PEAXPEAXV-$unique_any_t@V-$unique_storage@U-$handle_null_resource_policy@P6AJPEAX@Z$1-NtC.c)
 *     ??$get@V?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AJPEAX@Z$1?NtCloseCompositionInputSink@@YAJ0@Z@details@wil@@@details@wil@@@wil@@PEAXV12@@std@@YAAEBV?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AJPEAX@Z$1?NtCloseCompositionInputSink@@YAJ0@Z@details@wil@@@details@wil@@@wil@@AEBV?$variant@PEAXV?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AJPEAX@Z$1?NtCloseCompositionInputSink@@YAJ0@Z@details@wil@@@details@wil@@@wil@@@0@@Z @ 0x1800443A0 (--$get@V-$unique_any_t@V-$unique_storage@U-$handle_null_resource_policy@P6AJPEAX@Z$1-NtCloseComp.c)
 *     ?OwnsRefOfInputSink@LegacyInputSinkData@@QEBA_NXZ @ 0x180044694 (-OwnsRefOfInputSink@LegacyInputSinkData@@QEBA_NXZ.c)
 */

void *__fastcall LegacyInputSinkData::GetWeakInputSinkHandle(LegacyInputSinkData *this)
{
  __int64 v1; // rcx
  __int64 v2; // rax

  if ( LegacyInputSinkData::OwnsRefOfInputSink(this) )
    v2 = std::get<wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<long (*)(void *),&long NtCloseCompositionInputSink(void *)>>>,void *,wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<long (*)(void *),&long NtCloseCompositionInputSink(void *)>>>>(v1);
  else
    v2 = std::get<void *,void *,wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<long (*)(void *),&long NtCloseCompositionInputSink(void *)>>>>(v1);
  return *(void **)v2;
}
