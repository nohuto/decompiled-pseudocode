/*
 * XREFs of CcIsFatalWriteError @ 0x1403206AC
 * Callers:
 *     CcWriteBehindInternal @ 0x140295920 (CcWriteBehindInternal.c)
 *     CcFlushCachePriv @ 0x140296300 (CcFlushCachePriv.c)
 *     CcNotifyOfMappedWriteComplete @ 0x14032E540 (CcNotifyOfMappedWriteComplete.c)
 *     CcUnpinRepinnedBcb @ 0x1404E8BD0 (CcUnpinRepinnedBcb.c)
 * Callees:
 *     CcDereferenceSharedCacheMapFileObject @ 0x140247FA8 (CcDereferenceSharedCacheMapFileObject.c)
 *     CcReferenceSharedCacheMapFileObject @ 0x140247FF4 (CcReferenceSharedCacheMapFileObject.c)
 *     MmIsWriteErrorFatal @ 0x140344468 (MmIsWriteErrorFatal.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 */

bool __fastcall CcIsFatalWriteError(__int64 a1, int a2)
{
  ULONG_PTR v5; // rax
  unsigned int v6; // ebx

  if ( a2 >= 0 )
    return 0;
  if ( !*(_DWORD *)(a1 + 4) )
    KeBugCheckEx(0x34u, 0x1528uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  v5 = CcReferenceSharedCacheMapFileObject(a1);
  v6 = *(_DWORD *)(*(_QWORD *)(v5 + 8) + 52LL) & 0x10;
  CcDereferenceSharedCacheMapFileObject(a1, v5);
  return (unsigned int)MmIsWriteErrorFatal(1LL, v6, (unsigned int)a2) != 0;
}
