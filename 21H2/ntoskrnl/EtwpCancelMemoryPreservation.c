/*
 * XREFs of EtwpCancelMemoryPreservation @ 0x140948510
 * Callers:
 *     EtwpFreeLoggerContext @ 0x1406B51BC (EtwpFreeLoggerContext.c)
 *     EtwpKsrCallback @ 0x140948720 (EtwpKsrCallback.c)
 *     EtwpSetSoftRestartInformation @ 0x140949350 (EtwpSetSoftRestartInformation.c)
 * Callees:
 *     EtwpFreeTraceBuffer @ 0x1402C7EC4 (EtwpFreeTraceBuffer.c)
 */

void __fastcall EtwpCancelMemoryPreservation(__int64 a1)
{
  __int64 v1; // rbx
  char *v3; // rdx

  v1 = *(_QWORD *)(a1 + 1072);
  if ( *(_BYTE *)(v1 + 33) )
  {
    KsrFreePersistedMemoryBlock(EtwpKsrGuid, *(_QWORD *)v1, 0LL);
    v3 = *(char **)(v1 + 8);
    *(_QWORD *)v1 = 0LL;
    if ( v3 )
    {
      EtwpFreeTraceBuffer(a1, v3);
      *(_QWORD *)(v1 + 8) = 0LL;
    }
    *(_BYTE *)(v1 + 33) = 0;
  }
}
