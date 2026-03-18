/*
 * XREFs of AlpcConnectionDestroyProcedure @ 0x1406C48F0
 * Callers:
 *     <none>
 * Callees:
 *     ExFreeToPagedLookasideList @ 0x14020A4F0 (ExFreeToPagedLookasideList.c)
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     ExfTryToWakePushLock @ 0x140242B40 (ExfTryToWakePushLock.c)
 *     AlpcpDereferenceBlobEx @ 0x1405F1600 (AlpcpDereferenceBlobEx.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
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
      ExfTryToWakePushLock((volatile signed __int64 *)&v1[22]);
    KeAbPostRelease((ULONG_PTR)&v1[22]);
    v5 = *(_QWORD *)&v1[1].Version;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v5 - 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v5 - 16));
    KeAbPostRelease(v5 - 16);
    HalPutDmaAdapter(*(PADAPTER_OBJECT *)a1);
  }
  v6 = *(void **)(a1 + 40);
  if ( v6 )
  {
    if ( *(_QWORD *)(a1 + 56) == 16LL )
      ExFreeToPagedLookasideList((PPAGED_LOOKASIDE_LIST)&stru_140CEBD00, *(PVOID *)(a1 + 40));
    else
      ExFreePoolWithTag(v6, 0x61486C41u);
  }
  v7 = _InterlockedExchange64((volatile __int64 *)(a1 + 72), 0LL);
  if ( v7 )
    AlpcpDereferenceBlobEx(v7, 1);
  return 0LL;
}
