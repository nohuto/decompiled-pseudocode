/*
 * XREFs of PdcTaskClientRequest @ 0x14091BB00
 * Callers:
 *     PopPowerAggregatorSessionSwitchWorker @ 0x1408EEBC0 (PopPowerAggregatorSessionSwitchWorker.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLock @ 0x1402FC190 (ExfReleasePushLock.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     memset @ 0x140414300 (memset.c)
 *     PdcPortSendMessageSynchronously @ 0x140595A8C (PdcPortSendMessageSynchronously.c)
 *     PdcAcquireRwLockExclusive @ 0x14091BC2C (PdcAcquireRwLockExclusive.c)
 */

__int64 __fastcall PdcTaskClientRequest(__int64 a1, char a2)
{
  __int64 v2; // rdi
  int v4; // ebx
  signed __int64 *v5; // rsi
  int v6; // eax
  int v7; // eax
  int v8; // eax
  signed __int64 v9; // rax
  signed __int64 v10; // rdx
  signed __int64 v11; // rtt
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  _DWORD v16[200]; // [rsp+20h] [rbp-328h] BYREF

  v2 = PopSleepStudyTaskClientActivator;
  memset(v16, 0, sizeof(v16));
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
      goto LABEL_12;
    }
    v16[10] = 7;
    LOBYTE(v16[14]) = a2 != 0;
    PdcPortSendMessageSynchronously(*(_QWORD *)(v2 + 40), (__int64)v16);
    v4 = *(_DWORD *)(v2 + 52);
    if ( v4 < 0 )
      goto LABEL_16;
LABEL_12:
    v7 = *(_DWORD *)(v2 + 48);
    if ( a2 )
      v8 = v7 + 1;
    else
      v8 = v7 - 1;
    *(_DWORD *)(v2 + 48) = v8;
    goto LABEL_16;
  }
  v4 = -1073741823;
LABEL_16:
  *(_QWORD *)(v2 + 16) = 0LL;
  _m_prefetchw(v5);
  v9 = *v5;
  v10 = *v5 - 16;
  if ( (*v5 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v10 = 0LL;
  if ( (v9 & 2) != 0 || (v11 = *v5, v11 != _InterlockedCompareExchange64(v5, v10, v9)) )
    ExfReleasePushLock((_QWORD *)(v2 + 8));
  KeAbPostRelease(v2 + 8);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v12, v13, v14);
  return (unsigned int)v4;
}
