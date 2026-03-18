/*
 * XREFs of EtwpCancelMemoryPreservation @ 0x140944F80
 * Callers:
 *     EtwpFreeLoggerContext @ 0x1406CB650 (EtwpFreeLoggerContext.c)
 *     EtwpKsrCallback @ 0x140945190 (EtwpKsrCallback.c)
 *     EtwpSetSoftRestartInformation @ 0x140945DC4 (EtwpSetSoftRestartInformation.c)
 * Callees:
 *     EtwpFreeTraceBuffer @ 0x1402FFAEC (EtwpFreeTraceBuffer.c)
 */

void __fastcall EtwpCancelMemoryPreservation(__int64 a1)
{
  __int64 v1; // rbx
  char *v3; // rdx

  v1 = *(_QWORD *)(a1 + 1104);
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
