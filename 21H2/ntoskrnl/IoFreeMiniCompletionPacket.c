/*
 * XREFs of IoFreeMiniCompletionPacket @ 0x14074F6E0
 * Callers:
 *     PspJobDelete @ 0x140207100 (PspJobDelete.c)
 *     ExpWorkerFactoryCompletionPacketRoutine @ 0x140224210 (ExpWorkerFactoryCompletionPacketRoutine.c)
 *     ExpDeleteWorkerFactory @ 0x1402D53C0 (ExpDeleteWorkerFactory.c)
 *     AlpcpDeferredFreeCompletionPacketLookaside @ 0x1402D56AC (AlpcpDeferredFreeCompletionPacketLookaside.c)
 * Callees:
 *     IopFreeMiniCompletionPacket @ 0x14074F700 (IopFreeMiniCompletionPacket.c)
 */

__int64 __fastcall IoFreeMiniCompletionPacket(_QWORD *a1)
{
  a1[7] = 0LL;
  return IopFreeMiniCompletionPacket(a1);
}
