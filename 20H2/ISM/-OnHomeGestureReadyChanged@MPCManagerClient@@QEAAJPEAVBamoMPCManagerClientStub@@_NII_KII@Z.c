/*
 * XREFs of ?OnHomeGestureReadyChanged@MPCManagerClient@@QEAAJPEAVBamoMPCManagerClientStub@@_NII_KII@Z @ 0x1801095D0
 * Callers:
 *     ?OnHomeGestureReadyChanged@MPCManagerClientPrincipal@@UEAAJPEAVBamoMPCManagerClientStub@@_NII_KII@Z @ 0x18010CD20 (-OnHomeGestureReadyChanged@MPCManagerClientPrincipal@@UEAAJPEAVBamoMPCManagerClientStub@@_NII_KI.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E15C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004A660 (_guard_dispatch_icall_nop.c)
 *     ?_FailFast_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800791E8 (-_FailFast_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$DoInvoke@V_lambda_d0f00b216f9e073402124dc24bf27ba2_@@@?$EventSource@U?$ITypedEventHandler@PEAVMPCManagerClient@MPCManager@Input@Internal@Windows@@PEAVHomeGestureEventArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@AEAAJV_lambda_d0f00b216f9e073402124dc24bf27ba2_@@@Z @ 0x180105A94 (--$DoInvoke@V_lambda_d0f00b216f9e073402124dc24bf27ba2_@@@-$EventSource@U-$ITypedEventHandler@PEA.c)
 *     ??$Make@VHomeGestureReadyChangedEventArgs@@AEA_NAEAIAEAIAEA_KAEAIAEAI@Details@WRL@Microsoft@@YA?AV?$ComPtr@VHomeGestureReadyChangedEventArgs@@@12@AEA_NAEAI1AEA_K11@Z @ 0x180105E44 (--$Make@VHomeGestureReadyChangedEventArgs@@AEA_NAEAIAEAIAEA_KAEAIAEAI@Details@WRL@Microsoft@@YA-.c)
 */

__int64 MPCManagerClient::OnHomeGestureReadyChanged(
        RTL_SRWLOCK *this,
        RTL_SRWLOCK *a2,
        bool a3,
        unsigned int a4,
        unsigned int a5,
        unsigned __int64 a6,
        unsigned int a7,
        ...)
{
  const char *v8; // r9
  HomeGestureReadyChangedEventArgs *v9; // rbx
  int v10; // eax
  HomeGestureReadyChangedEventArgs *v12; // [rsp+40h] [rbp-20h] BYREF
  __int128 v13; // [rsp+50h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]
  RTL_SRWLOCK *v15; // [rsp+88h] [rbp+28h] BYREF
  bool v16; // [rsp+90h] [rbp+30h] BYREF
  unsigned int v17; // [rsp+98h] [rbp+38h] BYREF
  va_list va; // [rsp+B8h] [rbp+58h] BYREF

  va_start(va, a7);
  v17 = a4;
  v16 = a3;
  v15 = a2;
  Microsoft::WRL::Details::Make<HomeGestureReadyChangedEventArgs,bool &,unsigned int &,unsigned int &,unsigned __int64 &,unsigned int &,unsigned int &>(
    (HomeGestureReadyChangedEventArgs **)&v15,
    &v16,
    &v17,
    &a5,
    &a6,
    &a7,
    (unsigned int *)va);
  v9 = (HomeGestureReadyChangedEventArgs *)v15;
  if ( !v15 )
  {
    wil::details::in1diag3::_FailFast_NullAlloc(
      retaddr,
      192LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\mpcmanager\\lib\\mpcmanagerclient.cpp",
      v8);
    __debugbreak();
  }
  v12 = (HomeGestureReadyChangedEventArgs *)v15;
  *(_QWORD *)&v13 = &v15;
  v15 = this;
  *((_QWORD *)&v13 + 1) = &v12;
  v10 = Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Input::MPCManager::MPCManagerClient *,Windows::Internal::Input::MPCManager::HomeGestureEventArgs *>,Microsoft::WRL::InvokeModeOptions<-2>>::DoInvoke<_lambda_d0f00b216f9e073402124dc24bf27ba2_>(
          this + 204,
          &v13);
  if ( v10 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      193LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\mpcmanager\\lib\\mpcmanagerclient.cpp",
      (const char *)(unsigned int)v10);
    __debugbreak();
  }
  (*(void (__fastcall **)(HomeGestureReadyChangedEventArgs *))(*(_QWORD *)v9 + 16LL))(v9);
  return 0LL;
}
