/*
 * XREFs of IoFreeMiniCompletionPacket @ 0x140711120
 * Callers:
 *     ExpWorkerFactoryCompletionPacketRoutine @ 0x14035BDC0 (ExpWorkerFactoryCompletionPacketRoutine.c)
 *     PspJobDelete @ 0x14035D490 (PspJobDelete.c)
 *     ExpDeleteWorkerFactory @ 0x14035D9C0 (ExpDeleteWorkerFactory.c)
 *     AlpcpDeferredFreeCompletionPacketLookaside @ 0x14035DA64 (AlpcpDeferredFreeCompletionPacketLookaside.c)
 *     NtSetInformationJobObject @ 0x140661780 (NtSetInformationJobObject.c)
 *     NtCreateWorkerFactory @ 0x140709330 (NtCreateWorkerFactory.c)
 * Callees:
 *     IopFreeMiniCompletionPacket @ 0x1405EB920 (IopFreeMiniCompletionPacket.c)
 */

void __fastcall IoFreeMiniCompletionPacket(__int64 a1, __int64 a2, __int64 a3)
{
  *(_QWORD *)(a1 + 56) = 0LL;
  IopFreeMiniCompletionPacket((_SLIST_ENTRY *)a1, a2, a3);
}
