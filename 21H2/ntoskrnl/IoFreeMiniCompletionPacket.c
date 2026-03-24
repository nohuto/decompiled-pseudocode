/*
 * XREFs of IoFreeMiniCompletionPacket @ 0x14067F4A0
 * Callers:
 *     ExpWorkerFactoryCompletionPacketRoutine @ 0x140285AA0 (ExpWorkerFactoryCompletionPacketRoutine.c)
 *     PspJobDelete @ 0x140287530 (PspJobDelete.c)
 *     ExpDeleteWorkerFactory @ 0x140287A60 (ExpDeleteWorkerFactory.c)
 *     AlpcpDeferredFreeCompletionPacketLookaside @ 0x140287B04 (AlpcpDeferredFreeCompletionPacketLookaside.c)
 *     NtSetInformationJobObject @ 0x140614200 (NtSetInformationJobObject.c)
 *     NtCreateWorkerFactory @ 0x1406D3E40 (NtCreateWorkerFactory.c)
 * Callees:
 *     IopFreeMiniCompletionPacket @ 0x1405E4380 (IopFreeMiniCompletionPacket.c)
 */

void __fastcall IoFreeMiniCompletionPacket(__int64 a1)
{
  *(_QWORD *)(a1 + 56) = 0LL;
  IopFreeMiniCompletionPacket((struct _SLIST_ENTRY *)a1);
}
