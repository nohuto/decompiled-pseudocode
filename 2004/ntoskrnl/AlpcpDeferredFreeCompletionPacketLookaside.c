/*
 * XREFs of AlpcpDeferredFreeCompletionPacketLookaside @ 0x14027A994
 * Callers:
 *     AlpcpLookasidePacketCallbackRoutine @ 0x140278E20 (AlpcpLookasidePacketCallbackRoutine.c)
 *     AlpcpFreeCompletionPacketLookaside @ 0x14027A810 (AlpcpFreeCompletionPacketLookaside.c)
 * Callees:
 *     IoFreeMiniCompletionPacket @ 0x140656940 (IoFreeMiniCompletionPacket.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

void __fastcall AlpcpDeferredFreeCompletionPacketLookaside(_QWORD *P)
{
  __int64 i; // rbx

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)P + 2); i = (unsigned int)(i + 1) )
    IoFreeMiniCompletionPacket(P[3 * i + 8]);
  ExFreePoolWithTag(P, 0);
}
