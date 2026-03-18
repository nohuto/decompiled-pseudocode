/*
 * XREFs of KiSetPendingTick @ 0x14022F96C
 * Callers:
 *     KiSetClockTickRate @ 0x14022F6A4 (KiSetClockTickRate.c)
 *     KiRestoreClockTickRate @ 0x14022F864 (KiRestoreClockTickRate.c)
 *     KeResumeClockTimerFromIdle @ 0x140308240 (KeResumeClockTimerFromIdle.c)
 *     KePrepareClockTimerForIdle @ 0x140353FB0 (KePrepareClockTimerForIdle.c)
 *     KeInitializeClock @ 0x140B27884 (KeInitializeClock.c)
 *     KeInitializeClockOtherProcessors @ 0x140B50F64 (KeInitializeClockOtherProcessors.c)
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
