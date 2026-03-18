/*
 * XREFs of AlpcpSetOwnerPortMessage @ 0x1407AB750
 * Callers:
 *     AlpcpReplyLegacySynchronousRequest @ 0x1406652DC (AlpcpReplyLegacySynchronousRequest.c)
 *     AlpcpSendLegacySynchronousRequest @ 0x1406666B4 (AlpcpSendLegacySynchronousRequest.c)
 *     AlpcpDispatchConnectionRequest @ 0x140667F24 (AlpcpDispatchConnectionRequest.c)
 *     AlpcpDispatchCloseMessage @ 0x14074E85C (AlpcpDispatchCloseMessage.c)
 *     AlpcpDispatchReplyToPort @ 0x1407A6CE4 (AlpcpDispatchReplyToPort.c)
 *     AlpcpDispatchReplyToWaitingThread @ 0x1407A9A80 (AlpcpDispatchReplyToWaitingThread.c)
 *     AlpcpDispatchNewMessage @ 0x1407AA950 (AlpcpDispatchNewMessage.c)
 * Callees:
 *     ObfReferenceObject @ 0x140347CF0 (ObfReferenceObject.c)
 */

LONG_PTR __fastcall AlpcpSetOwnerPortMessage(__int64 a1, void *a2)
{
  LONG_PTR result; // rax

  result = ObfReferenceObject(a2);
  *(_DWORD *)(a1 + 40) |= 0x1000u;
  *(_QWORD *)(a1 + 24) = a2;
  return result;
}
