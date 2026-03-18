/*
 * XREFs of AlpcReferenceBlobByHandle @ 0x140688820
 * Callers:
 *     NtAlpcCreateSectionView @ 0x1406103A0 (NtAlpcCreateSectionView.c)
 *     NtAlpcDeletePortSection @ 0x140649100 (NtAlpcDeletePortSection.c)
 *     AlpcpCaptureViewAttributeInternal @ 0x14064923C (AlpcpCaptureViewAttributeInternal.c)
 *     AlpcpLookupMessage @ 0x1406871E0 (AlpcpLookupMessage.c)
 *     AlpcpCaptureSecurityAttributeInternal @ 0x140688724 (AlpcpCaptureSecurityAttributeInternal.c)
 *     NtAlpcDeleteSecurityContext @ 0x14068A0E0 (NtAlpcDeleteSecurityContext.c)
 *     NtAlpcRevokeSecurityContext @ 0x1408BF200 (NtAlpcRevokeSecurityContext.c)
 *     NtAlpcDeleteResourceReserve @ 0x1408BFE70 (NtAlpcDeleteResourceReserve.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140207C80 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14020ACF0 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1402748E0 (ExfReleasePushLockShared.c)
 *     ExfAcquireReleasePushLockExclusive @ 0x140351244 (ExfAcquireReleasePushLockExclusive.c)
 *     AlpcpReferenceBlob @ 0x1406888F0 (AlpcpReferenceBlob.c)
 */

ULONG_PTR __fastcall AlpcReferenceBlobByHandle(__int64 a1, int a2, _DWORD *a3)
{
  signed __int64 *v6; // rdi
  __int64 v7; // rax
  ULONG_PTR v8; // rbx
  signed __int32 v10[10]; // [rsp+0h] [rbp-28h] BYREF

  if ( !a1 )
    return 0LL;
  v6 = (signed __int64 *)(a1 + 16);
  ExAcquirePushLockSharedEx(a1 + 16, 0LL);
  v7 = (unsigned int)(a2 - 16);
  if ( (unsigned int)v7 < *(_DWORD *)(a1 + 8)
    && (v8 = *(_QWORD *)(*(_QWORD *)a1 + 8 * v7)) != 0
    && *(unsigned __int8 *)(v8 - 31) == *a3
    && AlpcpReferenceBlob(v8) )
  {
    if ( _InterlockedCompareExchange64(v6, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v6);
    KeAbPostRelease((ULONG_PTR)v6);
    if ( (*(_BYTE *)(v8 - 32) & 4) != 0 )
    {
      _InterlockedOr(v10, 0);
      if ( (*(_QWORD *)(v8 - 16) & 1) != 0 )
        ExfAcquireReleasePushLockExclusive((unsigned __int64 *)(v8 - 16));
    }
    return v8;
  }
  else
  {
    if ( _InterlockedCompareExchange64(v6, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v6);
    KeAbPostRelease((ULONG_PTR)v6);
    return 0LL;
  }
}
