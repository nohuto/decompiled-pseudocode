/*
 * XREFs of AlpcReferenceBlobByHandle @ 0x1405F2F30
 * Callers:
 *     AlpcpLookupMessage @ 0x1405EDE10 (AlpcpLookupMessage.c)
 *     AlpcpCaptureSecurityAttributeInternal @ 0x1405F2E2C (AlpcpCaptureSecurityAttributeInternal.c)
 *     NtAlpcDeleteSecurityContext @ 0x1405F3130 (NtAlpcDeleteSecurityContext.c)
 *     NtAlpcDeletePortSection @ 0x14064A7D0 (NtAlpcDeletePortSection.c)
 *     AlpcpCaptureViewAttributeInternal @ 0x14064A90C (AlpcpCaptureViewAttributeInternal.c)
 *     NtAlpcCreateSectionView @ 0x14070CC40 (NtAlpcCreateSectionView.c)
 *     NtAlpcRevokeSecurityContext @ 0x1408C4FB0 (NtAlpcRevokeSecurityContext.c)
 *     NtAlpcDeleteResourceReserve @ 0x1408C5CB0 (NtAlpcDeleteResourceReserve.c)
 * Callees:
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x140220C00 (ExAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x140242A40 (ExfReleasePushLockShared.c)
 *     ExfAcquireReleasePushLockExclusive @ 0x1403217D4 (ExfAcquireReleasePushLockExclusive.c)
 *     AlpcpReferenceBlob @ 0x1405F3004 (AlpcpReferenceBlob.c)
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
        ExfAcquireReleasePushLockExclusive((unsigned __int64 *)(v7 - 16));
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
