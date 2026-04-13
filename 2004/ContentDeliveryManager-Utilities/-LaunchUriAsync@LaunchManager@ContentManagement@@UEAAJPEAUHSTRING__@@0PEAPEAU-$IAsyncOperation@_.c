/*
 * XREFs of ?LaunchUriAsync@LaunchManager@ContentManagement@@UEAAJPEAUHSTRING__@@0PEAPEAU?$IAsyncOperation@_N@Foundation@Windows@@@Z @ 0x18000F6C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005D48 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z @ 0x180006CE0 (-GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z.c)
 *     ?ReportFeatureError@details@wil@@YAXJAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@@Z @ 0x18000CC28 (-ReportFeatureError@details@wil@@YAXJAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@@Z.c)
 *     ??R_lambda_202903ed4d45c4cc137b94f1aa6350ce_@@QEBAJXZ @ 0x18000F7E8 (--R_lambda_202903ed4d45c4cc137b94f1aa6350ce_@@QEBAJXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_GenericActionAndTrigger@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180017D50 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_GenericActionAndTrigger@@@details@wil@@QE.c)
 */

// Hidden C++ exception states: #wind=1
__int64 ContentManagement::LaunchManager::LaunchUriAsync(__int64 a1, ...)
{
  __int64 v1; // rdx
  __int64 v2; // r8
  __int64 v3; // r8
  __int64 v4; // rdx
  wil::details_abi *v5; // rcx
  __int64 v6; // rdx
  struct wil::details_abi::ThreadLocalData *ThreadLocalDataCache; // rax
  struct wil::details_abi::ThreadLocalData *v8; // rdi
  int v9; // esi
  int v10; // eax
  int v11; // ebx
  int v13[2]; // [rsp+28h] [rbp-48h] BYREF
  int v14; // [rsp+30h] [rbp-40h]
  int v15; // [rsp+34h] [rbp-3Ch]
  _QWORD v16[3]; // [rsp+38h] [rbp-38h] BYREF
  unsigned int v17[2]; // [rsp+50h] [rbp-20h] BYREF
  const char *v18; // [rsp+58h] [rbp-18h]
  __int64 v19; // [rsp+60h] [rbp-10h]
  __int16 v20; // [rsp+68h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]
  __int64 v22; // [rsp+A8h] [rbp+38h] BYREF
  va_list va; // [rsp+A8h] [rbp+38h]
  __int64 v24; // [rsp+B0h] [rbp+40h] BYREF
  va_list va1; // [rsp+B0h] [rbp+40h]
  _QWORD *v26; // [rsp+B8h] [rbp+48h] BYREF
  va_list va2; // [rsp+B8h] [rbp+48h]
  va_list va3; // [rsp+C0h] [rbp+50h] BYREF

  va_start(va3, a1);
  va_start(va2, a1);
  va_start(va1, a1);
  va_start(va, a1);
  v22 = va_arg(va1, _QWORD);
  v1 = v22;
  va_copy(va2, va1);
  v24 = va_arg(va2, _QWORD);
  v2 = v24;
  va_copy(va3, va2);
  v26 = va_arg(va3, _QWORD *);
  *v26 = 0LL;
  LOBYTE(v2) = 3;
  LOBYTE(v1) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_GenericActionAndTrigger>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_GenericActionAndTrigger>::GetImpl'::`2'::impl,
    v1,
    v2);
  va_copy((va_list)v16, va);
  va_copy((va_list)&v16[1], va1);
  va_copy((va_list)&v16[2], va2);
  *(_QWORD *)v17 = retaddr;
  v18 = "shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp";
  v19 = 0LL;
  v20 = 335;
  LOBYTE(v3) = 3;
  LOBYTE(v4) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_GenericActionAndTrigger>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_GenericActionAndTrigger>::GetImpl'::`2'::impl,
    v4,
    v3);
  LOBYTE(v5) = 1;
  ThreadLocalDataCache = wil::details_abi::GetThreadLocalDataCache(v5, v6);
  v8 = ThreadLocalDataCache;
  *(_QWORD *)v13 = ThreadLocalDataCache;
  v14 = 0;
  v9 = 0;
  v15 = 0;
  if ( ThreadLocalDataCache )
  {
    v15 = *((_DWORD *)ThreadLocalDataCache + 4);
    v14 = **((_DWORD **)ThreadLocalDataCache + 1);
    *((_DWORD *)ThreadLocalDataCache + 4) = v14;
    v9 = v15;
    v8 = *(struct wil::details_abi::ThreadLocalData **)v13;
  }
  v10 = _lambda_202903ed4d45c4cc137b94f1aa6350ce_::operator()(v16);
  v11 = v10;
  if ( v10 < 0 )
    wil::details::ReportFeatureError(
      (wil::details *)(unsigned int)v10,
      (__int64)v13,
      (struct wil::ThreadErrorContext *)0x79780D,
      (const struct wil::FailureInfo *)v17);
  if ( v8 )
    *((_DWORD *)v8 + 4) = v9;
  if ( v11 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x14F,
    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
    (const char *)(unsigned int)v11);
  return (unsigned int)v11;
}
