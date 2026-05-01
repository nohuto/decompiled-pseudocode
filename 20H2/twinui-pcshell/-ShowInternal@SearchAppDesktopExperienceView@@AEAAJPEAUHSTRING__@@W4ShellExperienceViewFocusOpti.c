/*
 * XREFs of ?ShowInternal@SearchAppDesktopExperienceView@@AEAAJPEAUHSTRING__@@W4ShellExperienceViewFocusOptions@Experience@Shell@Internal@Windows@@W4CortanaAppTransitionType@4567@@Z @ 0x18005EF44
 * Callers:
 *     ?ShowWithStart@SearchAppDesktopExperienceView@@UEAAJE@Z @ 0x180060BC0 (-ShowWithStart@SearchAppDesktopExperienceView@@UEAAJE@Z.c)
 *     ?Show@SearchAppDesktopExperienceView@@UEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experience@Shell@Internal@Windows@@W4ShellExperienceViewFocusOptions@4567@@Z @ 0x1800A4C70 (-Show@SearchAppDesktopExperienceView@@UEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experience@.c)
 * Callees:
 *     ?Relaunch@SearchAppDesktopExperienceView@@AEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experience@Shell@Internal@Windows@@@Z @ 0x18005F008 (-Relaunch@SearchAppDesktopExperienceView@@AEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experie.c)
 *     ??$CortanaExperienceManager_CortanaTabletMode@AEA_N@CortanaProactiveTelemetry@@SAXAEA_N@Z @ 0x18005F038 (--$CortanaExperienceManager_CortanaTabletMode@AEA_N@CortanaProactiveTelemetry@@SAXAEA_N@Z.c)
 *     ??$CortanaExperienceManager_CortanaTaskbarState@K@CortanaProactiveTelemetry@@SAX$$QEAK@Z @ 0x18005F0CC (--$CortanaExperienceManager_CortanaTaskbarState@K@CortanaProactiveTelemetry@@SAX$$QEAK@Z.c)
 *     ?GetSearchboxTaskbarMode@@YA?AW4SearchboxTaskbarMode@@XZ @ 0x18005F2A4 (-GetSearchboxTaskbarMode@@YA-AW4SearchboxTaskbarMode@@XZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062CC4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall SearchAppDesktopExperienceView::ShowInternal(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4)
{
  __int64 v8; // rcx
  int v9; // eax
  int v10; // eax
  int v12; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int SearchboxTaskbarMode; // [rsp+30h] [rbp+8h] BYREF

  SearchboxTaskbarMode = GetSearchboxTaskbarMode();
  CortanaProactiveTelemetry::CortanaExperienceManager_CortanaTaskbarState<unsigned long>(&SearchboxTaskbarMode);
  CortanaProactiveTelemetry::CortanaExperienceManager_CortanaTabletMode<bool &>(a1 + 212);
  v8 = *(_QWORD *)(a1 + 152);
  LOBYTE(SearchboxTaskbarMode) = 0;
  if ( v8 )
  {
    if ( (*(int (__fastcall **)(__int64, int *))(*(_QWORD *)v8 + 72LL))(v8, &SearchboxTaskbarMode) >= 0 )
    {
      if ( (_BYTE)SearchboxTaskbarMode )
      {
        v9 = SearchAppDesktopExperienceView::Relaunch(a1, a2, a4);
        if ( v9 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x658,
            (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
            (const char *)(unsigned int)v9,
            v12);
      }
    }
  }
  v10 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(a1 + 152) + 88LL))(
          *(_QWORD *)(a1 + 152),
          a2,
          a3);
  if ( v10 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x65B,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
      (const char *)(unsigned int)v10,
      v12);
  return 0LL;
}
