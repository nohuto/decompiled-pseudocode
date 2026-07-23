/*
 * XREFs of EtwpRealtimeDisconnectConsumer @ 0x1406182F8
 * Callers:
 *     EtwpRealtimeDisconnectConsumerByHandle @ 0x140617E44 (EtwpRealtimeDisconnectConsumerByHandle.c)
 *     EtwpCloseRealTimeConnectionObject @ 0x140617EB0 (EtwpCloseRealTimeConnectionObject.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140355BE0 (ExReleasePushLockEx.c)
 *     EtwpSynchronizeWithLogger @ 0x14061839C (EtwpSynchronizeWithLogger.c)
 *     EtwpReleaseLoggerContext @ 0x140638848 (EtwpReleaseLoggerContext.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x140638894 (EtwpAcquireLoggerContextByLoggerId.c)
 */

__int64 __fastcall EtwpRealtimeDisconnectConsumer(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // rsi
  ULONG_PTR v6; // rbx
  unsigned int v7; // ebx
  __int64 v8; // rdx

  if ( (*(_BYTE *)(a1 + 90) & 5) != 0 )
  {
    return (unsigned int)-2147483611;
  }
  else
  {
    LOBYTE(a3) = 1;
    v4 = EtwpAcquireLoggerContextByLoggerId(*(_QWORD *)(a1 + 152), *(unsigned __int16 *)(a1 + 88), a3);
    v5 = v4;
    if ( v4 )
    {
      v6 = v4 + 704;
      ExAcquirePushLockExclusiveEx(v4 + 704, 0LL);
      *(_QWORD *)(v5 + 368) = a1;
      ExReleasePushLockEx(v6, 0LL);
      v7 = EtwpSynchronizeWithLogger(v5, 16LL);
      EtwpSynchronizeWithLogger(v5, 4LL);
      LOBYTE(v8) = 1;
      EtwpReleaseLoggerContext(v5, v8);
    }
    else
    {
      return (unsigned int)-1073741811;
    }
  }
  return v7;
}
