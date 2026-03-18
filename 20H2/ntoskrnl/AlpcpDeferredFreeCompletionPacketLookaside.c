/*
 * XREFs of AlpcpDeferredFreeCompletionPacketLookaside @ 0x14035DA64
 * Callers:
 *     AlpcpLookasidePacketCallbackRoutine @ 0x14035BC20 (AlpcpLookasidePacketCallbackRoutine.c)
 *     AlpcpFreeCompletionPacketLookaside @ 0x14035D8E8 (AlpcpFreeCompletionPacketLookaside.c)
 * Callees:
 *     IoFreeMiniCompletionPacket @ 0x140711120 (IoFreeMiniCompletionPacket.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

void __fastcall AlpcpDeferredFreeCompletionPacketLookaside(_QWORD *P)
{
  __int64 i; // rbx

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)P + 2); i = (unsigned int)(i + 1) )
    IoFreeMiniCompletionPacket(P[3 * i + 8]);
  ExFreePoolWithTag(P, 0);
}
