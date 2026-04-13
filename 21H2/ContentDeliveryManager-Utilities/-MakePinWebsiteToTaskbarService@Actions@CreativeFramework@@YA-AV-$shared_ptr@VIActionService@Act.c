/*
 * XREFs of ?MakePinWebsiteToTaskbarService@Actions@CreativeFramework@@YA?AV?$shared_ptr@VIActionService@Actions@CreativeFramework@@@std@@AEBUActionContext@12@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@4@@Z @ 0x180093160
 * Callers:
 *     <none>
 * Callees:
 *     ?RunFunctor@details@wil@@YAJAEAUIFunctor@12@AEAUIFunctorHost@12@@Z @ 0x18000531C (-RunFunctor@details@wil@@YAJAEAUIFunctor@12@AEAUIFunctorHost@12@@Z.c)
 *     ?GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z @ 0x180006D10 (-GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_PinWebsiteAction@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180084744 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_PinWebsiteAction@@@details@wil@@QEAAX_NW4.c)
 */

// Hidden C++ exception states: #wind=2
_OWORD *__fastcall CreativeFramework::Actions::MakePinWebsiteToTaskbarService(_OWORD *a1, __int64 a2, __int64 a3)
{
  wil::details_abi *v4; // rcx
  __int64 v5; // rdx
  struct wil::details_abi::ThreadLocalData *ThreadLocalDataCache; // rax
  struct wil::details::IFunctorHost *v7; // r8
  void **v9; // [rsp+30h] [rbp-21h] BYREF
  struct wil::details_abi::ThreadLocalData *v10; // [rsp+38h] [rbp-19h]
  int v11; // [rsp+40h] [rbp-11h]
  int v12; // [rsp+44h] [rbp-Dh]
  _QWORD *v13; // [rsp+48h] [rbp-9h]
  int v14; // [rsp+50h] [rbp-1h]
  __int128 v15; // [rsp+58h] [rbp+7h] BYREF
  _QWORD v16[3]; // [rsp+68h] [rbp+17h] BYREF
  _QWORD v17[3]; // [rsp+80h] [rbp+2Fh] BYREF
  __int16 v18; // [rsp+98h] [rbp+47h]
  __int64 v19; // [rsp+A0h] [rbp+4Fh]
  _UNKNOWN *retaddr; // [rsp+B0h] [rbp+5Fh]
  __int64 v21; // [rsp+B8h] [rbp+67h] BYREF

  v19 = -2LL;
  v21 = a3;
  v17[0] = retaddr;
  v17[1] = "shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\taskbarhelpers.cpp";
  v17[2] = "MakePinWebsiteToTaskbarService";
  v18 = 141;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_PinWebsiteAction>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_PinWebsiteAction>::GetImpl'::`2'::impl,
    1u,
    3u);
  v15 = 0LL;
  v16[0] = off_1800EC3C0;
  v16[1] = &v21;
  v16[2] = &v15;
  v9 = &wil::details::FeatureFunctorHost::`vftable';
  LOBYTE(v4) = 1;
  ThreadLocalDataCache = wil::details_abi::GetThreadLocalDataCache(v4, v5);
  v10 = ThreadLocalDataCache;
  v11 = 0;
  v12 = 0;
  if ( ThreadLocalDataCache )
  {
    v12 = *((_DWORD *)ThreadLocalDataCache + 4);
    v11 = **((_DWORD **)ThreadLocalDataCache + 1);
    *((_DWORD *)ThreadLocalDataCache + 4) = v11;
  }
  v13 = v17;
  v14 = 11790758;
  wil::details::RunFunctor((wil::details *)v16, (struct wil::details::IFunctor *)&v9, v7);
  if ( v10 )
    *((_DWORD *)v10 + 4) = v12;
  *a1 = v15;
  return a1;
}
