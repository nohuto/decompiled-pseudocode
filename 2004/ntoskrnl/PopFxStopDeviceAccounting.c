/*
 * XREFs of PopFxStopDeviceAccounting @ 0x140567BFC
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x14056B118 (PopCaptureSleepStudyStatistics.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140207C80 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14020ACF0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     KxReleaseSpinLock @ 0x14021E3C0 (KxReleaseSpinLock.c)
 *     ExfReleasePushLockShared @ 0x1402748E0 (ExfReleasePushLockShared.c)
 *     RtlInitUnicodeString @ 0x140298F60 (RtlInitUnicodeString.c)
 *     PopFxUpdateAccountingActiveTime @ 0x1402CA184 (PopFxUpdateAccountingActiveTime.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402D79F0 (KeAcquireSpinLockRaiseToDpc.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     PopFxMergeActiveTimeAccounting @ 0x1405662D4 (PopFxMergeActiveTimeAccounting.c)
 *     PopDiagTraceFxDeviceAccounting @ 0x14056CAD4 (PopDiagTraceFxDeviceAccounting.c)
 *     PopDiagTraceFxGlobalDeviceAccounting @ 0x14056D0EC (PopDiagTraceFxGlobalDeviceAccounting.c)
 *     PopDiagTraceFxComponentAccounting @ 0x1408E6D40 (PopDiagTraceFxComponentAccounting.c)
 */

