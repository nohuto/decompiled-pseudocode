/*
 * XREFs of ?ShowWithStart@CortanaDesktopExperienceView@@UEAAJE@Z @ 0x180211160
 * Callers:
 *     <none>
 * Callees:
 *     ?Stop@?$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800113A4 (-Stop@-$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorTag_Param0IsPro.c)
 *     ??0?$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180013E6C (--0-$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorTag_Param0IsProvid.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x1800275B0 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ??1CortanaExperienceManager_ShowWithStart@CortanaProactiveTelemetry@@QEAA@XZ @ 0x180060D28 (--1CortanaExperienceManager_ShowWithStart@CortanaProactiveTelemetry@@QEAA@XZ.c)
 *     ?StartActivity@CortanaExperienceManager_ShowWithStart@CortanaProactiveTelemetry@@QEAAXXZ @ 0x180060D54 (-StartActivity@CortanaExperienceManager_ShowWithStart@CortanaProactiveTelemetry@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18008CB20 (__security_check_cookie.c)
 *     ?GetActivateArgs@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAPEAU2@@Z @ 0x18020B318 (-GetActivateArgs@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAPEAU2@@Z.c)
 *     ?PositionAlongsideStart@CortanaDesktopExperienceView@@AEAAJXZ @ 0x18020F360 (-PositionAlongsideStart@CortanaDesktopExperienceView@@AEAAJXZ.c)
 *     ?ShowInternal@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@W4ShellExperienceViewFocusOptions@Experience@Shell@Internal@Windows@@W4CortanaAppTransitionType@4567@@Z @ 0x180211064 (-ShowInternal@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@W4ShellExperienceViewFocusOption.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CortanaDesktopExperienceView::ShowWithStart(CortanaDesktopExperienceView *this, char a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  int ActivateArgs; // eax
  __int64 v7; // rdx
  WINBOOL v8; // edx
  HSTRING string; // [rsp+20h] [rbp-E0h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+28h] [rbp-D8h] BYREF
  HSTRING v12; // [rsp+40h] [rbp-C0h]
  _QWORD v13[40]; // [rsp+50h] [rbp-B0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1B8h] [rbp+B8h]

  wil::ActivityBase<CortanaProactiveLogging,1,0,4,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CortanaProactiveLogging,1,0,4,16777216,_TlgReflectorTag_Param0IsProviderType>(
    (__int64)v13,
    (__int64)"CortanaExperienceManager_ShowWithStart");
  v13[0] = &CortanaProactiveTelemetry::CortanaExperienceManager_ShowWithStart::`vftable';
  CortanaProactiveTelemetry::CortanaExperienceManager_ShowWithStart::StartActivity((CortanaProactiveTelemetry::CortanaExperienceManager_ShowWithStart *)v13);
  *((_BYTE *)this + 218) = 0;
  v4 = CortanaDesktopExperienceView::PositionAlongsideStart((CortanaDesktopExperienceView *)((char *)this - 24));
  v5 = v4;
  if ( v4 >= 0 )
  {
    WindowsDeleteString(0LL);
    string = 0LL;
    v12 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"StartMode=QFSearchBox&QuerySource=StartButton&Positioner=desktop",
      0x41u,
      0x40u);
    ActivateArgs = CortanaDesktopExperienceView::GetActivateArgs(
                     (CortanaDesktopExperienceView *)((char *)this - 24),
                     v12,
                     &string);
    v5 = ActivateArgs;
    if ( ActivateArgs >= 0 )
    {
      *((_BYTE *)this + 215) = 1;
      ActivateArgs = CortanaDesktopExperienceView::ShowInternal((__int64)this - 24, (__int64)string, a2 != 0, 0);
      v5 = ActivateArgs;
      if ( ActivateArgs >= 0 )
      {
        *((_BYTE *)this + 220) = 1;
        wil::ActivityBase<CortanaProactiveLogging,1,0,4,16777216,_TlgReflectorTag_Param0IsProviderType>::Stop(
          (__int64)v13,
          v8);
        v5 = 0;
        goto LABEL_9;
      }
      v7 = 959LL;
    }
    else
    {
      v7 = 952LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)(unsigned int)ActivateArgs);
LABEL_9:
    WindowsDeleteString(string);
    string = 0LL;
    goto LABEL_10;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x3B5,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
    (const char *)(unsigned int)v4);
LABEL_10:
  CortanaProactiveTelemetry::CortanaExperienceManager_ShowWithStart::~CortanaExperienceManager_ShowWithStart((CortanaProactiveTelemetry::CortanaExperienceManager_ShowWithStart *)v13);
  return v5;
}
