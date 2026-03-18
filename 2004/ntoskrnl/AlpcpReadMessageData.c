/*
 * XREFs of AlpcpReadMessageData @ 0x140684FF0
 * Callers:
 *     AlpcpProcessConnectionRequest @ 0x140628D28 (AlpcpProcessConnectionRequest.c)
 *     AlpcpReceiveLegacyConnectionReply @ 0x14062E850 (AlpcpReceiveLegacyConnectionReply.c)
 *     AlpcpReceiveMessage @ 0x140682BD0 (AlpcpReceiveMessage.c)
 *     AlpcpProcessSynchronousRequest @ 0x140684720 (AlpcpProcessSynchronousRequest.c)
 *     AlpcpCompleteDispatchMessage @ 0x140685F60 (AlpcpCompleteDispatchMessage.c)
 *     AlpcpReceiveLegacyMessage @ 0x140689B00 (AlpcpReceiveLegacyMessage.c)
 * Callees:
 *     memmove @ 0x140409FC0 (memmove.c)
 *     AlpcpAvailableBufferSize @ 0x1405C7D34 (AlpcpAvailableBufferSize.c)
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
