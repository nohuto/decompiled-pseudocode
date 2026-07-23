/*
 * XREFs of EtwpStackWalkDpc @ 0x1405A7310
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x1402A5670 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     EtwpQueueStackWalkApc @ 0x1405A6E70 (EtwpQueueStackWalkApc.c)
 */

void __fastcall EtwpStackWalkDpc(
        struct _KDPC *Dpc,
        PVOID DeferredContext,
        unsigned int *SystemArgument1,
        PVOID SystemArgument2)
{
  EtwpQueueStackWalkApc(*((_QWORD *)SystemArgument1 + 107), 2u, SystemArgument1, SystemArgument1 + 212);
  ExReleaseRundownProtectionCacheAwareEx(
    *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(*((_QWORD *)SystemArgument1 + 135) + 448LL) + 8LL * *SystemArgument1),
    1u);
  _interlockedbittestandreset((volatile signed __int32 *)SystemArgument1 + 239, 1u);
}
