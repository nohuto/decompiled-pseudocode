/*
 * XREFs of ?ApplyPBMPolicy@CApplicationManager@@QEAAJPEAVCApplication@@IH@Z @ 0x180024018
 * Callers:
 *     ?ApplySmtcRelatedPolicy@CApplication@@QEAAXXZ @ 0x180016C20 (-ApplySmtcRelatedPolicy@CApplication@@QEAAXXZ.c)
 *     ?GrantGoodFaithPLMExemption@CApplication@@QEAAJH@Z @ 0x180016F54 (-GrantGoodFaithPLMExemption@CApplication@@QEAAJH@Z.c)
 *     ?ApplyPBMPolicyForAllAppsInSession@CApplicationManager@@QEAAJKH@Z @ 0x180024118 (-ApplyPBMPolicyForAllAppsInSession@CApplicationManager@@QEAAJKH@Z.c)
 *     ?SilenceAndRevokePLMExemption@CApplicationManager@@QEAAXPEAVCApplication@@@Z @ 0x1800249F0 (-SilenceAndRevokePLMExemption@CApplicationManager@@QEAAXPEAVCApplication@@@Z.c)
 *     ?OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z @ 0x180025364 (-OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z.c)
 *     ?OnBCMStartupGracePeriodExpired@CApplicationManager@@QEAAJPEAUBCMStartupGracePeriodExpiredContext@@@Z @ 0x180025F10 (-OnBCMStartupGracePeriodExpired@CApplicationManager@@QEAAJPEAUBCMStartupGracePeriodExpiredContex.c)
 *     ?Invoke@CStreamStartedWorkItem@@UEAAXXZ @ 0x180031430 (-Invoke@CStreamStartedWorkItem@@UEAAXXZ.c)
 *     ?Invoke@CProcessCategoryDowngradedWorkItem@@UEAAXXZ @ 0x1800321E0 (-Invoke@CProcessCategoryDowngradedWorkItem@@UEAAXXZ.c)
 *     ?Invoke@CGoodFaithPLMExemptionExpiredWorkItem@@UEAAXXZ @ 0x180032380 (-Invoke@CGoodFaithPLMExemptionExpiredWorkItem@@UEAAXXZ.c)
 * Callees:
 *     ?ExecutePBMActions@CApplication@@IEAAXW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@0W4_PLM_EXEMPTION@@IH@Z @ 0x180016520 (-ExecutePBMActions@CApplication@@IEAAXW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@0W4_PLM_EXEMP.c)
 *     ?AddPBMStatusOverrideToSilenceAndRevokePLMExemption@CApplication@@QEAAXXZ @ 0x180017A98 (-AddPBMStatusOverrideToSilenceAndRevokePLMExemption@CApplication@@QEAAXXZ.c)
 *     ?GetApplicationPBMStatus@CApplicationManager@@QEAAJPEAVCApplication@@PEAW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@1PEAW4_PLM_EXEMPTION@@@Z @ 0x1800245EC (-GetApplicationPBMStatus@CApplicationManager@@QEAAJPEAVCApplication@@PEAW4__MIDL___MIDL_itf_audi.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::ApplyPBMPolicy(
        CApplicationManager *this,
        struct CApplication *a2,
        unsigned int a3,
        int a4)
{
  CApplicationManager *v7; // rbx
  struct _RTL_CRITICAL_SECTION *v8; // r14
  unsigned int v9; // edi
  int v11; // [rsp+28h] [rbp-30h]
  unsigned int v12; // [rsp+30h] [rbp-28h] BYREF
  int v13; // [rsp+34h] [rbp-24h] BYREF
  struct _RTL_CRITICAL_SECTION *v14; // [rsp+38h] [rbp-20h]
  int v15; // [rsp+60h] [rbp+8h] BYREF

  v7 = this;
  v8 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  v14 = v8;
  CApplicationManager::GetApplicationPBMStatus(
    v7,
    a2,
    (enum __MIDL___MIDL_itf_audiosrv_0000_0000_0004 *)&v13,
    (enum __MIDL___MIDL_itf_audiosrv_0000_0000_0004 *)&v12,
    (enum _PLM_EXEMPTION *)&v15);
  v11 = a4;
  v9 = v12;
  LODWORD(v7) = v13;
  CApplication::ExecutePBMActions((__int64)a2, v13, v12, v15, a3, v11);
  if ( !(_DWORD)v7 && !v9 )
  {
    if ( v15 == 1 )
    {
      *(_QWORD *)((char *)a2 + 564) = 0LL;
      *(_QWORD *)((char *)a2 + 572) = 0LL;
      *(_QWORD *)((char *)a2 + 580) = 0LL;
      *((_DWORD *)a2 + 147) = 1;
      CApplication::AddPBMStatusOverrideToSilenceAndRevokePLMExemption(a2);
    }
    else if ( *((_DWORD *)a2 + 141) != 6 )
    {
      *((_DWORD *)a2 + 141) = 6;
      *((_QWORD *)a2 + 71) = 1LL;
      *((_QWORD *)a2 + 72) = 1LL;
    }
  }
  if ( v8 )
    LeaveCriticalSection(v8);
  return 0LL;
}
