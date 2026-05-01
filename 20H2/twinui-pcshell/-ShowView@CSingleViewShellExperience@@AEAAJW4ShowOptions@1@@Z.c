/*
 * XREFs of ?ShowView@CSingleViewShellExperience@@AEAAJW4ShowOptions@1@@Z @ 0x180046090
 * Callers:
 *     ?ShowViewAsync@CSingleViewShellExperience@@AEAAJW4ShowOptions@1@@Z @ 0x180044B20 (-ShowViewAsync@CSingleViewShellExperience@@AEAAJW4ShowOptions@1@@Z.c)
 *     ?OnClientWindowReadyForPresentationChanged@CSingleViewShellExperience@@AEAAJPEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@3456@@Z @ 0x180045500 (-OnClientWindowReadyForPresentationChanged@CSingleViewShellExperience@@AEAAJPEAUIClientWindowSta.c)
 * Callees:
 *     ?NavigateView@NavigationLevelOverrideHelper@ShellExperienceHelpers@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4NavigationLevel@4567@@Z @ 0x1800462C0 (-NavigateView@NavigationLevelOverrideHelper@ShellExperienceHelpers@@AEAAJPEAUIViewWrapper@ViewMa.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062CC4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$SetForegroundFailed@AEAJPEBGAEAW4ExperienceViewState@CSingleViewShellExperience@@AEAW4PendingViewAction@2@AEAW4PendingViewActionShowFlags@2@@SingleViewExperienceTelemetry@@SAXAEAJ$$QEAPEBGAEAW4ExperienceViewState@CSingleViewShellExperience@@AEAW4PendingViewAction@2@AEAW4PendingViewActionShowFlags@2@@Z @ 0x1800EF054 (--$SetForegroundFailed@AEAJPEBGAEAW4ExperienceViewState@CSingleViewShellExperience@@AEAW4Pending.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ?GetRawBuffer@HString@Wrappers@WRL@Microsoft@@QEBAPEBGPEAI@Z @ 0x180137128 (-GetRawBuffer@HString@Wrappers@WRL@Microsoft@@QEBAPEBGPEAI@Z.c)
 *     wil::details::ScopeExitFn__lambda_9ae7f4b71f8554f9e67f674bf49c4d79___::_ScopeExitFn__lambda_9ae7f4b71f8554f9e67f674bf49c4d79___ @ 0x180137160 (wil--details--ScopeExitFn__lambda_9ae7f4b71f8554f9e67f674bf49c4d79___--_ScopeExitFn__lambda_9ae7.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CSingleViewShellExperience::ShowView(__int64 a1, char a2)
{
  int v4; // esi
  int v5; // edi
  int v6; // eax
  int v7; // edi
  const WCHAR *RawBuffer; // rax
  int v9; // eax
  int bIgnoreCase; // [rsp+20h] [rbp-48h]
  int bIgnoreCasea; // [rsp+20h] [rbp-48h]
  __int64 v13; // [rsp+30h] [rbp-38h] BYREF
  char v14; // [rsp+38h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  const unsigned __int16 *v16; // [rsp+70h] [rbp+8h] BYREF
  int v17; // [rsp+78h] [rbp+10h] BYREF

  v13 = a1;
  v14 = 1;
  v4 = a2 & 2;
  if ( (a2 & 2) == 0 )
  {
    v5 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 88) + 32LL))(*(_QWORD *)(a1 + 88), a1);
    if ( v5 < 0 )
      goto LABEL_22;
  }
  *(_DWORD *)(a1 + 40) = 2;
  *(_DWORD *)(a1 + 64) = 0;
  *(_DWORD *)(a1 + 68) = 0;
  if ( *(_DWORD *)(a1 + 72) )
  {
    *(_DWORD *)(a1 + 72) = 4;
    goto LABEL_7;
  }
  v6 = ShellExperienceHelpers::NavigationLevelOverrideHelper::NavigateView(a1 + 72, *(_QWORD *)(a1 + 24), 4LL);
  v7 = v6;
  if ( v6 >= 0 )
  {
LABEL_7:
    v7 = 0;
    goto LABEL_8;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x80,
    (unsigned int)"internal\\Shell\\private\\inc\\NavigationLevelOverrideHelper.h",
    (const char *)(unsigned int)v6,
    bIgnoreCase);
LABEL_8:
  if ( v7 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x38C,
      (unsigned int)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
      (const char *)(unsigned int)v7,
      bIgnoreCase);
  if ( (a2 & 1) == 0 )
  {
    v17 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 80) + 72LL))(*(_QWORD *)(a1 + 80));
    if ( v17 < 0 && (a2 & 4) != 0 )
    {
      RawBuffer = Microsoft::WRL::Wrappers::HString::GetRawBuffer((Microsoft::WRL::Wrappers::HString *)(a1 + 16), 0LL);
      if ( CompareStringOrdinal(RawBuffer, -1, L"Windows.Internal.ShellExperience.ShellFeeds", -1, 1) == 2 )
      {
        v16 = Microsoft::WRL::Wrappers::HString::GetRawBuffer((Microsoft::WRL::Wrappers::HString *)(a1 + 16), 0LL);
        SingleViewExperienceTelemetry::SetForegroundFailed<long &,unsigned short const *,enum CSingleViewShellExperience::ExperienceViewState &,enum CSingleViewShellExperience::PendingViewAction &,enum CSingleViewShellExperience::PendingViewActionShowFlags &>(
          (unsigned int)&v17,
          (unsigned int)&v16,
          a1 + 40,
          a1 + 64,
          a1 + 68);
      }
      v9 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 88) + 72LL))(*(_QWORD *)(a1 + 88), a1);
      if ( v9 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x399,
          (unsigned int)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
          (const char *)(unsigned int)v9,
          bIgnoreCasea);
      goto LABEL_21;
    }
  }
  if ( v4 )
  {
LABEL_20:
    (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 88) + 56LL))(*(_QWORD *)(a1 + 88), a1);
LABEL_21:
    v5 = 0;
    goto LABEL_22;
  }
  v5 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 80) + 40LL))(*(_QWORD *)(a1 + 80));
  if ( v5 >= 0 )
  {
    (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 88) + 40LL))(*(_QWORD *)(a1 + 88), a1);
    goto LABEL_20;
  }
LABEL_22:
  wil::details::ScopeExitFn__lambda_9ae7f4b71f8554f9e67f674bf49c4d79___::_ScopeExitFn__lambda_9ae7f4b71f8554f9e67f674bf49c4d79___(&v13);
  return (unsigned int)v5;
}
