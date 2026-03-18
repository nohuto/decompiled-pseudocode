/*
 * XREFs of PopDripsWatchdogInitialize @ 0x140A70F60
 * Callers:
 *     PoInitSystem @ 0x140A3BD5C (PoInitSystem.c)
 * Callees:
 *     ExInitializeResourceLite @ 0x140213470 (ExInitializeResourceLite.c)
 *     PopDripsWatchdogInitializeActions @ 0x140A90914 (PopDripsWatchdogInitializeActions.c)
 *     PopDripsWatchdogInitializeCallbackTimer @ 0x140A90974 (PopDripsWatchdogInitializeCallbackTimer.c)
 *     PopDripsWatchdogInitializeDiagnosticTimer @ 0x140A909FC (PopDripsWatchdogInitializeDiagnosticTimer.c)
 */

__int64 PopDripsWatchdogInitialize()
{
  __int64 result; // rax

  ExInitializeResourceLite(&PopDripsWatchdogContext);
  if ( !PopPlatformAoAc )
    goto LABEL_2;
  result = PopDripsWatchdogInitializeActions();
  if ( (int)result >= 0 )
  {
    result = PopDripsWatchdogInitializeCallbackTimer();
    if ( (int)result >= 0 )
    {
      result = PopDripsWatchdogInitializeDiagnosticTimer();
      if ( (int)result >= 0 )
      {
        dword_140C211A8 |= 2u;
LABEL_2:
        dword_140C211A8 |= 1u;
        return 0LL;
      }
    }
  }
  return result;
}
