/*
 * XREFs of AlpcpCreateReserve @ 0x14060FCC4
 * Callers:
 *     NtAlpcCreateResourceReserve @ 0x14060FBD0 (NtAlpcCreateResourceReserve.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1402A9FE0 (ObfReferenceObjectWithTag.c)
 *     ExfReleasePushLockShared @ 0x1402FC1C0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1403558A0 (ExAcquirePushLockSharedEx.c)
 *     ObfReferenceObject @ 0x140355F80 (ObfReferenceObject.c)
 *     AlpcpReferenceBlob @ 0x140655834 (AlpcpReferenceBlob.c)
 *     AlpcpChargePagedPoolQuota @ 0x14065586C (AlpcpChargePagedPoolQuota.c)
 *     AlpcpAllocateBlob @ 0x1406558AC (AlpcpAllocateBlob.c)
 *     AlpcpInsertResourcePort @ 0x140655BEC (AlpcpInsertResourcePort.c)
 *     AlpcpEndInitialization @ 0x1406575A4 (AlpcpEndInitialization.c)
 *     AlpcAddHandleTableEntry @ 0x1406575E8 (AlpcAddHandleTableEntry.c)
 *     AlpcpReleasePagedPoolQuota @ 0x1406897B4 (AlpcpReleasePagedPoolQuota.c)
 *     AlpcpAllocateMessage @ 0x1406D0144 (AlpcpAllocateMessage.c)
 *     AlpcpCaptureMessageData @ 0x1406D34DC (AlpcpCaptureMessageData.c)
 *     AlpcpUnlockMessage @ 0x1406D962C (AlpcpUnlockMessage.c)
 *     AlpcpDereferenceBlobEx @ 0x1406D9720 (AlpcpDereferenceBlobEx.c)
 */

__int64 __fastcall AlpcpCreateReserve(signed __int64 *Object, unsigned __int64 a2, _QWORD *a3)
{
  _OWORD *Blob; // rax
  ULONG_PTR v8; // rdi
  _KPROCESS *Process; // r14
  int v10; // ebx
  ULONG_PTR v11; // rbx
  int v12; // eax
  int v13; // esi
  volatile signed __int64 *v14; // rbx
  __int64 v15; // rax
  __int64 v16; // rax
  ULONG_PTR BugCheckParameter2; // [rsp+68h] [rbp+10h] BYREF
  ULONG_PTR v18; // [rsp+78h] [rbp+20h] BYREF

  BugCheckParameter2 = 0LL;
  if ( a2 > 0xFFD7 )
    return 2147483653LL;
  if ( a2 < 0x28 )
    return 3221225485LL;
  Blob = (_OWORD *)AlpcpAllocateBlob(AlpcReserveType, 48LL, 1LL);
  v8 = (ULONG_PTR)Blob;
  if ( !Blob )
    return 3221225626LL;
  *Blob = 0LL;
  Blob[1] = 0LL;
  Blob[2] = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  v10 = AlpcpChargePagedPoolQuota(Process, 792LL);
  if ( v10 < 0 )
    goto LABEL_8;
  v10 = AlpcpAllocateMessage(&BugCheckParameter2, a2, 1LL);
  if ( v10 < 0 )
  {
    AlpcpReleasePagedPoolQuota(Process, 792LL);
LABEL_8:
    AlpcpDereferenceBlobEx(v8);
    return (unsigned int)v10;
  }
  ObfReferenceObjectWithTag(Process, 0x63706C41u);
  v11 = BugCheckParameter2;
  *(_QWORD *)(BugCheckParameter2 + 48) = Process;
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
        AlpcpDereferenceBlobEx(v8);
        return 3221225626LL;
      }
      *(_QWORD *)v8 = Object;
      ObfReferenceObject(Object);
      AlpcpInsertResourcePort(Object, v8);
      if ( _InterlockedCompareExchange64(v14, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(Object + 44);
      KeAbPostRelease((ULONG_PTR)(Object + 44));
      *a3 = *(_QWORD *)(v8 + 16);
      AlpcpEndInitialization(v8);
      v13 = 0;
    }
  }
  AlpcpDereferenceBlobEx(v8);
  return (unsigned int)v13;
}
