/*
 * XREFs of CmpCompleteUnloadKey @ 0x14067BE48
 * Callers:
 *     CmpLateUnloadHiveWorker @ 0x140681670 (CmpLateUnloadHiveWorker.c)
 *     CmpPerformUnloadKey @ 0x14069E98C (CmpPerformUnloadKey.c)
 * Callees:
 *     CmpDecrementAppHiveUnloadCount @ 0x140208958 (CmpDecrementAppHiveUnloadCount.c)
 *     CmpUnJoinClassOfTrust @ 0x140208994 (CmpUnJoinClassOfTrust.c)
 *     CmpRemoveHiveFromNamespace @ 0x1402089E0 (CmpRemoveHiveFromNamespace.c)
 *     CmpInitializeDelayDerefContext @ 0x1402AD320 (CmpInitializeDelayDerefContext.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402F9540 (KiLeaveCriticalRegionUnsafe.c)
 *     EtwWrite @ 0x140300BC0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     CmpDrainDelayDerefContext @ 0x140346C60 (CmpDrainDelayDerefContext.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ExfUnblockPushLock @ 0x14041AC40 (ExfUnblockPushLock.c)
 *     ZwDeleteValueKey @ 0x14041D2E0 (ZwDeleteValueKey.c)
 *     CmpRemoveLayerLinkForDiscardedKcb @ 0x140657990 (CmpRemoveLayerLinkForDiscardedKcb.c)
 *     CmpVolumeContextDecrementRefCount @ 0x14067BD84 (CmpVolumeContextDecrementRefCount.c)
 *     CmpCmdHiveClose @ 0x14067C24C (CmpCmdHiveClose.c)
 *     CmpVERemoveHiveFromSIDMappingTable @ 0x14067C3A4 (CmpVERemoveHiveFromSIDMappingTable.c)
 *     CmpDestroySecurityCache @ 0x14067C45C (CmpDestroySecurityCache.c)
 *     CmpDiscardKcb @ 0x14067EB68 (CmpDiscardKcb.c)
 *     CmpMarkKeyUnbacked @ 0x14067EDC0 (CmpMarkKeyUnbacked.c)
 *     CmpFlushNotifiesOnKeyBodyList @ 0x14067EE40 (CmpFlushNotifiesOnKeyBodyList.c)
 *     CmpFlushHive @ 0x1406885A4 (CmpFlushHive.c)
 *     UNLOCK_HIVE_LOAD @ 0x14068934C (UNLOCK_HIVE_LOAD.c)
 *     CmpDoFileSetSizeEx @ 0x14068EC28 (CmpDoFileSetSizeEx.c)
 *     HvMarkBaseBlockDirty @ 0x1406CA514 (HvMarkBaseBlockDirty.c)
 *     CmpCleanUpSubKeyInfo @ 0x14071B5A0 (CmpCleanUpSubKeyInfo.c)
 *     HvHiveCleanup @ 0x14079B518 (HvHiveCleanup.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     CmpUnlockRegistry @ 0x140AB4260 (CmpUnlockRegistry.c)
 */

