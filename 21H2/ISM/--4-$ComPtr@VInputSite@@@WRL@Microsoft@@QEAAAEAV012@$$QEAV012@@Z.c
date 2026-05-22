/*
 * XREFs of ??4?$ComPtr@VInputSite@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x1800119F8
 * Callers:
 *     ?GetInputSiteListFromDITCallbackStruct@InputSiteManager@@QEAA?AV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@AEBUtagDITCALLBACKSTRUCT@@@Z @ 0x180016EB0 (-GetInputSiteListFromDITCallbackStruct@InputSiteManager@@QEAA-AV-$vector@V-$ComPtr@VInputSite@@@.c)
 *     ?GetInputSiteFromInputSinkData@InputSiteManager@@AEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@$$QEAVLegacyInputSinkData@@@Z @ 0x18001CCCC (-GetInputSiteFromInputSinkData@InputSiteManager@@AEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@$$Q.c)
 *     ??0DWMFocusedInputTarget@@IEAA@PEAUIInputTarget@@KKK_KKK@Z @ 0x180027F24 (--0DWMFocusedInputTarget@@IEAA@PEAUIInputTarget@@KKK_KKK@Z.c)
 *     ?PopulateInputSiteFromViewId@DWMFocusedInputTarget@@AEAAXXZ @ 0x18002807C (-PopulateInputSiteFromViewId@DWMFocusedInputTarget@@AEAAXXZ.c)
 *     ?GetOrCreateInputSiteFromId@InputSiteManager@@QEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@W4InputSiteIdNamespace@@_KK@Z @ 0x180045164 (-GetOrCreateInputSiteFromId@InputSiteManager@@QEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@W4Inpu.c)
 *     ?UpdateInputTarget@EdgyProcessorTarget@@QEAAJUtagMsgRoutingInfo@@PEAXAEBUEdgyPointerInfo@@@Z @ 0x18017B6C4 (-UpdateInputTarget@EdgyProcessorTarget@@QEAAJUtagMsgRoutingInfo@@PEAXAEBUEdgyPointerInfo@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 */

__int64 *__fastcall Microsoft::WRL::ComPtr<InputSite>::operator=(__int64 *a1, char *a2)
{
  __int64 v3; // rax
  __int64 v4; // rcx
  char v6; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0LL;
  if ( &v6 != a2 )
  {
    v3 = *(_QWORD *)a2;
    *(_QWORD *)a2 = 0LL;
  }
  v4 = *a1;
  *a1 = v3;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  return a1;
}
