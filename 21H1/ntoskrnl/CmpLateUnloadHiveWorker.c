/*
 * XREFs of CmpLateUnloadHiveWorker @ 0x14065AD30
 * Callers:
 *     <none>
 * Callees:
 *     CmpDecrementAppHiveUnloadCount @ 0x1402D2DE0 (CmpDecrementAppHiveUnloadCount.c)
 *     CmpTryToRundownHive @ 0x1402D2F68 (CmpTryToRundownHive.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     CmpReleaseShutdownRundown @ 0x1405EACA0 (CmpReleaseShutdownRundown.c)
 *     CmpAcquireShutdownRundown @ 0x1405EBEF0 (CmpAcquireShutdownRundown.c)
 *     CmpAttachToRegistryProcess @ 0x14061FF00 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140621720 (CmpDetachFromRegistryProcess.c)
 *     CmpDereferenceKeyControlBlock @ 0x140624030 (CmpDereferenceKeyControlBlock.c)
 *     CmpUnlockRegistry @ 0x140629290 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x1406292D0 (CmpLockRegistry.c)
 *     CmpCompleteUnloadKey @ 0x14065AE8C (CmpCompleteUnloadKey.c)
 *     CmpDereferenceHive @ 0x14065B4D0 (CmpDereferenceHive.c)
 *     UNLOCK_HIVE_LOAD @ 0x140691040 (UNLOCK_HIVE_LOAD.c)
 *     CmpLockRegistryFreezeAware @ 0x140691170 (CmpLockRegistryFreezeAware.c)
 *     LOCK_HIVE_LOAD @ 0x1406911D4 (LOCK_HIVE_LOAD.c)
 */

_QWORD *__fastcall CmpLateUnloadHiveWorker(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rbx
  char v4; // al
  __int64 v5; // rdx
  __int64 v6; // r8
  _DWORD *v7; // r9
  ULONG_PTR v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // r8
  _DWORD *v12; // r9
  BOOLEAN v14[4]; // [rsp+20h] [rbp-48h] BYREF
  int v15; // [rsp+24h] [rbp-44h] BYREF
  _OWORD v16[3]; // [rsp+28h] [rbp-40h] BYREF

  v15 = 2;
  memset(v16, 0, sizeof(v16));
  LOCK_HIVE_LOAD(a1);
  LOBYTE(v2) = 1;
  CmpLockRegistryFreezeAware(v2);
  *(_DWORD *)(a1 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 4276), 1u) & 0x7F) + 4280) = 22;
  v3 = *(_QWORD *)(a1 + 2928);
  if ( (*(_DWORD *)(a1 + 160) & 0x40) != 0 )
  {
    *(_DWORD *)(a1 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 4276), 1u) & 0x7F) + 4280) = 23;
LABEL_11:
    CmpUnlockRegistry();
    UNLOCK_HIVE_LOAD();
    return (_QWORD *)CmpDereferenceHive(a1);
  }
  v14[0] = CmpAcquireShutdownRundown();
  if ( !v14[0] )
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
  v4 = CmpTryToRundownHive((struct _EX_RUNDOWN_REF *)a1, v3, v14);
  *(_QWORD *)(a1 + 2944) = 0LL;
  if ( v4 )
  {
    v8 = *(_QWORD *)(a1 + 2928);
    *(_DWORD *)(a1 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 4276), 1u) & 0x7F) + 4280) = 30;
    CmpAttachToRegistryProcess((__int64)v16, v5, v6, v7);
    CmpCompleteUnloadKey(v8, v9, &v15);
    CmpDetachFromRegistryProcess((__int64)v16, v10, v11, v12);
    CmpLockRegistry();
    CmpDereferenceKeyControlBlock(v8);
LABEL_8:
    CmpUnlockRegistry();
    UNLOCK_HIVE_LOAD();
    CmpDereferenceHive(a1);
    return CmpReleaseShutdownRundown();
  }
  if ( (*(_DWORD *)(a1 + 4152) & 0x20) != 0 )
    CmpDecrementAppHiveUnloadCount();
  CmpUnlockRegistry();
  UNLOCK_HIVE_LOAD();
  if ( v14[0] )
    CmpReleaseShutdownRundown();
  return (_QWORD *)CmpDereferenceHive(a1);
}
