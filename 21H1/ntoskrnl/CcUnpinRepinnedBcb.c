/*
 * XREFs of CcUnpinRepinnedBcb @ 0x1404E5090
 * Callers:
 *     <none>
 * Callees:
 *     CcGetPartition @ 0x14022E770 (CcGetPartition.c)
 *     MmFlushSection @ 0x14022F794 (MmFlushSection.c)
 *     CcSetDirtyPinnedData @ 0x14022FAB0 (CcSetDirtyPinnedData.c)
 *     CcUnpinFileDataEx @ 0x1402305D0 (CcUnpinFileDataEx.c)
 *     CcDereferenceSharedCacheMapFileObject @ 0x140232608 (CcDereferenceSharedCacheMapFileObject.c)
 *     CcReferenceSharedCacheMapFileObject @ 0x140232654 (CcReferenceSharedCacheMapFileObject.c)
 *     ExAcquireResourceExclusiveLite @ 0x140261C10 (ExAcquireResourceExclusiveLite.c)
 *     MmSetAddressRangeModifiedEx @ 0x1402BBFB0 (MmSetAddressRangeModifiedEx.c)
 *     CcIsFatalWriteError @ 0x140312254 (CcIsFatalWriteError.c)
 *     CcPerfLogFlushSection @ 0x1403B8E9C (CcPerfLogFlushSection.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     CcPostDeferredWrites @ 0x1404E4C20 (CcPostDeferredWrites.c)
 */

void __stdcall CcUnpinRepinnedBcb(PVOID Bcb, BOOLEAN WriteThrough, PIO_STATUS_BLOCK IoStatus)
{
  __int64 v6; // rdi
  __int64 Partition; // rax
  _DWORD *v8; // r9
  __int64 v9; // rbp
  _DWORD *v10; // r9
  __int64 v11; // r9
  ULONG_PTR v12; // r15
  _DWORD *v13; // r9

  if ( *(_WORD *)Bcb != 765 )
    KeBugCheckEx(0x34u, 0x1FE4uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  v6 = *((_QWORD *)Bcb + 22);
  Partition = CcGetPartition((_QWORD *)v6);
  IoStatus->Status = 0;
  v9 = Partition;
  if ( WriteThrough )
  {
    if ( (*(_DWORD *)(v6 + 152) & 0x200) != 0 )
      ExAcquireResourceExclusiveLite((PERESOURCE)((char *)Bcb + 72), 1u);
    if ( *((_BYTE *)Bcb + 2) )
    {
      MmSetAddressRangeModifiedEx(*((_QWORD *)Bcb + 23), *((unsigned int *)Bcb + 1));
      CcUnpinFileDataEx((char *)Bcb, 1, 2, v10);
      v12 = CcReferenceSharedCacheMapFileObject(v6);
      if ( (xmmword_140CFC490 & 0x20000) != 0 )
        CcPerfLogFlushSection(0LL, v6, (__int64 *)Bcb + 1, *((_DWORD *)Bcb + 1), 1);
      MmFlushSection(*(_QWORD *)(v12 + 40), (__int64 *)Bcb + 1, *((unsigned int *)Bcb + 1), v11, IoStatus, 1u);
      CcDereferenceSharedCacheMapFileObject(v6, v12);
      if ( IoStatus->Status < 0 && !CcIsFatalWriteError(*((_QWORD *)Bcb + 22), IoStatus->Status) )
        CcSetDirtyPinnedData(Bcb, 0LL);
      CcUnpinFileDataEx((char *)Bcb, 0, 0, v13);
      if ( *(_QWORD *)(v9 + 784) != v9 + 784 )
        CcPostDeferredWrites(v9);
    }
    else
    {
      CcUnpinFileDataEx((char *)Bcb, 0, 0, v8);
    }
  }
  else
  {
    CcUnpinFileDataEx((char *)Bcb, 1, 0, v8);
    IoStatus->Status = 0;
  }
}
