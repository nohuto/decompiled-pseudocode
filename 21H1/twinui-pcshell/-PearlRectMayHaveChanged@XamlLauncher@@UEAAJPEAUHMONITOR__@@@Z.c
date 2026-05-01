/*
 * XREFs of ?PearlRectMayHaveChanged@XamlLauncher@@UEAAJPEAUHMONITOR__@@@Z @ 0x18030BFB0
 * Callers:
 *     <none>
 * Callees:
 *     ?QueryService@XamlLauncher@@UEAAJAEBU_GUID@@0PEAPEAX@Z @ 0x180019080 (-QueryService@XamlLauncher@@UEAAJAEBU_GUID@@0PEAPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_UseNewSearchAndCortanaApps@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180096310 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_UseNewSearchAndCortanaApps@@@details@wil@.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?GetCortanaVisibleMonitor@XamlLauncher@@UEAAJPEAPEAUHMONITOR__@@@Z @ 0x18030A5E0 (-GetCortanaVisibleMonitor@XamlLauncher@@UEAAJPEAPEAUHMONITOR__@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall XamlLauncher::PearlRectMayHaveChanged(XamlLauncher *this, HMONITOR a2)
{
  __int64 v4; // rcx
  __int64 v6; // r8
  int CortanaVisibleMonitor; // ebx
  __int64 v8; // rdx
  HRESULT Service; // eax
  __int64 v10; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  HMONITOR v12; // [rsp+30h] [rbp+8h] BYREF

  v4 = *((_QWORD *)this + 30);
  if ( !v4 )
    return 2147943568LL;
  if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v4 + 112LL))(v4) )
    goto LABEL_10;
  CortanaVisibleMonitor = XamlLauncher::GetCortanaVisibleMonitor((XamlLauncher *)((char *)this + 32), &v12);
  if ( CortanaVisibleMonitor >= 0 )
  {
    if ( a2 == v12 )
    {
      CortanaVisibleMonitor = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 12) + 136LL))(*((_QWORD *)this + 12));
      if ( CortanaVisibleMonitor < 0 )
      {
        v8 = 294LL;
        goto LABEL_6;
      }
    }
LABEL_10:
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_UseNewSearchAndCortanaApps>::ReportUsage(
      `wil::Feature<__WilFeatureTraits_Feature_UseNewSearchAndCortanaApps>::GetImpl'::`2'::impl,
      1u,
      v6);
    v12 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v12);
    Service = XamlLauncher::QueryService(
                (XamlLauncher *)((char *)this + 16),
                &GUID_749f2714_937d_445e_9d22_666f49e7ff32,
                &GUID_749f2714_937d_445e_9d22_666f49e7ff32,
                (void **)&v12);
    CortanaVisibleMonitor = Service;
    if ( Service >= 0 )
    {
      Service = (*(__int64 (__fastcall **)(HMONITOR, HMONITOR))(*(_QWORD *)v12 + 40LL))(v12, a2);
      CortanaVisibleMonitor = Service;
      if ( Service >= 0 )
      {
        CortanaVisibleMonitor = 0;
        goto LABEL_16;
      }
      v10 = 302LL;
    }
    else
    {
      v10 = 301LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
      (const char *)(unsigned int)Service);
LABEL_16:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v12);
    return (unsigned int)CortanaVisibleMonitor;
  }
  v8 = 291LL;
LABEL_6:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
    (const char *)(unsigned int)CortanaVisibleMonitor);
  return (unsigned int)CortanaVisibleMonitor;
}
