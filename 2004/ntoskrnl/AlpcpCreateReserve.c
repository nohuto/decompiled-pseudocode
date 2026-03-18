/*
 * XREFs of AlpcpCreateReserve @ 0x1406E2DA4
 * Callers:
 *     NtAlpcCreateResourceReserve @ 0x1406E2CB0 (NtAlpcCreateResourceReserve.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140207AC0 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x140207C80 (ExAcquirePushLockSharedEx.c)
 *     ObfReferenceObject @ 0x140208380 (ObfReferenceObject.c)
 *     KeAbPostRelease @ 0x14020ACF0 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1402748E0 (ExfReleasePushLockShared.c)
 *     ObfReferenceObjectWithTag @ 0x140296B50 (ObfReferenceObjectWithTag.c)
 *     AlpcpEndInitialization @ 0x14060DB54 (AlpcpEndInitialization.c)
 *     AlpcAddHandleTableEntry @ 0x14060DB98 (AlpcAddHandleTableEntry.c)
 *     AlpcpAllocateMessage @ 0x14062B79C (AlpcpAllocateMessage.c)
 *     AlpcpUnlockMessage @ 0x140682914 (AlpcpUnlockMessage.c)
 *     AlpcpDereferenceBlobEx @ 0x140688570 (AlpcpDereferenceBlobEx.c)
 *     AlpcpReferenceBlob @ 0x1406888F0 (AlpcpReferenceBlob.c)
 *     AlpcpChargePagedPoolQuota @ 0x140689FE4 (AlpcpChargePagedPoolQuota.c)
 *     AlpcpAllocateBlob @ 0x14068A024 (AlpcpAllocateBlob.c)
 *     AlpcpInsertResourcePort @ 0x14068AEF4 (AlpcpInsertResourcePort.c)
 *     AlpcpReleasePagedPoolQuota @ 0x1406DB904 (AlpcpReleasePagedPoolQuota.c)
 *     AlpcpCaptureMessageData @ 0x1406E2FF8 (AlpcpCaptureMessageData.c)
 */

__int64 __fastcall AlpcpCreateReserve(signed __int64 *Object, unsigned __int64 a2, _QWORD *a3)
{
  _OWORD *Blob; // rax
  ULONG_PTR v8; // rdi
  struct _KPROCESS *Process; // r14
  int v10; // ebx
  ULONG_PTR v11; // rbx
  int v12; // eax
  int v13; // esi
  volatile signed __int64 *v14; // rbx
  __int64 v15; // rax
  __int64 v16; // rax
  ULONG_PTR v17; // [rsp+68h] [rbp+10h] BYREF
  ULONG_PTR v18; // [rsp+78h] [rbp+20h] BYREF

  v17 = 0LL;
  if ( a2 > 0xFFD7 )
    return 2147483653LL;
  if ( a2 < 0x28 )
    return 3221225485LL;
  Blob = AlpcpAllocateBlob((__int64)AlpcReserveType, 48LL, 1);
  v8 = (ULONG_PTR)Blob;
  if ( !Blob )
    return 3221225626LL;
  *Blob = 0LL;
  Blob[1] = 0LL;
  Blob[2] = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  v10 = AlpcpChargePagedPoolQuota(Process, 0x318uLL);
  if ( v10 < 0 )
    goto LABEL_8;
  v10 = AlpcpAllocateMessage(&v17, a2, 1LL);
  if ( v10 < 0 )
  {
    AlpcpReleasePagedPoolQuota(Process, 0x318uLL);
LABEL_8:
    AlpcpDereferenceBlobEx(v8, 1);
    return (unsigned int)v10;
  }
  ObfReferenceObjectWithTag(Process, 0x63706C41u);
  v11 = v17;
  *(_QWORD *)(v17 + 48) = Process;
  *(_QWORD *)(v8 + 24) = v11;
  *(_QWORD *)(v8 + 32) = a2;
  *(_QWORD *)(v11 + 96) = v8;
  v12 = AlpcpCaptureMessageData(*(_QWORD *)(v8 + 24), a2, 0LL);
  *(_DWORD *)(v8 + 40) = 1;
  v13 = v12;
  AlpcpReferenceBlob(v8);
  AlpcpUnlockMessage(v11);
  if ( v13 >= 0 )
  {
    v14 = Object + 44;
    ExAcquirePushLockSharedEx((ULONG_PTR)(Object + 44), 0LL);
    if ( (Object[52] & 0x20) != 0 )
    {
      if ( _InterlockedCompareExchange64(v14, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(Object + 44);
      KeAbPostRelease((ULONG_PTR)(Object + 44));
      v13 = -1073741769;
    }
    else
    {
      AlpcpReferenceBlob(v8);
      ExAcquirePushLockExclusiveEx(v8 - 16, 0LL);
      *(_BYTE *)(v8 - 32) |= 4u;
      v15 = Object[2] + 40;
      v18 = v8;
      *(_QWORD *)(v8 + 8) = v15;
      v16 = AlpcAddHandleTableEntry(Object[2] + 40, &v18);
      *(_QWORD *)(v8 + 16) = v16;
      if ( v16 == -1 )
      {
        if ( _InterlockedCompareExchange64(v14, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared(Object + 44);
        KeAbPostRelease((ULONG_PTR)(Object + 44));
        *(_QWORD *)(v8 + 8) = 0LL;
        AlpcpEndInitialization(v8);
        AlpcpDereferenceBlobEx(v8, 2);
        return 3221225626LL;
      }
      *(_QWORD *)v8 = Object;
      ObfReferenceObject(Object);
      AlpcpInsertResourcePort((__int64)Object, v8);
      if ( _InterlockedCompareExchange64(v14, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(Object + 44);
      KeAbPostRelease((ULONG_PTR)(Object + 44));
      *a3 = *(_QWORD *)(v8 + 16);
      AlpcpEndInitialization(v8);
      v13 = 0;
    }
  }
  AlpcpDereferenceBlobEx(v8, 1);
  return (unsigned int)v13;
}
