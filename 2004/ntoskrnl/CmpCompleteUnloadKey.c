/*
 * XREFs of CmpCompleteUnloadKey @ 0x14064364C
 * Callers:
 *     CmpLateUnloadHiveWorker @ 0x1406434F0 (CmpLateUnloadHiveWorker.c)
 *     CmpPerformUnloadKey @ 0x1406503FC (CmpPerformUnloadKey.c)
 * Callees:
 *     CmpDrainDelayDerefContext @ 0x140205E60 (CmpDrainDelayDerefContext.c)
 *     CmpInitializeDelayDerefContext @ 0x140205F64 (CmpInitializeDelayDerefContext.c)
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     KeLeaveCriticalRegion @ 0x140208500 (KeLeaveCriticalRegion.c)
 *     EtwEventEnabled @ 0x140212640 (EtwEventEnabled.c)
 *     CmpUnJoinClassOfTrust @ 0x1402725E0 (CmpUnJoinClassOfTrust.c)
 *     CmpRemoveHiveFromNamespace @ 0x14027262C (CmpRemoveHiveFromNamespace.c)
 *     CmpDecrementAppHiveUnloadCount @ 0x140272734 (CmpDecrementAppHiveUnloadCount.c)
 *     KeSetEvent @ 0x140286AD0 (KeSetEvent.c)
 *     EtwWrite @ 0x140293470 (EtwWrite.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     ExfUnblockPushLock @ 0x1403F2CC0 (ExfUnblockPushLock.c)
 *     ZwDeleteValueKey @ 0x1403F5080 (ZwDeleteValueKey.c)
 *     CmpUnlockRegistry @ 0x1405F3D20 (CmpUnlockRegistry.c)
 *     CmpFlushHive @ 0x14061F888 (CmpFlushHive.c)
 *     CmpDoFileSetSizeEx @ 0x140637A3C (CmpDoFileSetSizeEx.c)
 *     UNLOCK_HIVE_LOAD @ 0x14063FF30 (UNLOCK_HIVE_LOAD.c)
 *     CmpCmdHiveClose @ 0x140643988 (CmpCmdHiveClose.c)
 *     CmpVERemoveHiveFromSIDMappingTable @ 0x140643AE0 (CmpVERemoveHiveFromSIDMappingTable.c)
 *     CmpDestroySecurityCache @ 0x140643B98 (CmpDestroySecurityCache.c)
 *     CmpDiscardKcb @ 0x1406447A4 (CmpDiscardKcb.c)
 *     CmpMarkKeyUnbacked @ 0x140644960 (CmpMarkKeyUnbacked.c)
 *     CmpFlushNotifiesOnKeyBodyList @ 0x1406449E0 (CmpFlushNotifiesOnKeyBodyList.c)
 *     CmpVolumeContextDecrementRefCount @ 0x140644ADC (CmpVolumeContextDecrementRefCount.c)
 *     CmpCleanUpSubKeyInfo @ 0x14069CE70 (CmpCleanUpSubKeyInfo.c)
 *     HvHiveCleanup @ 0x14069E3E4 (HvHiveCleanup.c)
 *     HvMarkBaseBlockDirty @ 0x14070ADAC (HvMarkBaseBlockDirty.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

BOOLEAN __fastcall CmpCompleteUnloadKey(ULONG_PTR BugCheckParameter4, __int64 a2, _DWORD *a3)
{
  ULONG_PTR v3; // rdi
  int v6; // r12d
  __int64 v7; // rax
  REGHANDLE v8; // r14
  __int64 v9; // rdx
  struct _KTHREAD *CurrentThread; // rax
  int v11; // r14d
  unsigned int v12; // ebx
  struct _PRIVILEGE_SET *v13; // rcx
  unsigned int v14; // esi
  REGHANDLE v15; // rbx
  BOOLEAN result; // al
  unsigned int v17; // eax
  __int64 v18; // rcx
  _QWORD *v19; // rdx
  __int64 v20; // rdx
  int v21; // ecx
  unsigned int v22; // ecx
  unsigned int v23; // r9d
  __int64 v24; // rax
  unsigned int v25; // r9d
  ULONGLONG v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rax
  signed __int32 v29[8]; // [rsp+0h] [rbp-A9h] BYREF
  __int16 v30; // [rsp+30h] [rbp-79h] BYREF
  int v31; // [rsp+38h] [rbp-71h] BYREF
  __int128 v32; // [rsp+40h] [rbp-69h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+50h] [rbp-59h] BYREF
  EVENT_DESCRIPTOR v34; // [rsp+60h] [rbp-49h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v35; // [rsp+70h] [rbp-39h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData[4]; // [rsp+80h] [rbp-29h] BYREF

  v3 = *(_QWORD *)(BugCheckParameter4 + 32);
  v32 = 0LL;
  CmpInitializeDelayDerefContext(&v32);
  v6 = *(_DWORD *)(v3 + 4152) & 0x20;
  *(_DWORD *)(v3 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(v3 + 4276), 1u) & 0x7F) + 4280) = 6;
  _InterlockedCompareExchange64((volatile signed __int64 *)(v3 + 2944), 1LL, 0LL);
  v7 = *(_QWORD *)(v3 + 4192);
  if ( v7 )
  {
    v20 = *(_QWORD *)(v3 + 64);
    v21 = *(_DWORD *)(v20 + 144);
    if ( *(_QWORD *)(v7 + 16) == v7 + 16 )
      v22 = v21 & 0xFFFFFFFE;
    else
      v22 = v21 | 1;
    *(_DWORD *)(v20 + 144) = v22;
    HvMarkBaseBlockDirty(v3);
  }
  *(_DWORD *)(v3 + 160) |= 0x40u;
  v8 = EtwpRegTraceHandle;
  v30 = 0;
  EventDescriptor = (EVENT_DESCRIPTOR)REGISTRY_PERF_EVENT_HIVE_UNLOAD_START;
  if ( EtwEventEnabled(EtwpRegTraceHandle, &EventDescriptor) )
  {
    v23 = 0;
    if ( *(_QWORD *)(v3 + 1840) )
    {
      UserData[0].Ptr = *(_QWORD *)(v3 + 1840);
      v23 = 1;
      UserData[0].Size = *(unsigned __int16 *)(v3 + 1832);
      UserData[0].Reserved = 0;
    }
    v24 = v23;
    v25 = v23 + 1;
    UserData[v24].Ptr = (ULONGLONG)&v30;
    *(_QWORD *)&UserData[v24].Size = 2LL;
    v26 = *(_QWORD *)(v3 + 1856);
    if ( v26 )
    {
      v27 = v25++;
      UserData[v27].Ptr = v26;
      UserData[v27].Size = *(unsigned __int16 *)(v3 + 1848);
      *(&UserData[0].Reserved + 1 * v27) = 0;
    }
    v28 = v25;
    UserData[v28].Ptr = (ULONGLONG)&v30;
    *(_QWORD *)&UserData[v28].Size = 2LL;
    EtwWrite(v8, &EventDescriptor, 0LL, v25 + 1, UserData);
  }
  CmpRemoveHiveFromNamespace(v3, BugCheckParameter4, (__int64)&v32);
  *(_DWORD *)(v3 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(v3 + 4276), 1u) & 0x7F) + 4280) = 8;
  if ( v6 )
  {
    *(_DWORD *)(v3 + 4808) = 1;
    CmpDecrementAppHiveUnloadCount();
  }
  CmpFlushNotifiesOnKeyBodyList(BugCheckParameter4, 1LL, &v32);
  CmpMarkKeyUnbacked(BugCheckParameter4, &v32);
  CmpDiscardKcb(BugCheckParameter4);
  LOBYTE(v9) = 1;
  CmpCleanUpSubKeyInfo(*(_QWORD *)(*(_QWORD *)(BugCheckParameter4 + 72) + 72LL), v9);
  CmpDrainDelayDerefContext((_QWORD **)&v32);
  CmpUnlockRegistry();
  *a3 &= ~2u;
  if ( (*a3 & 4) != 0 )
  {
    UNLOCK_HIVE_LOAD();
    *a3 &= ~4u;
  }
  ZwDeleteValueKey(CmpHiveFileListHandle, (PUNICODE_STRING)(v3 + 1848));
  CmpDestroySecurityCache(v3);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  CmpUnJoinClassOfTrust(v3);
  KeLeaveCriticalRegion();
  if ( (*(_DWORD *)(v3 + 160) & 0x400) != 0 )
  {
    v18 = *(_QWORD *)(v3 + 1616);
    if ( *(_QWORD *)(v18 + 8) != v3 + 1616 || (v19 = *(_QWORD **)(v3 + 1624), *v19 != v3 + 1616) )
      __fastfail(3u);
    *v19 = v18;
    *(_QWORD *)(v18 + 8) = v19;
  }
  CmpVERemoveHiveFromSIDMappingTable(v3);
  v11 = CmpFlushHive(v3, 0x2Cu);
  if ( v11 == -1073741811 )
    v11 = 0;
  v12 = *(_DWORD *)(v3 + 272) + 4096;
  HvHiveCleanup(v3);
  if ( v11 >= 0 && (*(_DWORD *)(v3 + 160) & 0x8000) == 0 && (__int64)(*(_QWORD *)(v3 + 1792) - v12) > 0x100000 )
    CmpDoFileSetSizeEx(v3, 0, v12, 0);
  CmpCmdHiveClose(v3);
  v13 = *(struct _PRIVILEGE_SET **)(v3 + 4832);
  if ( v13 )
    CmpVolumeContextDecrementRefCount(v13);
  if ( v6 )
  {
    *(_DWORD *)(v3 + 4808) = 0;
    _InterlockedOr(v29, 0);
    if ( *(_QWORD *)(v3 + 4816) )
      ExfUnblockPushLock((volatile __int64 *)(v3 + 4816), 0LL);
  }
  v14 = 0;
  if ( *(_DWORD *)(v3 + 2912) )
  {
    do
    {
      KeSetEvent(*(PRKEVENT *)(*(_QWORD *)(v3 + 2920) + 8LL * v14), 0, 0);
      HalPutDmaAdapter(*(PADAPTER_OBJECT *)(*(_QWORD *)(v3 + 2920) + 8LL * v14));
      v17 = *(_DWORD *)(v3 + 2912);
      ++v14;
    }
    while ( v14 < v17 );
    if ( v17 )
      ExFreePoolWithTag(*(PVOID *)(v3 + 2920), 0);
  }
  v15 = EtwpRegTraceHandle;
  v31 = v11;
  v34 = (EVENT_DESCRIPTOR)REGISTRY_PERF_EVENT_HIVE_UNLOAD_STOP;
  result = EtwEventEnabled(EtwpRegTraceHandle, &v34);
  if ( result )
  {
    *(_QWORD *)&v35.Size = 4LL;
    v35.Ptr = (ULONGLONG)&v31;
    return EtwWrite(v15, &v34, 0LL, 1u, &v35);
  }
  return result;
}
