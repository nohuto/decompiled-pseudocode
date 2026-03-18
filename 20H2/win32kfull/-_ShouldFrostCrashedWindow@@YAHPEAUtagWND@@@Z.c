/*
 * XREFs of ?_ShouldFrostCrashedWindow@@YAHPEAUtagWND@@@Z @ 0x1C0209A2C
 * Callers:
 *     xxxFrostCrashedWindow @ 0x1C0209D84 (xxxFrostCrashedWindow.c)
 * Callees:
 *     _GetDesktopWindow @ 0x1C0046F20 (_GetDesktopWindow.c)
 *     _IsTopLevelWindow @ 0x1C0046FA0 (_IsTopLevelWindow.c)
 *     IsWindowBeingDestroyed @ 0x1C00C65B8 (IsWindowBeingDestroyed.c)
 */

__int64 __fastcall _ShouldFrostCrashedWindow(struct tagWND *a1)
{
  __int64 v1; // rdi
  unsigned int v3; // ebx
  __int64 v4; // rcx
  __int64 v5; // r9
  int v6; // eax

  v1 = *((_QWORD *)a1 + 2);
  v3 = 0;
  if ( !(unsigned int)IsWindowBeingDestroyed((__int64)a1)
    && (unsigned int)IsTopLevelWindow(v4)
    && *(_QWORD *)(v1 + 456) == grpdeskRitInput
    && **(_WORD **)(*((_QWORD *)a1 + 17) + 8LL) != *(_WORD *)(gpsi + 900LL)
    && (*(_DWORD *)(v5 + 12) & 0x8000000) == 0
    && *(_QWORD *)v5 != gpepCSRSS
    && !(unsigned int)IsProcessDwm(*(_QWORD *)v5)
    && !PsGetProcessDebugPort(**(_QWORD **)(v1 + 424)) )
  {
    v6 = 0;
    if ( *(_DWORD *)(v1 + 632) <= 0x9900u )
      v6 = *(_DWORD *)(v1 + 648);
    if ( (v6 & 0x80000) == 0 && a1 != (struct tagWND *)GetDesktopWindow((__int64)a1) )
      return 1;
  }
  return v3;
}
