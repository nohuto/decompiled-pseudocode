/*
 * XREFs of ?ActivateApp@CDelayedTileActivation@@UEAAJPEAUIImmersiveMonitor@@PEAUISplashScreen@@@Z @ 0x1803CE110
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ??$Make@VDelayedTileActivationCallSite@@PEAUIPropertySet@Collections@Foundation@Windows@@AEAPEAUHWND__@@AEAW4IAM_DESKTOP_SWITCH_OPTION@@AEAV?$optional@_N@std@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VDelayedTileActivationCallSite@@@12@$$QEAPEAUIPropertySet@Collections@Foundation@Windows@@AEAPEAUHWND__@@AEAW4IAM_DESKTOP_SWITCH_OPTION@@AEAV?$optional@_N@std@@@Z @ 0x1803CD700 (--$Make@VDelayedTileActivationCallSite@@PEAUIPropertySet@Collections@Foundation@Windows@@AEAPEAU.c)
 *     ?IsPropertySetEmpty@ViewSizePreferenceHelpers@@YA_NPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1803CED40 (-IsPropertySetEmpty@ViewSizePreferenceHelpers@@YA_NPEAUIPropertySet@Collections@Foundation@Windo.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCopyToViewValueSetBase@@UIOleWindow@@UIShouldSwitchToDesktop@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1803CF110 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCop_ea_1803CF110.c)
 *     ?SetViewValueSet@ViewSizePreferenceHelpers@@YAJPEAUIUnknown@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1803CF688 (-SetViewValueSet@ViewSizePreferenceHelpers@@YAJPEAUIUnknown@@PEAUIPropertySet@Collections@Founda.c)
 *     ?ActivateApplicationForLaunchWithManager@@YAJPEAUIApplicationActivationManagerPriv@@PEBG11W4ACTIVATEOPTIONSINTERNAL@@PEAUISplashScreen@@PEAUHMONITOR__@@PEAK@Z @ 0x18047218C (-ActivateApplicationForLaunchWithManager@@YAJPEAUIApplicationActivationManagerPriv@@PEBG11W4ACTI.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CDelayedTileActivation::ActivateApp(
        CDelayedTileActivation *this,
        struct IImmersiveMonitor *a2,
        struct ISplashScreen *a3)
{
  int v5; // eax
  unsigned int v6; // ebx
  HRESULT Instance; // eax
  struct Windows::Foundation::Collections::IPropertySet *v9; // rdx
  struct Windows::Foundation::Collections::IPropertySet *v10; // r8
  unsigned int v11; // edi
  __int64 v12; // rdx
  IUnknown *v13; // rbx
  __int64 v14; // r9
  HRESULT v15; // eax
  __int64 v16; // [rsp+40h] [rbp-20h] BYREF
  __int64 v17; // [rsp+48h] [rbp-18h] BYREF
  IUnknown *v18; // [rsp+50h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]
  char v20; // [rsp+88h] [rbp+28h] BYREF
  IUnknown *punk; // [rsp+98h] [rbp+38h] BYREF

  v16 = 0LL;
  if ( a2 )
  {
    v5 = (*(__int64 (__fastcall **)(struct IImmersiveMonitor *, __int64 *))(*(_QWORD *)a2 + 40LL))(a2, &v16);
    v6 = v5;
    if ( v5 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x6E,
        (__int64)"pcshell\\twinui\\apppositioner\\lib\\delayedappactivation.cpp",
        (const char *)(unsigned int)v5);
      return v6;
    }
  }
  punk = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&punk);
  Instance = CoCreateInstance(
               &CLSID_ApplicationActivationManager,
               0LL,
               1u,
               &GUID_54e4c428_d1d4_47d4_ade6_46c829114a7d,
               (LPVOID *)&punk);
  v11 = Instance;
  if ( Instance < 0 )
  {
    v12 = 114LL;
LABEL_18:
    v14 = (unsigned int)Instance;
    goto LABEL_19;
  }
  if ( !*((_QWORD *)this + 17)
    && ViewSizePreferenceHelpers::IsPropertySetEmpty(*((ViewSizePreferenceHelpers **)this + 16), v9)
    && !*((_BYTE *)this + 149) )
  {
LABEL_16:
    Instance = ActivateApplicationForLaunchWithManager(
                 punk,
                 *((_QWORD *)this + 7),
                 *((_QWORD *)this + 10),
                 *((_QWORD *)this + 13),
                 *((_DWORD *)this + 12),
                 a3,
                 v16,
                 &v20);
    v11 = Instance;
    if ( Instance >= 0 )
    {
      v11 = 0;
      goto LABEL_21;
    }
    v12 = 129LL;
    goto LABEL_18;
  }
  Instance = ViewSizePreferenceHelpers::SetViewValueSet(
               (ViewSizePreferenceHelpers *)punk,
               *((struct IUnknown **)this + 16),
               v10);
  v11 = Instance;
  if ( Instance < 0 )
  {
    v12 = 119LL;
    goto LABEL_18;
  }
  v17 = *((_QWORD *)this + 16);
  Microsoft::WRL::Details::Make<DelayedTileActivationCallSite,Windows::Foundation::Collections::IPropertySet *,HWND__ * &,enum IAM_DESKTOP_SWITCH_OPTION &,std::optional<bool> &>(
    (__int64 *)&v18,
    &v17,
    (_QWORD *)this + 17,
    (unsigned int *)this + 36,
    (__int16 *)this + 74);
  v13 = v18;
  if ( !v18 )
  {
    v11 = -2147024882;
    v14 = 2147942414LL;
    v12 = 123LL;
LABEL_19:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (__int64)"pcshell\\twinui\\apppositioner\\lib\\delayedappactivation.cpp",
      (const char *)v14);
    goto LABEL_21;
  }
  v15 = IUnknown_SetSite(punk, v18 + 1);
  v11 = v15;
  if ( v15 >= 0 )
  {
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CopyToViewValueSetBase,IOleWindow,IShouldSwitchToDesktop>::Release(v13);
    goto LABEL_16;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x7C,
    (__int64)"pcshell\\twinui\\apppositioner\\lib\\delayedappactivation.cpp",
    (const char *)(unsigned int)v15);
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CopyToViewValueSetBase,IOleWindow,IShouldSwitchToDesktop>::Release(v13);
LABEL_21:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&punk);
  return v11;
}
