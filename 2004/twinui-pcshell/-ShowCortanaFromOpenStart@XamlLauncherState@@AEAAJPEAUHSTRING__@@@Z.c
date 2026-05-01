/*
 * XREFs of ?ShowCortanaFromOpenStart@XamlLauncherState@@AEAAJPEAUHSTRING__@@@Z @ 0x18004E564
 * Callers:
 *     ?OnCortanaTransitionRequested@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Z @ 0x18004E480 (-OnCortanaTransitionRequested@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@S.c)
 *     ?OnCortanaShown@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUICortanaShownEventArgs@3456@@Z @ 0x1800831E0 (-OnCortanaShown@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@Shell@Internal@.c)
 *     ?OnStartShown@XamlLauncherState@@QEAAJPEAUIStartExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Z @ 0x180087E50 (-OnStartShown@XamlLauncherState@@QEAAJPEAUIStartExperienceManager@Experience@Shell@Internal@Wind.c)
 *     ?Show@XamlLauncherState@@UEAAJPEAUHSTRING__@@@Z @ 0x1803369F0 (-Show@XamlLauncherState@@UEAAJPEAUHSTRING__@@@Z.c)
 *     ?Toggle@XamlLauncherState@@UEAAJPEAUHSTRING__@@@Z @ 0x1803372B0 (-Toggle@XamlLauncherState@@UEAAJPEAUHSTRING__@@@Z.c)
 * Callees:
 *     ?Set@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAUHSTRING__@@@Z @ 0x180011C60 (-Set@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAUHSTRING__@@@Z.c)
 *     ?ShowSearchOrCortana@XamlLauncherState@@AEAAJPEAUHSTRING__@@@Z @ 0x18004E6CC (-ShowSearchOrCortana@XamlLauncherState@@AEAAJPEAUHSTRING__@@@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_VisionReactive_OnScreen@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180053F78 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_VisionReactive_OnScreen@@@details@wil@@QE.c)
 *     ??$ShowCortanaFromOpenStart@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW4InternalState@XamlLauncherState@@AEAW412@@Z @ 0x1800604E4 (--$ShowCortanaFromOpenStart@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsStartVisible@XamlLauncherState@@UEAA_NXZ @ 0x1800859C0 (-IsStartVisible@XamlLauncherState@@UEAA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     CortanaHelpers::AllowCortanaAboveLock @ 0x180209BEC (CortanaHelpers--AllowCortanaAboveLock.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall XamlLauncherState::ShowCortanaFromOpenStart(XamlLauncherState *this, HSTRING a2)
{
  _DWORD *v4; // r15
  char v5; // r14
  int v6; // eax
  int v7; // ebx
  __int64 v9; // rdx
  int v10; // [rsp+20h] [rbp-28h] BYREF
  XamlLauncherState *v11; // [rsp+28h] [rbp-20h]
  char v12; // [rsp+30h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+30h]
  char v14; // [rsp+80h] [rbp+38h] BYREF
  HSTRING v15; // [rsp+88h] [rbp+40h] BYREF
  char v16; // [rsp+90h] [rbp+48h] BYREF
  char v17; // [rsp+98h] [rbp+50h] BYREF

  v15 = a2;
  v4 = (_DWORD *)((char *)this + 64);
  v10 = *((_DWORD *)this + 16);
  v11 = this;
  v5 = 1;
  v12 = 1;
  v14 = 0;
  v6 = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 10) + 120LL))(*((_QWORD *)this + 10), &v14);
  v7 = v6;
  if ( v6 < 0 )
  {
    v9 = 2011LL;
    goto LABEL_28;
  }
  if ( !*((_BYTE *)this + 976)
    && ((*(int (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 11) + 416LL))(*((_QWORD *)this + 11), &v17) < 0
     || !v17)
    || !(unsigned __int8)CortanaHelpers::AllowCortanaAboveLock()
    || !XamlLauncherState::IsStartVisible((XamlLauncherState *)((char *)this + 24)) )
  {
    v5 = 0;
  }
  WindowsGetStringRawBuffer(a2, 0LL);
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_VisionReactive_OnScreen>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_VisionReactive_OnScreen>::GetImpl'::`2'::impl,
    0LL);
  if ( v14 || v5 )
  {
    v7 = XamlLauncherState::ShowSearchOrCortana(this, a2);
    if ( v7 < 0 )
      goto LABEL_14;
    if ( v5 )
      goto LABEL_13;
  }
  else
  {
    v16 = 0;
    v6 = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 11) + 120LL))(*((_QWORD *)this + 11), &v16);
    v7 = v6;
    if ( v6 < 0 )
    {
      v9 = 2031LL;
      goto LABEL_28;
    }
    if ( !v16 )
    {
      *v4 = 14;
      v6 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 10) + 64LL))(*((_QWORD *)this + 10), 7LL);
      v7 = v6;
      if ( v6 >= 0 )
      {
        v7 = XamlLauncherState::ShowSearchOrCortana(this, a2);
        if ( v7 < 0 )
          goto LABEL_14;
        goto LABEL_12;
      }
      v9 = 2049LL;
LABEL_28:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v9,
        (unsigned int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
        (const char *)(unsigned int)v6,
        v10);
      goto LABEL_14;
    }
    if ( a2 )
    {
      v6 = Microsoft::WRL::Wrappers::HString::Set((HSTRING *)this + 125, &v15);
      v7 = v6;
      if ( v6 < 0 )
      {
        v9 = 2038LL;
        goto LABEL_28;
      }
    }
    *v4 = 12;
    v6 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 11) + 112LL))(*((_QWORD *)this + 11), 2LL);
    v7 = v6;
    if ( v6 < 0 )
    {
      v9 = 2041LL;
      goto LABEL_28;
    }
    v6 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 10) + 112LL))(*((_QWORD *)this + 10));
    v7 = v6;
    if ( v6 < 0 )
    {
      v9 = 2042LL;
      goto LABEL_28;
    }
  }
LABEL_12:
  v7 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 11) + 104LL))(*((_QWORD *)this + 11));
  if ( v7 >= 0 )
LABEL_13:
    v7 = 0;
LABEL_14:
  v12 = 0;
  StartWindowTelemetry::ShowCortanaFromOpenStart<enum XamlLauncherState::InternalState const &,enum XamlLauncherState::InternalState &>(
    &v10,
    v4);
  return (unsigned int)v7;
}
