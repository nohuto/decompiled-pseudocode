/*
 * XREFs of ?GetInputSiteFromId@InputSiteManager@@QEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@W4InputSiteIdNamespace@@_KK@Z @ 0x1800450C0
 * Callers:
 *     ?GetInputSiteFromInputSinkData@InputSiteManager@@AEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@$$QEAVLegacyInputSinkData@@@Z @ 0x18001CCCC (-GetInputSiteFromInputSinkData@InputSiteManager@@AEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@$$Q.c)
 *     ?PopulateInputSiteFromViewId@DWMFocusedInputTarget@@AEAAXXZ @ 0x18002807C (-PopulateInputSiteFromViewId@DWMFocusedInputTarget@@AEAAXXZ.c)
 *     ?GetOrCreateInputSiteFromId@InputSiteManager@@QEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@W4InputSiteIdNamespace@@_KK@Z @ 0x180045164 (-GetOrCreateInputSiteFromId@InputSiteManager@@QEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@W4Inpu.c)
 * Callees:
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001054C (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     _lambda_1dc6d0ada7bcfb8231392ed4059b0fbe_::operator()_InputSite___ @ 0x180044ED4 (_lambda_1dc6d0ada7bcfb8231392ed4059b0fbe_--operator()_InputSite___.c)
 */

__int64 *__fastcall InputSiteManager::GetInputSiteFromId(__int64 a1, __int64 *a2, int a3, __int64 a4, int a5)
{
  InputSite **v5; // rbp
  InputSite **v7; // rbx
  __int128 v10; // [rsp+20h] [rbp-48h]
  __int64 v11; // [rsp+30h] [rbp-38h]
  __int128 v12; // [rsp+40h] [rbp-28h] BYREF
  __int64 v13; // [rsp+50h] [rbp-18h]

  v5 = *(InputSite ***)(a1 + 64);
  v7 = *(InputSite ***)(a1 + 56);
  LODWORD(v10) = a3;
  *((_QWORD *)&v10 + 1) = a4;
  LODWORD(v11) = a5;
  v12 = v10;
  v13 = v11;
  while ( v7 != v5 && !lambda_1dc6d0ada7bcfb8231392ed4059b0fbe_::operator()_InputSite___((__int64)&v12, v7) )
    ++v7;
  if ( v7 == *(InputSite ***)(a1 + 64) )
  {
    *a2 = 0LL;
  }
  else
  {
    *a2 = (__int64)*v7;
    wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(a2);
  }
  return a2;
}
