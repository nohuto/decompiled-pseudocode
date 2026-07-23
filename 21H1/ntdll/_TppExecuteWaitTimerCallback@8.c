/*
 * XREFs of _TppExecuteWaitTimerCallback@8 @ 0x4B2ECE70
 * Callers:
 *     <none>
 * Callees:
 *     _TppExecuteWaitCallback@12 @ 0x4B2B55E2 (_TppExecuteWaitCallback@12.c)
 *     _RtlGetCurrentServiceSessionId@0 @ 0x4B2C3BF0 (_RtlGetCurrentServiceSessionId@0.c)
 *     _TppETWCallbackDequeue@20 @ 0x4B3849B7 (_TppETWCallbackDequeue@20.c)
 */

int __stdcall TppExecuteWaitTimerCallback(PTP_CALLBACK_INSTANCE Instance, int a2)
{
  int v2; // eax

  if ( RtlGetCurrentServiceSessionId() )
    v2 = (int)NtCurrentPeb()->SharedData + 556;
  else
    v2 = 2147353478;
  if ( *(_BYTE *)v2 )
    TppETWCallbackDequeue(*(_DWORD *)(a2 - 72), *(_DWORD *)(a2 - 68), *(_DWORD *)(a2 - 60));
  return TppExecuteWaitCallback(Instance, a2 - 120, 258);
}
