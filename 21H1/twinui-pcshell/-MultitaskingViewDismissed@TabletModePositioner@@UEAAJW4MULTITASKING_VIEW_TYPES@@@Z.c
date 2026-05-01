/*
 * XREFs of ?MultitaskingViewDismissed@TabletModePositioner@@UEAAJW4MULTITASKING_VIEW_TYPES@@@Z @ 0x1803D87E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsTabletMode@TabletModePositioner@@AEAA_NXZ @ 0x1803D8340 (-IsTabletMode@TabletModePositioner@@AEAA_NXZ.c)
 *     ?ShouldShowLauncher@TabletModePositioner@@AEAA_NXZ @ 0x1803DA618 (-ShouldShowLauncher@TabletModePositioner@@AEAA_NXZ.c)
 *     ?ShowLauncher@TabletModePositioner@@AEAAJ_N@Z @ 0x1803DA6A4 (-ShowLauncher@TabletModePositioner@@AEAAJ_N@Z.c)
 */

__int64 __fastcall TabletModePositioner::MultitaskingViewDismissed(__int64 a1)
{
  TabletModePositioner *v1; // rbx
  int v3; // edx
  TabletModePositioner *v4; // rcx
  int v5; // eax
  unsigned int v6; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = (TabletModePositioner *)(a1 - 176);
  if ( TabletModePositioner::IsTabletMode((TabletModePositioner *)(a1 - 176))
    && (unsigned int)(v3 - 1) <= 1
    && TabletModePositioner::ShouldShowLauncher(v4)
    && !*(_BYTE *)(a1 + 67) )
  {
    v5 = TabletModePositioner::ShowLauncher(v1, 0);
    v6 = v5;
    if ( v5 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x61B,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
        (const char *)(unsigned int)v5);
  }
  else
  {
    v6 = 0;
  }
  *((_BYTE *)v1 + 243) = 0;
  return v6;
}
