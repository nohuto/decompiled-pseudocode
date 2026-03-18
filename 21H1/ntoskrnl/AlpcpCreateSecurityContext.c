/*
 * XREFs of AlpcpCreateSecurityContext @ 0x140611CE0
 * Callers:
 *     AlpcpCaptureSecurityAttributeInternal @ 0x1406105A4 (AlpcpCaptureSecurityAttributeInternal.c)
 *     NtAlpcCreateSecurityContext @ 0x1406BF430 (NtAlpcCreateSecurityContext.c)
 *     AlpcCreateSecurityContext @ 0x1408BDA00 (AlpcCreateSecurityContext.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x14025A2D0 (ObfReferenceObjectWithTag.c)
 *     IoThreadToProcess @ 0x14025A330 (IoThreadToProcess.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x140260BA0 (ExAcquirePushLockSharedEx.c)
 *     ObfReferenceObject @ 0x1402612A0 (ObfReferenceObject.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x14035A580 (ExfReleasePushLockShared.c)
 *     memset @ 0x140408F80 (memset.c)
 *     SeCreateClientSecurity @ 0x14060A050 (SeCreateClientSecurity.c)
 *     AlpcpDereferenceBlobEx @ 0x1406103F0 (AlpcpDereferenceBlobEx.c)
 *     AlpcpReferenceBlob @ 0x140610770 (AlpcpReferenceBlob.c)
 *     AlpcpChargePagedPoolQuota @ 0x140611E60 (AlpcpChargePagedPoolQuota.c)
 *     AlpcpAllocateBlob @ 0x140611EA0 (AlpcpAllocateBlob.c)
 *     AlpcpInsertResourcePort @ 0x140612D74 (AlpcpInsertResourcePort.c)
 *     AlpcpEndInitialization @ 0x140642CA4 (AlpcpEndInitialization.c)
 *     AlpcAddHandleTableEntry @ 0x140642CE8 (AlpcAddHandleTableEntry.c)
 *     AlpcpReleasePagedPoolQuota @ 0x1406BA5F4 (AlpcpReleasePagedPoolQuota.c)
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
  Blob = (void *)AlpcpAllocateBlob(AlpcSecurityType, 112LL);
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
