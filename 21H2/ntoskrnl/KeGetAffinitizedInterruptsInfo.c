/*
 * XREFs of KeGetAffinitizedInterruptsInfo @ 0x1405224E8
 * Callers:
 *     ExpQuerySystemInformation @ 0x140651070 (ExpQuerySystemInformation.c)
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x140229380 (KeAddProcessorAffinityEx.c)
 *     KeCopyAffinityEx @ 0x14033B450 (KeCopyAffinityEx.c)
 *     ExSystemExceptionFilter @ 0x1407D4F10 (ExSystemExceptionFilter.c)
 */

__int64 __fastcall KeGetAffinitizedInterruptsInfo(_WORD *a1)
{
  KeCopyAffinityEx((__int64)a1, (unsigned __int16 *)KiIntSteerAffinitizedInterrupts);
  KeAddProcessorAffinityEx(a1, KiClockTimerOwner);
  return 0LL;
}
