/*
 * XREFs of CmShutdownSystem @ 0x1408682A8
 * Callers:
 *     PopGracefulShutdown @ 0x1409AE0F0 (PopGracefulShutdown.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     CmpUnJoinClassOfTrust @ 0x1402725E0 (CmpUnJoinClassOfTrust.c)
 *     ExBlockOnAddressPushLock @ 0x140325580 (ExBlockOnAddressPushLock.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     ZwClose @ 0x1403F37A0 (ZwClose.c)
 *     CmpAttachToRegistryProcess @ 0x1405EA8E0 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x1405EC100 (CmpDetachFromRegistryProcess.c)
 *     CmpUnlockRegistry @ 0x1405F3D20 (CmpUnlockRegistry.c)
 *     CmpFlushHive @ 0x14061F888 (CmpFlushHive.c)
 *     CmpDoFileSetSizeEx @ 0x140637A3C (CmpDoFileSetSizeEx.c)
 *     CmpGetNextActiveHive @ 0x14063FE90 (CmpGetNextActiveHive.c)
 *     UNLOCK_HIVE_LOAD @ 0x14063FF30 (UNLOCK_HIVE_LOAD.c)
 *     LOCK_HIVE_LOAD @ 0x1406400C4 (LOCK_HIVE_LOAD.c)
 *     CmpLockRegistryExclusive @ 0x1406400FC (CmpLockRegistryExclusive.c)
 *     CmpCmdHiveClose @ 0x140643988 (CmpCmdHiveClose.c)
 *     CmpVERemoveHiveFromSIDMappingTable @ 0x140643AE0 (CmpVERemoveHiveFromSIDMappingTable.c)
 *     CmpVolumeContextDecrementRefCount @ 0x140644ADC (CmpVolumeContextDecrementRefCount.c)
 *     CmShutdownCmRM @ 0x140652EA8 (CmShutdownCmRM.c)
 *     CmCloseTmHandle @ 0x1406531BC (CmCloseTmHandle.c)
 *     CmCloseRmHandle @ 0x1406531E4 (CmCloseRmHandle.c)
 *     HvHiveCleanup @ 0x14069E3E4 (HvHiveCleanup.c)
 *     UnlockShutdown @ 0x14070A50C (UnlockShutdown.c)
 *     HvMarkBaseBlockDirty @ 0x14070ADAC (HvMarkBaseBlockDirty.c)
 *     CmpFlushTraceLoggingProvider @ 0x140867108 (CmpFlushTraceLoggingProvider.c)
 *     CmpTraceShutdownFlushStart @ 0x1408678D4 (CmpTraceShutdownFlushStart.c)
 *     CmpTraceShutdownFlushStop @ 0x140867944 (CmpTraceShutdownFlushStop.c)
 *     CmpTraceShutdownRundownComplete @ 0x1408679B4 (CmpTraceShutdownRundownComplete.c)
 *     CmpTraceShutdownStart @ 0x140867A24 (CmpTraceShutdownStart.c)
 *     CmpTraceShutdownStop @ 0x140867A94 (CmpTraceShutdownStop.c)
 *     CmFcShutdownSystem @ 0x140867B34 (CmFcShutdownSystem.c)
 *     CmpFreeAllMemory @ 0x140868648 (CmpFreeAllMemory.c)
 *     CmpRecordShutdownStopTime @ 0x140868940 (CmpRecordShutdownStopTime.c)
 *     CmpWaitForShutdownRundownRelease @ 0x1408727CC (CmpWaitForShutdownRundownRelease.c)
 *     LockShutdownExclusive @ 0x1408727F4 (LockShutdownExclusive.c)
 *     CmpShutdownWorkers @ 0x140873880 (CmpShutdownWorkers.c)
 */

