/*
 * XREFs of KeGetAffinitizedInterruptsInfo @ 0x14051D038
 * Callers:
 *     ExpQuerySystemInformation @ 0x14068F290 (ExpQuerySystemInformation.c)
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x14021E120 (KeAddProcessorAffinityEx.c)
 *     KeCopyAffinityEx @ 0x14021E8E0 (KeCopyAffinityEx.c)
 *     ExSystemExceptionFilter @ 0x1407C22E0 (ExSystemExceptionFilter.c)
 */

__int64 __fastcall KeGetAffinitizedInterruptsInfo(_WORD *a1)
{
  KeCopyAffinityEx((__int64)a1, (unsigned __int16 *)KiIntSteerAffinitizedInterrupts);
  KeAddProcessorAffinityEx(a1, KiClockTimerOwner);
  return 0LL;
}
