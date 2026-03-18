/*
 * XREFs of ViKeInjectStatusAlerted @ 0x1409D8FF8
 * Callers:
 *     VerifierKeDelayExecutionThread @ 0x1409D7A40 (VerifierKeDelayExecutionThread.c)
 *     ViKeWaitForMultipleObjectsCommon @ 0x1409D9400 (ViKeWaitForMultipleObjectsCommon.c)
 *     ViKeWaitForSingleObjectCommon @ 0x1409D94E8 (ViKeWaitForSingleObjectCommon.c)
 * Callees:
 *     VfUtilIsLocalSystem @ 0x1409C37C4 (VfUtilIsLocalSystem.c)
 *     VfFaultsInjectResourceFailure @ 0x1409D97BC (VfFaultsInjectResourceFailure.c)
 */

_BOOL8 __fastcall ViKeInjectStatusAlerted(char a1)
{
  struct _KPROCESS *Process; // rbx
  _BOOL8 result; // rax

  result = 0;
  if ( a1 )
  {
    Process = KeGetCurrentThread()->ApcState.Process;
    if ( PsInitialSystemProcess )
    {
      if ( Process != PsInitialSystemProcess
        && Process != PsIdleProcess
        && (unsigned int)VfFaultsInjectResourceFailure(0LL)
        && !(unsigned int)VfUtilIsLocalSystem(Process) )
      {
        return 1;
      }
    }
  }
  return result;
}
