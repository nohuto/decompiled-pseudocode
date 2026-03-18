/*
 * XREFs of AlpcpSetOwnerPortMessage @ 0x14064B4C4
 * Callers:
 *     AlpcpDispatchReplyToWaitingThread @ 0x14060C1E0 (AlpcpDispatchReplyToWaitingThread.c)
 *     AlpcpDispatchCloseMessage @ 0x140647AC4 (AlpcpDispatchCloseMessage.c)
 *     AlpcpSendLegacySynchronousRequest @ 0x140649EA8 (AlpcpSendLegacySynchronousRequest.c)
 *     AlpcpDispatchConnectionRequest @ 0x14064A78C (AlpcpDispatchConnectionRequest.c)
 *     AlpcpDispatchReplyToPort @ 0x14064B1B0 (AlpcpDispatchReplyToPort.c)
 * Callees:
 *     ObfReferenceObject @ 0x1402612A0 (ObfReferenceObject.c)
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
