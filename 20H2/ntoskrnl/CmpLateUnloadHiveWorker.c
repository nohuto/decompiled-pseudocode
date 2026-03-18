/*
 * XREFs of CmpLateUnloadHiveWorker @ 0x1406A2B40
 * Callers:
 *     <none>
 * Callees:
 *     CmpTryToRundownHive @ 0x1402F2E7C (CmpTryToRundownHive.c)
 *     CmpDecrementAppHiveUnloadCount @ 0x1402F3084 (CmpDecrementAppHiveUnloadCount.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     CmpReleaseShutdownRundown @ 0x14060C670 (CmpReleaseShutdownRundown.c)
 *     CmpAcquireShutdownRundown @ 0x14060D8D0 (CmpAcquireShutdownRundown.c)
 *     CmpUnlockRegistry @ 0x140616950 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x140616990 (CmpLockRegistry.c)
 *     CmpDereferenceKeyControlBlock @ 0x14061B720 (CmpDereferenceKeyControlBlock.c)
 *     CmpDetachFromRegistryProcess @ 0x140678E90 (CmpDetachFromRegistryProcess.c)
 *     CmpAttachToRegistryProcess @ 0x1406790E0 (CmpAttachToRegistryProcess.c)
 *     CmpCompleteUnloadKey @ 0x1406A2C9C (CmpCompleteUnloadKey.c)
 *     CmpDereferenceHive @ 0x1406A32E0 (CmpDereferenceHive.c)
 *     UNLOCK_HIVE_LOAD @ 0x1407011E0 (UNLOCK_HIVE_LOAD.c)
 *     CmpLockRegistryFreezeAware @ 0x140701310 (CmpLockRegistryFreezeAware.c)
 *     LOCK_HIVE_LOAD @ 0x140701374 (LOCK_HIVE_LOAD.c)
 */

_QWORD *__fastcall CmpLateUnloadHiveWorker(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rbx
  char v4; // al
  ULONG_PTR v5; // rbx
  __int64 v6; // rdx
  BOOLEAN v8[4]; // [rsp+20h] [rbp-48h] BYREF
  int v9; // [rsp+24h] [rbp-44h] BYREF
  _OWORD v10[3]; // [rsp+28h] [rbp-40h] BYREF

  v9 = 2;
  memset(v10, 0, sizeof(v10));
  LOCK_HIVE_LOAD();
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
  v8[0] = CmpAcquireShutdownRundown();
  if ( !v8[0] )
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
  v4 = CmpTryToRundownHive((struct _EX_RUNDOWN_REF *)a1, v3, v8);
  *(_QWORD *)(a1 + 2944) = 0LL;
  if ( v4 )
  {
    v5 = *(_QWORD *)(a1 + 2928);
    *(_DWORD *)(a1 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 4276), 1u) & 0x7F) + 4280) = 30;
    CmpAttachToRegistryProcess((__int64)v10);
    CmpCompleteUnloadKey(v5, v6, &v9);
    CmpDetachFromRegistryProcess((__int64)v10);
    CmpLockRegistry();
    CmpDereferenceKeyControlBlock(v5);
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
  if ( v8[0] )
    CmpReleaseShutdownRundown();
  return (_QWORD *)CmpDereferenceHive(a1);
}
