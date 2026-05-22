/*
 * XREFs of ?GetProcessId@InputSite@@QEBAKXZ @ 0x180043CA0
 * Callers:
 *     ?UpdateHierarchyFromInputSinkTreeCache@InputSiteHierarchyManager@@UEAAXXZ @ 0x180015620 (-UpdateHierarchyFromInputSinkTreeCache@InputSiteHierarchyManager@@UEAAXXZ.c)
 *     ?GetInputSiteListFromDITCallbackStruct@InputSiteManager@@QEAA?AV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@AEBUtagDITCALLBACKSTRUCT@@@Z @ 0x1800171D0 (-GetInputSiteListFromDITCallbackStruct@InputSiteManager@@QEAA-AV-$vector@V-$ComPtr@VInputSite@@@.c)
 *     _lambda_1dc6d0ada7bcfb8231392ed4059b0fbe_::operator()_InputSite___ @ 0x180044094 (_lambda_1dc6d0ada7bcfb8231392ed4059b0fbe_--operator()_InputSite___.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004A6B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall InputSite::GetProcessId(InputSite *this)
{
  __int64 v1; // rax
  __int64 v2; // rcx

  v1 = *((_QWORD *)this + 50);
  if ( v1 == *((_QWORD *)this + 51) )
    return 0LL;
  v2 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v1 + 32LL) + 16LL);
  return *(unsigned int *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2) + 32);
}
