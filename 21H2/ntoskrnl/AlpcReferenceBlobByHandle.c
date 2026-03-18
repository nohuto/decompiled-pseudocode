/*
 * XREFs of AlpcReferenceBlobByHandle @ 0x1407A7EB0
 * Callers:
 *     NtAlpcCreateSectionView @ 0x14066C3C0 (NtAlpcCreateSectionView.c)
 *     NtAlpcDeletePortSection @ 0x1406BE210 (NtAlpcDeletePortSection.c)
 *     AlpcpCaptureViewAttributeInternal @ 0x1407A4638 (AlpcpCaptureViewAttributeInternal.c)
 *     NtAlpcDeleteSecurityContext @ 0x1407A58E0 (NtAlpcDeleteSecurityContext.c)
 *     AlpcpCaptureSecurityAttributeInternal @ 0x1407A817C (AlpcpCaptureSecurityAttributeInternal.c)
 *     AlpcpLookupMessage @ 0x1407ABD80 (AlpcpLookupMessage.c)
 *     NtAlpcDeleteResourceReserve @ 0x140881980 (NtAlpcDeleteResourceReserve.c)
 *     NtAlpcRevokeSecurityContext @ 0x140966620 (NtAlpcRevokeSecurityContext.c)
 * Callees:
 *     ExfAcquireReleasePushLockExclusive @ 0x14024BA7C (ExfAcquireReleasePushLockExclusive.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     AlpcpReferenceBlob @ 0x1407A7F84 (AlpcpReferenceBlob.c)
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
