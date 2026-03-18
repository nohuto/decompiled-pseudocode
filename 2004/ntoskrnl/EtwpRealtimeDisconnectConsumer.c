/*
 * XREFs of EtwpRealtimeDisconnectConsumer @ 0x1406C6BB8
 * Callers:
 *     EtwpRealtimeDisconnectConsumerByHandle @ 0x1406C6704 (EtwpRealtimeDisconnectConsumerByHandle.c)
 *     EtwpCloseRealTimeConnectionObject @ 0x1406C6770 (EtwpCloseRealTimeConnectionObject.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140207AC0 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140207FC0 (ExReleasePushLockEx.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x14066BA28 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpReleaseLoggerContext @ 0x14066BAFC (EtwpReleaseLoggerContext.c)
 *     EtwpSynchronizeWithLogger @ 0x1406C6C5C (EtwpSynchronizeWithLogger.c)
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
