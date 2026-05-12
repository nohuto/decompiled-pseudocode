/*
 * XREFs of RaidQueueWaitCheckDpcRoutine @ 0x1C00316A0
 * Callers:
 *     <none>
 * Callees:
 *     RaidAdapterCheckWaitTimeout @ 0x1C002A21C (RaidAdapterCheckWaitTimeout.c)
 */

void __fastcall RaidQueueWaitCheckDpcRoutine(
        struct _KDPC *Dpc,
        _QWORD *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  _DWORD *v4; // rcx

  v4 = (_DWORD *)DeferredContext[8];
  if ( v4 && !*v4 && v4[22] != 5 )
    RaidAdapterCheckWaitTimeout((__int64)v4);
}
