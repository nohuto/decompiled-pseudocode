/*
 * XREFs of CmShutdownSystem @ 0x140866F58
 * Callers:
 *     PopGracefulShutdown @ 0x1409AD290 (PopGracefulShutdown.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     CmpUnJoinClassOfTrust @ 0x1402D2E54 (CmpUnJoinClassOfTrust.c)
 *     ExBlockOnAddressPushLock @ 0x1402EBC50 (ExBlockOnAddressPushLock.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     ZwClose @ 0x1403F2510 (ZwClose.c)
 *     CmpAttachToRegistryProcess @ 0x14061FF00 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140621720 (CmpDetachFromRegistryProcess.c)
 *     CmpUnlockRegistry @ 0x140629290 (CmpUnlockRegistry.c)
 *     CmCloseRmHandle @ 0x140659014 (CmCloseRmHandle.c)
 *     CmCloseTmHandle @ 0x14065903C (CmCloseTmHandle.c)
 *     CmShutdownCmRM @ 0x140659064 (CmShutdownCmRM.c)
 *     CmpCmdHiveClose @ 0x14065B1C8 (CmpCmdHiveClose.c)
 *     CmpVERemoveHiveFromSIDMappingTable @ 0x14065B320 (CmpVERemoveHiveFromSIDMappingTable.c)
 *     CmpVolumeContextDecrementRefCount @ 0x14065B488 (CmpVolumeContextDecrementRefCount.c)
 *     CmpFlushHive @ 0x140664FA8 (CmpFlushHive.c)
 *     CmpDoFileSetSizeEx @ 0x14068560C (CmpDoFileSetSizeEx.c)
 *     UnlockShutdown @ 0x14068E070 (UnlockShutdown.c)
 *     CmpGetNextActiveHive @ 0x140690FA0 (CmpGetNextActiveHive.c)
 *     UNLOCK_HIVE_LOAD @ 0x140691040 (UNLOCK_HIVE_LOAD.c)
 *     LOCK_HIVE_LOAD @ 0x1406911D4 (LOCK_HIVE_LOAD.c)
 *     CmpLockRegistryExclusive @ 0x14069120C (CmpLockRegistryExclusive.c)
 *     HvHiveCleanup @ 0x140698314 (HvHiveCleanup.c)
 *     HvMarkBaseBlockDirty @ 0x1406E6EEC (HvMarkBaseBlockDirty.c)
 *     CmpFlushTraceLoggingProvider @ 0x140865DE8 (CmpFlushTraceLoggingProvider.c)
 *     CmpTraceShutdownFlushStart @ 0x1408665B4 (CmpTraceShutdownFlushStart.c)
 *     CmpTraceShutdownFlushStop @ 0x140866624 (CmpTraceShutdownFlushStop.c)
 *     CmpTraceShutdownRundownComplete @ 0x140866694 (CmpTraceShutdownRundownComplete.c)
 *     CmpTraceShutdownStart @ 0x140866704 (CmpTraceShutdownStart.c)
 *     CmpTraceShutdownStop @ 0x140866774 (CmpTraceShutdownStop.c)
 *     CmFcShutdownSystem @ 0x1408667F0 (CmFcShutdownSystem.c)
 *     CmpFreeAllMemory @ 0x1408672F8 (CmpFreeAllMemory.c)
 *     CmpRecordShutdownStopTime @ 0x1408675F0 (CmpRecordShutdownStopTime.c)
 *     CmpWaitForShutdownRundownRelease @ 0x1408714D8 (CmpWaitForShutdownRundownRelease.c)
 *     LockShutdownExclusive @ 0x140871500 (LockShutdownExclusive.c)
 *     CmpShutdownWorkers @ 0x140872590 (CmpShutdownWorkers.c)
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
  __int64 v17; // rdx
  __int64 v18; // r8
  _DWORD *v19; // r9
  struct _EX_RUNDOWN_REF *k; // rcx
  __int64 *v21; // rax
  struct _EX_RUNDOWN_REF *v22; // rbx
  __int64 v23; // rdx
  __int64 v24; // r8
  _DWORD *v25; // r9
  struct _EX_RUNDOWN_REF *m; // rcx
  __int64 *v27; // rax
  struct _EX_RUNDOWN_REF *v28; // rbx
  struct _EX_RUNDOWN_REF *n; // rcx
  unsigned int v30; // edi
  __int64 v31; // rdx
  __int64 v32; // r8
  _DWORD *v33; // r9
  __int64 v34; // rdx
  __int64 v35; // r8
  _DWORD *v36; // r9
  struct _PRIVILEGE_SET *v37; // rcx
  __int64 *v38; // rax
  __int64 v39; // rbx
  int v40; // ebx
  __int64 **v41; // rax
  struct _PRIVILEGE_SET *v42; // rcx
  __int64 v43; // [rsp+30h] [rbp-40h] BYREF
  _OWORD v44[3]; // [rsp+38h] [rbp-38h] BYREF

  memset(v44, 0, sizeof(v44));
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
    LODWORD(v43) = CmpActiveHiveRundownCount;
    if ( CmpActiveHiveRundownCount > 0 )
    {
      CmpUnlockRegistry();
      UNLOCK_HIVE_LOAD();
      do
      {
        ExBlockOnAddressPushLock((__int64)&CmpActiveHiveRundownEvent, &CmpActiveHiveRundownCount, &v43, 4uLL, 0LL);
        LODWORD(v43) = CmpActiveHiveRundownCount;
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
    CmpAttachToRegistryProcess((__int64)v44, v17, v18, v19);
    CmpTraceShutdownFlushStart();
    for ( k = 0LL; ; k = v22 )
    {
      v21 = CmpGetNextActiveHive(k);
      v22 = (struct _EX_RUNDOWN_REF *)v21;
      if ( !v21 )
        break;
      if ( !BYTE1(NlsMbCodePageTag) && (v21[20] & 2) == 0 )
        *((_BYTE *)v21 + 4824) = (int)CmpFlushHive((ULONG_PTR)v21, 0xCu) >= 0;
    }
    CmpTraceShutdownFlushStop();
    CmpDetachFromRegistryProcess((__int64)v44, v23, v24, v25);
    LockShutdownExclusive();
    LOCK_HIVE_LOAD();
    CmpLockRegistryExclusive();
    for ( m = 0LL; ; m = v28 )
    {
      v27 = CmpGetNextActiveHive(m);
      v28 = (struct _EX_RUNDOWN_REF *)v27;
      if ( !v27 )
        break;
      CmShutdownCmRM(v27[524], 0LL);
    }
    for ( n = 0LL; ; n = (struct _EX_RUNDOWN_REF *)v39 )
    {
      v38 = CmpGetNextActiveHive(n);
      v39 = (__int64)v38;
      if ( !v38 )
        break;
      CmpUnJoinClassOfTrust((__int64)v38);
      CmpVERemoveHiveFromSIDMappingTable(v39);
      v30 = *(_DWORD *)(v39 + 272) + 4096;
      CmpAttachToRegistryProcess((__int64)v44, v31, v32, v33);
      HvHiveCleanup(v39);
      CmpDetachFromRegistryProcess((__int64)v44, v34, v35, v36);
      if ( *(_BYTE *)(v39 + 4824)
        && (*(_DWORD *)(v39 + 160) & 0x8000) == 0
        && (__int64)(*(_QWORD *)(v39 + 1792) - v30) > 0x100000 )
      {
        CmpDoFileSetSizeEx(v39, 0, v30, 0);
      }
      CmpCmdHiveClose(v39);
      v37 = *(struct _PRIVILEGE_SET **)(v39 + 4832);
      if ( v37 )
        CmpVolumeContextDecrementRefCount(v37);
    }
    HvShutdownComplete = 1;
    if ( (PopShutdownCleanly & 8) != 0 && !(_BYTE)CmFirstTime )
      CmpFreeAllMemory();
    CmpUnlockRegistry();
    UNLOCK_HIVE_LOAD();
    UnlockShutdown();
    v40 = 0;
    v41 = &CmpWellKnownVolumeList;
    if ( CmpWellKnownVolumeList )
    {
      do
      {
        v42 = (struct _PRIVILEGE_SET *)v41[1];
        if ( v42 )
          CmpVolumeContextDecrementRefCount(v42);
        v41 = &(&CmpWellKnownVolumeList)[2 * (unsigned int)++v40];
      }
      while ( *v41 );
    }
    CmpTraceShutdownStop();
  }
  else
  {
    CmpDoIdleProcessing = 0;
    CmpNoMoreTx = 1;
  }
}
