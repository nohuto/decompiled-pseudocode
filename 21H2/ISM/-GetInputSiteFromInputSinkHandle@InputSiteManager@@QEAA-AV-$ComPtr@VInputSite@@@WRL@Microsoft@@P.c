/*
 * XREFs of ?GetInputSiteFromInputSinkHandle@InputSiteManager@@QEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@PEAX@Z @ 0x1800F14E4
 * Callers:
 *     ?UpdateInputTarget@EdgyProcessorTarget@@QEAAJUtagMsgRoutingInfo@@PEAXAEBUEdgyPointerInfo@@@Z @ 0x18017B6C4 (-UpdateInputTarget@EdgyProcessorTarget@@QEAAJUtagMsgRoutingInfo@@PEAXAEBUEdgyPointerInfo@@@Z.c)
 * Callees:
 *     ?GetInputSiteFromInputSinkData@InputSiteManager@@AEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@$$QEAVLegacyInputSinkData@@@Z @ 0x18001CCCC (-GetInputSiteFromInputSinkData@InputSiteManager@@AEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@$$Q.c)
 *     ?_Destroy@?$_Variant_base@PEAXV?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AJPEAX@Z$1?NtCloseCompositionInputSink@@YAJ0@Z@details@wil@@@details@wil@@@wil@@@std@@QEAAXXZ @ 0x180044B20 (-_Destroy@-$_Variant_base@PEAXV-$unique_any_t@V-$unique_storage@U-$handle_null_resource_policy@P.c)
 *     ??0LegacyInputSinkData@@QEAA@PEAX_N@Z @ 0x180044BF0 (--0LegacyInputSinkData@@QEAA@PEAX_N@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall InputSiteManager::GetInputSiteFromInputSinkHandle(__int64 a1, __int64 *a2, __int64 a3)
{
  LegacyInputSinkData *v5; // rax
  _BYTE v7[376]; // [rsp+20h] [rbp-178h] BYREF

  v5 = LegacyInputSinkData::LegacyInputSinkData((LegacyInputSinkData *)v7, a3);
  InputSiteManager::GetInputSiteFromInputSinkData(a1, a2, v5);
  std::_Variant_base<void *,wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<long (*)(void *),&long NtCloseCompositionInputSink(void *)>>>>::_Destroy((__int64)v7);
  return a2;
}
