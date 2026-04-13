/*
 * XREFs of ?CreateYourPhoneTaskbarIconIfNeeded@Pinning@Mobility@@YAXKKK@Z @ 0x18000E160
 * Callers:
 *     ?CreateYourPhoneTaskbarIconIfNeeded@MobilityExperienceSettings@ContentManagement@@UEAAJKKK@Z @ 0x1800121F0 (-CreateYourPhoneTaskbarIconIfNeeded@MobilityExperienceSettings@ContentManagement@@UEAAJKKK@Z.c)
 * Callees:
 *     ?RunFunctor@details@wil@@YAJAEAUIFunctor@12@AEAUIFunctorHost@12@@Z @ 0x1800052FC (-RunFunctor@details@wil@@YAJAEAUIFunctor@12@AEAUIFunctorHost@12@@Z.c)
 *     ?GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z @ 0x180006CD0 (-GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_YourPhoneTaskbarIcon@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180017598 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_YourPhoneTaskbarIcon@@@details@wil@@QEAAX.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Mobility::Pinning::CreateYourPhoneTaskbarIconIfNeeded(Mobility::Pinning *this, __int64 a2, __int64 a3)
{
  wil::details_abi *v3; // rcx
  __int64 v4; // rdx
  struct wil::details_abi::ThreadLocalData *ThreadLocalDataCache; // rax
  struct wil::details::IFunctorHost *v6; // r8
  const char *v7; // r9
  _DWORD v8[4]; // [rsp+28h] [rbp-70h] BYREF
  _QWORD v9[2]; // [rsp+38h] [rbp-60h] BYREF
  _QWORD v10[3]; // [rsp+48h] [rbp-50h] BYREF
  __int16 v11; // [rsp+60h] [rbp-38h]
  void **v12; // [rsp+68h] [rbp-30h] BYREF
  struct wil::details_abi::ThreadLocalData *v13; // [rsp+70h] [rbp-28h]
  int v14; // [rsp+78h] [rbp-20h]
  int v15; // [rsp+7Ch] [rbp-1Ch]
  _QWORD *v16; // [rsp+80h] [rbp-18h]
  int v17; // [rsp+88h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  v8[0] = (_DWORD)this;
  v8[1] = a2;
  v8[2] = a3;
  v10[0] = retaddr;
  v10[1] = "onecoreuap\\internal\\shell\\inc\\MobilityPinning.h";
  v10[2] = 0LL;
  v11 = 132;
  LOBYTE(a3) = 3;
  LOBYTE(a2) = 1;
  try
  {
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_YourPhoneTaskbarIcon>::ReportUsage(
      &`wil::Feature<__WilFeatureTraits_Feature_YourPhoneTaskbarIcon>::GetImpl'::`2'::impl,
      a2,
      a3);
    v9[0] = &wil::details::functor_wrapper_void<_lambda_13a45783cb3309e666fe0ee3fbf2f736_ &>::`vftable';
    v9[1] = v8;
    v12 = &wil::details::FeatureFunctorHost::`vftable';
    LOBYTE(v3) = 1;
    ThreadLocalDataCache = wil::details_abi::GetThreadLocalDataCache(v3, v4);
    v13 = ThreadLocalDataCache;
    v14 = 0;
    v15 = 0;
    if ( ThreadLocalDataCache )
    {
      v15 = *((_DWORD *)ThreadLocalDataCache + 4);
      v14 = **((_DWORD **)ThreadLocalDataCache + 1);
      *((_DWORD *)ThreadLocalDataCache + 4) = v14;
    }
    v16 = v10;
    v17 = 16257538;
    wil::details::RunFunctor((wil::details *)v9, (struct wil::details::IFunctor *)&v12, v6);
    if ( v13 )
      *((_DWORD *)v13 + 4) = v15;
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0xBF,
      (__int64)"onecoreuap\\internal\\shell\\inc\\MobilityPinning.h",
      v7);
  }
}
