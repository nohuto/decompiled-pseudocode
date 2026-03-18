/*
 * XREFs of CcUnpinRepinnedBcb @ 0x1404E5640
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x140208CF0 (ExAcquireResourceExclusiveLite.c)
 *     MmSetAddressRangeModifiedEx @ 0x140262F80 (MmSetAddressRangeModifiedEx.c)
 *     CcGetPartition @ 0x1402C15A0 (CcGetPartition.c)
 *     MmFlushSection @ 0x1402C25C4 (MmFlushSection.c)
 *     CcSetDirtyPinnedData @ 0x1402C28E0 (CcSetDirtyPinnedData.c)
 *     CcUnpinFileDataEx @ 0x1402C3400 (CcUnpinFileDataEx.c)
 *     CcDereferenceSharedCacheMapFileObject @ 0x1402C5438 (CcDereferenceSharedCacheMapFileObject.c)
 *     CcReferenceSharedCacheMapFileObject @ 0x1402C5484 (CcReferenceSharedCacheMapFileObject.c)
 *     CcIsFatalWriteError @ 0x14034FA44 (CcIsFatalWriteError.c)
 *     CcPerfLogFlushSection @ 0x1403BA20C (CcPerfLogFlushSection.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 *     CcPostDeferredWrites @ 0x1404E51D0 (CcPostDeferredWrites.c)
 */

// local variable allocation has failed, the output may be wrong!
void __stdcall CcUnpinRepinnedBcb(PVOID Bcb, BOOLEAN WriteThrough, PIO_STATUS_BLOCK IoStatus)
{
  _DWORD *v3; // r9
  __int64 v7; // rdi
  __int64 Partition; // rax
  _DWORD *v9; // r9
  __int64 v10; // rbp
  _DWORD *v11; // r9
  __int64 v12; // r9
  ULONG_PTR v13; // r15
  _DWORD *v14; // r9

  if ( *(_WORD *)Bcb != 765 )
    KeBugCheckEx(0x34u, 0x20B4uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  v7 = *((_QWORD *)Bcb + 22);
  Partition = CcGetPartition((_QWORD *)v7, WriteThrough, (__int64)IoStatus, v3);
  IoStatus->Status = 0;
  v10 = Partition;
  if ( WriteThrough )
  {
    if ( (*(_DWORD *)(v7 + 152) & 0x200) != 0 )
      ExAcquireResourceExclusiveLite((PERESOURCE)((char *)Bcb + 72), 1u);
    if ( *((_BYTE *)Bcb + 2) )
    {
      MmSetAddressRangeModifiedEx(*((_QWORD *)Bcb + 23), *((unsigned int *)Bcb + 1));
      CcUnpinFileDataEx((char *)Bcb, 1, 2, v11);
      v13 = CcReferenceSharedCacheMapFileObject(v7);
      if ( (xmmword_140CFC490 & 0x20000) != 0 )
        CcPerfLogFlushSection(0LL, v7, (__int64 *)Bcb + 1, *((_DWORD *)Bcb + 1), 1);
      MmFlushSection(*(_QWORD *)(v13 + 40), (__int64 *)Bcb + 1, *((unsigned int *)Bcb + 1), v12, IoStatus, 1u);
      CcDereferenceSharedCacheMapFileObject(v7, v13);
      if ( IoStatus->Status < 0 && !CcIsFatalWriteError(*((_QWORD *)Bcb + 22), IoStatus->Status) )
        CcSetDirtyPinnedData(Bcb, 0LL);
      CcUnpinFileDataEx((char *)Bcb, 0, 0, v14);
      if ( *(_QWORD *)(v10 + 784) != v10 + 784 )
        CcPostDeferredWrites(v10);
    }
    else
    {
      CcUnpinFileDataEx((char *)Bcb, 0, 0, v9);
    }
  }
  else
  {
    CcUnpinFileDataEx((char *)Bcb, 1, 0, v9);
    IoStatus->Status = 0;
  }
}
