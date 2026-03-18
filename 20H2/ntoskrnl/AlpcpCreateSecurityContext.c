/*
 * XREFs of AlpcpCreateSecurityContext @ 0x1405F2BD4
 * Callers:
 *     AlpcpCaptureSecurityAttributeInternal @ 0x1405F2E2C (AlpcpCaptureSecurityAttributeInternal.c)
 *     NtAlpcCreateSecurityContext @ 0x1406B7300 (NtAlpcCreateSecurityContext.c)
 *     AlpcCreateSecurityContext @ 0x1408C4B00 (AlpcCreateSecurityContext.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1402089E0 (ObfReferenceObjectWithTag.c)
 *     IoThreadToProcess @ 0x140208A40 (IoThreadToProcess.c)
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x140220C00 (ExAcquirePushLockSharedEx.c)
 *     ObfReferenceObject @ 0x140221300 (ObfReferenceObject.c)
 *     ExfReleasePushLockShared @ 0x140242A40 (ExfReleasePushLockShared.c)
 *     memset @ 0x140411300 (memset.c)
 *     AlpcpDereferenceBlobEx @ 0x1405F1600 (AlpcpDereferenceBlobEx.c)
 *     AlpcpReferenceBlob @ 0x1405F3004 (AlpcpReferenceBlob.c)
 *     AlpcpChargePagedPoolQuota @ 0x1405F303C (AlpcpChargePagedPoolQuota.c)
 *     AlpcpAllocateBlob @ 0x1405F307C (AlpcpAllocateBlob.c)
 *     AlpcpInsertResourcePort @ 0x1405F5090 (AlpcpInsertResourcePort.c)
 *     SeCreateClientSecurity @ 0x140620190 (SeCreateClientSecurity.c)
 *     AlpcpReleasePagedPoolQuota @ 0x1406854E4 (AlpcpReleasePagedPoolQuota.c)
 *     AlpcpEndInitialization @ 0x140709B6C (AlpcpEndInitialization.c)
 *     AlpcAddHandleTableEntry @ 0x140709BB0 (AlpcAddHandleTableEntry.c)
 */

__int64 __fastcall AlpcpCreateSecurityContext(
        volatile signed __int64 *Object,
        PETHREAD ClientThread,
        char a3,
        struct _SECURITY_QUALITY_OF_SERVICE *a4,
        ULONG_PTR *a5)
{
  PEPROCESS v9; // rdi
  void *Blob; // rax
  ULONG_PTR v11; // rbx
  NTSTATUS ClientSecurity; // ebp
  volatile signed __int64 *v13; // rdi
  __int64 v14; // rcx
  __int64 v15; // rax
  ULONG_PTR v17[7]; // [rsp+20h] [rbp-38h] BYREF

  v9 = IoThreadToProcess(ClientThread);
  Blob = (void *)AlpcpAllocateBlob(AlpcSecurityType, 112LL, 0LL);
  v11 = (ULONG_PTR)Blob;
  if ( !Blob )
    return 3221225626LL;
  memset(Blob, 0, 0x70uLL);
  *(_QWORD *)(v11 + 8) = -1LL;
  ClientSecurity = AlpcpChargePagedPoolQuota(v9, 160LL);
  if ( ClientSecurity >= 0 )
  {
    ClientSecurity = SeCreateClientSecurity(ClientThread, a4, 0, (PSECURITY_CLIENT_CONTEXT)(v11 + 32));
    if ( ClientSecurity < 0 )
    {
      AlpcpReleasePagedPoolQuota(v9, 160LL);
    }
    else
    {
      ObfReferenceObjectWithTag(v9, 0x63706C41u);
      *(_QWORD *)(v11 + 16) = v9;
      if ( !a3 )
      {
LABEL_10:
        *a5 = v11;
        return 0LL;
      }
      v13 = Object + 44;
      ExAcquirePushLockSharedEx((ULONG_PTR)(Object + 44), 0LL);
      if ( (Object[52] & 0x20) == 0 )
      {
        ExAcquirePushLockExclusiveEx(v11 - 16, 0LL);
        *(_BYTE *)(v11 - 32) |= 4u;
        AlpcpReferenceBlob(v11);
        v14 = *((_QWORD *)Object + 2) + 40LL;
        v17[0] = v11;
        *(_QWORD *)v11 = v14;
        v15 = AlpcAddHandleTableEntry(v14, v17);
        *(_QWORD *)(v11 + 8) = v15;
        if ( v15 != -1 )
        {
          ObfReferenceObject((PVOID)Object);
          *(_QWORD *)(v11 + 24) = Object;
          AlpcpInsertResourcePort(Object, v11);
          if ( _InterlockedCompareExchange64(v13, 0LL, 17LL) != 17 )
            ExfReleasePushLockShared((signed __int64 *)Object + 44);
          KeAbPostRelease((ULONG_PTR)(Object + 44));
          AlpcpEndInitialization(v11);
          goto LABEL_10;
        }
        if ( _InterlockedCompareExchange64(v13, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)Object + 44);
        KeAbPostRelease((ULONG_PTR)(Object + 44));
        *(_QWORD *)v11 = 0LL;
        AlpcpEndInitialization(v11);
        AlpcpDereferenceBlobEx(v11, 2);
        return 3221225626LL;
      }
      if ( _InterlockedCompareExchange64(v13, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)Object + 44);
      KeAbPostRelease((ULONG_PTR)(Object + 44));
      ClientSecurity = -1073741670;
    }
  }
  AlpcpDereferenceBlobEx(v11, 1);
  return (unsigned int)ClientSecurity;
}
