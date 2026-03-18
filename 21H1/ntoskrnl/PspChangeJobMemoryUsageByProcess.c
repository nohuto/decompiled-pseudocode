/*
 * XREFs of PspChangeJobMemoryUsageByProcess @ 0x1406B4DD0
 * Callers:
 *     MiReturnFullProcessCharges @ 0x14027D4B0 (MiReturnFullProcessCharges.c)
 *     MiChargeFullProcessCommitment @ 0x1405EDAE0 (MiChargeFullProcessCommitment.c)
 *     MmDeleteProcessAddressSpace @ 0x14066299C (MmDeleteProcessAddressSpace.c)
 *     MmAssignProcessToJob @ 0x140671C70 (MmAssignProcessToJob.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     PspSendJobNotification @ 0x1403144BC (PspSendJobNotification.c)
 *     KiCheckForKernelApcDelivery @ 0x1403599E0 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     PspUnlockJobMemoryLimitsExclusive @ 0x1406620C4 (PspUnlockJobMemoryLimitsExclusive.c)
 *     PspScheduleEnforcementWorker @ 0x1406B5140 (PspScheduleEnforcementWorker.c)
 */

char __fastcall PspChangeJobMemoryUsageByProcess(char a1, __int64 a2, unsigned __int64 a3, _DWORD *a4)
{
  __int64 v4; // r15
  char v6; // r12
  struct _KTHREAD *CurrentThread; // r13
  __int64 v8; // rbp
  _DWORD *v9; // rax
  __int64 v10; // rdi
  unsigned __int64 v11; // r14
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rsi
  int v14; // ecx
  int v15; // eax
  __int64 v16; // rcx
  unsigned __int64 v19; // rax
  int v20; // edx
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rcx
  $C774EFD68449142D8271B1EC1EB7FB26 *v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 i; // rdi
  int v28; // [rsp+20h] [rbp-68h]
  __int64 v29; // [rsp+28h] [rbp-60h]
  __int64 v30; // [rsp+30h] [rbp-58h]
  __int64 v31; // [rsp+30h] [rbp-58h]
  unsigned __int64 v32; // [rsp+38h] [rbp-50h]
  unsigned __int64 v34; // [rsp+A0h] [rbp+18h]
  _DWORD *v35; // [rsp+A8h] [rbp+20h]

  v35 = a4;
  v34 = a3;
  v4 = a2;
  if ( (a1 & 2) == 0 || !*(_QWORD *)(a3 + 1296) )
    return 1;
  v6 = 1;
  CurrentThread = KeGetCurrentThread();
  v28 = 0;
  v29 = 0LL;
  v30 = *(_QWORD *)(*(_QWORD *)(a3 + 1256) + 1080LL);
  if ( CurrentThread )
    --CurrentThread->SpecialApcDisable;
  if ( v30 )
  {
    ExAcquirePushLockExclusiveEx(v30 + 1032, 0LL);
    a4 = v35;
    a3 = v34;
  }
  v8 = v30;
  if ( (a1 & 4) != 0 )
  {
    v9 = a4;
    a4 = 0LL;
    v35 = 0LL;
  }
  else
  {
    v9 = *(_DWORD **)(a3 + 1256);
  }
  v31 = (__int64)v9;
  v10 = (__int64)v9;
  if ( v9 != a4 )
  {
    LODWORD(a2) = 1;
    while ( 1 )
    {
      v11 = 0LL;
      if ( v10 != v8 )
      {
        ExAcquirePushLockExclusiveEx(v10 + 1032, 0LL);
        LODWORD(a2) = 1;
      }
      v12 = *(_QWORD *)(v10 + 976);
      v13 = v12 + v4;
      if ( v4 <= 0 )
      {
        if ( v13 > v12 )
        {
          PspUnlockJobMemoryLimitsExclusive(v10, v8, 0LL, (__int64)a4);
          v26 = v10;
          if ( !v6 )
            v26 = v29;
          v6 = 0;
          v29 = v26;
          goto LABEL_29;
        }
      }
      else if ( v13 < v12 )
      {
        PspUnlockJobMemoryLimitsExclusive(v10, v8, 0LL, (__int64)a4);
        v25 = v10;
        if ( !v6 )
          v25 = v29;
        v6 = 0;
        v29 = v25;
        goto LABEL_29;
      }
      v14 = 0;
      v15 = *(_DWORD *)(v10 + 256);
      a3 = v13 + *(_QWORD *)(v10 + 1336);
      v32 = a3;
      if ( (v15 & 0x200000) != 0 && a3 > *(_QWORD *)(v10 + 592) && v4 > 0 )
        v14 = a2;
      if ( (v15 & 0x200) != 0 && v13 > *(_QWORD *)(v10 + 584) && v4 > 0 || v14 )
        break;
      if ( v6 )
      {
        *(_QWORD *)(v10 + 976) = v13;
LABEL_20:
        if ( v6 )
        {
          v16 = *(_QWORD *)(v10 + 984);
          if ( v16 )
          {
            v19 = *(_QWORD *)(v16 + 40);
            if ( (*(_DWORD *)v16 & 0x200000) == 0 )
              a3 = v13;
            v20 = 0;
            if ( v19 && v4 > 0 && a3 > v19 )
              v20 = 512;
            v21 = *(_QWORD *)(v16 + 32);
            if ( v21 && v4 <= 0 && a3 < v21 )
              v20 |= 0x8000u;
            v28 |= v20;
          }
        }
      }
      if ( v4 > 0 )
      {
        if ( v13 > *(_QWORD *)(v10 + 608) )
          *(_QWORD *)(v10 + 608) = v13;
        v11 = *(_QWORD *)(v34 + 1608);
      }
      if ( v10 != v8 )
      {
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v10 + 1032), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(v10 + 1032);
        KeAbPostRelease(v10 + 1032);
      }
      if ( v11 && v11 > *(_QWORD *)(v10 + 600) )
      {
        _m_prefetchw((const void *)(v10 + 600));
        v22 = *(_QWORD *)(v10 + 600);
        do
        {
          v23 = v22;
          v22 = _InterlockedCompareExchange64((volatile signed __int64 *)(v10 + 600), v11, v22);
        }
        while ( v22 != v23 && v11 > v22 );
      }
LABEL_29:
      v10 = *(_QWORD *)(v10 + 1072);
      a2 = 1LL;
      if ( (_DWORD *)v10 == v35 )
      {
        if ( v6 )
        {
          if ( v28 )
            PspScheduleEnforcementWorker(v8);
        }
        else
        {
          for ( i = v31; i != v29; i = *(_QWORD *)(i + 1072) )
          {
            if ( i != v8 )
              ExAcquirePushLockExclusiveEx(i + 1032, 0LL);
            *(_QWORD *)(i + 976) -= v4;
            PspUnlockJobMemoryLimitsExclusive(i, v8, 0LL, (__int64)a4);
          }
        }
        goto LABEL_33;
      }
    }
    if ( (a1 & 1) != 0 )
    {
      *(_QWORD *)(v10 + 976) = v13;
    }
    else if ( v6 )
    {
      v29 = v10;
      v6 = 0;
    }
    if ( *(_QWORD *)(v10 + 456) && (*(_DWORD *)(v10 + 876) & 0x200) != 0 && (*(_DWORD *)(v34 + 1120) & 0x24) == 4 )
    {
      _InterlockedOr((volatile signed __int32 *)(v34 + 1120), 0x20u);
      PspSendJobNotification(v10, 10LL, *(_QWORD *)(v34 + 1088), 1);
      a3 = v32;
    }
    goto LABEL_20;
  }
LABEL_33:
  if ( v8 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v8 + 1032), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v8 + 1032);
    KeAbPostRelease(v8 + 1032);
  }
  if ( CurrentThread )
  {
    if ( CurrentThread->SpecialApcDisable++ == -1 )
    {
      v24 = &CurrentThread->152;
      if ( ($C774EFD68449142D8271B1EC1EB7FB26 *)v24->ApcState.ApcListHead[0].Flink != v24 )
        KiCheckForKernelApcDelivery((__int64)v24, a2, a3, a4);
    }
  }
  return v6;
}
