/*
 * XREFs of ViKeInjectStatusAlerted @ 0x1409DF078
 * Callers:
 *     VerifierKeDelayExecutionThread @ 0x1409DDAC0 (VerifierKeDelayExecutionThread.c)
 *     ViKeWaitForMultipleObjectsCommon @ 0x1409DF480 (ViKeWaitForMultipleObjectsCommon.c)
 *     ViKeWaitForSingleObjectCommon @ 0x1409DF568 (ViKeWaitForSingleObjectCommon.c)
 * Callees:
 *     VfUtilIsLocalSystem @ 0x1409C97F4 (VfUtilIsLocalSystem.c)
 *     VfFaultsInjectResourceFailure @ 0x1409DF83C (VfFaultsInjectResourceFailure.c)
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
