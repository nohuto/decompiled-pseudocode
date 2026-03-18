/*
 * XREFs of AlpcpSetOwnerPortMessage @ 0x14062D914
 * Callers:
 *     AlpcpDispatchCloseMessage @ 0x140629F14 (AlpcpDispatchCloseMessage.c)
 *     AlpcpSendLegacySynchronousRequest @ 0x14062C2F8 (AlpcpSendLegacySynchronousRequest.c)
 *     AlpcpDispatchConnectionRequest @ 0x14062CBDC (AlpcpDispatchConnectionRequest.c)
 *     AlpcpDispatchReplyToPort @ 0x14062D600 (AlpcpDispatchReplyToPort.c)
 *     AlpcpDispatchReplyToWaitingThread @ 0x140684350 (AlpcpDispatchReplyToWaitingThread.c)
 * Callees:
 *     ObfReferenceObject @ 0x140208380 (ObfReferenceObject.c)
 */

__int64 __fastcall AlpcpSetOwnerPortMessage(__int64 a1, void *a2, unsigned __int8 a3)
{
  int v3; // esi
  __int64 result; // rax

  v3 = a3;
  if ( a3 )
    ObfReferenceObject(a2);
  *(_QWORD *)(a1 + 24) = a2;
  result = (*(_DWORD *)(a1 + 40) ^ (v3 << 12)) & 0x1000;
  *(_DWORD *)(a1 + 40) ^= result;
  return result;
}
