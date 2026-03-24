/*
 * XREFs of PopDripsWatchdogDiagnosticWorker @ 0x1408EF230
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206FC0 (KeLeaveCriticalRegionThread.c)
 *     PopDeepSleepEnabled @ 0x140281AC0 (PopDeepSleepEnabled.c)
 *     ExReleaseResourceLite @ 0x14034B3F0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x14034BBA0 (ExAcquireResourceExclusiveLite.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     PopCalculateIdleInformation @ 0x140570410 (PopCalculateIdleInformation.c)
 *     PopDiagTraceCsDripsDivergence @ 0x140570C88 (PopDiagTraceCsDripsDivergence.c)
 *     PopDripsWatchdogCheckHwDivergence @ 0x1408EF158 (PopDripsWatchdogCheckHwDivergence.c)
 *     PopDripsWatchdogScheduleNextTimer @ 0x1408EF4E4 (PopDripsWatchdogScheduleNextTimer.c)
 *     PopDripsWatchdogUpdateMetrics @ 0x1408EF720 (PopDripsWatchdogUpdateMetrics.c)
 *     PopDeepSleepWatchdogTakeAction @ 0x1408FA518 (PopDeepSleepWatchdogTakeAction.c)
 *     PopDripsWatchdogTakeAction @ 0x1408FA6A0 (PopDripsWatchdogTakeAction.c)
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
  struct _KTHREAD *v14; // rax
  int v16; // [rsp+30h] [rbp-29h] BYREF
  int v17; // [rsp+34h] [rbp-25h] BYREF
  unsigned __int64 v18; // [rsp+38h] [rbp-21h] BYREF
  __int128 v19; // [rsp+40h] [rbp-19h] BYREF
  __int128 v20; // [rsp+50h] [rbp-9h]
  OWNER_ENTRY v21; // [rsp+60h] [rbp+7h] BYREF
  __int64 v22; // [rsp+70h] [rbp+17h]
  ULONG v23; // [rsp+78h] [rbp+1Fh]

  p_ActiveEntries = &Resource[3].ActiveEntries;
  v22 = 0LL;
  v23 = 0;
  v21 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v19 = 0LL;
  --CurrentThread->KernelApcDisable;
  v20 = 0LL;
  ExAcquireResourceExclusiveLite(Resource, 1u);
  if ( ((__int64)Resource[1].SystemResourcesList.Flink & 4) != 0 && (p_ActiveEntries[45] & 2) != 0 )
  {
    ++LODWORD(Resource[6].OwnerTable);
    v4 = MEMORY[0xFFFFF78000000008];
    v17 = 0;
    v18 = 0LL;
    v16 = 0;
    PopCalculateIdleInformation((__int64)&v19);
    PopDripsWatchdogUpdateMetrics(
      (_DWORD)Resource,
      v4,
      (unsigned int)&v19,
      (unsigned int)&v17,
      (__int64)&v18,
      (__int64)&v16);
    v5 = 0LL;
    v6 = 0;
    if ( (_QWORD)v20 != -1LL )
    {
      Flink = Resource[6].SystemResourcesList.Flink;
      if ( Flink != (struct _LIST_ENTRY *)-1LL )
      {
        v6 = 1;
        v5 = v20 - (_QWORD)Flink;
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
      v21 = OwnerEntry;
      v23 = NumberOfSharedWaiters;
      v22 = v11;
      PopDripsWatchdogScheduleNextTimer(p_ActiveEntries);
      ExReleaseResourceLite(Resource);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      if ( v16 )
      {
        if ( !v17 && PopDeepSleepEnabled() )
          PopDeepSleepWatchdogTakeAction(&v21, Flink_high);
      }
      else if ( !qword_140C4FF58 )
      {
        PopDripsWatchdogTakeAction(&v21, Flink_high, OwnerTable);
      }
      PopDiagTraceCsDripsDivergence(v6, v18, v5);
      if ( v6 )
        PopDripsWatchdogCheckHwDivergence(v5, v18);
      v14 = KeGetCurrentThread();
      --v14->KernelApcDisable;
      ExAcquireResourceExclusiveLite(Resource, 1u);
      p_ActiveEntries[45] &= ~4u;
    }
  }
  ExReleaseResourceLite(Resource);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
