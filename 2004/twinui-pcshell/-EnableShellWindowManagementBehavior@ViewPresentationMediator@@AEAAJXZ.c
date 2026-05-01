/*
 * XREFs of ?EnableShellWindowManagementBehavior@ViewPresentationMediator@@AEAAJXZ @ 0x1802E25F8
 * Callers:
 *     ?OnChannelSever@ViewPresentationMediator@@UEAAXXZ @ 0x1802E2AD0 (-OnChannelSever@ViewPresentationMediator@@UEAAXXZ.c)
 *     ?SetShellWindowManagementScenario@ViewPresentationMediator@@UEAAJW4WINDOW_MANAGEMENT_BEHAVIOR_SCENARIO@@0@Z @ 0x1802E32D0 (-SetShellWindowManagementScenario@ViewPresentationMediator@@UEAAJW4WINDOW_MANAGEMENT_BEHAVIOR_SC.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068BA4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_EnableControlOfShowWindowBehavior@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180150208 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_EnableControlOfShowWindowBehavior@@@detai.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_VAILInitialPositioning@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1802E3160 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_VAILInitialPositioning@@@details@wil@@QEA.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ViewPresentationMediator::EnableShellWindowManagementBehavior(
        ViewPresentationMediator *this,
        __int64 a2,
        __int64 a3)
{
  int v4; // ebx
  int v5; // edx
  int v6; // ecx
  unsigned int v7; // esi
  int v8; // ebx
  int v9; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  unsigned __int64 v12; // [rsp+30h] [rbp+8h]

  v4 = *((_DWORD *)this + 76);
  if ( (v4 & 1) != 0 )
  {
    v5 = 191;
  }
  else if ( (v4 & 4) != 0 )
  {
    v5 = 17;
  }
  else
  {
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_EnableControlOfShowWindowBehavior>::ReportUsage(
      &`wil::Feature<__WilFeatureTraits_Feature_EnableControlOfShowWindowBehavior>::GetImpl'::`2'::impl,
      1u,
      a3);
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_VAILInitialPositioning>::ReportUsage(
      &`wil::Feature<__WilFeatureTraits_Feature_VAILInitialPositioning>::GetImpl'::`2'::impl,
      0LL);
    v5 = 65;
  }
  v6 = v5 | 0x51;
  if ( (v4 & 2) == 0 )
    v6 = v5;
  v7 = v6 | 0x10;
  if ( (v4 & 8) == 0 )
    v7 = v6;
  LODWORD(v12) = 255;
  HIDWORD(v12) = v7;
  v8 = (*(__int64 (__fastcall **)(_QWORD, __int64, unsigned __int64))(**((_QWORD **)this + 24) + 24LL))(
         *((_QWORD *)this + 24),
         255LL,
         HIDWORD(v12));
  if ( v8 == -2147019873 )
  {
    v9 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 25) + 128LL))(*((_QWORD *)this + 25));
    v8 = v9;
    if ( v9 >= 0 )
      v8 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(**((_QWORD **)this + 24) + 24LL))(
             *((_QWORD *)this + 24),
             255LL,
             v7);
    else
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x11C,
        (__int64)"pcshell\\twinui\\viewpresentationmediator\\lib\\viewpresentationmediator.cpp",
        (const char *)(unsigned int)v9);
  }
  if ( v8 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x121,
      (__int64)"pcshell\\twinui\\viewpresentationmediator\\lib\\viewpresentationmediator.cpp",
      (const char *)(unsigned int)v8);
  return (unsigned int)v8;
}
