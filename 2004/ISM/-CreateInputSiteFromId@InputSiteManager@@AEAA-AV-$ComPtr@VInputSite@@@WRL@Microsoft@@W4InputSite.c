/*
 * XREFs of ?CreateInputSiteFromId@InputSiteManager@@AEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@W4InputSiteIdNamespace@@_K@Z @ 0x180004DD4
 * Callers:
 *     ?GetInputSiteListFromDITCallbackStruct@InputSiteManager@@QEAA?AV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@AEBUtagDITCALLBACKSTRUCT@@@Z @ 0x1800171D0 (-GetInputSiteListFromDITCallbackStruct@InputSiteManager@@QEAA-AV-$vector@V-$ComPtr@VInputSite@@@.c)
 *     ?GetInputSiteFromInputSinkData@InputSiteManager@@AEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@$$QEAVLegacyInputSinkData@@@Z @ 0x18001CFFC (-GetInputSiteFromInputSinkData@InputSiteManager@@AEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@$$Q.c)
 *     ?GetOrCreateInputSiteFromId@InputSiteManager@@QEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@W4InputSiteIdNamespace@@_KK@Z @ 0x180044324 (-GetOrCreateInputSiteFromId@InputSiteManager@@QEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@W4Inpu.c)
 * Callees:
 *     ??$Make@VInputSite@@AEAW4InputSiteIdNamespace@@AEA_KPEAVInputSiteManager@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VInputSite@@@12@AEAW4InputSiteIdNamespace@@AEA_K$$QEAPEAVInputSiteManager@@@Z @ 0x180004E50 (--$Make@VInputSite@@AEAW4InputSiteIdNamespace@@AEA_KPEAVInputSiteManager@@@Details@WRL@Microsoft.c)
 *     ??$_Emplace_reallocate@PEAVInputSite@@@?$vector@PEAVInputSite@@V?$allocator@PEAVInputSite@@@std@@@std@@QEAAPEAPEAVInputSite@@QEAPEAV2@$$QEAPEAV2@@Z @ 0x180012960 (--$_Emplace_reallocate@PEAVInputSite@@@-$vector@PEAVInputSite@@V-$allocator@PEAVInputSite@@@std@.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *InputSiteManager::CreateInputSiteFromId(__int64 a1, _QWORD *a2, int a3, ...)
{
  __int64 v5; // rax
  _QWORD *v6; // rdx
  __int64 v8; // [rsp+50h] [rbp+8h] BYREF
  _QWORD *v9; // [rsp+58h] [rbp+10h]
  int v10; // [rsp+60h] [rbp+18h] BYREF
  va_list va; // [rsp+68h] [rbp+20h] BYREF

  va_start(va, a3);
  v10 = a3;
  v9 = a2;
  v8 = a1;
  Microsoft::WRL::Details::Make<InputSite,enum InputSiteIdNamespace &,unsigned __int64 &,InputSiteManager *>(
    a2,
    &v10,
    (__int64 *)va,
    &v8,
    0);
  v5 = *a2;
  v8 = *a2;
  v6 = *(_QWORD **)(a1 + 64);
  if ( *(_QWORD **)(a1 + 72) == v6 )
  {
    std::vector<InputSite *>::_Emplace_reallocate<InputSite *>(a1 + 56, v6, &v8);
  }
  else
  {
    *v6 = v5;
    *(_QWORD *)(a1 + 64) += 8LL;
  }
  return a2;
}
