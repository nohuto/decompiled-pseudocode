/*
 * XREFs of KiSetPendingTick @ 0x14021176C
 * Callers:
 *     KiSetClockTickRate @ 0x140211120 (KiSetClockTickRate.c)
 *     KePrepareClockTimerForIdle @ 0x140211280 (KePrepareClockTimerForIdle.c)
 *     KiRestoreClockTickRate @ 0x140211728 (KiRestoreClockTickRate.c)
 *     KeResumeClockTimerFromIdle @ 0x1402C94E0 (KeResumeClockTimerFromIdle.c)
 *     KeInitializeClock @ 0x140A4C7CC (KeInitializeClock.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall KiSetPendingTick(char a1)
{
  char v1; // r8
  struct _KPRCB *CurrentPrcb; // rdx
  unsigned __int8 result; // al
  __int64 v4; // rcx

  v1 = a1 & 1;
  if ( KiClockTimerPerCpu )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    result = v1 | CurrentPrcb->PendingTickFlags & 0xFE;
    CurrentPrcb->PendingTickFlags = result;
  }
  else
  {
    v4 = KiProcessorBlock[(unsigned int)KiClockTimerOwner];
    result = v1 | *(_BYTE *)(v4 + 34) & 0xFE;
    *(_BYTE *)(v4 + 34) = result;
  }
  return result;
}
