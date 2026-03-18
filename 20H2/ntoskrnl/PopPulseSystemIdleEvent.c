/*
 * XREFs of PopPulseSystemIdleEvent @ 0x14078AB80
 * Callers:
 *     PopUpdateLastUserInputTime @ 0x14077D7E0 (PopUpdateLastUserInputTime.c)
 *     PopSystemIdleWorker @ 0x1408F3900 (PopSystemIdleWorker.c)
 *     PopUpdateSystemIdleContext @ 0x1408F3AA4 (PopUpdateSystemIdleContext.c)
 *     PopInitializeSystemIdleDetection @ 0x140A76238 (PopInitializeSystemIdleDetection.c)
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
    *((_QWORD *)&unk_140C0F1D0 + 7 * (int)a1) = MEMORY[0xFFFFF78000000008] / 0x989680uLL;
  return v1;
}
