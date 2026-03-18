/*
 * XREFs of _NtUserYieldTask@0 @ 0x16B3E0
 * Callers:
 *     <none>
 * Callees:
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     _xxxUserYield@4 @ 0x9875A (_xxxUserYield@4.c)
 *     ?UpdateProcessPriorityForSpinning@PriorityBoost@@YGXPAUtagTHREADINFO@@@Z @ 0xC944C (-UpdateProcessPriorityForSpinning@PriorityBoost@@YGXPAUtagTHREADINFO@@@Z.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 */

int __stdcall NtUserYieldTask()
{
  int v0; // ecx
  int v1; // esi

  EnterCrit(0, 1);
  ++*(_DWORD *)(*(_DWORD *)(_gptiCurrent + 260) + 4);
  v0 = *(_DWORD *)(_gptiCurrent + 260);
  if ( *(_DWORD *)(v0 + 4) >= 0x64u )
  {
    *(_DWORD *)(v0 + 4) = 0;
    *(_DWORD *)(*(_DWORD *)(_gptiCurrent + 260) + 20) |= 0x400u;
    *(_DWORD *)(_gptiCurrent + 264) |= 0x400u;
    PriorityBoost::UpdateProcessPriorityForSpinning(_gptiCurrent);
  }
  v1 = xxxUserYield(_gptiCurrent);
  UserSessionSwitchLeaveCrit();
  return v1;
}
