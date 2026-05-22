/*
 * XREFs of ?CreateOwningRefOfInputSink@LegacyInputSinkData@@QEAAXXZ @ 0x180043F18
 * Callers:
 *     ?UpdateHierarchyFromInputSinkTreeCache@InputSiteHierarchyManager@@UEAAXXZ @ 0x180015620 (-UpdateHierarchyFromInputSinkTreeCache@InputSiteHierarchyManager@@UEAAXXZ.c)
 *     ?GetInputSiteListFromDITCallbackStruct@InputSiteManager@@QEAA?AV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@AEBUtagDITCALLBACKSTRUCT@@@Z @ 0x1800171D0 (-GetInputSiteListFromDITCallbackStruct@InputSiteManager@@QEAA-AV-$vector@V-$ComPtr@VInputSite@@@.c)
 *     ?GetInputSiteFromInputSinkData@InputSiteManager@@AEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@$$QEAVLegacyInputSinkData@@@Z @ 0x18001CFFC (-GetInputSiteFromInputSinkData@InputSiteManager@@AEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@$$Q.c)
 * Callees:
 *     ??$?4V?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AJPEAX@Z$1?NtCloseCompositionInputSink@@YAJ0@Z@details@wil@@@details@wil@@@wil@@$0A@@?$variant@PEAXV?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AJPEAX@Z$1?NtCloseCompositionInputSink@@YAJ0@Z@details@wil@@@details@wil@@@wil@@@std@@QEAAAEAV01@$$QEAV?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AJPEAX@Z$1?NtCloseCompositionInputSink@@YAJ0@Z@details@wil@@@details@wil@@@wil@@@Z @ 0x180043D24 (--$-4V-$unique_any_t@V-$unique_storage@U-$handle_null_resource_policy@P6AJPEAX@Z$1-NtCloseCompos.c)
 *     ?GetInputSinkHandle@LegacyInputSinkData@@QEBA?AV?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AJPEAX@Z$1?NtCloseCompositionInputSink@@YAJ0@Z@details@wil@@@details@wil@@@wil@@XZ @ 0x180043F64 (-GetInputSinkHandle@LegacyInputSinkData@@QEBA-AV-$unique_any_t@V-$unique_storage@U-$handle_null_.c)
 */

void __fastcall LegacyInputSinkData::CreateOwningRefOfInputSink(LegacyInputSinkData *this)
{
  _QWORD *InputSinkHandle; // rax
  __int64 v3; // [rsp+30h] [rbp+8h]

  if ( *((_BYTE *)this + 8) != 1 )
  {
    InputSinkHandle = (_QWORD *)LegacyInputSinkData::GetInputSinkHandle(this);
    std::variant<void *,wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<long (*)(void *),&long NtCloseCompositionInputSink(void *)>>>>::operator=<wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<long (*)(void *),&long NtCloseCompositionInputSink(void *)>>>,0>(
      (__int64)this,
      InputSinkHandle);
    if ( (unsigned __int64)(v3 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      NtCloseCompositionInputSink(v3);
  }
}
