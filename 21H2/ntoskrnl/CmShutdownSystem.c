/*
 * XREFs of CmShutdownSystem @ 0x14086B8F8
 * Callers:
 *     PopGracefulShutdown @ 0x1409B0F60 (PopGracefulShutdown.c)
 * Callees:
 *     ExBlockOnAddressPushLock @ 0x14029CC60 (ExBlockOnAddressPushLock.c)
 *     HalPutDmaAdapter @ 0x1402C1740 (HalPutDmaAdapter.c)
 *     CmpUnJoinClassOfTrust @ 0x14036173C (CmpUnJoinClassOfTrust.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     ZwClose @ 0x1403FA580 (ZwClose.c)
 *     CmpDetachFromRegistryProcess @ 0x1405F613C (CmpDetachFromRegistryProcess.c)
 *     CmpAttachToRegistryProcess @ 0x1405F6390 (CmpAttachToRegistryProcess.c)
 *     CmpFlushHive @ 0x14062A0D8 (CmpFlushHive.c)
 *     CmpGetNextActiveHive @ 0x140672520 (CmpGetNextActiveHive.c)
 *     UNLOCK_HIVE_LOAD @ 0x1406725C0 (UNLOCK_HIVE_LOAD.c)
 *     LOCK_HIVE_LOAD @ 0x140672754 (LOCK_HIVE_LOAD.c)
 *     CmpLockRegistryExclusive @ 0x14067278C (CmpLockRegistryExclusive.c)
 *     CmShutdownCmRM @ 0x1406BB458 (CmShutdownCmRM.c)
 *     HvMarkBaseBlockDirty @ 0x1406BCFEC (HvMarkBaseBlockDirty.c)
 *     CmCloseRmHandle @ 0x1406C2CB0 (CmCloseRmHandle.c)
 *     CmCloseTmHandle @ 0x1406C2CD8 (CmCloseTmHandle.c)
 *     CmpUnlockRegistry @ 0x1406F5ED0 (CmpUnlockRegistry.c)
 *     HvHiveCleanup @ 0x140709C24 (HvHiveCleanup.c)
 *     CmpVolumeContextDecrementRefCount @ 0x14071CA40 (CmpVolumeContextDecrementRefCount.c)
 *     CmpCmdHiveClose @ 0x14071CE14 (CmpCmdHiveClose.c)
 *     CmpVERemoveHiveFromSIDMappingTable @ 0x14071CF7C (CmpVERemoveHiveFromSIDMappingTable.c)
 *     UnlockShutdown @ 0x14071D2E4 (UnlockShutdown.c)
 *     CmpDoFileSetSizeEx @ 0x140724A00 (CmpDoFileSetSizeEx.c)
 *     CmpFlushTraceLoggingProvider @ 0x14086A758 (CmpFlushTraceLoggingProvider.c)
 *     CmpTraceShutdownFlushStart @ 0x14086AF24 (CmpTraceShutdownFlushStart.c)
 *     CmpTraceShutdownFlushStop @ 0x14086AF94 (CmpTraceShutdownFlushStop.c)
 *     CmpTraceShutdownRundownComplete @ 0x14086B004 (CmpTraceShutdownRundownComplete.c)
 *     CmpTraceShutdownStart @ 0x14086B074 (CmpTraceShutdownStart.c)
 *     CmpTraceShutdownStop @ 0x14086B0E4 (CmpTraceShutdownStop.c)
 *     CmFcShutdownSystem @ 0x14086B184 (CmFcShutdownSystem.c)
 *     CmpFreeAllMemory @ 0x14086BC98 (CmpFreeAllMemory.c)
 *     CmpRecordShutdownStopTime @ 0x14086BF90 (CmpRecordShutdownStopTime.c)
 *     CmpWaitForShutdownRundownRelease @ 0x140875C08 (CmpWaitForShutdownRundownRelease.c)
 *     LockShutdownExclusive @ 0x140875C30 (LockShutdownExclusive.c)
 *     CmpShutdownWorkers @ 0x140876D50 (CmpShutdownWorkers.c)
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
  struct _EX_RUNDOWN_REF *m; // rcx
  __int64 *v24; // rax
  struct _EX_RUNDOWN_REF *v25; // rbx
  struct _EX_RUNDOWN_REF *n; // rcx
  unsigned int v27; // edi
  __int64 v28; // rdx
  __int64 v29; // r8
  _DWORD *v30; // r9
  struct _PRIVILEGE_SET *v31; // rcx
  __int64 *v32; // rax
  __int64 v33; // rbx
  int v34; // ebx
  __int64 **v35; // rax
  struct _PRIVILEGE_SET *v36; // rcx
  __int64 v37; // [rsp+30h] [rbp-40h] BYREF
  _OWORD v38[3]; // [rsp+38h] [rbp-38h] BYREF

  memset(v38, 0, sizeof(v38));
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
    LODWORD(v37) = CmpActiveHiveRundownCount;
    if ( CmpActiveHiveRundownCount > 0 )
    {
      CmpUnlockRegistry();
      UNLOCK_HIVE_LOAD();
      do
      {
        ExBlockOnAddressPushLock((__int64)&CmpActiveHiveRundownEvent, &CmpActiveHiveRundownCount, &v37, 4uLL, 0LL);
        LODWORD(v37) = CmpActiveHiveRundownCount;
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
    CmpAttachToRegistryProcess((__int64)v38, v17, v18, v19);
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
    CmpDetachFromRegistryProcess((__int64)v38);
    LockShutdownExclusive();
    LOCK_HIVE_LOAD();
    CmpLockRegistryExclusive();
    for ( m = 0LL; ; m = v25 )
    {
      v24 = CmpGetNextActiveHive(m);
      v25 = (struct _EX_RUNDOWN_REF *)v24;
      if ( !v24 )
        break;
      CmShutdownCmRM(v24[524], 0LL);
    }
    for ( n = 0LL; ; n = (struct _EX_RUNDOWN_REF *)v33 )
    {
      v32 = CmpGetNextActiveHive(n);
      v33 = (__int64)v32;
      if ( !v32 )
        break;
      CmpUnJoinClassOfTrust((__int64)v32);
      CmpVERemoveHiveFromSIDMappingTable(v33);
      v27 = *(_DWORD *)(v33 + 272) + 4096;
      CmpAttachToRegistryProcess((__int64)v38, v28, v29, v30);
      HvHiveCleanup(v33);
      CmpDetachFromRegistryProcess((__int64)v38);
      if ( *(_BYTE *)(v33 + 4824)
        && (*(_DWORD *)(v33 + 160) & 0x8000) == 0
        && (__int64)(*(_QWORD *)(v33 + 1792) - v27) > 0x100000 )
      {
        CmpDoFileSetSizeEx(v33, 0, v27, 0);
      }
      CmpCmdHiveClose(v33);
      v31 = *(struct _PRIVILEGE_SET **)(v33 + 4832);
      if ( v31 )
        CmpVolumeContextDecrementRefCount(v31);
    }
    HvShutdownComplete = 1;
    if ( (PopShutdownCleanly & 8) != 0 && !(_BYTE)CmFirstTime )
      CmpFreeAllMemory();
    CmpUnlockRegistry();
    UNLOCK_HIVE_LOAD();
    UnlockShutdown();
    v34 = 0;
    v35 = &CmpWellKnownVolumeList;
    if ( CmpWellKnownVolumeList )
    {
      do
      {
        v36 = (struct _PRIVILEGE_SET *)v35[1];
        if ( v36 )
          CmpVolumeContextDecrementRefCount(v36);
        v35 = &(&CmpWellKnownVolumeList)[2 * (unsigned int)++v34];
      }
      while ( *v35 );
    }
    CmpTraceShutdownStop();
  }
  else
  {
    CmpDoIdleProcessing = 0;
    CmpNoMoreTx = 1;
  }
}