void __fastcall CmShutdownSystem(int a1)
{
  struct _EX_RUNDOWN_REF *i; // rcx
  void *v2; // rdi
  char v3; // dl
  void *v4; // rsi
  __int64 *NextActiveHive; // rax
  struct _EX_RUNDOWN_REF *v6; // rbx
  __int64 *j; // rax
  __int64 v8; // rcx
  __int64 v9; // rdx
  int v10; // eax
  unsigned int v11; // eax
  struct _EX_RUNDOWN_REF *v12; // rbx
  __int64 v13; // r8
  __int64 v14; // rdx
  int v15; // ecx
  unsigned int v16; // ecx
  struct _EX_RUNDOWN_REF *k; // rcx
  __int64 *v18; // rax
  struct _EX_RUNDOWN_REF *v19; // rbx
  struct _EX_RUNDOWN_REF *m; // rcx
  __int64 *v21; // rax
  struct _EX_RUNDOWN_REF *v22; // rbx
  struct _EX_RUNDOWN_REF *n; // rcx
  unsigned int v24; // edi
  struct _PRIVILEGE_SET *v25; // rcx
  __int64 *v26; // rax
  __int64 v27; // rbx
  int v28; // ebx
  __int64 **v29; // rax
  struct _PRIVILEGE_SET *v30; // rcx
  __int64 v31; // [rsp+30h] [rbp-40h] BYREF
  _OWORD v32[3]; // [rsp+38h] [rbp-38h] BYREF

  memset(v32, 0, sizeof(v32));
  if ( a1 )
  {
    CmpTraceShutdownStart();
    CmFcShutdownSystem(1);
    if ( CmpRegistryRootObject )
      HalPutDmaAdapter((PADAPTER_OBJECT)CmpRegistryRootObject);
    CmpRecordShutdownStopTime();
    CmpWaitForShutdownRundownRelease();
    CmpTraceShutdownRundownComplete();
    CmpFlushTraceLoggingProvider();
    LockShutdownExclusive();
    LOCK_HIVE_LOAD();
    CmpLockRegistryExclusive();
    LODWORD(v31) = CmpActiveHiveRundownCount;
    if ( CmpActiveHiveRundownCount > 0 )
    {
      CmpUnlockRegistry();
      UNLOCK_HIVE_LOAD();
      do
      {
        ExBlockOnAddressPushLock((__int64)&CmpActiveHiveRundownEvent, &CmpActiveHiveRundownCount, &v31, 4uLL, 0LL);
        LODWORD(v31) = CmpActiveHiveRundownCount;
      }
      while ( CmpActiveHiveRundownCount > 0 );
      LOCK_HIVE_LOAD();
      CmpLockRegistryExclusive();
    }
    for ( i = 0LL; ; i = v6 )
    {
      NextActiveHive = CmpGetNextActiveHive(i);
      v6 = (struct _EX_RUNDOWN_REF *)NextActiveHive;
      if ( !NextActiveHive )
        break;
      v2 = (void *)CmCloseRmHandle(NextActiveHive[524], 1);
      v4 = (void *)CmCloseTmHandle(v6[524].Count, v3);
      CmpUnlockRegistry();
      UNLOCK_HIVE_LOAD();
      if ( v2 )
      {
        ZwClose(v2);
        ZwClose(v4);
      }
      LOCK_HIVE_LOAD();
      CmpLockRegistryExclusive();
    }
    if ( !(_BYTE)CmFirstTime )
      CmpShutdownWorkers();
    for ( j = CmpGetNextActiveHive(0LL); ; j = CmpGetNextActiveHive(v12) )
    {
      v12 = (struct _EX_RUNDOWN_REF *)j;
      if ( !j )
        break;
      v8 = j[524];
      if ( v8 )
      {
        v9 = j[8];
        v10 = *(_DWORD *)(v9 + 144);
        if ( *(_QWORD *)(v8 + 16) == v8 + 16 )
          v11 = v10 & 0xFFFFFFFE;
        else
          v11 = v10 | 1;
        *(_DWORD *)(v9 + 144) = v11;
        HvMarkBaseBlockDirty((__int64)v12);
      }
    }
    v13 = qword_140C01170;
    if ( CmRmSystem )
    {
      v14 = *(_QWORD *)(qword_140C01170 + 64);
      v15 = *(_DWORD *)(v14 + 144);
      if ( *((PVOID *)CmRmSystem + 2) == (char *)CmRmSystem + 16 )
        v16 = v15 & 0xFFFFFFFE;
      else
        v16 = v15 | 1;
      *(_DWORD *)(v14 + 144) = v16;
      HvMarkBaseBlockDirty(v13);
    }
    CmpUnlockRegistry();
    UNLOCK_HIVE_LOAD();
    UnlockShutdown();
    CmpAttachToRegistryProcess((__int64)v32);
    CmpTraceShutdownFlushStart();
    for ( k = 0LL; ; k = v19 )
    {
      v18 = CmpGetNextActiveHive(k);
      v19 = (struct _EX_RUNDOWN_REF *)v18;
      if ( !v18 )
        break;
      if ( !BYTE1(NlsMbCodePageTag) && (v18[20] & 2) == 0 )
        *((_BYTE *)v18 + 4824) = (int)CmpFlushHive((ULONG_PTR)v18, 0xCu) >= 0;
    }
    CmpTraceShutdownFlushStop();
    CmpDetachFromRegistryProcess((__int64)v32);
    LockShutdownExclusive();
    LOCK_HIVE_LOAD();
    CmpLockRegistryExclusive();
    for ( m = 0LL; ; m = v22 )
    {
      v21 = CmpGetNextActiveHive(m);
      v22 = (struct _EX_RUNDOWN_REF *)v21;
      if ( !v21 )
        break;
      CmShutdownCmRM(v21[524], 0LL);
    }
    for ( n = 0LL; ; n = (struct _EX_RUNDOWN_REF *)v27 )
    {
      v26 = CmpGetNextActiveHive(n);
      v27 = (__int64)v26;
      if ( !v26 )
        break;
      CmpUnJoinClassOfTrust((__int64)v26);
      CmpVERemoveHiveFromSIDMappingTable(v27);
      v24 = *(_DWORD *)(v27 + 272) + 4096;
      CmpAttachToRegistryProcess((__int64)v32);
      HvHiveCleanup(v27);
      CmpDetachFromRegistryProcess((__int64)v32);
      if ( *(_BYTE *)(v27 + 4824)
        && (*(_DWORD *)(v27 + 160) & 0x8000) == 0
        && (__int64)(*(_QWORD *)(v27 + 1792) - v24) > 0x100000 )
      {
        CmpDoFileSetSizeEx(v27, 0, v24, 0);
      }
      CmpCmdHiveClose(v27);
      v25 = *(struct _PRIVILEGE_SET **)(v27 + 4832);
      if ( v25 )
        CmpVolumeContextDecrementRefCount(v25);
    }
    HvShutdownComplete = 1;
    if ( (PopShutdownCleanly & 8) != 0 && !(_BYTE)CmFirstTime )
      CmpFreeAllMemory();
    CmpUnlockRegistry();
    UNLOCK_HIVE_LOAD();
    UnlockShutdown();
    v28 = 0;
    v29 = &CmpWellKnownVolumeList;
    if ( CmpWellKnownVolumeList )
    {
      do
      {
        v30 = (struct _PRIVILEGE_SET *)v29[1];
        if ( v30 )
          CmpVolumeContextDecrementRefCount(v30);
        v29 = &(&CmpWellKnownVolumeList)[2 * (unsigned int)++v28];
      }
      while ( *v29 );
    }
    CmpTraceShutdownStop();
  }
  else
  {
    CmpDoIdleProcessing = 0;
    CmpNoMoreTx = 1;
  }
}
