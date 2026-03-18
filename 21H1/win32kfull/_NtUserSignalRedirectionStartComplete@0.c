/*
 * XREFs of _NtUserSignalRedirectionStartComplete@0 @ 0xEC422
 * Callers:
 *     <none>
 * Callees:
 *     _GreGetRedirectionEvent@0 @ 0xEC466 (_GreGetRedirectionEvent@0.c)
 */

BOOL __stdcall NtUserSignalRedirectionStartComplete()
{
  int CurrentProcess; // eax
  void *RedirectionEvent; // eax
  NTSTATUS v2; // esi

  GreLockDwmState();
  CurrentProcess = PsGetCurrentProcess();
  if ( IsProcessDwm(CurrentProcess) && (RedirectionEvent = (void *)GreGetRedirectionEvent()) != 0 )
    v2 = ZwSetEvent(RedirectionEvent, 0);
  else
    v2 = -1073741790;
  GreUnlockDwmState();
  return v2 >= 0;
}
