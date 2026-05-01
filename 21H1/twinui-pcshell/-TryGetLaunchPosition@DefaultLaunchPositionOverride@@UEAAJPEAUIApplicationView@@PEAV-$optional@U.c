/*
 * XREFs of ?TryGetLaunchPosition@DefaultLaunchPositionOverride@@UEAAJPEAUIApplicationView@@PEAV?$optional@UtagRECT@@@std@@@Z @ 0x180066070
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_VoiceAssistantPositioner@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18002BA04 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_VoiceAssistantPositioner@@@details@wil@@Q.c)
 *     ?IsCortanaApp@DefaultLaunchPositionOverride@@AEAA_NPEAUIApplicationView@@@Z @ 0x1800660E0 (-IsCortanaApp@DefaultLaunchPositionOverride@@AEAA_NPEAUIApplicationView@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall DefaultLaunchPositionOverride::TryGetLaunchPosition(
        __int64 a1,
        struct IApplicationView *a2,
        __int64 a3)
{
  DefaultLaunchPositionOverride *v6; // rcx
  void (__fastcall *v8)(__int64, GUID *, IUnknown **); // rbx
  HRESULT v9; // ebx
  unsigned __int64 v10; // r9
  __int64 v11; // rdx
  int v12; // eax
  bool v13; // zf
  IUnknown *punk; // [rsp+20h] [rbp-30h] BYREF
  void *ppvOut; // [rsp+28h] [rbp-28h] BYREF
  int v16; // [rsp+30h] [rbp-20h]
  __int128 v17; // [rsp+38h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]

  v16 = 0;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_VoiceAssistantPositioner>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_VoiceAssistantPositioner>::GetImpl'::`2'::impl,
    1u);
  if ( !DefaultLaunchPositionOverride::IsCortanaApp(v6, a2) )
    return 2147943568LL;
  ppvOut = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&ppvOut);
  punk = 0LL;
  v16 = 2;
  v8 = *(void (__fastcall **)(__int64, GUID *, IUnknown **))(*(_QWORD *)(a1 - 40) + 32LL);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&punk);
  v8(a1 - 40, &GUID_00000000_0000_0000_c000_000000000046, &punk);
  v9 = IUnknown_QueryService(
         punk,
         &GUID_e3900af7_62d2_42e3_a4c8_70a72baad63f,
         &GUID_e3900af7_62d2_42e3_a4c8_70a72baad63f,
         &ppvOut);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&punk);
  if ( v9 >= 0 )
  {
    v12 = (*(__int64 (__fastcall **)(void *, __int128 *))(*(_QWORD *)ppvOut + 80LL))(ppvOut, &v17);
    v9 = v12;
    if ( v12 >= 0 )
    {
      v13 = *(_BYTE *)(a3 + 16) == 0;
      *(_OWORD *)a3 = v17;
      if ( v13 )
        *(_BYTE *)(a3 + 16) = 1;
      v9 = 0;
      goto LABEL_11;
    }
    v10 = (unsigned int)v12;
    v11 = 44LL;
  }
  else
  {
    v10 = (unsigned int)v9;
    v11 = 42LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v11,
    (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\defaultlaunchpositionoverride.cpp",
    (const char *)v10,
    (int)punk);
LABEL_11:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&ppvOut);
  return (unsigned int)v9;
}
