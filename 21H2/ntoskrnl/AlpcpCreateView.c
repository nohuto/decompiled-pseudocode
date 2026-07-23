/*
 * XREFs of AlpcpCreateView @ 0x140655960
 * Callers:
 *     AlpcpExposeViewAttributeInSenderContext @ 0x140656970 (AlpcpExposeViewAttributeInSenderContext.c)
 *     AlpcpCreateSectionView @ 0x1406A9838 (AlpcpCreateSectionView.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1402A9FE0 (ObfReferenceObjectWithTag.c)
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     ObfReferenceObject @ 0x140355F80 (ObfReferenceObject.c)
 *     memset @ 0x140414300 (memset.c)
 *     AlpcpReferenceBlob @ 0x140655834 (AlpcpReferenceBlob.c)
 *     AlpcpAllocateBlob @ 0x1406558AC (AlpcpAllocateBlob.c)
 *     AlpcpInsertResourcePort @ 0x140655BEC (AlpcpInsertResourcePort.c)
 *     MmMapSecureViewOfSection @ 0x140655C70 (MmMapSecureViewOfSection.c)
 *     MmMapViewOfSection @ 0x1406A1F20 (MmMapViewOfSection.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x1406D0224 (AlpcpLockForCachedReferenceBlob.c)
 *     AlpcpUnlockBlob @ 0x1406D6FE0 (AlpcpUnlockBlob.c)
 *     AlpcpDereferenceBlobEx @ 0x1406D9720 (AlpcpDereferenceBlobEx.c)
 *     MiMapViewInSystemSpace @ 0x1406FFC5C (MiMapViewInSystemSpace.c)
 */

__int64 __fastcall AlpcpCreateView(ULONG_PTR BugCheckParameter2, _QWORD *Object, ULONG_PTR *a3)
{
  ULONG_PTR v3; // r14
  unsigned int v7; // ebx
  unsigned __int64 v8; // rax
  __int64 v9; // r13
  _OWORD *Blob; // rax
  ULONG_PTR v11; // rsi
  int v12; // r9d
  bool v13; // zf
  int v14; // eax
  __int64 v15; // rax
  int v17; // [rsp+B0h] [rbp+48h]
  __int64 v18; // [rsp+B8h] [rbp+50h] BYREF
  __int64 v19; // [rsp+C0h] [rbp+58h] BYREF
  __int64 v20; // [rsp+C8h] [rbp+60h] BYREF

  v3 = *(_QWORD *)(BugCheckParameter2 + 16);
  v19 = 0LL;
  v18 = 0LL;
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
      Blob = AlpcpAllocateBlob((__int64)AlpcViewType, 96LL, 0);
      v11 = (ULONG_PTR)Blob;
      if ( Blob )
      {
        memset(Blob, 0, 0x60uLL);
        v13 = (Object[32] & 0x100000) == 0;
        v18 = *(_QWORD *)(BugCheckParameter2 + 24);
        v20 = *(_QWORD *)(BugCheckParameter2 + 40);
        if ( v13 )
        {
          if ( (*(_DWORD *)(v3 + 48) & 2) != 0 )
            v14 = MmMapSecureViewOfSection(*(_QWORD *)v3, v9, (unsigned int)&v19, v12);
          else
            v14 = MmMapViewOfSection(**(_QWORD **)(BugCheckParameter2 + 16), v9, &v19, 0LL, 0LL, &v18, &v20, 2, 0, 4);
          v17 = 0;
        }
        else
        {
          v14 = MiMapViewInSystemSpace(
                  *(_QWORD *)v3,
                  (unsigned int)&unk_140C4CDA8,
                  (unsigned int)&v19,
                  (unsigned int)&v20,
                  (__int64)&v18,
                  0LL,
                  0LL);
          v17 = 8;
        }
        v7 = v14;
        if ( v14 >= 0 )
        {
          AlpcpReferenceBlob(v11);
          *(_QWORD *)(v11 + 40) = v19;
          *(_QWORD *)(v11 + 48) = v20;
          *(_DWORD *)(v11 + 72) = v17 | *(_DWORD *)(v11 + 72) & 0xFFFFFFF7 | 1;
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
          *a3 = v11;
          v7 = 0;
        }
        else
        {
          AlpcpDereferenceBlobEx(v11);
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
