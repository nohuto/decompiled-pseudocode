/*
 * XREFs of CmShutdownSystem2 @ 0x14053EE38
 * Callers:
 *     CmShutdownSystem @ 0x140911B58 (CmShutdownSystem.c)
 * Callees:
 *     CmpUnJoinClassOfTrust @ 0x140208994 (CmpUnJoinClassOfTrust.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     CmpVolumeContextDecrementRefCount @ 0x14067BD84 (CmpVolumeContextDecrementRefCount.c)
 *     CmpCmdHiveClose @ 0x14067C24C (CmpCmdHiveClose.c)
 *     CmpVERemoveHiveFromSIDMappingTable @ 0x14067C3A4 (CmpVERemoveHiveFromSIDMappingTable.c)
 *     UNLOCK_HIVE_LOAD @ 0x14068934C (UNLOCK_HIVE_LOAD.c)
 *     LOCK_HIVE_LOAD @ 0x1406893EC (LOCK_HIVE_LOAD.c)
 *     CmpDoFileSetSizeEx @ 0x14068EC28 (CmpDoFileSetSizeEx.c)
 *     CmpGetNextActiveHive @ 0x14071B350 (CmpGetNextActiveHive.c)
 *     CmpLockRegistryExclusive @ 0x14071B6EC (CmpLockRegistryExclusive.c)
 *     HvHiveCleanup @ 0x14079B518 (HvHiveCleanup.c)
 *     CmpFlushTraceLoggingProvider @ 0x140910800 (CmpFlushTraceLoggingProvider.c)
 *     CmpTraceShutdownRundownComplete @ 0x1409110AC (CmpTraceShutdownRundownComplete.c)
 *     CmpTraceShutdownStop @ 0x14091118C (CmpTraceShutdownStop.c)
 *     CmFcShutdownSystem @ 0x140911208 (CmFcShutdownSystem.c)
 *     CmpFreeAllMemory @ 0x140911BAC (CmpFreeAllMemory.c)
 *     CmpWaitForShutdownRundownRelease @ 0x14091CA5C (CmpWaitForShutdownRundownRelease.c)
 *     CmpUnlockRegistry @ 0x140AB4260 (CmpUnlockRegistry.c)
 *     CmpAttachToRegistryProcess @ 0x140AB4550 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140AB4580 (CmpDetachFromRegistryProcess.c)
 */

__int64 CmShutdownSystem2()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 i; // rcx
  unsigned int v5; // edi
  struct _PRIVILEGE_SET *v6; // rcx
  __int64 NextActiveHive; // rax
  __int64 v8; // rbx
  int v9; // ebx
  __int64 **v10; // rax
  struct _PRIVILEGE_SET *v11; // rcx
  _OWORD v13[3]; // [rsp+20h] [rbp-48h] BYREF

  memset(&v13[1], 0, 32);
  CmFcShutdownSystem(2LL);
  CmpWaitForShutdownRundownRelease(v1, v0, v2, v3, 0LL, 0LL);
  CmpTraceShutdownRundownComplete();
  if ( CmpRegistryRootObject )
    ObfDereferenceObject(CmpRegistryRootObject);
  CmpFlushTraceLoggingProvider();
  LOCK_HIVE_LOAD();
  CmpLockRegistryExclusive();
  for ( i = 0LL; ; i = v8 )
  {
    NextActiveHive = CmpGetNextActiveHive(i);
    v8 = NextActiveHive;
    if ( !NextActiveHive )
      break;
    CmpUnJoinClassOfTrust(NextActiveHive);
    CmpVERemoveHiveFromSIDMappingTable(v8);
    v5 = *(_DWORD *)(v8 + 280) + 4096;
    CmpAttachToRegistryProcess(v13);
    HvHiveCleanup(v8);
    CmpDetachFromRegistryProcess(v13);
    if ( *(_BYTE *)(v8 + 4784)
      && (*(_DWORD *)(v8 + 160) & 0x8000) == 0
      && (__int64)(*(_QWORD *)(v8 + 1800) - v5) > 0x100000 )
    {
      CmpDoFileSetSizeEx(v8, 0LL, v5, 0LL);
    }
    CmpCmdHiveClose(v8);
    v6 = *(struct _PRIVILEGE_SET **)(v8 + 4792);
    if ( v6 )
      CmpVolumeContextDecrementRefCount(v6);
  }
  HvShutdownComplete = 1;
  if ( (PopShutdownCleanly & 8) != 0 && !(_BYTE)CmFirstTime )
    CmpFreeAllMemory();
  CmpUnlockRegistry();
  UNLOCK_HIVE_LOAD();
  v9 = 0;
  v10 = &CmpWellKnownVolumeList;
  if ( CmpWellKnownVolumeList )
  {
    do
    {
      v11 = (struct _PRIVILEGE_SET *)v10[1];
      if ( v11 )
        CmpVolumeContextDecrementRefCount(v11);
      v10 = &(&CmpWellKnownVolumeList)[2 * (unsigned int)++v9];
    }
    while ( *v10 );
  }
  return CmpTraceShutdownStop();
}
