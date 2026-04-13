/*
 * XREFs of ?StartProductInstallWithOverrides@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@EE0000@Z @ 0x1800587F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005D48 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z @ 0x180006CE0 (-GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z.c)
 *     ?ReportFeatureError@details@wil@@YAXJAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@@Z @ 0x18000CC28 (-ReportFeatureError@details@wil@@YAXJAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@@Z.c)
 *     ??R_lambda_6cabec790fcbd4832d90c2925fd9d572_@@QEBAJXZ @ 0x180058944 (--R_lambda_6cabec790fcbd4832d90c2925fd9d572_@@QEBAJXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_TargetedContentUseProductInstallAPIs@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18005A78C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_TargetedContentUseProductInstallAPIs@@@de.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ContentManagement::AppManager::StartProductInstallWithOverrides(
        ContentManagement::AppManager *this,
        HSTRING a2,
        __int64 a3,
        char a4,
        HSTRING a5,
        HSTRING a6,
        HSTRING a7,
        HSTRING a8)
{
  __int64 v9; // r8
  __int64 v10; // rdx
  wil::details_abi *v11; // rcx
  __int64 v12; // rdx
  struct wil::details_abi::ThreadLocalData *ThreadLocalDataCache; // rax
  struct wil::details_abi::ThreadLocalData *v14; // rdi
  int v15; // esi
  int v16; // eax
  int v17; // ebx
  int v19[2]; // [rsp+30h] [rbp-61h] BYREF
  int v20; // [rsp+38h] [rbp-59h]
  int v21; // [rsp+3Ch] [rbp-55h]
  unsigned int v22[2]; // [rsp+40h] [rbp-51h] BYREF
  const char *v23; // [rsp+48h] [rbp-49h]
  __int64 v24; // [rsp+50h] [rbp-41h]
  __int16 v25; // [rsp+58h] [rbp-39h]
  _QWORD v26[13]; // [rsp+60h] [rbp-31h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+3Fh]
  HSTRING v28; // [rsp+E0h] [rbp+4Fh] BYREF
  char v29; // [rsp+E8h] [rbp+57h] BYREF
  char v30; // [rsp+F0h] [rbp+5Fh] BYREF

  v30 = a4;
  v29 = a3;
  v28 = a2;
  LOBYTE(a3) = 3;
  LOBYTE(a2) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_TargetedContentUseProductInstallAPIs>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_TargetedContentUseProductInstallAPIs>::GetImpl'::`2'::impl,
    a2,
    a3);
  v26[0] = (char *)this - 48;
  v26[1] = &v28;
  v26[2] = &a6;
  v26[3] = &a7;
  v26[4] = &a5;
  v26[5] = &v29;
  v26[6] = &v30;
  v26[7] = &a8;
  *(_QWORD *)v22 = retaddr;
  v23 = "shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp";
  v24 = 0LL;
  v25 = 319;
  LOBYTE(v9) = 1;
  LOBYTE(v10) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_TargetedContentUseProductInstallAPIs>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_TargetedContentUseProductInstallAPIs>::GetImpl'::`2'::impl,
    v10,
    v9);
  LOBYTE(v11) = 1;
  ThreadLocalDataCache = wil::details_abi::GetThreadLocalDataCache(v11, v12);
  v14 = ThreadLocalDataCache;
  *(_QWORD *)v19 = ThreadLocalDataCache;
  v20 = 0;
  v15 = 0;
  v21 = 0;
  if ( ThreadLocalDataCache )
  {
    v21 = *((_DWORD *)ThreadLocalDataCache + 4);
    v20 = **((_DWORD **)ThreadLocalDataCache + 1);
    *((_DWORD *)ThreadLocalDataCache + 4) = v20;
    v15 = v21;
    v14 = *(struct wil::details_abi::ThreadLocalData **)v19;
  }
  v16 = _lambda_6cabec790fcbd4832d90c2925fd9d572_::operator()(v26);
  v17 = v16;
  if ( v16 < 0 )
    wil::details::ReportFeatureError(
      (wil::details *)(unsigned int)v16,
      (__int64)v19,
      (struct wil::ThreadErrorContext *)0x8284B3,
      (const struct wil::FailureInfo *)v22);
  if ( v14 )
    *((_DWORD *)v14 + 4) = v15;
  if ( v17 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x13F,
    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
    (const char *)(unsigned int)v17);
  return (unsigned int)v17;
}
