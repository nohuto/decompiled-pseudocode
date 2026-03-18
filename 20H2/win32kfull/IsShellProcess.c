/*
 * XREFs of IsShellProcess @ 0x1C003BB28
 * Callers:
 *     _RegisterHotKey @ 0x1C002ED74 (_RegisterHotKey.c)
 *     CheckAllowForeground @ 0x1C003B790 (CheckAllowForeground.c)
 *     ?_RegisterWindowArrangementCallout@@YA_JPEAUtagWND@@H@Z @ 0x1C007FA20 (-_RegisterWindowArrangementCallout@@YA_JPEAUtagWND@@H@Z.c)
 *     ?TraceLoggingProcessUsageDataAggregationHelper@@YAXQEAUtagWND@@@Z @ 0x1C00BD1B0 (-TraceLoggingProcessUsageDataAggregationHelper@@YAXQEAUtagWND@@@Z.c)
 *     NtUserGetWindowProcessHandle @ 0x1C0115290 (NtUserGetWindowProcessHandle.c)
 *     ?_GetWindowTrackInfoAsync@@YA_JPEAUtagWND@@@Z @ 0x1C01197B0 (-_GetWindowTrackInfoAsync@@YA_JPEAUtagWND@@@Z.c)
 *     NtUserRegisterShellPTPListener @ 0x1C01294E0 (NtUserRegisterShellPTPListener.c)
 *     NtUserRegisterEdgy @ 0x1C0200670 (NtUserRegisterEdgy.c)
 *     NtUserSetInteractiveControlFocus @ 0x1C0201CA0 (NtUserSetInteractiveControlFocus.c)
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
