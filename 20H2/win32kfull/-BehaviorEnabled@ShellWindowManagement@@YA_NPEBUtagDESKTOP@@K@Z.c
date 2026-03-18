/*
 * XREFs of ?BehaviorEnabled@ShellWindowManagement@@YA_NPEBUtagDESKTOP@@K@Z @ 0x1C0094BC0
 * Callers:
 *     BuildHwndList @ 0x1C00496B0 (BuildHwndList.c)
 *     ?InternalBuildHwndList@@YAPEAUtagBWL@@PEAU1@PEAUtagWND@@I@Z @ 0x1C0049F90 (-InternalBuildHwndList@@YAPEAUtagBWL@@PEAU1@PEAUtagWND@@I@Z.c)
 *     ?xxxShowWindowEx@@YAHPEAUtagWND@@EK@Z @ 0x1C0093EA8 (-xxxShowWindowEx@@YAHPEAUtagWND@@EK@Z.c)
 *     ?IsShellParticipatesInSizing@@YA_NPEAUtagWND@@@Z @ 0x1C00943E4 (-IsShellParticipatesInSizing@@YA_NPEAUtagWND@@@Z.c)
 *     ?xxxDWP_SetCursor@@YAHPEAUtagWND@@PEAUHWND__@@HI@Z @ 0x1C009495C (-xxxDWP_SetCursor@@YAHPEAUtagWND@@PEAUHWND__@@HI@Z.c)
 *     ?WindowSubjectToBehavior@ShellWindowManagement@@YA_NPEAUtagWND@@K@Z @ 0x1C0094B7C (-WindowSubjectToBehavior@ShellWindowManagement@@YA_NPEAUtagWND@@K@Z.c)
 *     xxxTrackMouseMove @ 0x1C00BAAC4 (xxxTrackMouseMove.c)
 *     xxxDesktopRecalc @ 0x1C01066F8 (xxxDesktopRecalc.c)
 *     ?_GetWindowTrackInfoAsync@@YA_JPEAUtagWND@@@Z @ 0x1C01197B0 (-_GetWindowTrackInfoAsync@@YA_JPEAUtagWND@@@Z.c)
 *     ?_EnableShellWindowManagementBehavior@@YAH_K0@Z @ 0x1C012C0C0 (-_EnableShellWindowManagementBehavior@@YAH_K0@Z.c)
 *     ?IsWindowSubjectToShellSizingPolicy@@YA_NPEAUtagWND@@@Z @ 0x1C020B3DC (-IsWindowSubjectToShellSizingPolicy@@YA_NPEAUtagWND@@@Z.c)
 *     ?xxxArrangeWindow@@YAXPEAUtagWND@@W4_WINDOW_ARRANGEMENT_COMMAND@@@Z @ 0x1C020D1FC (-xxxArrangeWindow@@YAXPEAUtagWND@@W4_WINDOW_ARRANGEMENT_COMMAND@@@Z.c)
 *     ?ShouldApplyShellWindowingBehaviorToSysCommand@@YAHPEAUtagWND@@H@Z @ 0x1C0223630 (-ShouldApplyShellWindowingBehaviorToSysCommand@@YAHPEAUtagWND@@H@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall ShellWindowManagement::BehaviorEnabled(ShellWindowManagement *this, const struct tagDESKTOP *a2)
{
  char v2; // r8

  v2 = 0;
  if ( *((_QWORD *)this + 41) )
    return ((unsigned __int8)*((_DWORD *)this + 84) & (unsigned __int8)a2) != 0;
  return v2;
}
