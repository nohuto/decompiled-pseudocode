/*
 * XREFs of PopPulseSystemIdleEvent @ 0x14077A170
 * Callers:
 *     PopUpdateLastUserInputTime @ 0x14076D190 (PopUpdateLastUserInputTime.c)
 *     PopSystemIdleWorker @ 0x1408ECA30 (PopSystemIdleWorker.c)
 *     PopUpdateSystemIdleContext @ 0x1408ECBA0 (PopUpdateSystemIdleContext.c)
 *     PopInitializeSystemIdleDetection @ 0x140A6F2F4 (PopInitializeSystemIdleDetection.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopPulseSystemIdleEvent(unsigned int a1)
{
  unsigned int v1; // r8d

  v1 = 0;
  if ( a1 > 3 )
    return (unsigned int)-1073741811;
  else
    *((_QWORD *)&unk_140C0F1B0 + 7 * (int)a1) = MEMORY[0xFFFFF78000000008] / 0x989680uLL;
  return v1;
}
