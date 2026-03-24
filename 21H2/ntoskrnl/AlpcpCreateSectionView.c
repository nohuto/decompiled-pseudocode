/*
 * XREFs of AlpcpCreateSectionView @ 0x1406D2558
 * Callers:
 *     AlpcpMapLegacyPortView @ 0x1406D2148 (AlpcpMapLegacyPortView.c)
 *     NtAlpcCreateSectionView @ 0x1406D2330 (NtAlpcCreateSectionView.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x1402F1470 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140348C80 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x14034AB50 (ExAcquirePushLockSharedEx.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x1405E0AC4 (AlpcpLockForCachedReferenceBlob.c)
 *     AlpcpUnlockBlob @ 0x1405E7880 (AlpcpUnlockBlob.c)
 *     AlpcpDereferenceBlobEx @ 0x1405E9FC0 (AlpcpDereferenceBlobEx.c)
 *     AlpcpCreateView @ 0x140660B40 (AlpcpCreateView.c)
 *     AlpcpCreateRegion @ 0x1406D2654 (AlpcpCreateRegion.c)
 */

__int64 __fastcall AlpcpCreateSectionView(
        ULONG_PTR BugCheckParameter2,
        signed __int64 *Object,
        __int64 a3,
        __int64 a4,
        _QWORD *a5)
{
  int Region; // ebx
  int View; // esi
  ULONG_PTR v10[4]; // [rsp+28h] [rbp-20h] BYREF

  v10[0] = 0LL;
  *a5 = 0LL;
  AlpcpLockForCachedReferenceBlob(BugCheckParameter2);
  Region = AlpcpCreateRegion(BugCheckParameter2);
  AlpcpUnlockBlob(BugCheckParameter2);
  if ( Region < 0 )
    return (unsigned int)Region;
  ExAcquirePushLockSharedEx((ULONG_PTR)(Object + 44), 0LL);
  AlpcpLockForCachedReferenceBlob(0LL);
  View = AlpcpCreateView(0LL, Object, v10);
  AlpcpUnlockBlob(0LL);
  if ( _InterlockedCompareExchange64(Object + 44, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(Object + 44);
  KeAbPostRelease((ULONG_PTR)(Object + 44));
  AlpcpDereferenceBlobEx(0LL, 1);
  if ( View < 0 )
    return (unsigned int)View;
  *a5 = v10[0];
  return 0LL;
}
