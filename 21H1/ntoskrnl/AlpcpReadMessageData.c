/*
 * XREFs of AlpcpReadMessageData @ 0x14060CE80
 * Callers:
 *     AlpcpReceiveMessage @ 0x14060AA80 (AlpcpReceiveMessage.c)
 *     AlpcpProcessSynchronousRequest @ 0x14060C5B0 (AlpcpProcessSynchronousRequest.c)
 *     AlpcpCompleteDispatchMessage @ 0x14060DDF0 (AlpcpCompleteDispatchMessage.c)
 *     AlpcpReceiveLegacyMessage @ 0x140611980 (AlpcpReceiveLegacyMessage.c)
 *     AlpcpReceiveLegacyConnectionReply @ 0x140645C40 (AlpcpReceiveLegacyConnectionReply.c)
 *     AlpcpProcessConnectionRequest @ 0x1406468E8 (AlpcpProcessConnectionRequest.c)
 * Callees:
 *     memmove @ 0x140408CC0 (memmove.c)
 *     AlpcpAvailableBufferSize @ 0x1405C6D34 (AlpcpAvailableBufferSize.c)
 */

void *__fastcall AlpcpReadMessageData(__int64 a1, char *a2)
{
  size_t v4; // rax
  __int64 v5; // rcx
  size_t v6; // rbx
  const void *v7; // rdx
  size_t v8; // r14
  char *v9; // rcx

  v4 = AlpcpAvailableBufferSize(a1);
  v6 = *(unsigned __int16 *)(v5 + 240);
  v7 = (const void *)(v5 + 280);
  v8 = v4;
  v9 = a2;
  if ( v6 > v4 )
  {
    memmove(a2, v7, v4);
    v7 = *(const void **)(a1 + 224);
    v9 = &a2[v8];
    v6 -= v8;
  }
  return memmove(v9, v7, v6);
}