BOOLEAN __fastcall CmpCompleteUnloadKey(ULONG_PTR a1, __int64 a2, _DWORD *a3)
{
  ULONG_PTR v3; // rdi
  int v6; // r12d
  __int64 v7; // rax
  __int64 v8; // rcx
  REGHANDLE v9; // r15
  unsigned int v10; // r9d
  __int64 v11; // rax
  unsigned int v12; // r9d
  ULONGLONG v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  struct _KTHREAD *CurrentThread; // rax
  __int64 v22; // rcx
  _QWORD *v23; // rdx
  int v24; // r14d
  unsigned int v25; // ebx
  struct _PRIVILEGE_SET *v26; // rcx
  unsigned int v27; // esi
  unsigned int v28; // eax
  REGHANDLE v29; // rbx
  BOOLEAN result; // al
  signed __int32 v31[8]; // [rsp+0h] [rbp-A9h] BYREF
  PEVENT_DATA_DESCRIPTOR UserData; // [rsp+20h] [rbp-89h]
  __int64 v33; // [rsp+28h] [rbp-81h]
  __int16 v34; // [rsp+30h] [rbp-79h] BYREF
  int v35; // [rsp+38h] [rbp-71h] BYREF
  __int128 v36; // [rsp+40h] [rbp-69h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+50h] [rbp-59h] BYREF
  EVENT_DESCRIPTOR v38; // [rsp+60h] [rbp-49h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v39; // [rsp+70h] [rbp-39h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v40[4]; // [rsp+80h] [rbp-29h] BYREF

  v3 = *(_QWORD *)(a1 + 32);
  v36 = 0LL;
  CmpInitializeDelayDerefContext(&v36);
  v6 = *(_DWORD *)(v3 + 4112) & 0x20;
  *(_DWORD *)(v3 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(v3 + 4236), 1u) & 0x7F) + 4240) = 6;
  v7 = *(_QWORD *)(v3 + 4152);
  if ( v7 )
  {
    v8 = *(_QWORD *)(v3 + 64);
    if ( *(_QWORD *)(v7 + 16) == v7 + 16 )
      *(_DWORD *)(v8 + 144) &= ~1u;
    else
      *(_DWORD *)(v8 + 144) |= 1u;
    HvMarkBaseBlockDirty(v3);
  }
  *(_DWORD *)(v3 + 160) |= 0x40u;
  v9 = EtwpRegTraceHandle;
  v34 = 0;
  EventDescriptor = (EVENT_DESCRIPTOR)REGISTRY_PERF_EVENT_HIVE_UNLOAD_START;
  if ( EtwEventEnabled(EtwpRegTraceHandle, &EventDescriptor) )
  {
    v10 = 0;
    if ( *(_QWORD *)(v3 + 1848) )
    {
      v40[0].Ptr = *(_QWORD *)(v3 + 1848);
      v10 = 1;
      v40[0].Size = *(unsigned __int16 *)(v3 + 1840);
      v40[0].Reserved = 0;
    }
    v11 = v10;
    v12 = v10 + 1;
    v40[v11].Ptr = (ULONGLONG)&v34;
    *(_QWORD *)&v40[v11].Size = 2LL;
    v13 = *(_QWORD *)(v3 + 1864);
    if ( v13 )
    {
      v14 = v12++;
      v40[v14].Ptr = v13;
      v40[v14].Size = *(unsigned __int16 *)(v3 + 1856);
      *(&v40[0].Reserved + 1 * v14) = 0;
    }
    v15 = v12;
    v40[v15].Ptr = (ULONGLONG)&v34;
    *(_QWORD *)&v40[v15].Size = 2LL;
    EtwWrite(v9, &EventDescriptor, 0LL, v12 + 1, v40);
  }
  CmpRemoveHiveFromNamespace(v3, a1, (__int64)&v36);
  *(_DWORD *)(v3 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(v3 + 4236), 1u) & 0x7F) + 4240) = 8;
  if ( v6 )
  {
    *(_DWORD *)(v3 + 4768) = 1;
    CmpDecrementAppHiveUnloadCount();
  }
  CmpFlushNotifiesOnKeyBodyList(a1, 1LL, &v36);
  CmpMarkKeyUnbacked(a1, &v36);
  CmpDiscardKcb(a1);
  CmpRemoveLayerLinkForDiscardedKcb(a1);
  LOBYTE(v16) = 1;
  CmpCleanUpSubKeyInfo(*(_QWORD *)(*(_QWORD *)(a1 + 72) + 72LL), v16);
  CmpDrainDelayDerefContext((_QWORD **)&v36);
  CmpUnlockRegistry(v18, v17, v19, v20, UserData, v33);
  *a3 &= ~2u;
  if ( (*a3 & 4) != 0 )
  {
    UNLOCK_HIVE_LOAD();
    *a3 &= ~4u;
  }
  ZwDeleteValueKey(CmpHiveFileListHandle, (PUNICODE_STRING)(v3 + 1856));
  CmpDestroySecurityCache(v3);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  CmpUnJoinClassOfTrust(v3);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  if ( (*(_DWORD *)(v3 + 160) & 0x400) != 0 )
  {
    v22 = *(_QWORD *)(v3 + 1624);
    if ( *(_QWORD *)(v22 + 8) != v3 + 1624 || (v23 = *(_QWORD **)(v3 + 1632), *v23 != v3 + 1624) )
      __fastfail(3u);
    *v23 = v22;
    *(_QWORD *)(v22 + 8) = v23;
  }
  CmpVERemoveHiveFromSIDMappingTable(v3);
  v24 = CmpFlushHive(v3);
  if ( v24 == -1073741811 )
    v24 = 0;
  v25 = *(_DWORD *)(v3 + 280) + 4096;
  HvHiveCleanup(v3);
  if ( v24 >= 0 && (*(_DWORD *)(v3 + 160) & 0x8000) == 0 && (__int64)(*(_QWORD *)(v3 + 1800) - v25) > 0x100000 )
    CmpDoFileSetSizeEx(v3, 0LL, v25, 0LL);
  CmpCmdHiveClose(v3);
  v26 = *(struct _PRIVILEGE_SET **)(v3 + 4792);
  if ( v26 )
    CmpVolumeContextDecrementRefCount(v26);
  if ( v6 )
  {
    *(_DWORD *)(v3 + 4768) = 0;
    _InterlockedOr(v31, 0);
    if ( *(_QWORD *)(v3 + 4776) )
      ExfUnblockPushLock((volatile __int64 *)(v3 + 4776), 0LL);
  }
  v27 = 0;
  if ( *(_DWORD *)(v3 + 2920) )
  {
    do
    {
      KeSetEvent(*(PRKEVENT *)(*(_QWORD *)(v3 + 2928) + 8LL * v27), 0, 0);
      ObfDereferenceObject(*(PVOID *)(*(_QWORD *)(v3 + 2928) + 8LL * v27));
      v28 = *(_DWORD *)(v3 + 2920);
      ++v27;
    }
    while ( v27 < v28 );
    if ( v28 )
      ExFreePoolWithTag(*(PVOID *)(v3 + 2928), 0);
  }
  v29 = EtwpRegTraceHandle;
  v35 = v24;
  v38 = (EVENT_DESCRIPTOR)REGISTRY_PERF_EVENT_HIVE_UNLOAD_STOP;
  result = EtwEventEnabled(EtwpRegTraceHandle, &v38);
  if ( result )
  {
    *(_QWORD *)&v39.Size = 4LL;
    v39.Ptr = (ULONGLONG)&v35;
    return EtwWrite(v29, &v38, 0LL, 1u, &v39);
  }
  return result;
}
