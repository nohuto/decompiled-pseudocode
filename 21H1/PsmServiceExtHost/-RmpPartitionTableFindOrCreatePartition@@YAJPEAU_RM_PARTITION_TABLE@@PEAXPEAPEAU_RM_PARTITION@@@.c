/*
 * XREFs of ?RmpPartitionTableFindOrCreatePartition@@YAJPEAU_RM_PARTITION_TABLE@@PEAXPEAPEAU_RM_PARTITION@@@Z @ 0x180012D38
 * Callers:
 *     ?RmSrvAcquireResourceSet@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_ResourceSetInfo@ExecutionModel@@PEAUIResourceSetCallback@3@PEAXPEBG3KK_K5PEAU_RM_ACTIVATOR@@PEA_N@Z @ 0x180012FA0 (-RmSrvAcquireResourceSet@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_ResourceSetInfo@ExecutionModel@@PEAUI.c)
 *     ?RmpHamQueryActivityHostPartition@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_HOST_INFO@@PEAPEAU_RM_PARTITION@@@Z @ 0x180034E8C (-RmpHamQueryActivityHostPartition@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_HOST_INFO@@PEAPEAU_RM.c)
 * Callees:
 *     CempLockSleepConditionVariableExclusive @ 0x180005898 (CempLockSleepConditionVariableExclusive.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x18000F120 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x18001E110 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpPartitionRelease@@YAXPEAU_RM_PARTITION@@@Z @ 0x1800263B0 (-RmpPartitionRelease@@YAXPEAU_RM_PARTITION@@@Z.c)
 *     ?RmpPartitionStart@@YAJPEAU_RM_PARTITION@@PEAX_K@Z @ 0x180043170 (-RmpPartitionStart@@YAJPEAU_RM_PARTITION@@PEAX_K@Z.c)
 *     ?RmpMemoryMonitorAllocateState@@YAJPEAU_RM_MEMORY_MONITOR_DATA@@@Z @ 0x1800432E8 (-RmpMemoryMonitorAllocateState@@YAJPEAU_RM_MEMORY_MONITOR_DATA@@@Z.c)
 *     ??$RmpArrayGrow@PEAU_RM_PARTITION@@@@YAJPEAPEAPEAU_RM_PARTITION@@PEAKK@Z @ 0x1800439E4 (--$RmpArrayGrow@PEAU_RM_PARTITION@@@@YAJPEAPEAPEAU_RM_PARTITION@@PEAKK@Z.c)
 *     ?RmpPartitionInitialize@@YAXPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PARTITION@@@Z @ 0x180043C34 (-RmpPartitionInitialize@@YAXPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PARTITION@@@Z.c)
 *     ?RmpPartitionTableFindPartitionInternal@@YAPEAU_RM_PARTITION@@PEAU_RM_PARTITION_TABLE@@PEAXK@Z @ 0x180044610 (-RmpPartitionTableFindPartitionInternal@@YAPEAU_RM_PARTITION@@PEAU_RM_PARTITION_TABLE@@PEAXK@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x180063484 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 */

__int64 __fastcall RmpPartitionTableFindOrCreatePartition(
        struct _RM_PARTITION_TABLE *a1,
        void *a2,
        struct _RM_PARTITION **a3)
{
  void *v4; // rbp
  unsigned __int64 v6; // r13
  char *v7; // r14
  char *i; // rdi
  volatile signed __int64 *v9; // rdx
  int State; // edi
  int v11; // r8d
  int v12; // r9d
  struct _RM_PARTITION *Heap; // rax
  struct _RM_PARTITION *v15; // rsi
  struct _RM_PARTITION *PartitionInternal; // rax
  char *v17; // rax
  char **v18; // rdx
  void *v19; // rcx
  int v20; // [rsp+70h] [rbp+8h] BYREF
  unsigned __int64 v21; // [rsp+78h] [rbp+10h] BYREF

