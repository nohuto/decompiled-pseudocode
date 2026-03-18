/*
 * XREFs of ?WaitForWinstaRundown@@YGXPAU_KEVENT@@@Z @ 0xD4BB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall WaitForWinstaRundown(struct _KEVENT *StartContext)
{
  if ( StartContext )
    KeSetEvent(StartContext, 1, 0);
  ExWaitForRundownProtectionRelease(_gWinstaRunRef);
  ExRundownCompleted(_gWinstaRunRef);
}
