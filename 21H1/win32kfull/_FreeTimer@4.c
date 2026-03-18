/*
 * XREFs of _FreeTimer@4 @ 0x92F66
 * Callers:
 *     _DestroyWindowsTimers@4 @ 0x71B30 (_DestroyWindowsTimers@4.c)
 *     _DestroyThreadsTimers@4 @ 0x92E40 (_DestroyThreadsTimers@4.c)
 *     _FindTimer@20 @ 0x92EB2 (_FindTimer@20.c)
 *     ?InitiateWin32kCleanup@@YGHXZ @ 0xCCE00 (-InitiateWin32kCleanup@@YGHXZ.c)
 * Callees:
 *     ?DecTimerCount@@YGXPAUtagTIMER@@@Z @ 0x92FF2 (-DecTimerCount@@YGXPAUtagTIMER@@@Z.c)
 */

int __stdcall FreeTimer(int a1)
{
  int result; // eax
  int v2; // edx
  _DWORD *v3; // ecx
  int v4; // edx
  _DWORD *v5; // eax
  struct tagTIMER *v6; // [esp+0h] [ebp-4h]

  result = HMMarkObjectDestroy(a1);
  if ( result )
  {
    if ( (*(_BYTE *)(a1 + 28) & 1) != 0 )
      DecTimerCount(v6);
    v2 = *(_DWORD *)(a1 + 44);
    if ( *(_DWORD *)(v2 + 4) != a1 + 44
      || (v3 = *(_DWORD **)(a1 + 48), *v3 != a1 + 44)
      || (*v3 = v2, *(_DWORD *)(v2 + 4) = v3, v4 = *(_DWORD *)(a1 + 64), *(_DWORD *)(v4 + 4) != a1 + 64)
      || (v5 = *(_DWORD **)(a1 + 68), *v5 != a1 + 64) )
    {
      __fastfail(3u);
    }
    *v5 = v4;
    *(_DWORD *)(v4 + 4) = v5;
    if ( !*(_DWORD *)(a1 + 52) )
      _bittestandreset(_gTimerId, *(_DWORD *)(a1 + 56) - 256);
    EtwTraceKillTimer(a1);
    HMAssignmentUnlock(a1 + 52);
    return HMFreeObject(a1);
  }
  return result;
}
