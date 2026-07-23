/*
 * XREFs of AlpcConnectionDestroyProcedure @ 0x1405E4D30
 * Callers:
 *     <none>
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x14021A938 (ExFreeToNPagedLookasideList.c)
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     AlpcpDereferenceBlobEx @ 0x1406D9720 (AlpcpDereferenceBlobEx.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall AlpcConnectionDestroyProcedure(__int64 a1)
{
  PADAPTER_OBJECT v1; // rsi
  __int64 v3; // rdx
  _QWORD *v4; // rcx
  __int64 v5; // rsi
  void *v6; // rcx
  ULONG_PTR v7; // rcx

  v1 = *(PADAPTER_OBJECT *)a1;
  if ( *(_QWORD *)a1 )
  {
    ExAcquirePushLockExclusiveEx(*(_QWORD *)&v1[1].Version - 16LL, 0LL);
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&v1[22], 0LL);
    v3 = *(_QWORD *)(a1 + 24);
    if ( *(_QWORD *)(v3 + 8) != a1 + 24 || (v4 = *(_QWORD **)(a1 + 32), *v4 != a1 + 24) )
      __fastfail(3u);
    *v4 = v3;
    *(_QWORD *)(v3 + 8) = v4;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&v1[22], 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(&v1[22]);
    KeAbPostRelease((ULONG_PTR)&v1[22]);
    v5 = *(_QWORD *)&v1[1].Version;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v5 - 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v5 - 16);
    KeAbPostRelease(v5 - 16);
    HalPutDmaAdapter(*(PADAPTER_OBJECT *)a1);
  }
  v6 = *(void **)(a1 + 40);
  if ( v6 )
  {
    if ( *(_QWORD *)(a1 + 56) == 16LL )
      ExFreeToNPagedLookasideList(&stru_140CEC040, *(PVOID *)(a1 + 40));
    else
      ExFreePoolWithTag(v6, 0x61486C41u);
  }
  v7 = _InterlockedExchange64((volatile __int64 *)(a1 + 72), 0LL);
  if ( v7 )
    AlpcpDereferenceBlobEx(v7);
  return 0LL;
}
