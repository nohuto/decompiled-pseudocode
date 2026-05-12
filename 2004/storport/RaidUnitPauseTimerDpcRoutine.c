/*
 * XREFs of RaidUnitPauseTimerDpcRoutine @ 0x1C00144C0
 * Callers:
 *     <none>
 * Callees:
 *     RaidRestartIoQueue @ 0x1C00088BC (RaidRestartIoQueue.c)
 *     RaidResumeUnitQueue @ 0x1C0010440 (RaidResumeUnitQueue.c)
 */

void __fastcall RaidUnitPauseTimerDpcRoutine(
        struct _KDPC *Dpc,
        _QWORD *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  __int64 v4; // rbx

  v4 = DeferredContext[8];
  if ( (unsigned int)RaidResumeUnitQueue(v4) )
    RaidRestartIoQueue(v4);
}
