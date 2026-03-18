/*
 * XREFs of CacheBBNResult @ 0x1C00314B0
 * Callers:
 *     GetPciAddressWorker @ 0x1C0018810 (GetPciAddressWorker.c)
 * Callees:
 *     AMLIIsEqualHandle @ 0x1C00633A4 (AMLIIsEqualHandle.c)
 */

void __fastcall CacheBBNResult(__int64 a1, int a2)
{
  KIRQL v4; // al
  __int64 *v5; // r8
  KIRQL v6; // di
  _QWORD *PoolWithTag; // rax
  char v8; // cl
  __int64 v9; // rcx
  __int64 **v10; // r8

  v4 = KeAcquireSpinLockRaiseToDpc(&gBBNResultCacheLock);
  v5 = (__int64 *)gBBNResultCacheListHead;
  v6 = v4;
  while ( v5 != &gBBNResultCacheListHead )
  {
    if ( (unsigned __int8)AMLIIsEqualHandle(v5[2], a1) )
      goto LABEL_8;
    v5 = *v10;
  }
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x20uLL, 0x69706341u);
  if ( PoolWithTag )
  {
    v8 = gdwfAMLI;
    PoolWithTag[2] = a1;
    dword_1C0082908 = 0;
    pszDest = 0;
    if ( (v8 & 4) != 0 )
      _InterlockedIncrement((volatile signed __int32 *)(a1 + 8));
    *((_DWORD *)PoolWithTag + 6) = a2;
    v9 = gBBNResultCacheListHead;
    if ( *(__int64 **)(gBBNResultCacheListHead + 8) != &gBBNResultCacheListHead )
      __fastfail(3u);
    *PoolWithTag = gBBNResultCacheListHead;
    PoolWithTag[1] = &gBBNResultCacheListHead;
    *(_QWORD *)(v9 + 8) = PoolWithTag;
    gBBNResultCacheListHead = (__int64)PoolWithTag;
  }
LABEL_8:
  KeReleaseSpinLock(&gBBNResultCacheLock, v6);
}
