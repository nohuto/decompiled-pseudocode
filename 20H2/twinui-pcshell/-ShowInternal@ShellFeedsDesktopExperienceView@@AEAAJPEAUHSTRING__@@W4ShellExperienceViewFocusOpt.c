/*
 * XREFs of ?ShowInternal@ShellFeedsDesktopExperienceView@@AEAAJPEAUHSTRING__@@W4ShellExperienceViewFocusOptions@Experience@Shell@Internal@Windows@@@Z @ 0x1800A91AC
 * Callers:
 *     ?Show@ShellFeedsDesktopExperienceView@@UEAAJPEAUHSTRING__@@W4FeedsButtonInteraction@@@Z @ 0x1800A9020 (-Show@ShellFeedsDesktopExperienceView@@UEAAJPEAUHSTRING__@@W4FeedsButtonInteraction@@@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062CC4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Relaunch@ShellFeedsDesktopExperienceView@@AEAAJPEAUHSTRING__@@@Z @ 0x1800A8A3C (-Relaunch@ShellFeedsDesktopExperienceView@@AEAAJPEAUHSTRING__@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ShellFeedsDesktopExperienceView::ShowInternal(
        ShellFeedsDesktopExperienceView *a1,
        __int64 a2,
        unsigned int a3)
{
  __int64 v4; // rcx
  int v7; // eax
  int v8; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  char v11; // [rsp+30h] [rbp+8h] BYREF

  v11 = 0;
  v4 = *((_QWORD *)a1 + 13);
  if ( v4 )
  {
    if ( (*(int (__fastcall **)(__int64, char *))(*(_QWORD *)v4 + 72LL))(v4, &v11) >= 0 )
    {
      if ( v11 )
      {
        v7 = ShellFeedsDesktopExperienceView::Relaunch(a1, a2);
        if ( v7 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x3E7,
            (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\shellfeedsdesktopexperienceview.cpp",
            (const char *)(unsigned int)v7);
      }
    }
  }
  v8 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(**((_QWORD **)a1 + 13) + 88LL))(
         *((_QWORD *)a1 + 13),
         a2,
         a3);
  if ( v8 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x3E9,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\shellfeedsdesktopexperienceview.cpp",
      (const char *)(unsigned int)v8);
  return 0LL;
}
