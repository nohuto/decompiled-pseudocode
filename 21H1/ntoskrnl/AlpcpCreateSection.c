/*
 * XREFs of AlpcpCreateSection @ 0x140642A04
 * Callers:
 *     NtAlpcCreatePortSection @ 0x140642870 (NtAlpcCreatePortSection.c)
 *     AlpcpMapLegacyPortView @ 0x140645420 (AlpcpMapLegacyPortView.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x140260BA0 (ExAcquirePushLockSharedEx.c)
 *     ObfReferenceObject @ 0x1402612A0 (ObfReferenceObject.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x14035A580 (ExfReleasePushLockShared.c)
 *     memset @ 0x140408F80 (memset.c)
 *     AlpcpDereferenceBlobEx @ 0x1406103F0 (AlpcpDereferenceBlobEx.c)
 *     AlpcpReferenceBlob @ 0x140610770 (AlpcpReferenceBlob.c)
 *     AlpcpAllocateBlob @ 0x140611EA0 (AlpcpAllocateBlob.c)
 *     AlpcpInsertResourcePort @ 0x140612D74 (AlpcpInsertResourcePort.c)
 *     ObReferenceObjectByHandle @ 0x14062B200 (ObReferenceObjectByHandle.c)
 *     AlpcpEndInitialization @ 0x140642CA4 (AlpcpEndInitialization.c)
 *     AlpcAddHandleTableEntry @ 0x140642CE8 (AlpcAddHandleTableEntry.c)
 *     MmCreateSection @ 0x140642E30 (MmCreateSection.c)
 */

__int64 __fastcall AlpcpCreateSection(char *Object, unsigned __int8 a2, char a3, void *a4, __int64 a5, ULONG_PTR *a6)
{
  int v6; // ebp
  _OWORD *Blob; // rax
  ULONG_PTR v12; // rbx
  NTSTATUS v13; // edi
  volatile signed __int64 *v14; // rdi
  __int64 v15; // rcx
  __int64 v16; // rax
  PVOID v17; // [rsp+40h] [rbp-38h] BYREF
  __int64 v18; // [rsp+48h] [rbp-30h] BYREF
  ULONG_PTR v19[2]; // [rsp+50h] [rbp-28h] BYREF

  v6 = a2;
  if ( !a5 || a4 && a2 )
    return 3221225485LL;
  if ( (*((_DWORD *)Object + 64) & 0x1000000) != 0 )
    return 3221227270LL;
  Blob = AlpcpAllocateBlob((__int64)AlpcSectionType, 72LL, 1);
  v12 = (ULONG_PTR)Blob;
  if ( !Blob )
    return 3221225626LL;
  memset(Blob, 0, 0x48uLL);
  *(_QWORD *)(v12 + 32) = KeGetCurrentThread()->ApcState.Process;
  *(_QWORD *)(v12 + 8) = ~((unsigned int)AlpcpRegionGranularity - 1LL) & (a5 + (unsigned int)(AlpcpRegionGranularity - 1));
  *(_QWORD *)(v12 + 64) = v12 + 56;
  *(_QWORD *)(v12 + 56) = v12 + 56;
  if ( a4 )
  {
    v17 = 0LL;
    v13 = ObReferenceObjectByHandle(a4, 6u, MmSectionObjectType, KeGetCurrentThread()->PreviousMode, &v17, 0LL);
    *(_QWORD *)v12 = v17;
  }
  else
  {
    v18 = *(_QWORD *)(v12 + 8);
    *(_DWORD *)(v12 + 48) = *(_DWORD *)(v12 + 48) ^ (*(_DWORD *)(v12 + 48) ^ (2 * v6)) & 2 | 1;
    v13 = MmCreateSection(v12, 983071LL, 0LL, &v18, 4, 0x8000000, 0LL, 0LL);
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
    AlpcpDereferenceBlobEx(v12, 1);
    return (unsigned int)v13;
  }
  ExAcquirePushLockExclusiveEx(v12 - 16, 0LL);
  *(_BYTE *)(v12 - 32) |= 4u;
  if ( a3 )
  {
    AlpcpReferenceBlob(v12);
    v15 = *((_QWORD *)Object + 2) + 40LL;
    v19[0] = v12;
    *(_QWORD *)(v12 + 16) = v15;
    v16 = AlpcAddHandleTableEntry(v15, v19);
    *(_QWORD *)(v12 + 24) = v16;
    if ( v16 == -1 )
    {
      if ( _InterlockedCompareExchange64(v14, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)Object + 44);
      KeAbPostRelease((ULONG_PTR)(Object + 352));
      *(_QWORD *)(v12 + 16) = 0LL;
      AlpcpEndInitialization(v12);
      AlpcpDereferenceBlobEx(v12, 2);
      return 3221225626LL;
    }
  }
  ObfReferenceObject(Object);
  *(_QWORD *)(v12 + 40) = Object;
  AlpcpInsertResourcePort((__int64)Object, v12);
  if ( _InterlockedCompareExchange64(v14, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)Object + 44);
  KeAbPostRelease((ULONG_PTR)(Object + 352));
  AlpcpEndInitialization(v12);
  *a6 = v12;
  return 0LL;
}
