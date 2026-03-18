/*
 * XREFs of AlpcpCreateSection @ 0x14066BC7C
 * Callers:
 *     NtAlpcCreatePortSection @ 0x14066BAB0 (NtAlpcCreatePortSection.c)
 *     AlpcpMapLegacyPortView @ 0x14066C1DC (AlpcpMapLegacyPortView.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     ObfReferenceObject @ 0x140347CF0 (ObfReferenceObject.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     memset @ 0x140435E00 (memset.c)
 *     MmCreateSection @ 0x14066BF30 (MmCreateSection.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     AlpcAddHandleTableEntry @ 0x1407A5530 (AlpcAddHandleTableEntry.c)
 *     AlpcpEndInitialization @ 0x1407A5668 (AlpcpEndInitialization.c)
 *     AlpcpDereferenceBlobEx @ 0x1407A5A54 (AlpcpDereferenceBlobEx.c)
 *     AlpcpInsertResourcePort @ 0x1407A6950 (AlpcpInsertResourcePort.c)
 *     AlpcpAllocateBlob @ 0x1407A73B0 (AlpcpAllocateBlob.c)
 *     AlpcpReferenceBlob @ 0x1407A7F84 (AlpcpReferenceBlob.c)
 */

__int64 __fastcall AlpcpCreateSection(char *Object, unsigned __int8 a2, char a3, void *a4, PVOID a5, ULONG_PTR *a6)
{
  int v6; // ebp
  void *Blob; // rax
  ULONG_PTR v12; // rbx
  NTSTATUS v13; // edi
  volatile signed __int64 *v14; // rdi
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // [rsp+40h] [rbp-28h] BYREF
  ULONG_PTR v18; // [rsp+48h] [rbp-20h] BYREF

  v6 = a2;
  if ( !a5 || a4 && a2 )
    return 3221225485LL;
  if ( (*((_DWORD *)Object + 64) & 0x1000000) != 0 )
    return 3221227270LL;
  Blob = (void *)AlpcpAllocateBlob(AlpcSectionType, 72LL, 1LL);
  v12 = (ULONG_PTR)Blob;
  if ( !Blob )
    return 3221225626LL;
  memset(Blob, 0, 0x48uLL);
  *(_QWORD *)(v12 + 32) = KeGetCurrentThread()->ApcState.Process;
  *(_QWORD *)(v12 + 8) = ~((unsigned int)AlpcpRegionGranularity - 1LL) & ((unsigned __int64)a5
                                                                        + (unsigned int)(AlpcpRegionGranularity - 1));
  *(_QWORD *)(v12 + 64) = v12 + 56;
  *(_QWORD *)(v12 + 56) = v12 + 56;
  if ( a4 )
  {
    a5 = 0LL;
    v13 = ObReferenceObjectByHandle(a4, 6u, MmSectionObjectType, KeGetCurrentThread()->PreviousMode, &a5, 0LL);
    *(_QWORD *)v12 = a5;
  }
  else
  {
    v17 = *(_QWORD *)(v12 + 8);
    *(_DWORD *)(v12 + 48) = *(_DWORD *)(v12 + 48) ^ (*(_DWORD *)(v12 + 48) ^ (2 * v6)) & 2 | 1;
    v13 = ((__int64 (__fastcall *)(ULONG_PTR, __int64, _QWORD, __int64 *, int, int, _QWORD, _QWORD))MmCreateSection)(
            v12,
            983071LL,
            0LL,
            &v17,
            4,
            0x8000000,
            0LL,
            0LL);
  }
  if ( v13 < 0 )
    goto LABEL_16;
  v14 = (volatile signed __int64 *)(Object + 352);
  ExAcquirePushLockSharedEx((ULONG_PTR)(Object + 352), 0LL);
  if ( (*((_DWORD *)Object + 104) & 0x20) != 0 )
  {
    if ( _InterlockedCompareExchange64(v14, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)Object + 44);
    KeAbPostRelease((ULONG_PTR)(Object + 352));
    v13 = -1073741769;
LABEL_16:
    AlpcpDereferenceBlobEx(v12);
    return (unsigned int)v13;
  }
  ExAcquirePushLockExclusiveEx(v12 - 16, 0LL);
  *(_BYTE *)(v12 - 32) |= 4u;
  AlpcpReferenceBlob(v12);
  if ( a3 )
  {
    v15 = *((_QWORD *)Object + 2) + 40LL;
    v18 = v12;
    *(_QWORD *)(v12 + 16) = v15;
    v16 = AlpcAddHandleTableEntry(v15, &v18);
    *(_QWORD *)(v12 + 24) = v16;
    if ( v16 == -1 )
    {
      if ( _InterlockedCompareExchange64(v14, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)Object + 44);
      KeAbPostRelease((ULONG_PTR)(Object + 352));
      *(_QWORD *)(v12 + 16) = 0LL;
      AlpcpEndInitialization(v12);
      AlpcpDereferenceBlobEx(v12);
      return 3221225626LL;
    }
  }
  ObfReferenceObject(Object);
  *(_QWORD *)(v12 + 40) = Object;
  AlpcpInsertResourcePort(Object, v12);
  if ( _InterlockedCompareExchange64(v14, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)Object + 44);
  KeAbPostRelease((ULONG_PTR)(Object + 352));
  AlpcpEndInitialization(v12);
  *a6 = v12;
  return 0LL;
}
