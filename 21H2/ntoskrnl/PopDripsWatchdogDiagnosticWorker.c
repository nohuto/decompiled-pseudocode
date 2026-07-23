/*
 * XREFs of PopDripsWatchdogDiagnosticWorker @ 0x1408EF390
 * Callers:
 *     <none>
 * Callees:
 *     PopDeepSleepEnabled @ 0x14026FD00 (PopDeepSleepEnabled.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x140356140 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1403568F0 (ExAcquireResourceExclusiveLite.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     PopCalculateIdleInformation @ 0x140570650 (PopCalculateIdleInformation.c)
 *     PopDiagTraceCsDripsDivergence @ 0x140570EC8 (PopDiagTraceCsDripsDivergence.c)
 *     PopDripsWatchdogCheckHwDivergence @ 0x1408EF2B8 (PopDripsWatchdogCheckHwDivergence.c)
 *     PopDripsWatchdogScheduleNextTimer @ 0x1408EF644 (PopDripsWatchdogScheduleNextTimer.c)
 *     PopDripsWatchdogUpdateMetrics @ 0x1408EF880 (PopDripsWatchdogUpdateMetrics.c)
 *     PopDeepSleepWatchdogTakeAction @ 0x1408FA678 (PopDeepSleepWatchdogTakeAction.c)
 *     PopDripsWatchdogTakeAction @ 0x1408FA800 (PopDripsWatchdogTakeAction.c)
 */

_QWORD *__fastcall PopDripsWatchdogDiagnosticWorker(PERESOURCE Resource)
{
  ULONG *p_ActiveEntries; // rsi
  struct _KTHREAD *CurrentThread; // rax
  int v4; // ebx
  unsigned __int64 v5; // rbx
  unsigned __int8 v6; // r14
  struct _LIST_ENTRY *Flink; // rax
  ULONG v8; // ecx
  OWNER_ENTRY OwnerEntry; // xmm0
  ULONG NumberOfSharedWaiters; // eax
  __int64 v11; // xmm1_8
  unsigned int Flink_high; // r15d
  unsigned int OwnerTable; // r12d
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  struct _KTHREAD *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  int v22; // [rsp+30h] [rbp-29h] BYREF
  int v23; // [rsp+34h] [rbp-25h] BYREF
  unsigned __int64 v24; // [rsp+38h] [rbp-21h] BYREF
  __int128 v25; // [rsp+40h] [rbp-19h] BYREF
  __int128 v26; // [rsp+50h] [rbp-9h]
  OWNER_ENTRY v27; // [rsp+60h] [rbp+7h] BYREF
  __int64 v28; // [rsp+70h] [rbp+17h]
  ULONG v29; // [rsp+78h] [rbp+1Fh]

  p_ActiveEntries = &Resource[3].ActiveEntries;
  v28 = 0LL;
  v29 = 0;
  v27 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v25 = 0LL;
  --CurrentThread->KernelApcDisable;
  v26 = 0LL;
  ExAcquireResourceExclusiveLite(Resource, 1u);
  if ( ((__int64)Resource[1].SystemResourcesList.Flink & 4) != 0 && (p_ActiveEntries[45] & 2) != 0 )
  {
    ++LODWORD(Resource[6].OwnerTable);
    v4 = MEMORY[0xFFFFF78000000008];
    v23 = 0;
    v24 = 0LL;
    v22 = 0;
    PopCalculateIdleInformation((__int64)&v25);
    PopDripsWatchdogUpdateMetrics(
      (_DWORD)Resource,
      v4,
      (unsigned int)&v25,
      (unsigned int)&v23,
      (__int64)&v24,
      (__int64)&v22);
    v5 = 0LL;
    v6 = 0;
    if ( (_QWORD)v26 != -1LL )
    {
      Flink = Resource[6].SystemResourcesList.Flink;
      if ( Flink != (struct _LIST_ENTRY *)-1LL )
      {
        v6 = 1;
        v5 = v26 - (_QWORD)Flink;
      }
    }
    v8 = p_ActiveEntries[45];
    if ( (v8 & 4) == 0 )
    {
      OwnerEntry = Resource[5].OwnerEntry;
      NumberOfSharedWaiters = Resource[5].NumberOfSharedWaiters;
      v11 = *(_QWORD *)&Resource[5].ActiveEntries;
      Flink_high = HIDWORD(Resource[1].SystemResourcesList.Flink);
      OwnerTable = (unsigned int)Resource[6].OwnerTable;
      p_ActiveEntries[45] = v8 | 4;
      v27 = OwnerEntry;
      v29 = NumberOfSharedWaiters;
      v28 = v11;
      PopDripsWatchdogScheduleNextTimer(p_ActiveEntries);
      ExReleaseResourceLite(Resource);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v14, v15, v16);
      if ( v22 )
      {
        if ( !v23 && PopDeepSleepEnabled() )
          PopDeepSleepWatchdogTakeAction(&v27, Flink_high);
      }
      else if ( !qword_140C4FF98 )
      {
        PopDripsWatchdogTakeAction(&v27, Flink_high, OwnerTable);
      }
      PopDiagTraceCsDripsDivergence(v6, v24, v5);
      if ( v6 )
        PopDripsWatchdogCheckHwDivergence(v5, v24);
      v17 = KeGetCurrentThread();
      --v17->KernelApcDisable;
      ExAcquireResourceExclusiveLite(Resource, 1u);
      p_ActiveEntries[45] &= ~4u;
    }
  }
  ExReleaseResourceLite(Resource);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v18, v19, v20);
}
