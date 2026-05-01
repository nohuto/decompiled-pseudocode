/*
 * XREFs of ?Start@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAAJXZ @ 0x1802396A0
 * Callers:
 *     <none>
 * Callees:
 *     ??0ThreadErrorContext@wil@@QEAA@XZ @ 0x18003D9F4 (--0ThreadErrorContext@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ?ReportFeatureError@details@wil@@YAXJAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@@Z @ 0x180211AD0 (-ReportFeatureError@details@wil@@YAXJAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@@Z.c)
 *     _lambda_1438a9e78e3be174fbe1552ad71f9f4c_::operator() @ 0x180238524 (_lambda_1438a9e78e3be174fbe1552ad71f9f4c_--operator().c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_WindowSnapSignalsForActivities@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18023940C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_WindowSnapSignalsForActivities@@@details@.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener::Start(
        Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener *this)
{
  HRESULT Instance; // eax
  int v3; // ebx
  __int64 v4; // rdx
  struct DiagnosticsInfo v5; // rbx
  __int64 (__fastcall *v6)(struct DiagnosticsInfo, GUID *, GUID *, char *); // rdi
  __int64 v7; // r8
  bool v8; // dl
  int v9; // eax
  unsigned __int64 v10; // r9
  __int64 v12; // [rsp+30h] [rbp-40h] BYREF
  int v13; // [rsp+3Ch] [rbp-34h]
  _QWORD v14[2]; // [rsp+40h] [rbp-30h] BYREF
  unsigned int v15[2]; // [rsp+50h] [rbp-20h] BYREF
  const char *v16; // [rsp+58h] [rbp-18h]
  __int64 v17; // [rsp+60h] [rbp-10h]
  __int16 v18; // [rsp+68h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]
  struct DiagnosticsInfo ppv; // [rsp+98h] [rbp+28h] BYREF

  ppv = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppv);
  Instance = CoCreateInstance(
               &CLSID_ImmersiveShell,
               0LL,
               4u,
               &GUID_6d5140c1_7436_11ce_8034_00aa006009fa,
               (LPVOID *)&ppv);
  v3 = Instance;
  if ( Instance < 0 )
  {
    v4 = 48LL;
LABEL_15:
    v10 = (unsigned int)Instance;
    goto LABEL_16;
  }
  v5 = ppv;
  v6 = *(__int64 (__fastcall **)(struct DiagnosticsInfo, GUID *, GUID *, char *))(**(_QWORD **)&ppv + 24LL);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 12);
  Instance = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))v6)(
               v5,
               &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5,
               &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5,
               (char *)this + 96);
  v3 = Instance;
  if ( Instance < 0 )
  {
    v4 = 49LL;
    goto LABEL_15;
  }
  Instance = (*(__int64 (__fastcall **)(_QWORD, char *, char *))(**((_QWORD **)this + 12) + 96LL))(
               *((_QWORD *)this + 12),
               (char *)this + 16,
               (char *)this + 104);
  v3 = Instance;
  if ( Instance < 0 )
  {
    v4 = 51LL;
    goto LABEL_15;
  }
  v14[0] = &ppv;
  v14[1] = this;
  *(_QWORD *)v15 = retaddr;
  v16 = "pcshell\\twinui\\taskflowbroker\\lib\\appviewlistener.cpp";
  v17 = 0LL;
  v18 = 53;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_WindowSnapSignalsForActivities>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_WindowSnapSignalsForActivities>::GetImpl'::`2'::impl,
    1u,
    v7);
  wil::ThreadErrorContext::ThreadErrorContext((wil::ThreadErrorContext *)&v12, v8);
  v9 = lambda_1438a9e78e3be174fbe1552ad71f9f4c_::operator()((__int64)v14);
  v3 = v9;
  if ( v9 < 0 )
    wil::details::ReportFeatureError(
      (wil::details *)(unsigned int)v9,
      (wil::ThreadErrorContext *)&v12,
      (struct wil::ThreadErrorContext *)0x119D464,
      (__int64)v15);
  if ( v12 )
    *(_DWORD *)(v12 + 16) = v13;
  if ( v3 >= 0 )
  {
    Instance = (*(__int64 (__fastcall **)(_QWORD, Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener *))(**((_QWORD **)this + 11) + 48LL))(
                 *((_QWORD *)this + 11),
                 this);
    v3 = Instance;
    if ( Instance >= 0 )
    {
      v3 = 0;
      goto LABEL_18;
    }
    v4 = 67LL;
    goto LABEL_15;
  }
  v10 = (unsigned int)v3;
  v4 = 65LL;
LABEL_16:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v4,
    (__int64)"pcshell\\twinui\\taskflowbroker\\lib\\appviewlistener.cpp",
    (const char *)v10);
LABEL_18:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppv);
  return (unsigned int)v3;
}
