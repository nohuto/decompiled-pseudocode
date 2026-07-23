/*
 * XREFs of EtwpSavePersistedLoggersWorker @ 0x14094940C
 * Callers:
 *     EtwpSavePersistedLoggers @ 0x1409493DC (EtwpSavePersistedLoggers.c)
 * Callees:
 *     EtwpSavePersistedLogger @ 0x140948E5C (EtwpSavePersistedLogger.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 EtwpSavePersistedLoggersWorker()
{
  char *PoolWithTag; // rax
  __int64 v1; // rdx
  char *v2; // rbx
  int v3; // esi
  __int64 i; // rdi
  int v5; // eax
  int v7; // [rsp+50h] [rbp+8h] BYREF

  v7 = 0;
  PoolWithTag = (char *)ExAllocatePoolWithTag(
                          PagedPool,
                          8LL * *(unsigned int *)(EtwpHostSiloState + 16) + 4112,
                          0x4B777445u);
  v2 = PoolWithTag;
  if ( !PoolWithTag )
    goto LABEL_9;
  *(_DWORD *)PoolWithTag = 0;
  *((_QWORD *)PoolWithTag + 1) = PoolWithTag + 4112;
  v3 = KsrEnumeratePersistedMemory(EtwpKsrGuid, EtwpKsrMemoryEnumCallback, PoolWithTag);
  if ( v3 >= 0 )
  {
    for ( i = 0LL; (unsigned int)i < *(_DWORD *)v2; i = (unsigned int)(i + 1) )
    {
      v5 = KsrQueryMetadata(EtwpKsrGuid, *(_QWORD *)(*((_QWORD *)v2 + 1) + 8 * i), v2 + 16, 4096LL, &v7);
      if ( v5 >= 0 )
        EtwpSavePersistedLogger((unsigned int *)v2 + 4, *(_QWORD *)(*((_QWORD *)v2 + 1) + 8 * i));
      else
        v3 = v5;
    }
  }
  ExFreePoolWithTag(v2, 0);
  if ( v3 < 0 )
  {
LABEL_9:
    LOBYTE(v1) = 1;
    KsrFreePersistedMemory(EtwpKsrGuid, v1);
  }
  return (unsigned int)_InterlockedExchange(&EtwpLoggerSaveState, 2);
}
