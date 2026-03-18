/*
 * XREFs of _WaitForRitToCompleteLastCommand@0 @ 0xEAEFA
 * Callers:
 *     _EditionDeactivateMitInput@0 @ 0xD3BD6 (_EditionDeactivateMitInput@0.c)
 *     _WaitForRitDisEngagement@0 @ 0xEAEA6 (_WaitForRitDisEngagement@0.c)
 * Callees:
 *     <none>
 */

int __stdcall WaitForRitToCompleteLastCommand()
{
  struct _KTHREAD *CurrentThread; // eax

  UserSessionSwitchLeaveCrit();
  do
  {
    if ( ObWaitForSingleObject(ghDITRITEvent, 0, 0, 0, 0) != 257 )
      break;
    CurrentThread = KeGetCurrentThread();
  }
  while ( !PsIsThreadTerminating(CurrentThread) );
  return EnterCrit(0, 1);
}
