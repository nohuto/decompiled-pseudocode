/*
 * XREFs of CacheBBNResult @ 0x1C002E6E0
 * Callers:
 *     GetPciAddressWorker @ 0x1C000CDE0 (GetPciAddressWorker.c)
 * Callees:
 *     AMLIIsEqualHandle @ 0x1C000C8F0 (AMLIIsEqualHandle.c)
 */

void __fastcall CacheBBNResult(__int64 a1, int a2)
{
  KIRQL v4; // al
  __int64 v5; // r8
  KIRQL v6; // di
  __int64 Pool2; // rax
  char v8; // cl
  __int64 v9; // rcx
  __int64 *v10; // r8

  v4 = KeAcquireSpinLockRaiseToDpc(&gBBNResultCacheLock);
  v5 = gBBNResultCacheListHead;
  v6 = v4;
  while ( (__int64 *)v5 != &gBBNResultCacheListHead )
  {
    if ( AMLIIsEqualHandle(*(_QWORD **)(v5 + 16), (_QWORD *)a1) )
      goto LABEL_8;
    v5 = *v10;
  }
  Pool2 = ExAllocatePool2(64LL, 32LL, 1768973121LL);
  if ( Pool2 )
  {
    v8 = gdwfAMLI;
    *(_QWORD *)(Pool2 + 16) = a1;
    dword_1C0081AC8 = 0;
    byte_1C0081ACC = 0;
    if ( (v8 & 4) != 0 )
      _InterlockedIncrement((volatile signed __int32 *)(a1 + 8));
    *(_DWORD *)(Pool2 + 24) = a2;
    v9 = gBBNResultCacheListHead;
    if ( *(__int64 **)(gBBNResultCacheListHead + 8) != &gBBNResultCacheListHead )
      __fastfail(3u);
    *(_QWORD *)Pool2 = gBBNResultCacheListHead;
    *(_QWORD *)(Pool2 + 8) = &gBBNResultCacheListHead;
    *(_QWORD *)(v9 + 8) = Pool2;
    gBBNResultCacheListHead = Pool2;
  }
LABEL_8:
  KeReleaseSpinLock(&gBBNResultCacheLock, v6);
}
