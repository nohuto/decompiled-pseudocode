/*
 * XREFs of ?Set3DFocusTarget@MPCInputRouter@@AEAAXPEAUIMPCFocusTarget@@@Z @ 0x1800B9278
 * Callers:
 *     ?Initialize3DComponents@MPCInputRouter@@AEAAXXZ @ 0x1800B80F0 (-Initialize3DComponents@MPCInputRouter@@AEAAXXZ.c)
 *     ?UnInitialize3DComponents@MPCInputRouter@@AEAAXXZ @ 0x1800B9368 (-UnInitialize3DComponents@MPCInputRouter@@AEAAXXZ.c)
 *     ?UpdateFocusedInputTarget3D@MPCInputRouter@@AEAAXPEAUIInputTarget@@@Z @ 0x1800B9628 (-UpdateFocusedInputTarget3D@MPCInputRouter@@AEAAXPEAUIInputTarget@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EF94 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800107DC (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x180011C98 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ?get@?$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z @ 0x180019EC4 (-get@-$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z.c)
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x180029890 (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004A6B0 (_guard_dispatch_icall_nop.c)
 *     ?OnTargetWithFocus3dChanged@MPCHolographicInputManager@@QEAAXPEAUIMPCFocusTarget@@0@Z @ 0x180077304 (-OnTargetWithFocus3dChanged@MPCHolographicInputManager@@QEAAXPEAUIMPCFocusTarget@@0@Z.c)
 *     ??4?$ComPtr@UIMPCFocusTarget@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1800B7790 (--4-$ComPtr@UIMPCFocusTarget@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?MPCInputRouter_Set3DFocusTarget_@ISMTracing@@QEAAXPEAUIMPCFocusTarget@@0@Z @ 0x1800B89E4 (-MPCInputRouter_Set3DFocusTarget_@ISMTracing@@QEAAXPEAUIMPCFocusTarget@@0@Z.c)
 *     ?Update3DFocusWNF@MPCInputRouter@@AEAAXXZ @ 0x1800B9450 (-Update3DFocusWNF@MPCInputRouter@@AEAAXXZ.c)
 */

void __fastcall MPCInputRouter::Set3DFocusTarget(MPCInputRouter *this, struct IMPCFocusTarget *a2)
{
  struct IMPCFocusTarget **v2; // rbx
  struct IMPCFocusTarget **v5; // r14
  MPCHolographicInputManager *Instance; // rax
  struct IMPCFocusTarget *v7; // rsi
  struct IMPCFocusTarget *v8; // rbp
  __int64 v9; // rcx
  __int64 v10; // rcx
  ISMTracing *v11; // rcx
  struct IMPCFocusTarget *v12; // [rsp+40h] [rbp+8h] BYREF

  v2 = (struct IMPCFocusTarget **)((char *)this + 792);
  if ( *((struct IMPCFocusTarget **)this + 99) != a2 )
  {
    v5 = (struct IMPCFocusTarget **)((char *)this + 800);
    Microsoft::WRL::ComPtr<IMPCFocusTarget>::operator=((__int64 *)this + 100, (__int64 *)this + 99);
    if ( *v2 != a2 )
    {
      v12 = a2;
      wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((__int64 *)&v12);
      v12 = *v2;
      *v2 = a2;
      Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v12);
    }
    Instance = MPCHolographicInputManager::GetInstance();
    MPCHolographicInputManager::OnTargetWithFocus3dChanged(Instance, *v5, *v2);
    MPCInputRouter::Update3DFocusWNF(this);
    v7 = *v2;
    v8 = *v5;
    if ( ISMTracing::IsEnabled(v9) )
    {
      wil::details::static_lazy<ISMTracing>::get(v10, _lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
      ISMTracing::MPCInputRouter_Set3DFocusTarget_(v11, v8, v7);
    }
  }
  if ( *v2
    && *((_BYTE *)this + 888)
    && *((_QWORD *)this + 112) == (*(__int64 (__fastcall **)(struct IMPCFocusTarget *))(*(_QWORD *)*v2 + 56LL))(*v2) )
  {
    Microsoft::WRL::ComPtr<IMPCFocusTarget>::operator=((__int64 *)this + 98, (__int64 *)v2);
  }
}
