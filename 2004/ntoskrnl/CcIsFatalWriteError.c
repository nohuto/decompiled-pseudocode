/*
 * XREFs of CcIsFatalWriteError @ 0x14034FA44
 * Callers:
 *     CcFlushCachePriv @ 0x1402BEDA0 (CcFlushCachePriv.c)
 *     CcWriteBehindInternal @ 0x1402BFC70 (CcWriteBehindInternal.c)
 *     CcNotifyOfMappedWriteComplete @ 0x14035D980 (CcNotifyOfMappedWriteComplete.c)
 *     CcUnpinRepinnedBcb @ 0x1404E5640 (CcUnpinRepinnedBcb.c)
 * Callees:
 *     CcDereferenceSharedCacheMapFileObject @ 0x1402C5438 (CcDereferenceSharedCacheMapFileObject.c)
 *     CcReferenceSharedCacheMapFileObject @ 0x1402C5484 (CcReferenceSharedCacheMapFileObject.c)
 *     MmIsWriteErrorFatal @ 0x1402F81A8 (MmIsWriteErrorFatal.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 */

bool __fastcall CcIsFatalWriteError(__int64 a1, NTSTATUS a2)
{
  ULONG_PTR v5; // rax
  int v6; // ebx

  if ( a2 >= 0 )
    return 0;
  if ( !*(_DWORD *)(a1 + 4) )
    KeBugCheckEx(0x34u, 0x1528uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  v5 = CcReferenceSharedCacheMapFileObject(a1);
  v6 = *(_DWORD *)(*(_QWORD *)(v5 + 8) + 52LL) & 0x10;
  CcDereferenceSharedCacheMapFileObject(a1, v5);
  return MmIsWriteErrorFatal(1, v6, a2);
}
