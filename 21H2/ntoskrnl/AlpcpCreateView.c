/*
 * XREFs of AlpcpCreateView @ 0x1407A66CC
 * Callers:
 *     AlpcpCreateSectionView @ 0x14066C5B0 (AlpcpCreateSectionView.c)
 *     AlpcpExposeViewAttributeInSenderContext @ 0x1407A4E8C (AlpcpExposeViewAttributeInSenderContext.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     ObfReferenceObject @ 0x140347CF0 (ObfReferenceObject.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     memset @ 0x140435E00 (memset.c)
 *     MiMapViewInSystemSpace @ 0x1406F3FDC (MiMapViewInSystemSpace.c)
 *     MmMapViewOfSection @ 0x140785150 (MmMapViewOfSection.c)
 *     AlpcpDereferenceBlobEx @ 0x1407A5A54 (AlpcpDereferenceBlobEx.c)
 *     MmMapSecureViewOfSection @ 0x1407A6574 (MmMapSecureViewOfSection.c)
 *     AlpcpInsertResourcePort @ 0x1407A6950 (AlpcpInsertResourcePort.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x1407A6A34 (AlpcpLockForCachedReferenceBlob.c)
 *     AlpcpAllocateBlob @ 0x1407A73B0 (AlpcpAllocateBlob.c)
 *     AlpcpReferenceBlob @ 0x1407A7F84 (AlpcpReferenceBlob.c)
 *     AlpcpUnlockBlob @ 0x1407B0F40 (AlpcpUnlockBlob.c)
 */

__int64 __fastcall AlpcpCreateView(ULONG_PTR BugCheckParameter2, _QWORD *Object, ULONG_PTR *a3)
{
  ULONG_PTR v3; // r14
  int v4; // r12d
  unsigned int v7; // ebx
  unsigned __int64 v8; // rax
  __int64 v9; // r13
  void *Blob; // rax
  ULONG_PTR v11; // rsi
  __int64 v12; // r9
  bool v13; // zf
  int v14; // eax
  __int64 v15; // rax
  int v17; // [rsp+20h] [rbp-48h]
  int v18; // [rsp+38h] [rbp-30h]
  int v19; // [rsp+40h] [rbp-28h]
  int v20; // [rsp+48h] [rbp-20h]
  int v21; // [rsp+50h] [rbp-18h]
  __int64 v22; // [rsp+B0h] [rbp+48h] BYREF
  __int64 v23; // [rsp+B8h] [rbp+50h] BYREF
  ULONG_PTR *v24; // [rsp+C0h] [rbp+58h]
  __int64 v25; // [rsp+C8h] [rbp+60h] BYREF

  v24 = a3;
  v3 = *(_QWORD *)(BugCheckParameter2 + 16);
  v4 = 0;
  v23 = 0LL;
  v22 = 0LL;
  *a3 = 0LL;
  AlpcpLockForCachedReferenceBlob(v3);
  if ( (Object[52] & 0x20) != 0 )
  {
    v7 = -1073741769;
  }
  else
  {
    v8 = Object[38];
    v9 = Object[3];
    if ( v8 && v8 < *(_QWORD *)(BugCheckParameter2 + 40) )
    {
      v7 = -1073741756;
    }
    else if ( (*(_DWORD *)(BugCheckParameter2 + 48) & 1) != 0
           && (*(_DWORD *)(BugCheckParameter2 + 52) >= 2u || *(_QWORD *)(BugCheckParameter2 + 80)) )
    {
      v7 = -1073741790;
    }
    else
    {
      Blob = (void *)AlpcpAllocateBlob(AlpcViewType, 96LL, 0LL);
      v11 = (ULONG_PTR)Blob;
      if ( Blob )
      {
        memset(Blob, 0, 0x60uLL);
        v13 = (Object[32] & 0x100000) == 0;
        v22 = *(_QWORD *)(BugCheckParameter2 + 24);
        v25 = *(_QWORD *)(BugCheckParameter2 + 40);
        if ( v13 )
        {
          if ( (*(_DWORD *)(v3 + 48) & 2) != 0 )
            v14 = MmMapSecureViewOfSection(
                    *(_QWORD *)v3,
                    v9,
                    &v23,
                    v12,
                    v17,
                    (unsigned int *)&v22,
                    &v25,
                    v18,
                    v19,
                    v20,
                    v21,
                    v11 + 56);
          else
            v14 = MmMapViewOfSection(
                    **(_QWORD **)(BugCheckParameter2 + 16),
                    v9,
                    &v23,
                    0LL,
                    0LL,
                    (unsigned int *)&v22,
                    &v25,
                    2,
                    0,
                    4);
        }
        else
        {
          v14 = MiMapViewInSystemSpace(*(_QWORD *)v3, &v23, (unsigned __int64 *)&v25, &v22, 0LL, 0LL);
          v4 = 8;
        }
        v7 = v14;
        if ( v14 >= 0 )
        {
          AlpcpReferenceBlob(v11);
          *(_QWORD *)(v11 + 40) = v23;
          *(_QWORD *)(v11 + 48) = v25;
          *(_DWORD *)(v11 + 72) = v4 | *(_DWORD *)(v11 + 72) & 0xFFFFFFF7 | 1;
          ObfReferenceObjectWithTag((PVOID)v9, 0x63706C41u);
          *(_QWORD *)(v11 + 32) = v9;
          ObfReferenceObject(Object);
          *(_QWORD *)(v11 + 24) = Object;
          AlpcpReferenceBlob(BugCheckParameter2);
          *(_QWORD *)(v11 + 16) = BugCheckParameter2;
          v15 = *(_QWORD *)(BugCheckParameter2 + 64);
          *(_QWORD *)v11 = BugCheckParameter2 + 56;
          *(_QWORD *)(v11 + 8) = v15;
          **(_QWORD **)(BugCheckParameter2 + 64) = v11;
          ++*(_DWORD *)(BugCheckParameter2 + 52);
          *(_QWORD *)(BugCheckParameter2 + 64) = v11;
          AlpcpInsertResourcePort(Object, v11);
          ExAcquirePushLockExclusiveEx(v9 + 2048, 0LL);
          *(_QWORD *)(v11 + 88) = *(_QWORD *)(v9 + 2064);
          *(_QWORD *)(v11 + 80) = v9 + 2056;
          **(_QWORD **)(v9 + 2064) = v11 + 80;
          *(_QWORD *)(v9 + 2064) = v11 + 80;
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v9 + 2048), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock(v9 + 2048);
          KeAbPostRelease(v9 + 2048);
          if ( (*(_DWORD *)(BugCheckParameter2 + 48) & 1) != 0 )
            *(_QWORD *)(BugCheckParameter2 + 80) = v11;
          v7 = 0;
          *v24 = v11;
        }
        else
        {
          AlpcpDereferenceBlobEx(v11, 1);
        }
      }
      else
      {
        v7 = -1073741670;
      }
    }
  }
  AlpcpUnlockBlob(v3);
  return v7;
}
