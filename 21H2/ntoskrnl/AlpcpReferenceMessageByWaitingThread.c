/*
 * XREFs of AlpcpReferenceMessageByWaitingThread @ 0x140967470
 * Callers:
 *     AlpcpPortQueryServerInfo @ 0x140966F60 (AlpcpPortQueryServerInfo.c)
 * Callees:
 *     ObReferenceObjectSafe @ 0x1402240B0 (ObReferenceObjectSafe.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     AlpcpReferenceMessageByWaitingThreadPort @ 0x140967584 (AlpcpReferenceMessageByWaitingThreadPort.c)
 */

__int64 __fastcall AlpcpReferenceMessageByWaitingThread(__int64 a1, __int64 *a2)
{
  __int64 v4; // rbp
  __int64 *v5; // rdi
  unsigned int v6; // r14d
  __int64 *i; // rsi
  __int64 result; // rax

  v4 = 0LL;
  v5 = 0LL;
  v6 = -1073741275;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&AlpcpPortListLock, 0LL);
  for ( i = (__int64 *)AlpcpPortList; i != &AlpcpPortList; i = (__int64 *)*i )
  {
    if ( ObReferenceObjectSafe((__int64)i) )
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&AlpcpPortListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(&AlpcpPortListLock);
      KeAbPostRelease((ULONG_PTR)&AlpcpPortListLock);
      if ( v5 )
        ObfDereferenceObject(v5);
      v5 = i;
      v4 = AlpcpReferenceMessageByWaitingThreadPort(a1, i);
      if ( v4 )
      {
        v6 = 0;
        goto LABEL_14;
      }
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&AlpcpPortListLock, 0LL);
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&AlpcpPortListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&AlpcpPortListLock);
  KeAbPostRelease((ULONG_PTR)&AlpcpPortListLock);
LABEL_14:
  if ( v5 )
    ObfDereferenceObject(v5);
  result = v6;
  *a2 = v4;
  return result;
}
