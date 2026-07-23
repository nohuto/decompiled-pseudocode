/*
 * XREFs of AlpcpCreateSectionView @ 0x1406A9838
 * Callers:
 *     AlpcpMapLegacyPortView @ 0x1406A9428 (AlpcpMapLegacyPortView.c)
 *     NtAlpcCreateSectionView @ 0x1406A9610 (NtAlpcCreateSectionView.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x1402FC1C0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x1403558A0 (ExAcquirePushLockSharedEx.c)
 *     AlpcpCreateView @ 0x140655960 (AlpcpCreateView.c)
 *     AlpcpCreateRegion @ 0x1406A9934 (AlpcpCreateRegion.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x1406D0224 (AlpcpLockForCachedReferenceBlob.c)
 *     AlpcpUnlockBlob @ 0x1406D6FE0 (AlpcpUnlockBlob.c)
 *     AlpcpDereferenceBlobEx @ 0x1406D9720 (AlpcpDereferenceBlobEx.c)
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
  AlpcpDereferenceBlobEx(0LL);
  if ( View < 0 )
    return (unsigned int)View;
  *a5 = v10[0];
  return 0LL;
}
