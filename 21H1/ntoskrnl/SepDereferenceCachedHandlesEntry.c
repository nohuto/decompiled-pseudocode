/*
 * XREFs of SepDereferenceCachedHandlesEntry @ 0x1405EE7DC
 * Callers:
 *     SepSetTokenBnoIsolation @ 0x140339BA0 (SepSetTokenBnoIsolation.c)
 *     SepTokenDeleteMethod @ 0x1405EE0D0 (SepTokenDeleteMethod.c)
 *     NtSetInformationToken @ 0x1406F7D00 (NtSetInformationToken.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     SepCloseCachedTokenHandles @ 0x1402DE958 (SepCloseCachedTokenHandles.c)
 *     RtlRemoveEntryHashTable @ 0x140339EF0 (RtlRemoveEntryHashTable.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepDereferenceCachedHandlesEntry(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v3; // rbx
  unsigned int v4; // esi
  __int64 v6; // rax
  char v7; // di
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  BOOLEAN v12; // r14
  char v13; // di
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  void *v17; // rcx

  CurrentThread = KeGetCurrentThread();
  v3 = a1 + 88;
  v4 = 0;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(a1 + 88, 0LL);
  v6 = _InterlockedDecrement64((volatile signed __int64 *)(a2 + 24));
  if ( v6 <= 0 )
  {
    if ( v6 )
      __fastfail(0xEu);
    v12 = RtlRemoveEntryHashTable(*(PRTL_DYNAMIC_HASH_TABLE *)(v3 + 8), (PRTL_DYNAMIC_HASH_TABLE_ENTRY)a2, 0LL);
    v13 = _InterlockedExchangeAdd64((volatile signed __int64 *)v3, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v13 & 2) != 0 && (v13 & 4) == 0 )
      ExfTryToWakePushLock(v3);
    KeAbPostRelease(v3);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v14, v15, v16);
    if ( v12 )
    {
      SepCloseCachedTokenHandles(*(_DWORD *)(a2 + 56), *(HANDLE **)(a2 + 64));
      v17 = *(void **)(a2 + 64);
      if ( v17 )
        ExFreePoolWithTag(v17, 0);
      ExFreePoolWithTag((PVOID)a2, 0);
    }
    else
    {
      return (unsigned int)-1073741823;
    }
    return v4;
  }
  else
  {
    v7 = _InterlockedExchangeAdd64((volatile signed __int64 *)v3, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v7 & 2) != 0 && (v7 & 4) == 0 )
      ExfTryToWakePushLock(v3);
    KeAbPostRelease(v3);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v8, v9, v10);
    return 0LL;
  }
}
