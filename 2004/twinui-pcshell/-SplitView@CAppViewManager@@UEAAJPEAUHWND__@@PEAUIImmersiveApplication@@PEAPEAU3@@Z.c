/*
 * XREFs of ?SplitView@CAppViewManager@@UEAAJPEAUHWND__@@PEAUIImmersiveApplication@@PEAPEAU3@@Z @ 0x18016C820
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180014EE8 (--1-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@w.c)
 *     ??0?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1800150D4 (--0-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@w.c)
 *     ??1CAutoApplicationCreationResourceGuarantee@@QEAA@XZ @ 0x18001517C (--1CAutoApplicationCreationResourceGuarantee@@QEAA@XZ.c)
 *     ?Destroy@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18002ADE0 (-Destroy@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ??0CAutoApplicationCreationResourceGuarantee@@QEAA@PEAUIIAMServiceProvider@@@Z @ 0x180042998 (--0CAutoApplicationCreationResourceGuarantee@@QEAA@PEAUIIAMServiceProvider@@@Z.c)
 *     ?Stop@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180061B30 (-Stop@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ?StartActivity@SplitView@CAppViewManagerTelemetry@@QEAAXXZ @ 0x18016D304 (-StartActivity@SplitView@CAppViewManagerTelemetry@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CAppViewManager::SplitView(
        CAppViewManager *this,
        HWND a2,
        __int64 (__fastcall ***a3)(struct IImmersiveApplication *, GUID *, __int64 *),
        struct IImmersiveApplication **a4)
{
  void (__fastcall ***v8)(_QWORD, GUID *, struct IIAMServiceProvider **); // rdi
  void (__fastcall *v9)(_QWORD, GUID *, struct IIAMServiceProvider **); // rbx
  RTL_SRWLOCK *v10; // rbx
  __int64 (__fastcall *v11)(struct IImmersiveApplication *, GUID *, __int64 *); // rdi
  int v12; // edi
  __int64 v13; // rsi
  __int64 (__fastcall *v14)(__int64, HWND, __int64, _QWORD, __int64 *); // rdi
  __int64 v16; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v17; // [rsp+38h] [rbp-C8h] BYREF
  struct IIAMServiceProvider *v18[2]; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v19[16]; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v20[40]; // [rsp+60h] [rbp-A0h] BYREF

  *a4 = 0LL;
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v20,
    (__int64)"SplitView");
  v20[0] = &CAppViewManagerTelemetry::SplitView::`vftable';
  CAppViewManagerTelemetry::SplitView::StartActivity((CAppViewManagerTelemetry::SplitView *)v20);
  v18[0] = 0LL;
  v8 = (void (__fastcall ***)(_QWORD, GUID *, struct IIAMServiceProvider **))*((_QWORD *)this + 10);
  v9 = **v8;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v18);
  v9(v8, &GUID_5f75d642_3fd3_46f6_86d3_a4aee3c0ffee, v18);
  CAutoApplicationCreationResourceGuarantee::CAutoApplicationCreationResourceGuarantee(
    (CAutoApplicationCreationResourceGuarantee *)v19,
    v18[0]);
  v16 = 0LL;
  v10 = CApplicationManagerUtility::g_pIAMGlobals;
  v18[1] = (struct IIAMServiceProvider *)CApplicationManagerUtility::g_pIAMGlobals;
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v17 = 0LL;
  v11 = **a3;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v17);
  v12 = v11((struct IImmersiveApplication *)a3, &GUID_c9301630_27da_428e_a432_0a5e49c0ffee, &v17);
  if ( v12 >= 0 )
  {
    v13 = *((_QWORD *)this + 10);
    v14 = *(__int64 (__fastcall **)(__int64, HWND, __int64, _QWORD, __int64 *))(*(_QWORD *)v13 + 88LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
    v12 = v14(v13, a2, v17, 0LL, &v16);
    if ( v12 >= 0 )
    {
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v16 + 368LL))(v16, 2LL);
      v12 = (**(__int64 (__fastcall ***)(__int64, GUID *, struct IImmersiveApplication **))v16)(
              v16,
              &GUID_8b14e88b_5663_4caf_b196_c31479262831,
              a4);
    }
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v17);
  if ( v10 )
    ReleaseSRWLockExclusive(v10);
  if ( v12 >= 0 )
    v12 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 10) + 152LL))(
            *((_QWORD *)this + 10),
            v16,
            0LL,
            0LL,
            0LL);
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v20, v12);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
  CAutoApplicationCreationResourceGuarantee::~CAutoApplicationCreationResourceGuarantee((CAutoApplicationCreationResourceGuarantee *)v19);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v18);
  v20[0] = &CAppViewManagerTelemetry::SplitView::`vftable';
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(v20);
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)v20);
  return (unsigned int)v12;
}
