/*
 * XREFs of ?Process3DInput@MPCHandProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x18007EB20
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EF94 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800107DC (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x180011C98 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ?get@?$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z @ 0x180019EC4 (-get@-$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z.c)
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x180029890 (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E44C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memcpy_0 @ 0x18004A68B (memcpy_0.c)
 *     ?Process3DInput@MPCHolographicInputManager@@QEAAJPEAUInputInfo@@PEAUIMPCInputProviderBase@@PEAPEAUIMPCTarget@@@Z @ 0x1800775BC (-Process3DInput@MPCHolographicInputManager@@QEAAJPEAUInputInfo@@PEAUIMPCInputProviderBase@@PEAPE.c)
 *     ?HandleHomeGesture@MPCHandProcessor@@AEAA_NPEAUInputInfo@@@Z @ 0x18007DB00 (-HandleHomeGesture@MPCHandProcessor@@AEAA_NPEAUInputInfo@@@Z.c)
 *     ?MPCHandProcessor_UseGazeForTargetingChange_@ISMTracing@@QEAAXPEBULegacyInputInfo@@_N@Z @ 0x18007E034 (-MPCHandProcessor_UseGazeForTargetingChange_@ISMTracing@@QEAAXPEBULegacyInputInfo@@_N@Z.c)
 *     ?SendInputToTargetApp@MPCHandProcessor@@AEAAXPEAUIMPCTarget@@0PEAUInputInfo@@@Z @ 0x18007EEC8 (-SendInputToTargetApp@MPCHandProcessor@@AEAAXPEAUIMPCTarget@@0PEAUInputInfo@@@Z.c)
 *     ?ShouldRequestPrimary@MPCHandProcessor@@AEAA_NPEAUInputInfo@@@Z @ 0x18007F014 (-ShouldRequestPrimary@MPCHandProcessor@@AEAA_NPEAUInputInfo@@@Z.c)
 *     ?IsPrimary@MPCInputProviderBase@@UEBA_NXZ @ 0x1800834F0 (-IsPrimary@MPCInputProviderBase@@UEBA_NXZ.c)
 *     ?SendInputToPostProcessor@MPCInputProviderBase@@IEAAXPEAUInputInfo@@@Z @ 0x180084900 (-SendInputToPostProcessor@MPCInputProviderBase@@IEAAXPEAUInputInfo@@@Z.c)
 *     ?SetRequestingPrimary@MPCInputProviderBase@@IEAAXXZ @ 0x180084A38 (-SetRequestingPrimary@MPCInputProviderBase@@IEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall MPCHandProcessor::Process3DInput(unsigned __int64 this, struct InputInfo *a2)
{
  MPCInputProviderBase *v4; // r14
  __int64 v5; // rcx
  char v6; // bl
  __int64 v7; // rcx
  ISMTracing *v8; // rcx
  struct IMPCTarget *v9; // rbx
  MPCHolographicInputManager *Instance; // rdi
  int v11; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct IMPCTarget *v14; // [rsp+40h] [rbp+8h] BYREF
  struct IMPCTarget *v15; // [rsp+50h] [rbp+18h] BYREF

  v4 = (MPCInputProviderBase *)(this - 24);
  if ( !MPCHandProcessor::HandleHomeGesture((MPCHandProcessor *)(this - 24), a2) )
  {
    v14 = 0LL;
    memcpy_0((void *)(this + 4640), a2, 0x7F0uLL);
    *(_BYTE *)(this + 10944) = 0;
    v6 = !*((_BYTE *)a2 + 972) || !*((_BYTE *)a2 + 732) || !*((_BYTE *)a2 + 733);
    if ( v6 != *(_BYTE *)(this + 4608) )
    {
      *(_BYTE *)(this + 4608) = v6;
      if ( ISMTracing::IsEnabled(v5) )
      {
        wil::details::static_lazy<ISMTracing>::get(
          v7,
          _lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
        ISMTracing::MPCHandProcessor_UseGazeForTargetingChange_(v8, a2, v6);
      }
    }
    if ( !MPCInputProviderBase::IsPrimary((MPCInputProviderBase *)this)
      && MPCHandProcessor::ShouldRequestPrimary(v4, a2) )
    {
      MPCInputProviderBase::SetRequestingPrimary(v4);
    }
    v9 = *(struct IMPCTarget **)(this + 4576);
    v15 = v9;
    wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((__int64 *)&v15);
    Instance = MPCHolographicInputManager::GetInstance();
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v14);
    v11 = MPCHolographicInputManager::Process3DInput(
            Instance,
            a2,
            (struct IMPCInputProviderBase *)(this & -(__int64)(v4 != 0LL)),
            &v14);
    if ( v11 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        112LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpchandprocessor.cpp",
        (const char *)(unsigned int)v11);
      __debugbreak();
    }
    MPCInputProviderBase::SendInputToPostProcessor(v4, a2);
    MPCHandProcessor::SendInputToTargetApp(v4, v9, v14, a2);
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v15);
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v14);
  }
  return 0LL;
}
