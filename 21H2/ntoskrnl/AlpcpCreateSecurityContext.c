/*
 * XREFs of AlpcpCreateSecurityContext @ 0x1407A74A4
 * Callers:
 *     NtAlpcCreateSecurityContext @ 0x1407A56B0 (NtAlpcCreateSecurityContext.c)
 *     AlpcpCaptureSecurityAttributeInternal @ 0x1407A817C (AlpcpCaptureSecurityAttributeInternal.c)
 *     AlpcCreateSecurityContext @ 0x1409662A0 (AlpcCreateSecurityContext.c)
 * Callees:
 *     IoThreadToProcess @ 0x1402321F0 (IoThreadToProcess.c)
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     ObfReferenceObject @ 0x140347CF0 (ObfReferenceObject.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     memset @ 0x140435E00 (memset.c)
 *     SeCreateClientSecurity @ 0x1407271D0 (SeCreateClientSecurity.c)
 *     AlpcAddHandleTableEntry @ 0x1407A5530 (AlpcAddHandleTableEntry.c)
 *     AlpcpEndInitialization @ 0x1407A5668 (AlpcpEndInitialization.c)
 *     AlpcpDereferenceBlobEx @ 0x1407A5A54 (AlpcpDereferenceBlobEx.c)
 *     AlpcpInsertResourcePort @ 0x1407A6950 (AlpcpInsertResourcePort.c)
 *     AlpcpReleasePagedPoolQuota @ 0x1407A7378 (AlpcpReleasePagedPoolQuota.c)
 *     AlpcpAllocateBlob @ 0x1407A73B0 (AlpcpAllocateBlob.c)
 *     AlpcpChargePagedPoolQuota @ 0x1407A7464 (AlpcpChargePagedPoolQuota.c)
 *     AlpcpReferenceBlob @ 0x1407A7F84 (AlpcpReferenceBlob.c)
 */

__int64 __fastcall AlpcpCreateSecurityContext(
        volatile signed __int64 *Object,
        PETHREAD ClientThread,
        char a3,
        struct _SECURITY_QUALITY_OF_SERVICE *a4,
        ULONG_PTR *a5)
{
  struct _KPROCESS *v9; // rdi
  void *Blob; // rax
  ULONG_PTR v11; // rbx
  int ClientSecurity; // ebp
  volatile signed __int64 *v14; // rdi
  __int64 v15; // rcx
  __int64 v16; // rax
  ULONG_PTR v17[7]; // [rsp+20h] [rbp-38h] BYREF

  v9 = IoThreadToProcess(ClientThread);
  Blob = (void *)AlpcpAllocateBlob((__int64)AlpcSecurityType, 112LL, 0);
  v11 = (ULONG_PTR)Blob;
  if ( !Blob )
    return 3221225626LL;
  memset(Blob, 0, 0x70uLL);
  *(_QWORD *)(v11 + 8) = -1LL;
  ClientSecurity = AlpcpChargePagedPoolQuota(v9, 0xA0uLL);
  if ( ClientSecurity >= 0 )
  {
    ClientSecurity = SeCreateClientSecurity(ClientThread, a4, 0, (PSECURITY_CLIENT_CONTEXT)(v11 + 32));
    if ( ClientSecurity < 0 )
    {
      AlpcpReleasePagedPoolQuota(v9, 0xA0uLL);
    }
    else
    {
      ObfReferenceObjectWithTag(v9, 0x63706C41u);
      *(_QWORD *)(v11 + 16) = v9;
      if ( !a3 )
      {
LABEL_5:
        *a5 = v11;
        return 0LL;
      }
      v14 = Object + 44;
      ExAcquirePushLockSharedEx((ULONG_PTR)(Object + 44), 0LL);
      if ( (Object[52] & 0x20) == 0 )
      {
        ExAcquirePushLockExclusiveEx(v11 - 16, 0LL);
        *(_BYTE *)(v11 - 32) |= 4u;
        AlpcpReferenceBlob(v11);
        v15 = *((_QWORD *)Object + 2) + 40LL;
        v17[0] = v11;
        *(_QWORD *)v11 = v15;
        v16 = AlpcAddHandleTableEntry(v15, v17);
        *(_QWORD *)(v11 + 8) = v16;
        if ( v16 != -1 )
        {
          ObfReferenceObject((PVOID)Object);
          *(_QWORD *)(v11 + 24) = Object;
          AlpcpInsertResourcePort((__int64)Object, v11);
          if ( _InterlockedCompareExchange64(v14, 0LL, 17LL) != 17 )
            ExfReleasePushLockShared((signed __int64 *)Object + 44);
          KeAbPostRelease((ULONG_PTR)(Object + 44));
          AlpcpEndInitialization(v11);
          goto LABEL_5;
        }
        if ( _InterlockedCompareExchange64(v14, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)Object + 44);
        KeAbPostRelease((ULONG_PTR)(Object + 44));
        *(_QWORD *)v11 = 0LL;
        AlpcpEndInitialization(v11);
        AlpcpDereferenceBlobEx(v11, 2);
        return 3221225626LL;
      }
      if ( _InterlockedCompareExchange64(v14, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)Object + 44);
      KeAbPostRelease((ULONG_PTR)(Object + 44));
      ClientSecurity = -1073741670;
    }
  }
  AlpcpDereferenceBlobEx(v11, 1);
  return (unsigned int)ClientSecurity;
}
