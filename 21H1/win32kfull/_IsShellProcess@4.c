/*
 * XREFs of _IsShellProcess@4 @ 0x1B0F4
 * Callers:
 *     ?TraceLoggingProcessUsageDataAggregationHelper@@YGXQAUtagWND@@@Z @ 0x190C2 (-TraceLoggingProcessUsageDataAggregationHelper@@YGXQAUtagWND@@@Z.c)
 *     _CheckAllowForeground@4 @ 0x1AE3E (_CheckAllowForeground@4.c)
 *     ?_GetWindowTrackInfoAsync@@YGJPAUtagWND@@@Z @ 0x7D75E (-_GetWindowTrackInfoAsync@@YGJPAUtagWND@@@Z.c)
 *     __RegisterHotKey@20 @ 0xC5F06 (__RegisterHotKey@20.c)
 *     _NtUserRegisterShellPTPListener@8 @ 0xE8246 (_NtUserRegisterShellPTPListener@8.c)
 *     ?_RegisterWindowArrangementCallout@@YGJPAUtagWND@@H@Z @ 0xE88B0 (-_RegisterWindowArrangementCallout@@YGJPAUtagWND@@H@Z.c)
 *     _NtUserRegisterEdgy@12 @ 0x167F38 (_NtUserRegisterEdgy@12.c)
 *     _NtUserSetInteractiveControlFocus@12 @ 0x169551 (_NtUserSetInteractiveControlFocus@12.c)
 * Callees:
 *     <none>
 */

BOOL __thiscall IsShellProcess(_DWORD *this)
{
  int v1; // eax

  v1 = this[47];
  return v1 && *(_DWORD **)(*(_DWORD *)(v1 + 4) + 88) == this;
}
