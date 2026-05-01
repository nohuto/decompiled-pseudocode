/*
 * XREFs of ?_HandleApplicationRequestActivation@CApplicationManager@@AEAAJQEBUHSHELL_DATA@1@@Z @ 0x180131C34
 * Callers:
 *     ?OnShellHookMessage@CApplicationManager@@UEAAJ_K_J@Z @ 0x180037490 (-OnShellHookMessage@CApplicationManager@@UEAAJ_K_J@Z.c)
 * Callees:
 *     ??1?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180014918 (--1-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@w.c)
 *     ??0?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180014B04 (--0-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@w.c)
 *     ?Destroy@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18002A5A0 (-Destroy@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ?Stop@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180061400 (-Stop@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x18007C124 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     ??$_FindFirstApplication@VCImmersiveAppFinderByHwnd@@@CApplicationManager@@AEAAJAEBVCImmersiveAppFinderByHwnd@@PEAPEAUIImmersiveApplicationInternal@@PEA_K@Z @ 0x180083604 (--$_FindFirstApplication@VCImmersiveAppFinderByHwnd@@@CApplicationManager@@AEAAJAEBVCImmersiveAp.c)
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?StartActivity@HandleApplicationRequestActivation@CAppManagerTelemetry@@QEAAXXZ @ 0x18012D4EC (-StartActivity@HandleApplicationRequestActivation@CAppManagerTelemetry@@QEAAXXZ.c)
 *     WPP_SF_qd @ 0x180136024 (WPP_SF_qd.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CApplicationManager::_HandleApplicationRequestActivation(
        CApplicationManager *this,
        const struct CApplicationManager::HSHELL_DATA *const a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rdi
  int v5; // r14d
  int First; // ebx
  IUnknown *punk; // [rsp+40h] [rbp-C0h] BYREF
  void *ppv; // [rsp+48h] [rbp-B8h] BYREF
  int v10; // [rsp+50h] [rbp-B0h]
  struct _RTL_CRITICAL_SECTION *v11; // [rsp+58h] [rbp-A8h]
  int v12; // [rsp+60h] [rbp-A0h]
  _QWORD v13[40]; // [rsp+70h] [rbp-90h] BYREF

  v4 = (struct _RTL_CRITICAL_SECTION *)(((unsigned __int64)this + 392) & -(__int64)(this != 0LL));
  v11 = v4;
  v5 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread((__int64)v4, 1);
  v12 = v5;
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v13,
    (__int64)"HandleApplicationRequestActivation");
  v13[0] = &CAppManagerTelemetry::HandleApplicationRequestActivation::`vftable';
  CAppManagerTelemetry::HandleApplicationRequestActivation::StartActivity((CAppManagerTelemetry::HandleApplicationRequestActivation *)v13);
  punk = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&punk);
  ppv = (void *)*((_QWORD *)a2 + 1);
  v10 = 0;
  First = CApplicationManager::_FindFirstApplication<CImmersiveAppFinderByHwnd>(
            (__int64)this,
            (__int64 *)&ppv,
            &punk,
            0LL);
  if ( First >= 0 )
  {
    ppv = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppv);
    First = IUnknown_GetSite(punk, &GUID_91b0050a_78af_434e_ae0c_89943ac0ffee, &ppv);
    if ( First >= 0 )
      First = (*(__int64 (__fastcall **)(void *, IUnknown *, _QWORD, _QWORD, int, _QWORD))(*(_QWORD *)ppv + 48LL))(
                ppv,
                punk,
                *((_QWORD *)a2 + 1),
                0LL,
                5,
                0LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppv);
  }
  if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    WPP_SF_qd(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      15LL,
      &WPP_ff3bb96b33d535171730427b11d75d99_Traceguids,
      *((_QWORD *)a2 + 1));
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v13, First);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&punk);
  v13[0] = &CAppManagerTelemetry::HandleApplicationRequestActivation::`vftable';
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(v13);
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)v13);
  if ( v5 >= 0 )
    LeaveCriticalSection(v4);
  return (unsigned int)First;
}
