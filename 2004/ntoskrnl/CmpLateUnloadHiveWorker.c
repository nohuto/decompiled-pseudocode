/*
 * XREFs of CmpLateUnloadHiveWorker @ 0x1406434F0
 * Callers:
 *     <none>
 * Callees:
 *     CmpTryToRundownHive @ 0x140272410 (CmpTryToRundownHive.c)
 *     CmpDecrementAppHiveUnloadCount @ 0x140272734 (CmpDecrementAppHiveUnloadCount.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     CmpAttachToRegistryProcess @ 0x1405EA8E0 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x1405EC100 (CmpDetachFromRegistryProcess.c)
 *     CmpDereferenceKeyControlBlock @ 0x1405EEA10 (CmpDereferenceKeyControlBlock.c)
 *     CmpUnlockRegistry @ 0x1405F3D20 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x1405F3D60 (CmpLockRegistry.c)
 *     UNLOCK_HIVE_LOAD @ 0x14063FF30 (UNLOCK_HIVE_LOAD.c)
 *     CmpLockRegistryFreezeAware @ 0x140640060 (CmpLockRegistryFreezeAware.c)
 *     LOCK_HIVE_LOAD @ 0x1406400C4 (LOCK_HIVE_LOAD.c)
 *     CmpCompleteUnloadKey @ 0x14064364C (CmpCompleteUnloadKey.c)
 *     CmpDereferenceHive @ 0x140644B24 (CmpDereferenceHive.c)
 *     CmpReleaseShutdownRundown @ 0x1406941E0 (CmpReleaseShutdownRundown.c)
 *     CmpAcquireShutdownRundown @ 0x140695430 (CmpAcquireShutdownRundown.c)
 */

__int64 __fastcall CmpLateUnloadHiveWorker(__int64 a1)
{
  __int64 v2; // rbx
  char v3; // al
  ULONG_PTR v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  _BYTE v12[4]; // [rsp+20h] [rbp-48h] BYREF
  int v13; // [rsp+24h] [rbp-44h]
  _OWORD v14[3]; // [rsp+28h] [rbp-40h] BYREF

  v13 = 2;
  memset(v14, 0, sizeof(v14));
  LOCK_HIVE_LOAD();
  CmpLockRegistryFreezeAware(1);
  *(_DWORD *)(a1 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 4276), 1u) & 0x7F) + 4280) = 22;
  v2 = *(_QWORD *)(a1 + 2928);
  if ( (*(_DWORD *)(a1 + 160) & 0x40) != 0 )
  {
    *(_DWORD *)(a1 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 4276), 1u) & 0x7F) + 4280) = 23;
LABEL_11:
    CmpUnlockRegistry();
    UNLOCK_HIVE_LOAD();
    return CmpDereferenceHive(a1);
  }
  v12[0] = CmpAcquireShutdownRundown();
  if ( !v12[0] )
  {
    *(_DWORD *)(a1 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 4276), 1u) & 0x7F) + 4280) = 24;
    goto LABEL_11;
  }
  if ( !*(_BYTE *)(a1 + 2936) )
  {
    *(_DWORD *)(a1 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 4276), 1u) & 0x7F) + 4280) = 25;
    goto LABEL_8;
  }
  if ( (*(_DWORD *)(a1 + 4152) & 0x20) != 0 )
    ++CmpActiveAppHiveUnloadCount;
  v3 = CmpTryToRundownHive((struct _EX_RUNDOWN_REF *)a1, v2, v12);
  *(_QWORD *)(a1 + 2944) = 0LL;
  if ( v3 )
  {
    v4 = *(_QWORD *)(a1 + 2928);
    *(_DWORD *)(a1 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 4276), 1u) & 0x7F) + 4280) = 30;
    CmpAttachToRegistryProcess((__int64)v14);
    CmpCompleteUnloadKey(v4);
    CmpDetachFromRegistryProcess((__int64)v14);
    CmpLockRegistry();
    CmpDereferenceKeyControlBlock(v4);
LABEL_8:
    CmpUnlockRegistry();
    UNLOCK_HIVE_LOAD();
    CmpDereferenceHive(a1);
    return CmpReleaseShutdownRundown(v6, v5, v7);
  }
  if ( (*(_DWORD *)(a1 + 4152) & 0x20) != 0 )
    CmpDecrementAppHiveUnloadCount();
  CmpUnlockRegistry();
  UNLOCK_HIVE_LOAD();
  if ( v12[0] )
    CmpReleaseShutdownRundown(v10, v9, v11);
  return CmpDereferenceHive(a1);
}
