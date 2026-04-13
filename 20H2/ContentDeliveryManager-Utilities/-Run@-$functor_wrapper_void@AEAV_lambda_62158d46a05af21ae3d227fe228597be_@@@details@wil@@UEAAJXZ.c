/*
 * XREFs of ?Run@?$functor_wrapper_void@AEAV_lambda_62158d46a05af21ae3d227fe228597be_@@@details@wil@@UEAAJXZ @ 0x180092D90
 * Callers:
 *     <none>
 * Callees:
 *     ?RunFunctor@details@wil@@YAJAEAUIFunctor@12@AEAUIFunctorHost@12@@Z @ 0x1800052FC (-RunFunctor@details@wil@@YAJAEAUIFunctor@12@AEAUIFunctorHost@12@@Z.c)
 *     ?GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z @ 0x180006CD0 (-GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_PinWebsiteActionV2@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18009B894 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_PinWebsiteActionV2@@@details@wil@@QEAAX_N.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall wil::details::functor_wrapper_void<_lambda_62158d46a05af21ae3d227fe228597be_ &>::Run(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  _QWORD *v3; // rax
  _QWORD *v4; // rdx
  _QWORD *v5; // rcx
  _QWORD *v6; // rax
  __int64 v7; // r8
  __int64 v8; // rdx
  wil::details_abi *v9; // rcx
  __int64 v10; // rdx
  struct wil::details_abi::ThreadLocalData *ThreadLocalDataCache; // rax
  struct wil::details::IFunctorHost *v12; // r8
  void **v14; // [rsp+20h] [rbp-39h] BYREF
  struct wil::details_abi::ThreadLocalData *v15; // [rsp+28h] [rbp-31h]
  int v16; // [rsp+30h] [rbp-29h]
  int v17; // [rsp+34h] [rbp-25h]
  _QWORD *v18; // [rsp+38h] [rbp-21h]
  int v19; // [rsp+40h] [rbp-19h]
  _QWORD *v20; // [rsp+48h] [rbp-11h] BYREF
  _QWORD *v21; // [rsp+50h] [rbp-9h] BYREF
  _QWORD *v22; // [rsp+58h] [rbp-1h] BYREF
  _QWORD v23[2]; // [rsp+60h] [rbp+7h] BYREF
  _QWORD v24[3]; // [rsp+70h] [rbp+17h] BYREF
  _QWORD v25[3]; // [rsp+88h] [rbp+2Fh] BYREF
  __int16 v26; // [rsp+A0h] [rbp+47h]
  __int64 v27; // [rsp+A8h] [rbp+4Fh]
  _UNKNOWN *retaddr; // [rsp+B8h] [rbp+5Fh]

  v27 = -2LL;
  v3 = **(_QWORD ***)(a1 + 8);
  v4 = v3 + 9;
  if ( v3[12] >= 8uLL )
    v4 = (_QWORD *)*v4;
  v5 = v3 + 5;
  if ( v3[8] >= 8uLL )
    v5 = (_QWORD *)*v5;
  v6 = v3 + 1;
  if ( v6[3] >= 8uLL )
    v6 = (_QWORD *)*v6;
  v21 = v6;
  v22 = v4;
  v20 = v5;
  LOBYTE(a3) = 3;
  LOBYTE(v4) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_PinWebsiteActionV2>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_PinWebsiteActionV2>::GetImpl'::`2'::impl,
    v4,
    a3);
  v24[0] = &v20;
  v24[1] = &v21;
  v24[2] = &v22;
  v25[0] = retaddr;
  v25[1] = "shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\pinnedwebsitemanager.cpp";
  v25[2] = "Pin";
  v26 = 122;
  LOBYTE(v7) = 1;
  LOBYTE(v8) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_PinWebsiteActionV2>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_PinWebsiteActionV2>::GetImpl'::`2'::impl,
    v8,
    v7);
  v23[0] = off_1800E9570;
  v23[1] = v24;
  v14 = &wil::details::FeatureFunctorHost::`vftable';
  LOBYTE(v9) = 1;
  ThreadLocalDataCache = wil::details_abi::GetThreadLocalDataCache(v9, v10);
  v15 = ThreadLocalDataCache;
  v16 = 0;
  v17 = 0;
  if ( ThreadLocalDataCache )
  {
    v17 = *((_DWORD *)ThreadLocalDataCache + 4);
    v16 = **((_DWORD **)ThreadLocalDataCache + 1);
    *((_DWORD *)ThreadLocalDataCache + 4) = v16;
  }
  v18 = v25;
  v19 = 16419964;
  wil::details::RunFunctor((wil::details *)v23, (struct wil::details::IFunctor *)&v14, v12);
  if ( v15 )
    *((_DWORD *)v15 + 4) = v17;
  return 0LL;
}
