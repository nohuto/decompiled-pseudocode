/*
 * XREFs of PopPepRequestWork @ 0x14023C234
 * Callers:
 *     PopPepProcessEvent @ 0x14023C01C (PopPepProcessEvent.c)
 *     PopPepTryPowerDownDevice @ 0x14030D134 (PopPepTryPowerDownDevice.c)
 *     PopPepSurprisePowerOn @ 0x140388238 (PopPepSurprisePowerOn.c)
 *     PopPepUpdateConstraints @ 0x14039D04C (PopPepUpdateConstraints.c)
 *     PopPepCompleteComponentIdleState @ 0x14056E704 (PopPepCompleteComponentIdleState.c)
 *     PopPepComponentSetLatency @ 0x14056E80C (PopPepComponentSetLatency.c)
 *     PopPepComponentSetResidency @ 0x14056E8F8 (PopPepComponentSetResidency.c)
 *     PopPepComponentSetWakeHint @ 0x14056E9F0 (PopPepComponentSetWakeHint.c)
 *     PopPepIdleTimeoutRoutine @ 0x14056EF60 (PopPepIdleTimeoutRoutine.c)
 * Callees:
 *     PopFxRequestWorker @ 0x1403122C0 (PopFxRequestWorker.c)
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
