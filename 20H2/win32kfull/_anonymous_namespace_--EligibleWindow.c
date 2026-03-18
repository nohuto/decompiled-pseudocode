/*
 * XREFs of _anonymous_namespace_::EligibleWindow @ 0x1C0094D18
 * Callers:
 *     BuildHwndList @ 0x1C00496B0 (BuildHwndList.c)
 *     ?InternalBuildHwndList@@YAPEAUtagBWL@@PEAU1@PEAUtagWND@@I@Z @ 0x1C0049F90 (-InternalBuildHwndList@@YAPEAUtagBWL@@PEAU1@PEAUtagWND@@I@Z.c)
 *     ?WindowSubjectToBehavior@ShellWindowManagement@@YA_NPEAUtagWND@@K@Z @ 0x1C0094B7C (-WindowSubjectToBehavior@ShellWindowManagement@@YA_NPEAUtagWND@@K@Z.c)
 *     ?_GetWindowTrackInfoAsync@@YA_JPEAUtagWND@@@Z @ 0x1C01197B0 (-_GetWindowTrackInfoAsync@@YA_JPEAUtagWND@@@Z.c)
 * Callees:
 *     IsTrayWindow @ 0x1C0058D40 (IsTrayWindow.c)
 *     ?GetRootOwner@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C0113AC4 (-GetRootOwner@@YAPEAUtagWND@@PEAU1@@Z.c)
 */

bool __fastcall anonymous_namespace_::EligibleWindow(struct tagWND *a1, int a2)
{
  __int64 v4; // rcx
  int v5; // eax
  struct tagWND *RootOwner; // rax

  v4 = *((_QWORD *)a1 + 5);
  v5 = *(_DWORD *)(v4 + 236);
  if ( (v5 < 8 || v5 != 13 && v5 > 11) && v5 != 1 || !a2 && (*(_BYTE *)(v4 + 30) & 1) == 0 )
    return 0;
  if ( (unsigned int)IsTrayWindow(a1) )
    return 1;
  if ( a2 != 1 )
    return 0;
  RootOwner = GetRootOwner(a1);
  return (unsigned int)IsTrayWindow(RootOwner) != 0;
}
