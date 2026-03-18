/*
 * XREFs of KeGetAffinitizedInterruptsInfo @ 0x140577F60
 * Callers:
 *     ExpQuerySystemInformation @ 0x14073B5A0 (ExpQuerySystemInformation.c)
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x140294460 (KeAddProcessorAffinityEx.c)
 *     KiCopyAffinityEx @ 0x140300030 (KiCopyAffinityEx.c)
 */

__int64 __fastcall KeGetAffinitizedInterruptsInfo(unsigned __int16 *a1)
{
  KiCopyAffinityEx((__int64)a1, a1[1], (unsigned __int16 *)KiIntSteerAffinitizedInterrupts);
  return KeAddProcessorAffinityEx(a1, KiClockTimerOwner);
}
