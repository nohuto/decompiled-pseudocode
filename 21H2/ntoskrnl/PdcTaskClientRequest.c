/*
 * XREFs of PdcTaskClientRequest @ 0x1409C56F0
 * Callers:
 *     PopPowerAggregatorSessionSwitchWorker @ 0x140995E60 (PopPowerAggregatorSessionSwitchWorker.c)
 * Callees:
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402F9540 (KiLeaveCriticalRegionUnsafe.c)
 *     ExfReleasePushLock @ 0x140359E10 (ExfReleasePushLock.c)
 *     memset @ 0x140435E00 (memset.c)
 *     PdcPortSendMessageSynchronously @ 0x1405F3ADC (PdcPortSendMessageSynchronously.c)
 *     PdcAcquireRwLockExclusive @ 0x1409C581C (PdcAcquireRwLockExclusive.c)
 */

__int64 __fastcall PdcTaskClientRequest(__int64 a1, char a2)
{
  __int64 v2; // rbx
  int v4; // edi
  signed __int64 *v5; // rsi
  int v6; // eax
  int v7; // eax
  signed __int64 v8; // rax
  signed __int64 v9; // rdx
  signed __int64 v10; // rtt
  _DWORD v12[200]; // [rsp+20h] [rbp-328h] BYREF

  v2 = PopSleepStudyTaskClientActivator;
  memset(v12, 0, sizeof(v12));
  if ( !PopSleepStudyTaskClientActivator || *(_DWORD *)PopSleepStudyTaskClientActivator != 1667458128 )
    return (unsigned int)-1073741585;
  v5 = (signed __int64 *)(PopSleepStudyTaskClientActivator + 8);
  PdcAcquireRwLockExclusive(PopSleepStudyTaskClientActivator + 8);
  if ( a2 || *(_DWORD *)(v2 + 48) )
  {
    v6 = *(_DWORD *)(v2 + 48);
    v4 = 0;
    if ( a2 )
    {
      if ( v6 )
        goto LABEL_12;
    }
    else if ( v6 != 1 )
    {
      goto LABEL_13;
    }
    v12[10] = 7;
    LOBYTE(v12[14]) = a2 != 0;
    PdcPortSendMessageSynchronously(*(_QWORD *)(v2 + 40), (__int64)v12);
    v4 = *(_DWORD *)(v2 + 52);
    if ( v4 < 0 )
      goto LABEL_16;
LABEL_12:
    v6 = *(_DWORD *)(v2 + 48);
    if ( a2 )
    {
      v7 = v6 + 1;
      goto LABEL_15;
    }
LABEL_13:
    v7 = v6 - 1;
LABEL_15:
    *(_DWORD *)(v2 + 48) = v7;
    goto LABEL_16;
  }
  v4 = -1073741823;
LABEL_16:
  *(_QWORD *)(v2 + 16) = 0LL;
  _m_prefetchw(v5);
  v8 = *v5;
  v9 = *v5 - 16;
  if ( (*v5 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v9 = 0LL;
  if ( (v8 & 2) != 0 || (v10 = *v5, v10 != _InterlockedCompareExchange64(v5, v9, v8)) )
    ExfReleasePushLock((_QWORD *)(v2 + 8));
  KeAbPostRelease(v2 + 8);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return (unsigned int)v4;
}