unsigned __int64 PopFxStopDeviceAccounting()
{
  unsigned __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 v2; // r14
  ULONG_PTR v3; // rbx
  __int64 v4; // r12
  UNICODE_STRING *p_DestinationString; // r15
  unsigned __int64 v6; // rsi
  _QWORD *v7; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v11; // eax
  bool v12; // zf
  unsigned int v13; // esi
  __int64 v14; // r13
  unsigned __int64 v15; // r14
  _QWORD *v16; // rcx
  unsigned __int8 v17; // al
  struct _KPRCB *v18; // r8
  _DWORD *v19; // r10
  int v20; // eax
  KIRQL v21; // al
  __int64 v22; // rdi
  __int64 v23; // rsi
  unsigned __int64 v24; // rbx
  unsigned __int8 v25; // al
  struct _KPRCB *v26; // r10
  int v27; // eax
  _DWORD *v28; // r9
  unsigned __int64 v29; // [rsp+30h] [rbp-98h]
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-90h] BYREF
  _OWORD v31[2]; // [rsp+48h] [rbp-80h] BYREF
  __int64 v32; // [rsp+68h] [rbp-60h]
  _OWORD v33[2]; // [rsp+70h] [rbp-58h] BYREF
  __int64 v34; // [rsp+90h] [rbp-38h]

  result = (unsigned int)PopFxDeviceAccountingLevel;
  DestinationString = 0LL;
  if ( PopFxDeviceAccountingLevel )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockSharedEx((ULONG_PTR)&PopFxDeviceListLock, 0LL);
    v2 = MEMORY[0xFFFFF78000000008];
    v3 = PopFxDeviceList;
    v29 = MEMORY[0xFFFFF78000000008];
    while ( (ULONG_PTR *)v3 != &PopFxDeviceList )
    {
      v4 = *(_QWORD *)(v3 + 48);
      if ( v4 )
      {
        if ( *(_QWORD *)(v3 + 1200) )
        {
          p_DestinationString = (UNICODE_STRING *)(v3 + 1192);
        }
        else
        {
          RtlInitUnicodeString(&DestinationString, (PCWSTR)&cchOriginalDestLength);
          p_DestinationString = &DestinationString;
        }
        if ( PopFxDeviceAccountingLevel < 0 )
        {
          v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v3 + 600));
          if ( (PopFxDeviceAccountingLevel & 1) != 0 )
          {
            PopFxUpdateAccountingActiveTime(v3 + 600, v2, 0x47868C00uLL);
            PopFxMergeActiveTimeAccounting(v7);
          }
          KxReleaseSpinLock((PKSPIN_LOCK)(v3 + 600));
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 )
            {
              CurrentIrql = KeGetCurrentIrql();
              if ( CurrentIrql <= 0xFu && (unsigned __int8)v6 <= 0xFu && CurrentIrql >= 2u )
              {
                CurrentPrcb = KeGetCurrentPrcb();
                SchedulerAssist = CurrentPrcb->SchedulerAssist;
                v11 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
                v12 = (v11 & SchedulerAssist[5]) == 0;
                SchedulerAssist[5] &= v11;
                if ( v12 )
                  KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
              }
            }
          }
          __writecr8(v6);
          PopDiagTraceFxDeviceAccounting(v4, v3 + 600, p_DestinationString, *(_QWORD *)(v3 + 632));
        }
        v13 = 0;
        if ( *(_DWORD *)(v3 + 828) )
        {
          do
          {
            v14 = *(_QWORD *)(*(_QWORD *)(v3 + 832) + 8LL * v13);
            v15 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v14 + 200));
            if ( (PopFxDeviceAccountingLevel & 1) != 0 )
            {
              PopFxUpdateAccountingActiveTime(v14 + 200, v29, 0x47868C00uLL);
              PopFxMergeActiveTimeAccounting(v16);
            }
            KxReleaseSpinLock((PKSPIN_LOCK)(v14 + 200));
            if ( KiIrqlFlags )
            {
              if ( (KiIrqlFlags & 1) != 0 )
              {
                v17 = KeGetCurrentIrql();
                if ( v17 <= 0xFu && (unsigned __int8)v15 <= 0xFu && v17 >= 2u )
                {
                  v18 = KeGetCurrentPrcb();
                  v19 = v18->SchedulerAssist;
                  v20 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v15 + 1));
                  v12 = (v20 & v19[5]) == 0;
                  v19[5] &= v20;
                  if ( v12 )
                    KiRemoveSystemWorkPriorityKick((__int64)v18);
                }
              }
            }
            __writecr8(v15);
            PopDiagTraceFxComponentAccounting(
              v4,
              *(_DWORD *)(v14 + 16),
              v14 + 200,
              (_DWORD)p_DestinationString,
              *(_QWORD *)(v14 + 232));
            ++v13;
          }
          while ( v13 < *(_DWORD *)(v3 + 828) );
          v2 = v29;
        }
      }
      v3 = *(_QWORD *)v3;
    }
    v21 = KeAcquireSpinLockRaiseToDpc(&PopFxGlobalDeviceAccountingLock);
    v22 = qword_140C246B0;
    v23 = qword_140C246B8;
    v33[0] = xmmword_140C246C0;
    v24 = v21;
    v33[1] = xmmword_140C246D0;
    v34 = qword_140C246E0;
    v31[0] = xmmword_140C246E8;
    v31[1] = xmmword_140C246F8;
    v32 = qword_140C24708;
    KxReleaseSpinLock(&PopFxGlobalDeviceAccountingLock);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v25 = KeGetCurrentIrql();
        if ( v25 <= 0xFu && (unsigned __int8)v24 <= 0xFu && v25 >= 2u )
        {
          v26 = KeGetCurrentPrcb();
          v27 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v24 + 1));
          v28 = v26->SchedulerAssist;
          v12 = (v27 & v28[5]) == 0;
          v28[5] &= v27;
          if ( v12 )
            KiRemoveSystemWorkPriorityKick((__int64)v26);
        }
      }
    }
    __writecr8(v24);
    PopDiagTraceFxGlobalDeviceAccounting(v22, v23, v33, v31);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopFxDeviceListLock, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&PopFxDeviceListLock);
    KeAbPostRelease((ULONG_PTR)&PopFxDeviceListLock);
    return (unsigned __int64)KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  return result;
}
