/*
 * XREFs of CmShutdownSystem @ 0x14086DCC8
 * Callers:
 *     PopGracefulShutdown @ 0x1409B4060 (PopGracefulShutdown.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     CmpUnJoinClassOfTrust @ 0x1402F2D68 (CmpUnJoinClassOfTrust.c)
 *     ExBlockOnAddressPushLock @ 0x1402F3810 (ExBlockOnAddressPushLock.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     ZwClose @ 0x1403F8350 (ZwClose.c)
 *     CmpDoFileSetSizeEx @ 0x1405DA63C (CmpDoFileSetSizeEx.c)
 *     UnlockShutdown @ 0x1405DADCC (UnlockShutdown.c)
 *     CmpUnlockRegistry @ 0x140616950 (CmpUnlockRegistry.c)
 *     CmpFlushHive @ 0x1406504C8 (CmpFlushHive.c)
 *     CmpDetachFromRegistryProcess @ 0x140678E90 (CmpDetachFromRegistryProcess.c)
 *     CmpAttachToRegistryProcess @ 0x1406790E0 (CmpAttachToRegistryProcess.c)
 *     CmpCmdHiveClose @ 0x1406A2FD8 (CmpCmdHiveClose.c)
 *     CmpVERemoveHiveFromSIDMappingTable @ 0x1406A3130 (CmpVERemoveHiveFromSIDMappingTable.c)
 *     CmpVolumeContextDecrementRefCount @ 0x1406A3298 (CmpVolumeContextDecrementRefCount.c)
 *     CmShutdownCmRM @ 0x1406A3AB8 (CmShutdownCmRM.c)
 *     CmCloseTmHandle @ 0x1406A3DCC (CmCloseTmHandle.c)
 *     CmCloseRmHandle @ 0x1406A3DF4 (CmCloseRmHandle.c)
 *     HvMarkBaseBlockDirty @ 0x1406DD19C (HvMarkBaseBlockDirty.c)
 *     CmpGetNextActiveHive @ 0x140701140 (CmpGetNextActiveHive.c)
 *     UNLOCK_HIVE_LOAD @ 0x1407011E0 (UNLOCK_HIVE_LOAD.c)
 *     LOCK_HIVE_LOAD @ 0x140701374 (LOCK_HIVE_LOAD.c)
 *     CmpLockRegistryExclusive @ 0x1407013AC (CmpLockRegistryExclusive.c)
 *     HvHiveCleanup @ 0x140706744 (HvHiveCleanup.c)
 *     CmpFlushTraceLoggingProvider @ 0x14086CB28 (CmpFlushTraceLoggingProvider.c)
 *     CmpTraceShutdownFlushStart @ 0x14086D2F4 (CmpTraceShutdownFlushStart.c)
 *     CmpTraceShutdownFlushStop @ 0x14086D364 (CmpTraceShutdownFlushStop.c)
 *     CmpTraceShutdownRundownComplete @ 0x14086D3D4 (CmpTraceShutdownRundownComplete.c)
 *     CmpTraceShutdownStart @ 0x14086D444 (CmpTraceShutdownStart.c)
 *     CmpTraceShutdownStop @ 0x14086D4B4 (CmpTraceShutdownStop.c)
 *     CmFcShutdownSystem @ 0x14086D554 (CmFcShutdownSystem.c)
 *     CmpFreeAllMemory @ 0x14086E068 (CmpFreeAllMemory.c)
 *     CmpRecordShutdownStopTime @ 0x14086E360 (CmpRecordShutdownStopTime.c)
 *     CmpWaitForShutdownRundownRelease @ 0x14087831C (CmpWaitForShutdownRundownRelease.c)
 *     LockShutdownExclusive @ 0x140878344 (LockShutdownExclusive.c)
 *     CmpShutdownWorkers @ 0x1408793D0 (CmpShutdownWorkers.c)
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
