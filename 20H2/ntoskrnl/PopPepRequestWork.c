/*
 * XREFs of PopPepRequestWork @ 0x1402D4E6C
 * Callers:
 *     PopPepProcessEvent @ 0x1402D4C54 (PopPepProcessEvent.c)
 *     PopPepTryPowerDownDevice @ 0x14033F734 (PopPepTryPowerDownDevice.c)
 *     PopPepSurprisePowerOn @ 0x14038B448 (PopPepSurprisePowerOn.c)
 *     PopPepUpdateConstraints @ 0x14039CBCC (PopPepUpdateConstraints.c)
 *     PopPepCompleteComponentIdleState @ 0x140572784 (PopPepCompleteComponentIdleState.c)
 *     PopPepComponentSetLatency @ 0x14057288C (PopPepComponentSetLatency.c)
 *     PopPepComponentSetResidency @ 0x140572978 (PopPepComponentSetResidency.c)
 *     PopPepComponentSetWakeHint @ 0x140572A70 (PopPepComponentSetWakeHint.c)
 *     PopPepIdleTimeoutRoutine @ 0x140572FE0 (PopPepIdleTimeoutRoutine.c)
 * Callees:
 *     PopFxRequestWorker @ 0x140320720 (PopFxRequestWorker.c)
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
