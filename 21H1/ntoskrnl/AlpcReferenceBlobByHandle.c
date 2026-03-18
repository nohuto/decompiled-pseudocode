/*
 * XREFs of AlpcReferenceBlobByHandle @ 0x1406106A0
 * Callers:
 *     AlpcpLookupMessage @ 0x14060F060 (AlpcpLookupMessage.c)
 *     AlpcpCaptureSecurityAttributeInternal @ 0x1406105A4 (AlpcpCaptureSecurityAttributeInternal.c)
 *     NtAlpcDeleteSecurityContext @ 0x140611F60 (NtAlpcDeleteSecurityContext.c)
 *     NtAlpcCreateSectionView @ 0x1406455C0 (NtAlpcCreateSectionView.c)
 *     NtAlpcDeletePortSection @ 0x14070A5A0 (NtAlpcDeletePortSection.c)
 *     AlpcpCaptureViewAttributeInternal @ 0x14070A6DC (AlpcpCaptureViewAttributeInternal.c)
 *     NtAlpcRevokeSecurityContext @ 0x1408BDEB0 (NtAlpcRevokeSecurityContext.c)
 *     NtAlpcDeleteResourceReserve @ 0x1408BEB20 (NtAlpcDeleteResourceReserve.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140260BA0 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     ExfAcquireReleasePushLockExclusive @ 0x140313394 (ExfAcquireReleasePushLockExclusive.c)
 *     ExfReleasePushLockShared @ 0x14035A580 (ExfReleasePushLockShared.c)
 *     AlpcpReferenceBlob @ 0x140610770 (AlpcpReferenceBlob.c)
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
        ExfAcquireReleasePushLockExclusive(v8 - 16);
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
