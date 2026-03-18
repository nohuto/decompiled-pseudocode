/*
 * XREFs of EtwpRealtimeDisconnectConsumer @ 0x140677748
 * Callers:
 *     EtwpRealtimeDisconnectConsumerByHandle @ 0x140677290 (EtwpRealtimeDisconnectConsumerByHandle.c)
 *     EtwpCloseRealTimeConnectionObject @ 0x140677300 (EtwpCloseRealTimeConnectionObject.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140260EE0 (ExReleasePushLockEx.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x1405F3B64 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpReleaseLoggerContext @ 0x1405F3C38 (EtwpReleaseLoggerContext.c)
 *     EtwpSynchronizeWithLogger @ 0x1406777EC (EtwpSynchronizeWithLogger.c)
 */

__int64 __fastcall EtwpRealtimeDisconnectConsumer(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rsi
  ULONG_PTR v4; // rbx
  unsigned int v5; // ebx

  if ( (*(_BYTE *)(a1 + 90) & 5) != 0 )
  {
    return (unsigned int)-2147483611;
  }
  else
  {
    v2 = EtwpAcquireLoggerContextByLoggerId(*(_QWORD *)(a1 + 152), *(unsigned __int16 *)(a1 + 88), 1);
    v3 = v2;
    if ( v2 )
    {
      v4 = v2 + 704;
      ExAcquirePushLockExclusiveEx(v2 + 704, 0LL);
      *(_QWORD *)(v3 + 368) = a1;
      ExReleasePushLockEx(v4, 0LL);
      v5 = EtwpSynchronizeWithLogger(v3, 16LL);
      EtwpSynchronizeWithLogger(v3, 4LL);
      EtwpReleaseLoggerContext((unsigned int *)v3, 1);
    }
    else
    {
      return (unsigned int)-1073741811;
    }
  }
  return v5;
}
