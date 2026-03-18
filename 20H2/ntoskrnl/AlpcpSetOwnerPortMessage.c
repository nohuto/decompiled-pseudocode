/*
 * XREFs of AlpcpSetOwnerPortMessage @ 0x1405ED5E0
 * Callers:
 *     AlpcpDispatchConnectionRequest @ 0x1405E6138 (AlpcpDispatchConnectionRequest.c)
 *     AlpcpDispatchCloseMessage @ 0x1405E62A0 (AlpcpDispatchCloseMessage.c)
 *     AlpcpSendLegacySynchronousRequest @ 0x1405E6A28 (AlpcpSendLegacySynchronousRequest.c)
 *     AlpcpReplyLegacySynchronousRequest @ 0x1405E917C (AlpcpReplyLegacySynchronousRequest.c)
 *     AlpcpDispatchReplyToPort @ 0x1405EAB5C (AlpcpDispatchReplyToPort.c)
 *     AlpcpDispatchReplyToWaitingThread @ 0x1405EB9E0 (AlpcpDispatchReplyToWaitingThread.c)
 *     AlpcpDispatchNewMessage @ 0x1405EC7F0 (AlpcpDispatchNewMessage.c)
 * Callees:
 *     ObfReferenceObject @ 0x140221300 (ObfReferenceObject.c)
 */

LONG_PTR __fastcall AlpcpSetOwnerPortMessage(__int64 a1, void *a2)
{
  LONG_PTR result; // rax

  result = ObfReferenceObject(a2);
  *(_DWORD *)(a1 + 40) |= 0x1000u;
  *(_QWORD *)(a1 + 24) = a2;
  return result;
}
