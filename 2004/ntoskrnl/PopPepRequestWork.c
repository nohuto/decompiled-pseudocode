/*
 * XREFs of PopPepRequestWork @ 0x1402CF064
 * Callers:
 *     PopPepProcessEvent @ 0x1402CEE4C (PopPepProcessEvent.c)
 *     PopPepTryPowerDownDevice @ 0x14034A424 (PopPepTryPowerDownDevice.c)
 *     PopPepSurprisePowerOn @ 0x1403891A8 (PopPepSurprisePowerOn.c)
 *     PopPepUpdateConstraints @ 0x14039D7DC (PopPepUpdateConstraints.c)
 *     PopPepCompleteComponentIdleState @ 0x14056ED54 (PopPepCompleteComponentIdleState.c)
 *     PopPepComponentSetLatency @ 0x14056EE5C (PopPepComponentSetLatency.c)
 *     PopPepComponentSetResidency @ 0x14056EF48 (PopPepComponentSetResidency.c)
 *     PopPepComponentSetWakeHint @ 0x14056F040 (PopPepComponentSetWakeHint.c)
 *     PopPepIdleTimeoutRoutine @ 0x14056F5B0 (PopPepIdleTimeoutRoutine.c)
 * Callees:
 *     PopFxRequestWorker @ 0x140350050 (PopFxRequestWorker.c)
 */

__int64 __fastcall PopPepRequestWork(unsigned int a1, unsigned int a2)
{
  unsigned int v2; // edx
  __int64 v3; // rbx
  __int64 result; // rax

  if ( a2 > a1 )
  {
    v2 = a2 - a1;
    if ( v2 )
    {
      v3 = v2;
      do
      {
        result = PopFxRequestWorker(0LL);
        --v3;
      }
      while ( v3 );
    }
  }
  return result;
}
