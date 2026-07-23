/*
 * XREFs of AlpcReferenceBlobByHandle @ 0x140655760
 * Callers:
 *     NtAlpcDeletePortSection @ 0x1405FF960 (NtAlpcDeletePortSection.c)
 *     AlpcpCaptureSecurityAttributeInternal @ 0x140655664 (AlpcpCaptureSecurityAttributeInternal.c)
 *     AlpcpCaptureViewAttributeInternal @ 0x140656C9C (AlpcpCaptureViewAttributeInternal.c)
 *     NtAlpcCreateSectionView @ 0x1406A9610 (NtAlpcCreateSectionView.c)
 *     AlpcpLookupMessage @ 0x1406D5FD0 (AlpcpLookupMessage.c)
 *     NtAlpcDeleteSecurityContext @ 0x1406DA3F0 (NtAlpcDeleteSecurityContext.c)
 *     NtAlpcRevokeSecurityContext @ 0x1408C28D0 (NtAlpcRevokeSecurityContext.c)
 *     NtAlpcDeleteResourceReserve @ 0x1408C35D0 (NtAlpcDeleteResourceReserve.c)
 * Callees:
 *     ExfAcquireReleasePushLockExclusive @ 0x140241564 (ExfAcquireReleasePushLockExclusive.c)
 *     ExfReleasePushLockShared @ 0x1402FC1C0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x1403558A0 (ExAcquirePushLockSharedEx.c)
 *     AlpcpReferenceBlob @ 0x140655834 (AlpcpReferenceBlob.c)
 */

ULONG_PTR __fastcall AlpcReferenceBlobByHandle(_QWORD *a1, int a2, _DWORD *a3)
{
  signed __int64 *v6; // rdi
  ULONG_PTR v7; // rbx
  signed __int32 v9[10]; // [rsp+0h] [rbp-28h] BYREF

  if ( !a1 )
    return 0LL;
  v6 = a1 + 1;
  ExAcquirePushLockSharedEx((ULONG_PTR)(a1 + 1), 0LL);
  if ( (unsigned __int64)(unsigned int)(a2 - 16) < a1[2]
    && (v7 = *(_QWORD *)(*a1 + 8LL * (unsigned int)(a2 - 16))) != 0
    && *(unsigned __int8 *)(v7 - 31) == *a3
    && AlpcpReferenceBlob(v7) )
  {
    if ( _InterlockedCompareExchange64(v6, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v6);
    KeAbPostRelease((ULONG_PTR)v6);
    if ( (*(_BYTE *)(v7 - 32) & 4) != 0 )
    {
      _InterlockedOr(v9, 0);
      if ( (*(_QWORD *)(v7 - 16) & 1) != 0 )
        ExfAcquireReleasePushLockExclusive(v7 - 16);
    }
    return v7;
  }
  else
  {
    if ( _InterlockedCompareExchange64(v6, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v6);
    KeAbPostRelease((ULONG_PTR)v6);
    return 0LL;
  }
}
