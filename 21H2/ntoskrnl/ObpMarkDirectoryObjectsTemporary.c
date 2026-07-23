/*
 * XREFs of ObpMarkDirectoryObjectsTemporary @ 0x1405F1928
 * Callers:
 *     ObpMarkDirectoryTreeTemporary @ 0x1405F18B0 (ObpMarkDirectoryTreeTemporary.c)
 * Callees:
 *     ObpLockDirectoryExclusive @ 0x140229730 (ObpLockDirectoryExclusive.c)
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     ObpUnlockDirectory @ 0x14026CAAC (ObpUnlockDirectory.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140355BE0 (ExReleasePushLockEx.c)
 *     ObfReferenceObject @ 0x140355F80 (ObfReferenceObject.c)
 *     KeLeaveCriticalRegion @ 0x140356100 (KeLeaveCriticalRegion.c)
 *     ObpDeleteSymbolicLinkName @ 0x1405F1B2C (ObpDeleteSymbolicLinkName.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

void __fastcall ObpMarkDirectoryObjectsTemporary(PADAPTER_OBJECT DmaAdapter)
{
  __int64 v2; // rax
  PADAPTER_OBJECT v3; // r12
  PADAPTER_OBJECT v4; // r13
  _QWORD *v5; // rbx
  _QWORD *p_Version; // rsi
  struct _DMA_ADAPTER *v7; // rcx
  char v8; // r15
  struct _DMA_ADAPTER *v9; // rdi
  char *v10; // r14
  struct _KTHREAD *CurrentThread; // rax
  struct _OBJECT_TYPE *v12; // r15
  _QWORD *v13; // rdi
  struct _KTHREAD *v14; // rax
  __int64 v15; // [rsp+20h] [rbp-78h]
  ULONG_PTR BugCheckParameter2; // [rsp+28h] [rbp-70h]
  _QWORD *v17; // [rsp+30h] [rbp-68h]
  __int128 v18; // [rsp+38h] [rbp-60h] BYREF
  __int64 v19; // [rsp+48h] [rbp-50h]
  __int64 v20; // [rsp+50h] [rbp-48h]
  int v21; // [rsp+58h] [rbp-40h]
  int v22; // [rsp+5Ch] [rbp-3Ch]
  struct _DMA_ADAPTER *DmaAdaptera; // [rsp+A8h] [rbp+10h]
  PADAPTER_OBJECT v24; // [rsp+B0h] [rbp+18h]
  PADAPTER_OBJECT v25; // [rsp+B8h] [rbp+20h]

  v21 = -60876;
  v19 = 0LL;
  v20 = 0LL;
  v22 = 0;
  v18 = 0LL;
  ObpLockDirectoryExclusive((__int64)&v18, DmaAdapter);
  v2 = 37LL;
  v25 = DmaAdapter;
  v15 = 37LL;
  v3 = DmaAdapter;
  v4 = DmaAdapter;
  v24 = DmaAdapter;
  do
  {
    v5 = *(_QWORD **)&v3->Version;
    p_Version = &v4->Version;
    if ( *(_QWORD *)&v3->Version )
    {
      do
      {
        v7 = (struct _DMA_ADAPTER *)v5[1];
        v8 = 0;
        v17 = p_Version;
        DmaAdaptera = v7;
        v9 = v7 - 3;
        if ( (BYTE2(v7[-2].DmaOperations) & 2) != 0 )
          v10 = (char *)v9 - ObpInfoMaskToOffset[BYTE2(v7[-2].DmaOperations) & 3];
        else
          v10 = 0LL;
        ObfReferenceObject(v7);
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        BugCheckParameter2 = (ULONG_PTR)&v9[1];
        ExAcquirePushLockExclusiveEx((ULONG_PTR)&v9[1], 0LL);
        BYTE3(v9[1].DmaOperations) &= ~0x10u;
        if ( !v9->DmaOperations && !*((_DWORD *)v10 + 6) )
        {
          v12 = (struct _OBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ LOBYTE(v9[1].DmaOperations) ^ (unsigned __int64)BYTE1(v9)];
          if ( v12 == ObpSymbolicLinkObjectType )
            ObpDeleteSymbolicLinkName(&v9[3]);
          v13 = v5;
          *p_Version = *v5;
          v5 = (_QWORD *)*v5;
          if ( v12 == ObpDirectoryObjectType )
          {
            v14 = KeGetCurrentThread();
            --v14->KernelApcDisable;
            ExAcquirePushLockExclusiveEx((ULONG_PTR)&ObpPendingObjectDirectoryListLock, 0LL);
            *v13 = ObpPendingObjectDirectoryList;
            ObpPendingObjectDirectoryList = v13;
            ExReleasePushLockEx((ULONG_PTR)&ObpPendingObjectDirectoryListLock, 0LL);
            KeLeaveCriticalRegion();
          }
          else
          {
            HalPutDmaAdapter(DmaAdaptera);
            ExFreePoolWithTag(v13, 0);
          }
          *(_QWORD *)v10 = 0LL;
          HalPutDmaAdapter(DmaAdapter);
          v8 = 1;
        }
        p_Version = v5;
        ExReleasePushLockEx(BugCheckParameter2, 0LL);
        KeLeaveCriticalRegion();
        HalPutDmaAdapter(DmaAdaptera);
        if ( v8 )
          p_Version = v17;
        else
          v5 = (_QWORD *)*v5;
      }
      while ( v5 );
      v3 = v25;
      v4 = v24;
      v2 = v15;
    }
    v4 = (PADAPTER_OBJECT)((char *)v4 + 8);
    v3 = (PADAPTER_OBJECT)((char *)v3 + 8);
    --v2;
    v24 = v4;
    v15 = v2;
    v25 = v3;
  }
  while ( v2 );
  ObpUnlockDirectory((__int64)DmaAdapter, (__int64)&v18);
}
