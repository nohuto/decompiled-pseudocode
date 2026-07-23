/*
 * XREFs of IoFreeMiniCompletionPacket @ 0x1405D9F40
 * Callers:
 *     ExpWorkerFactoryCompletionPacketRoutine @ 0x140202C40 (ExpWorkerFactoryCompletionPacketRoutine.c)
 *     PspJobDelete @ 0x1402046D0 (PspJobDelete.c)
 *     ExpDeleteWorkerFactory @ 0x140204C00 (ExpDeleteWorkerFactory.c)
 *     AlpcpDeferredFreeCompletionPacketLookaside @ 0x140204CA4 (AlpcpDeferredFreeCompletionPacketLookaside.c)
 *     NtSetInformationJobObject @ 0x14067DE60 (NtSetInformationJobObject.c)
 *     NtCreateWorkerFactory @ 0x1406AB120 (NtCreateWorkerFactory.c)
 * Callees:
 *     IopFreeMiniCompletionPacket @ 0x1406D3AE0 (IopFreeMiniCompletionPacket.c)
 */

__int64 __fastcall IoFreeMiniCompletionPacket(_QWORD *a1)
{
  a1[7] = 0LL;
  return IopFreeMiniCompletionPacket(a1);
}
