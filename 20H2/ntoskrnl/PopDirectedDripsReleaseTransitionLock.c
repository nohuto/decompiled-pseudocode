/*
 * XREFs of PopDirectedDripsReleaseTransitionLock @ 0x1408E6050
 * Callers:
 *     PopDirectedDripsResumeDevices @ 0x1408E6080 (PopDirectedDripsResumeDevices.c)
 *     PopDirectedDripsSuspendDevices @ 0x1408E6278 (PopDirectedDripsSuspendDevices.c)
 * Callees:
 *     PopReleaseTransitionLock @ 0x140789CF4 (PopReleaseTransitionLock.c)
 */

LONG __fastcall PopDirectedDripsReleaseTransitionLock(void *a1)
{
  LONG result; // eax

  _m_prefetchw(a1);
  result = _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFFBF);
  if ( (result & 0x40) != 0 )
    return PopReleaseTransitionLock(7);
  return result;
}
