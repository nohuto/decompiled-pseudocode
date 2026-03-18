/*
 * XREFs of AlpcpReadMessageData @ 0x1405EEE40
 * Callers:
 *     AlpcpProcessConnectionRequest @ 0x1405E5C98 (AlpcpProcessConnectionRequest.c)
 *     AlpcpCompleteDispatchMessage @ 0x1405ECB50 (AlpcpCompleteDispatchMessage.c)
 *     AlpcpProcessSynchronousRequest @ 0x1405EE4E0 (AlpcpProcessSynchronousRequest.c)
 *     AlpcpReceiveMessage @ 0x1405EF2B0 (AlpcpReceiveMessage.c)
 *     AlpcpReceiveLegacyMessage @ 0x1405F26F0 (AlpcpReceiveLegacyMessage.c)
 *     AlpcpReceiveLegacyConnectionReply @ 0x1406BFF90 (AlpcpReceiveLegacyConnectionReply.c)
 * Callees:
 *     memmove @ 0x140411040 (memmove.c)
 *     AlpcpAvailableBufferSize @ 0x1405CD054 (AlpcpAvailableBufferSize.c)
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
