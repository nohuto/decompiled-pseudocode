/*
 * XREFs of IsShellProcess @ 0x1C00288E8
 * Callers:
 *     CheckAllowForeground @ 0x1C0028550 (CheckAllowForeground.c)
 *     ?TraceLoggingProcessUsageDataAggregationHelper@@YAXQEAUtagWND@@@Z @ 0x1C0032F04 (-TraceLoggingProcessUsageDataAggregationHelper@@YAXQEAUtagWND@@@Z.c)
 *     ?_GetWindowTrackInfoAsync@@YA_JPEAUtagWND@@@Z @ 0x1C00397D0 (-_GetWindowTrackInfoAsync@@YA_JPEAUtagWND@@@Z.c)
 *     _RegisterHotKey @ 0x1C003D584 (_RegisterHotKey.c)
 *     ?_RegisterWindowArrangementCallout@@YA_JPEAUtagWND@@H@Z @ 0x1C00BF690 (-_RegisterWindowArrangementCallout@@YA_JPEAUtagWND@@H@Z.c)
 *     NtUserGetWindowProcessHandle @ 0x1C0113F80 (NtUserGetWindowProcessHandle.c)
 *     NtUserRegisterShellPTPListener @ 0x1C0127640 (NtUserRegisterShellPTPListener.c)
 *     NtUserRegisterEdgy @ 0x1C02014E0 (NtUserRegisterEdgy.c)
 *     NtUserSetInteractiveControlFocus @ 0x1C0202B10 (NtUserSetInteractiveControlFocus.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsShellProcess(__int64 a1)
{
  __int64 v1; // rax
  unsigned int v2; // edx

  v1 = *(_QWORD *)(a1 + 336);
  v2 = 0;
  if ( v1 )
    return *(_QWORD *)(*(_QWORD *)(v1 + 8) + 176LL) == a1;
  return v2;
}
