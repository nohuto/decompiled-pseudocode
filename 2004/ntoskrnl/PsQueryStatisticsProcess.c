/*
 * XREFs of PsQueryStatisticsProcess @ 0x14069B8D0
 * Callers:
 *     EtwTraceAppStateChange @ 0x14061EF70 (EtwTraceAppStateChange.c)
 *     PspRemoveProcessFromJobChain @ 0x14065A624 (PspRemoveProcessFromJobChain.c)
 *     EtwpPsProvTraceProcess @ 0x14065EA9C (EtwpPsProvTraceProcess.c)
 *     NtQueryInformationProcess @ 0x140661E20 (NtQueryInformationProcess.c)
 *     PspQueryProcessAccountingInformationCallback @ 0x140698EB0 (PspQueryProcessAccountingInformationCallback.c)
 *     PspEnforceLimitsProcessCallback @ 0x14069B550 (PspEnforceLimitsProcessCallback.c)
 *     ExpCopyProcessInfo @ 0x14069B630 (ExpCopyProcessInfo.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140207C80 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14020ACF0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLockShared @ 0x1402748E0 (ExfReleasePushLockShared.c)
 *     KeQueryValuesThread @ 0x1402D2B80 (KeQueryValuesThread.c)
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
  __int64 v12; // rcx
  __int64 result; // rax
  __int128 v14; // [rsp+20h] [rbp-58h] BYREF
  __int128 v15; // [rsp+30h] [rbp-48h]
  signed __int64 *BugCheckParameter2; // [rsp+88h] [rbp+10h]
  struct _KTHREAD *CurrentThread; // [rsp+90h] [rbp+18h]

  CurrentThread = KeGetCurrentThread();
  v14 = 0LL;
  --CurrentThread->KernelApcDisable;
  v15 = 0LL;
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
  for ( i = *(_QWORD **)(a1 + 1504); i != (_QWORD *)(a1 + 1504); v10 += *((_QWORD *)&v15 + 1) )
  {
    v6 += *((_DWORD *)i - 151);
    v7 += *((_DWORD *)i - 131);
    KeQueryValuesThread((__int64)(i - 157), &v14, v4, v5);
    a2[3] += *(i - 148);
    a2[4] += *((unsigned int *)i - 229);
    a2[5] += *(i - 45);
    a2[6] += *(i - 44);
    a2[7] += *(i - 43);
    a2[8] += *(i - 42);
    a2[9] += *(i - 41);
    a2[10] += *(i - 40);
    i = (_QWORD *)*i;
    v8 += DWORD1(v14);
    v9 += v15;
  }
  if ( _InterlockedCompareExchange64(BugCheckParameter2, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(BugCheckParameter2);
  KeAbPostRelease((ULONG_PTR)BugCheckParameter2);
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  v12 = KeMaximumIncrement;
  *a2 = KeMaximumIncrement * (unsigned __int64)v6;
  a2[1] = v12 * v7;
  a2[2] = v12 * v8;
  result = v9 * (unsigned int)v12;
  a2[11] = result;
  a2[12] = v10 * v12;
  return result;
}