  v4 = a2;
  v6 = 0LL;
  if ( a2 == (void *)-2LL )
    v4 = (void *)*((_QWORD *)a1 + 6);
  RtlAcquireSRWLockShared(a1);
  if ( (*((_BYTE *)a1 + 40) & 1) != 0 )
  {
    State = -1073741058;
LABEL_12:
    RtlReleaseSRWLockShared(a1);
    goto LABEL_13;
  }
  v7 = (char *)a1 + 16;
  for ( i = (char *)*((_QWORD *)a1 + 2); ; i = *(char **)i )
  {
    if ( i == v7 )
    {
      v9 = 0LL;
      goto LABEL_9;
    }
    if ( (int)NtCompareObjects(*((_QWORD *)i + 3), v4) >= 0 )
      break;
  }
  v9 = 0LL;
  if ( (*((_DWORD *)i + 54) & 3) == 1 )
    v9 = (volatile signed __int64 *)(i - 8);
LABEL_9:
  if ( v9 )
  {
    if ( _InterlockedIncrement64(v9) <= 1 )
      __fastfail(0xEu);
    *a3 = (struct _RM_PARTITION *)v9;
    State = 0;
    goto LABEL_12;
  }
  RtlReleaseSRWLockShared(a1);
  Heap = (struct _RM_PARTITION *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0xE8uLL);
  v15 = Heap;
  if ( !Heap )
  {
    State = -1073741801;
    goto LABEL_15;
  }
  RmpPartitionInitialize((struct _RM_PARTITION_TABLE *)((char *)a1 - 312), Heap);
  State = RmpMemoryMonitorAllocateState((struct _RM_PARTITION *)((char *)v15 + 40));
  if ( State >= 0 )
    State = 0;
  if ( State >= 0 )
  {
    RmpAcquireGlobalLock();
    RtlAcquireSRWLockExclusive(a1);
    *((_DWORD *)a1 + 2) = GetCurrentThreadId();
    ++*((_DWORD *)a1 + 20);
    State = RmpArrayGrow<_RM_PARTITION *>(
              (char *)a1 + 64,
              (char *)a1 + 72,
              (unsigned int)(*((_DWORD *)a1 + 19) + *((_DWORD *)a1 + 20)));
    RmpReleaseGlobalLock();
    if ( State >= 0 )
    {
      while ( 1 )
      {
        if ( (*((_BYTE *)a1 + 40) & 1) != 0 )
        {
          State = -1073741058;
          goto LABEL_30;
        }
        PartitionInternal = RmpPartitionTableFindPartitionInternal(a1, v4, 0xFu);
        if ( !PartitionInternal )
          break;
        if ( (*((_DWORD *)PartitionInternal + 56) & 3) == 1 )
        {
          if ( _InterlockedIncrement64((volatile signed __int64 *)PartitionInternal) <= 1 )
            __fastfail(0xEu);
          *a3 = PartitionInternal;
          goto LABEL_29;
        }
        CempLockSleepConditionVariableExclusive((__int64)a1, (__int64)a1 + 32, 0LL);
      }
      v6 = *((_QWORD *)a1 + 7);
      *((_QWORD *)a1 + 7) = v6 + 1;
      State = RmpPartitionStart(v15, v4, v6);
      if ( State >= 0 )
      {
        ++*((_DWORD *)a1 + 19);
        v17 = (char *)v15 + 8;
        v18 = (char **)*((_QWORD *)a1 + 3);
        if ( *v18 != v7 )
          __fastfail(3u);
        *(_QWORD *)v17 = v7;
        *((_QWORD *)v15 + 2) = v18;
        *v18 = v17;
        *((_QWORD *)a1 + 3) = v17;
        RtlWakeAllConditionVariable((char *)a1 + 32);
        *a3 = v15;
        v15 = 0LL;
LABEL_29:
        State = 0;
        goto LABEL_30;
      }
      v19 = (void *)*((_QWORD *)v15 + 4);
      if ( v19 )
      {
        NtClose(v19);
        *((_QWORD *)v15 + 4) = 0LL;
      }
    }
LABEL_30:
    --*((_DWORD *)a1 + 20);
    *((_DWORD *)a1 + 2) = 0;
    RtlReleaseSRWLockExclusive(a1);
  }
  if ( v15 )
    RmpPartitionRelease(v15);
LABEL_13:
  if ( State >= 0 )
    v6 = *((_QWORD *)*a3 + 27);
LABEL_15:
  if ( (unsigned int)dword_1800B31E0 > 4 && (byte_1800B31F0 & 9) != 0 && (qword_1800B31F8 & 9) == qword_1800B31F8 )
  {
    v21 = v6;
    v20 = State;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
      (unsigned int)&dword_1800B31E0,
      (unsigned int)&unk_18009CE0B,
      v11,
      v12,
      (__int64)&v20,
      (__int64)&v21);
  }
  return (unsigned int)State;
}
