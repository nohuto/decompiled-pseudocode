/*
 * XREFs of CmpLateUnloadHiveWorker @ 0x1405DFF10
 * Callers:
 *     <none>
 * Callees:
 *     CmpTryToRundownHive @ 0x140213B70 (CmpTryToRundownHive.c)
 *     CmpDecrementAppHiveUnloadCount @ 0x140213D74 (CmpDecrementAppHiveUnloadCount.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     CmpDereferenceHive @ 0x1405E006C (CmpDereferenceHive.c)
 *     CmpCompleteUnloadKey @ 0x1405E0268 (CmpCompleteUnloadKey.c)
 *     CmpReleaseShutdownRundown @ 0x14064A4A0 (CmpReleaseShutdownRundown.c)
 *     CmpAcquireShutdownRundown @ 0x14064B8D0 (CmpAcquireShutdownRundown.c)
 *     UNLOCK_HIVE_LOAD @ 0x1406677F0 (UNLOCK_HIVE_LOAD.c)
 *     CmpLockRegistryFreezeAware @ 0x140667920 (CmpLockRegistryFreezeAware.c)
 *     LOCK_HIVE_LOAD @ 0x140667984 (LOCK_HIVE_LOAD.c)
 *     CmpDetachFromRegistryProcess @ 0x1406E589C (CmpDetachFromRegistryProcess.c)
 *     CmpAttachToRegistryProcess @ 0x1406E5AF0 (CmpAttachToRegistryProcess.c)
 *     CmpUnlockRegistry @ 0x14070D2B0 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x14070D2F0 (CmpLockRegistry.c)
 *     CmpDereferenceKeyControlBlock @ 0x1407129F0 (CmpDereferenceKeyControlBlock.c)
 */

__int64 __fastcall CmpLateUnloadHiveWorker(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rbx
  char v6; // al
  __int64 v7; // rdx
  __int64 v8; // rcx
  ULONG_PTR v9; // rbx
  __int64 v10; // rdx
  _BYTE v12[4]; // [rsp+20h] [rbp-48h] BYREF
  int v13; // [rsp+24h] [rbp-44h] BYREF
  _OWORD v14[3]; // [rsp+28h] [rbp-40h] BYREF

  v13 = 2;
  memset(v14, 0, sizeof(v14));
  LOCK_HIVE_LOAD();
  LOBYTE(v2) = 1;
  CmpLockRegistryFreezeAware(v2);
  *(_DWORD *)(a1 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 4276), 1u) & 0x7F) + 4280) = 22;
  v5 = *(_QWORD *)(a1 + 2928);
  if ( (*(_DWORD *)(a1 + 160) & 0x40) != 0 )
  {
    *(_DWORD *)(a1 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 4276), 1u) & 0x7F) + 4280) = 23;
LABEL_11:
    CmpUnlockRegistry(v4, v3);
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
  v6 = CmpTryToRundownHive((struct _EX_RUNDOWN_REF *)a1, v5, v12);
  *(_QWORD *)(a1 + 2944) = 0LL;
  if ( v6 )
  {
    v9 = *(_QWORD *)(a1 + 2928);
    *(_DWORD *)(a1 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 4276), 1u) & 0x7F) + 4280) = 30;
    CmpAttachToRegistryProcess(v14);
    CmpCompleteUnloadKey(v9, v10, &v13);
    CmpDetachFromRegistryProcess(v14);
    CmpLockRegistry();
    CmpDereferenceKeyControlBlock(v9);
LABEL_8:
    CmpUnlockRegistry(v4, v3);
    UNLOCK_HIVE_LOAD();
    CmpDereferenceHive(a1);
    return CmpReleaseShutdownRundown();
  }
  if ( (*(_DWORD *)(a1 + 4152) & 0x20) != 0 )
    CmpDecrementAppHiveUnloadCount();
  CmpUnlockRegistry(v8, v7);
  UNLOCK_HIVE_LOAD();
  if ( v12[0] )
    CmpReleaseShutdownRundown();
  return CmpDereferenceHive(a1);
}
