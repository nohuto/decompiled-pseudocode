/*
 * XREFs of AlpcpCreateView @ 0x14068AC9C
 * Callers:
 *     AlpcpCreateSectionView @ 0x1406105C8 (AlpcpCreateSectionView.c)
 *     AlpcpExposeViewAttributeInSenderContext @ 0x14062EAF0 (AlpcpExposeViewAttributeInSenderContext.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140207AC0 (ExAcquirePushLockExclusiveEx.c)
 *     ObfReferenceObject @ 0x140208380 (ObfReferenceObject.c)
 *     KeAbPostRelease @ 0x14020ACF0 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1402749E0 (ExfTryToWakePushLock.c)
 *     ObfReferenceObjectWithTag @ 0x140296B50 (ObfReferenceObjectWithTag.c)
 *     memset @ 0x14040A280 (memset.c)
 *     MiMapViewInSystemSpace @ 0x14060B094 (MiMapViewInSystemSpace.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x14062B87C (AlpcpLockForCachedReferenceBlob.c)
 *     MmMapViewOfSection @ 0x14065DF80 (MmMapViewOfSection.c)
 *     AlpcpUnlockBlob @ 0x140685070 (AlpcpUnlockBlob.c)
 *     AlpcpDereferenceBlobEx @ 0x140688570 (AlpcpDereferenceBlobEx.c)
 *     AlpcpReferenceBlob @ 0x1406888F0 (AlpcpReferenceBlob.c)
 *     AlpcpAllocateBlob @ 0x14068A024 (AlpcpAllocateBlob.c)
 *     AlpcpInsertResourcePort @ 0x14068AEF4 (AlpcpInsertResourcePort.c)
 *     MmMapSecureViewOfSection @ 0x14068AFAC (MmMapSecureViewOfSection.c)
 */

__int64 __fastcall AlpcpCreateView(ULONG_PTR BugCheckParameter2, _QWORD *Object, ULONG_PTR *a3)
{
  ULONG_PTR v3; // r14
  unsigned __int64 v7; // rax
  __int64 v8; // r13
  _OWORD *Blob; // rax
  ULONG_PTR v10; // rsi
  int v11; // r9d
  bool v12; // zf
  int v13; // eax
  int v14; // ecx
  unsigned int v15; // ebx
  __int64 v16; // rax
  unsigned __int64 v18; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v19; // [rsp+A8h] [rbp+48h] BYREF
  __int64 v20; // [rsp+B0h] [rbp+50h] BYREF

  v3 = *(_QWORD *)(BugCheckParameter2 + 16);
  v19 = 0LL;
  v18 = 0LL;
  *a3 = 0LL;
  AlpcpLockForCachedReferenceBlob(v3);
  if ( (Object[52] & 0x20) != 0 )
  {
    v15 = -1073741769;
  }
  else
  {
    v7 = Object[38];
    v8 = Object[3];
    if ( v7 && v7 < *(_QWORD *)(BugCheckParameter2 + 40) )
    {
      v15 = -1073741756;
    }
    else if ( (*(_DWORD *)(BugCheckParameter2 + 48) & 1) != 0
           && (*(_DWORD *)(BugCheckParameter2 + 52) >= 2u || *(_QWORD *)(BugCheckParameter2 + 80)) )
    {
      v15 = -1073741790;
    }
    else
    {
      Blob = AlpcpAllocateBlob((__int64)AlpcViewType, 96LL, 0);
      v10 = (ULONG_PTR)Blob;
      if ( Blob )
      {
        memset(Blob, 0, 0x60uLL);
        v12 = (Object[32] & 0x100000) == 0;
        v18 = *(_QWORD *)(BugCheckParameter2 + 24);
        v20 = *(_QWORD *)(BugCheckParameter2 + 40);
        if ( v12 )
        {
          if ( (*(_DWORD *)(v3 + 48) & 2) != 0 )
            v13 = MmMapSecureViewOfSection(*(_QWORD *)v3, v8, (unsigned int)&v19, v11);
          else
            v13 = MmMapViewOfSection(**(_QWORD **)(BugCheckParameter2 + 16), v8, &v19, 0LL, 0LL, &v18, &v20, 2, 0, 4);
          v14 = 0;
        }
        else
        {
          v13 = MiMapViewInSystemSpace(
                  *(_QWORD *)v3,
                  (__int64)&unk_140C4CB68,
                  &v19,
                  (unsigned __int64 *)&v20,
                  &v18,
                  0LL,
                  0LL);
          v14 = 8;
        }
        v15 = v13;
        if ( v13 < 0 )
        {
          AlpcpDereferenceBlobEx(v10, 1);
        }
        else
        {
          *(_QWORD *)(v10 + 40) = v19;
          *(_QWORD *)(v10 + 48) = v20;
          *(_DWORD *)(v10 + 72) = v14 | *(_DWORD *)(v10 + 72) & 0xFFFFFFF7 | 1;
          ObfReferenceObjectWithTag((PVOID)v8, 0x63706C41u);
          *(_QWORD *)(v10 + 32) = v8;
          ObfReferenceObject(Object);
          *(_QWORD *)(v10 + 24) = Object;
          AlpcpReferenceBlob(BugCheckParameter2);
          *(_QWORD *)(v10 + 16) = BugCheckParameter2;
          v16 = *(_QWORD *)(BugCheckParameter2 + 64);
          *(_QWORD *)v10 = BugCheckParameter2 + 56;
          *(_QWORD *)(v10 + 8) = v16;
          **(_QWORD **)(BugCheckParameter2 + 64) = v10;
          ++*(_DWORD *)(BugCheckParameter2 + 52);
          *(_QWORD *)(BugCheckParameter2 + 64) = v10;
          AlpcpInsertResourcePort(Object, v10);
          ExAcquirePushLockExclusiveEx(v8 + 2048, 0LL);
          *(_QWORD *)(v10 + 88) = *(_QWORD *)(v8 + 2064);
          *(_QWORD *)(v10 + 80) = v8 + 2056;
          **(_QWORD **)(v8 + 2064) = v10 + 80;
          *(_QWORD *)(v8 + 2064) = v10 + 80;
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v8 + 2048), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)(v8 + 2048));
          KeAbPostRelease(v8 + 2048);
          if ( (*(_DWORD *)(BugCheckParameter2 + 48) & 1) != 0 )
            *(_QWORD *)(BugCheckParameter2 + 80) = v10;
          AlpcpReferenceBlob(v10);
          v15 = 0;
          *a3 = v10;
        }
      }
      else
      {
        v15 = -1073741670;
      }
    }
  }
  AlpcpUnlockBlob(v3);
  return v15;
}
