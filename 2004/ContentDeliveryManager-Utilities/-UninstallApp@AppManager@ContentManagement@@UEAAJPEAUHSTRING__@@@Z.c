/*
 * XREFs of ?UninstallApp@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@@Z @ 0x18005A900
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005D48 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z @ 0x180006CE0 (-GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z.c)
 *     ?ReportFeatureError@details@wil@@YAXJAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@@Z @ 0x18000CC28 (-ReportFeatureError@details@wil@@YAXJAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_GenericActionAndTrigger@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180017D50 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_GenericActionAndTrigger@@@details@wil@@QE.c)
 *     ??R_lambda_7c6cd17ad595e55932e72c091bc48d49_@@QEBAJXZ @ 0x18005AA0C (--R_lambda_7c6cd17ad595e55932e72c091bc48d49_@@QEBAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ContentManagement::AppManager::UninstallApp(ContentManagement::AppManager *this, HSTRING a2)
{
  wil::details_abi *v2; // rcx
  __int64 v3; // rdx
  struct wil::details_abi::ThreadLocalData *ThreadLocalDataCache; // rax
  struct wil::details_abi::ThreadLocalData *v5; // rdi
  int v6; // esi
  int v7; // eax
  int v8; // ebx
  int v10[2]; // [rsp+28h] [rbp-38h] BYREF
  int v11; // [rsp+30h] [rbp-30h]
  int v12; // [rsp+34h] [rbp-2Ch]
  unsigned int v13[2]; // [rsp+38h] [rbp-28h] BYREF
  const char *v14; // [rsp+40h] [rbp-20h]
  __int64 v15; // [rsp+48h] [rbp-18h]
  __int16 v16; // [rsp+50h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]
  HSTRING v18; // [rsp+98h] [rbp+38h] BYREF
  HSTRING *v19; // [rsp+A0h] [rbp+40h] BYREF

  v18 = a2;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_GenericActionAndTrigger>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_GenericActionAndTrigger>::GetImpl'::`2'::impl,
    1u,
    3u);
  v19 = &v18;
  *(_QWORD *)v13 = retaddr;
  v14 = "shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp";
  v15 = 0LL;
  v16 = 268;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_GenericActionAndTrigger>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_GenericActionAndTrigger>::GetImpl'::`2'::impl,
    1u,
    3u);
  LOBYTE(v2) = 1;
  ThreadLocalDataCache = wil::details_abi::GetThreadLocalDataCache(v2, v3);
  v5 = ThreadLocalDataCache;
  *(_QWORD *)v10 = ThreadLocalDataCache;
  v11 = 0;
  v6 = 0;
  v12 = 0;
  if ( ThreadLocalDataCache )
  {
    v12 = *((_DWORD *)ThreadLocalDataCache + 4);
    v11 = **((_DWORD **)ThreadLocalDataCache + 1);
    *((_DWORD *)ThreadLocalDataCache + 4) = v11;
    v6 = v12;
    v5 = *(struct wil::details_abi::ThreadLocalData **)v10;
  }
  v7 = _lambda_7c6cd17ad595e55932e72c091bc48d49_::operator()(&v19);
  v8 = v7;
  if ( v7 < 0 )
    wil::details::ReportFeatureError(
      (wil::details *)(unsigned int)v7,
      (__int64)v10,
      (struct wil::ThreadErrorContext *)0x79780D,
      (const struct wil::FailureInfo *)v13);
  if ( v5 )
    *((_DWORD *)v5 + 4) = v6;
  if ( v8 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x10C,
    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
    (const char *)(unsigned int)v8);
  return (unsigned int)v8;
}
