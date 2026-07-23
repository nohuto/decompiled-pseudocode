/*
 * XREFs of CmpCompleteUnloadKey @ 0x1405E0268
 * Callers:
 *     CmpPerformUnloadKey @ 0x1405DFA8C (CmpPerformUnloadKey.c)
 *     CmpLateUnloadHiveWorker @ 0x1405DFF10 (CmpLateUnloadHiveWorker.c)
 * Callees:
 *     CmpUnJoinClassOfTrust @ 0x140213A50 (CmpUnJoinClassOfTrust.c)
 *     CmpRemoveHiveFromNamespace @ 0x140213A9C (CmpRemoveHiveFromNamespace.c)
 *     CmpDecrementAppHiveUnloadCount @ 0x140213D74 (CmpDecrementAppHiveUnloadCount.c)
 *     KeLeaveCriticalRegion @ 0x140356100 (KeLeaveCriticalRegion.c)
 *     CmpInitializeDelayDerefContext @ 0x14035BE38 (CmpInitializeDelayDerefContext.c)
 *     CmpDrainDelayDerefContext @ 0x14035BE50 (CmpDrainDelayDerefContext.c)
 *     KeEnterCriticalRegion @ 0x14035BF60 (KeEnterCriticalRegion.c)
 *     ExfUnblockPushLock @ 0x1403F96E0 (ExfUnblockPushLock.c)
 *     CmpRemoveLayerLinkForDiscardedKcb @ 0x1405CD088 (CmpRemoveLayerLinkForDiscardedKcb.c)
 *     CmpTraceHiveUnloadStop @ 0x1405E0470 (CmpTraceHiveUnloadStop.c)
 *     CmpSignalUnloadEventArrayForHive @ 0x1405E04CC (CmpSignalUnloadEventArrayForHive.c)
 *     CmpCmdHiveClose @ 0x1405E0548 (CmpCmdHiveClose.c)
 *     CmpVERemoveHiveFromSIDMappingTable @ 0x1405E06B0 (CmpVERemoveHiveFromSIDMappingTable.c)
 *     CmpRemoveFromPreloadedHivesList @ 0x1405E0768 (CmpRemoveFromPreloadedHivesList.c)
 *     CmpDestroySecurityCache @ 0x1405E07A8 (CmpDestroySecurityCache.c)
 *     CmpTraceHiveUnloadStart @ 0x1405E0858 (CmpTraceHiveUnloadStart.c)
 *     CmpRecordRMRecoveryMode @ 0x1405E08DC (CmpRecordRMRecoveryMode.c)
 *     CmpVolumeContextDecrementRefCount @ 0x1405E0904 (CmpVolumeContextDecrementRefCount.c)
 *     CmpLogUnload @ 0x14065C8D4 (CmpLogUnload.c)
 *     CmpCleanUpSubKeyInfo @ 0x14065EECC (CmpCleanUpSubKeyInfo.c)
 *     CmpDiscardKcb @ 0x140661748 (CmpDiscardKcb.c)
 *     CmpMarkKeyUnbacked @ 0x1406619A0 (CmpMarkKeyUnbacked.c)
 *     CmpFlushNotifiesOnKeyBodyList @ 0x140661A20 (CmpFlushNotifiesOnKeyBodyList.c)
 *     UNLOCK_HIVE_LOAD @ 0x1406677F0 (UNLOCK_HIVE_LOAD.c)
 *     CmpFlushHive @ 0x1406A48D8 (CmpFlushHive.c)
 *     CmpDoFileSetSizeEx @ 0x1406FC9FC (CmpDoFileSetSizeEx.c)
 *     CmpUnlockRegistry @ 0x14070D2B0 (CmpUnlockRegistry.c)
 *     HvHiveCleanup @ 0x140721004 (HvHiveCleanup.c)
 *     CmpRemoveFromHiveFileList @ 0x1408735AC (CmpRemoveFromHiveFileList.c)
 */

__int64 __fastcall CmpCompleteUnloadKey(ULONG_PTR a1, __int64 a2, _DWORD *a3)
{
  ULONG_PTR v3; // rbx
  int v6; // ebp
  int v7; // edx
  signed __int64 v8; // r15
  int v9; // ebp
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // rcx
  int v13; // edi
  unsigned int v14; // esi
  struct _PRIVILEGE_SET *v15; // rcx
  signed __int32 v17[8]; // [rsp+0h] [rbp-48h] BYREF
  _OWORD v18[2]; // [rsp+20h] [rbp-28h] BYREF

  v3 = *(_QWORD *)(a1 + 32);
  v18[0] = 0LL;
  CmpInitializeDelayDerefContext(v18);
  v6 = *(_DWORD *)(v3 + 4152);
  CmpLogUnload(v3, 6LL);
  v8 = (unsigned int)(v7 - 5);
  _InterlockedCompareExchange64((volatile signed __int64 *)(v3 + 2944), v8, 0LL);
  CmpRecordRMRecoveryMode();
  *(_DWORD *)(v3 + 160) |= 0x40u;
  CmpTraceHiveUnloadStart(v3 + 1832, v3 + 1848);
  CmpRemoveHiveFromNamespace(v3, a1, (__int64)v18);
  CmpLogUnload(v3, (unsigned int)(v8 + 7));
  v9 = v6 & 0x20;
  if ( v9 )
  {
    *(_DWORD *)(v3 + 4808) = v8;
    CmpDecrementAppHiveUnloadCount();
  }
  CmpFlushNotifiesOnKeyBodyList(a1, (unsigned int)v8, v18);
  CmpMarkKeyUnbacked(a1, v18);
  CmpDiscardKcb(a1);
  CmpRemoveLayerLinkForDiscardedKcb(a1);
  LOBYTE(v10) = v8;
  CmpCleanUpSubKeyInfo(*(_QWORD *)(*(_QWORD *)(a1 + 72) + 72LL), v10);
  CmpDrainDelayDerefContext((_QWORD **)v18);
  CmpUnlockRegistry(v12, v11);
  *a3 &= ~2u;
  if ( (*a3 & 4) != 0 )
  {
    UNLOCK_HIVE_LOAD();
    *a3 &= ~4u;
  }
  CmpRemoveFromHiveFileList(v3);
  CmpDestroySecurityCache(v3);
  KeEnterCriticalRegion();
  CmpUnJoinClassOfTrust(v3);
  KeLeaveCriticalRegion();
  CmpRemoveFromPreloadedHivesList(v3);
  CmpVERemoveHiveFromSIDMappingTable(v3);
  v13 = CmpFlushHive(v3);
  if ( v13 == -1073741811 )
    v13 = 0;
  v14 = *(_DWORD *)(v3 + 272) + 4096;
  HvHiveCleanup(v3);
  if ( v13 >= 0 && (*(_DWORD *)(v3 + 160) & 0x8000) == 0 && (__int64)(*(_QWORD *)(v3 + 1792) - v14) > 0x100000 )
    CmpDoFileSetSizeEx(v3, 0LL, v14, 0LL);
  CmpCmdHiveClose(v3);
  v15 = *(struct _PRIVILEGE_SET **)(v3 + 4832);
  if ( v15 )
    CmpVolumeContextDecrementRefCount(v15);
  if ( v9 )
  {
    *(_DWORD *)(v3 + 4808) = 0;
    _InterlockedOr(v17, 0);
    if ( *(_QWORD *)(v3 + 4816) )
      ExfUnblockPushLock((volatile __int64 *)(v3 + 4816), 0LL);
  }
  CmpSignalUnloadEventArrayForHive(v3);
  return CmpTraceHiveUnloadStop((unsigned int)v13);
}
