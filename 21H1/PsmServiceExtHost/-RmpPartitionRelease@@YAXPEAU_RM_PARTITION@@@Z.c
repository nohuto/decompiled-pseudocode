/*
 * XREFs of ?RmpPartitionRelease@@YAXPEAU_RM_PARTITION@@@Z @ 0x1800263B0
 * Callers:
 *     ?RmpPartitionTableFindOrCreatePartition@@YAJPEAU_RM_PARTITION_TABLE@@PEAXPEAPEAU_RM_PARTITION@@@Z @ 0x180012D38 (-RmpPartitionTableFindOrCreatePartition@@YAJPEAU_RM_PARTITION_TABLE@@PEAXPEAPEAU_RM_PARTITION@@@.c)
 *     ?RmpResourceCheckDestroyPartitionForAcquire@@YAKPEAU_RM_RESOURCE_SET@@@Z @ 0x180014C2C (-RmpResourceCheckDestroyPartitionForAcquire@@YAKPEAU_RM_RESOURCE_SET@@@Z.c)
 *     ?RmHamHostStateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180018880 (-RmHamHostStateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ?RmHamFindOrCreateHost@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_PSM_HOST_INFO@@KPEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800228F0 (-RmHamFindOrCreateHost@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_PSM_HOST_INFO@@KPEAPEAU_RM_HAM_AC.c)
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180026310 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     ?RmpHamQueryActivityHostPartition@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_HOST_INFO@@PEAPEAU_RM_PARTITION@@@Z @ 0x180034E8C (-RmpHamQueryActivityHostPartition@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_HOST_INFO@@PEAPEAU_RM.c)
 * Callees:
 *     CempListEntryIsNull @ 0x180008768 (CempListEntryIsNull.c)
 *     ?RmpPartitionCleanup@@YAXPEAU_RM_PARTITION@@@Z @ 0x1800705E0 (-RmpPartitionCleanup@@YAXPEAU_RM_PARTITION@@@Z.c)
 */

void __fastcall RmpPartitionRelease(HANDLE *a1)
{
  signed __int64 v2; // rax
  signed __int64 i; // rcx
  signed __int64 v4; // rtt
  _DWORD *v5; // rdi
  signed __int64 v6; // rax
  bool v7; // cc
  signed __int64 v8; // rax

  _m_prefetchw(a1);
  v2 = (signed __int64)*a1;
  for ( i = (signed __int64)*a1 - 1; i > 0; i = v2 - 1 )
  {
    v4 = v2;
    v2 = _InterlockedCompareExchange64((volatile signed __int64 *)a1, i, v2);
    if ( v4 == v2 )
      return;
  }
  if ( i )
    __fastfail(0xEu);
  v5 = a1[3];
  RtlAcquireSRWLockExclusive(v5 + 78);
  v5[80] = GetCurrentThreadId();
  v6 = _InterlockedExchangeAdd64((volatile signed __int64 *)a1, 0xFFFFFFFFFFFFFFFFuLL);
  v7 = v6 <= 1;
  v8 = v6 - 1;
  if ( v7 )
  {
    if ( v8 )
      __fastfail(0xEu);
    if ( (unsigned int)CempListEntryIsNull(a1 + 1) )
    {
      RmpPartitionCleanup((struct _RM_PARTITION *)a1);
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, a1);
    }
    else
    {
      *((_DWORD *)a1 + 56) &= ~1u;
      *((_DWORD *)a1 + 56) |= 2u;
      SetEvent(a1[8]);
    }
  }
  v5[80] = 0;
  RtlReleaseSRWLockExclusive(v5 + 78);
}
