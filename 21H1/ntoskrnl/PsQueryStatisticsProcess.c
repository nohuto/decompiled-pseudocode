/*
 * XREFs of PsQueryStatisticsProcess @ 0x140616850
 * Callers:
 *     EtwpPsProvTraceProcess @ 0x1405D879C (EtwpPsProvTraceProcess.c)
 *     NtQueryInformationProcess @ 0x1405DBB20 (NtQueryInformationProcess.c)
 *     PspQueryProcessAccountingInformationCallback @ 0x1405EF9A0 (PspQueryProcessAccountingInformationCallback.c)
 *     PspEnforceLimitsProcessCallback @ 0x140616530 (PspEnforceLimitsProcessCallback.c)
 *     ExpCopyProcessInfo @ 0x1406165B0 (ExpCopyProcessInfo.c)
 *     PspRemoveProcessFromJobChain @ 0x14065DF9C (PspRemoveProcessFromJobChain.c)
 *     EtwTraceAppStateChange @ 0x140664690 (EtwTraceAppStateChange.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     KeQueryValuesThread @ 0x14025B510 (KeQueryValuesThread.c)
 *     ExAcquirePushLockSharedEx @ 0x140260BA0 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x14035A580 (ExfReleasePushLockShared.c)
 */

__int64 __fastcall PsQueryStatisticsProcess(__int64 a1, _QWORD *a2)
{
  __int64 v4; // r8
  _DWORD *v5; // r9
  unsigned int v6; // ebp
  unsigned int v7; // r14d
  unsigned int v8; // r15d
  __int64 v9; // r12
  __int64 v10; // r13
  _QWORD *i; // rsi
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rcx
  __int64 result; // rax
  __int128 v17; // [rsp+20h] [rbp-58h] BYREF
  __int128 v18; // [rsp+30h] [rbp-48h]
  signed __int64 *BugCheckParameter2; // [rsp+88h] [rbp+10h]
  struct _KTHREAD *CurrentThread; // [rsp+90h] [rbp+18h]

  CurrentThread = KeGetCurrentThread();
  v17 = 0LL;
  --CurrentThread->KernelApcDisable;
  v18 = 0LL;
  BugCheckParameter2 = (signed __int64 *)(a1 + 2144);
  ExAcquirePushLockSharedEx(a1 + 2144, 0LL);
  v6 = *(_DWORD *)(a1 + 892);
  v7 = *(_DWORD *)(a1 + 896);
  v8 = *(_DWORD *)(a1 + 900);
  v9 = *(_QWORD *)(a1 + 1000);
  v10 = *(_QWORD *)(a1 + 1008);
  a2[3] = *(_QWORD *)(a1 + 864);
  a2[4] = *(_QWORD *)(a1 + 872);
  a2[5] = *(_QWORD *)(a1 + 1552);
  a2[6] = *(_QWORD *)(a1 + 1560);
  a2[7] = *(_QWORD *)(a1 + 1568);
  a2[8] = *(_QWORD *)(a1 + 1576);
  a2[9] = *(_QWORD *)(a1 + 1584);
  a2[10] = *(_QWORD *)(a1 + 1592);
  for ( i = *(_QWORD **)(a1 + 1504); i != (_QWORD *)(a1 + 1504); v10 += *((_QWORD *)&v18 + 1) )
  {
    v6 += *((_DWORD *)i - 151);
    v7 += *((_DWORD *)i - 131);
    KeQueryValuesThread((__int64)(i - 157), &v17, v4, v5);
    a2[3] += *(i - 148);
    a2[4] += *((unsigned int *)i - 229);
    a2[5] += *(i - 45);
    a2[6] += *(i - 44);
    a2[7] += *(i - 43);
    a2[8] += *(i - 42);
    a2[9] += *(i - 41);
    a2[10] += *(i - 40);
    i = (_QWORD *)*i;
    v8 += DWORD1(v17);
    v9 += v18;
  }
  if ( _InterlockedCompareExchange64(BugCheckParameter2, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(BugCheckParameter2);
  KeAbPostRelease((ULONG_PTR)BugCheckParameter2);
  KeLeaveCriticalRegionThread((__int64)CurrentThread, v12, v13, v14);
  v15 = KeMaximumIncrement;
  *a2 = KeMaximumIncrement * (unsigned __int64)v6;
  a2[1] = v15 * v7;
  a2[2] = v15 * v8;
  result = v9 * (unsigned int)v15;
  a2[11] = result;
  a2[12] = v10 * v15;
  return result;
}
