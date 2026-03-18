/*
 * XREFs of CcIsFatalWriteError @ 0x140248C10
 * Callers:
 *     CcNotifyOfMappedWriteComplete @ 0x1402590D8 (CcNotifyOfMappedWriteComplete.c)
 *     CcFlushCachePriv @ 0x140283030 (CcFlushCachePriv.c)
 *     CcWriteBehindInternal @ 0x140288760 (CcWriteBehindInternal.c)
 *     CcUnpinRepinnedBcb @ 0x14053A6C0 (CcUnpinRepinnedBcb.c)
 * Callees:
 *     ObFastDereferenceObjectDeferDelete @ 0x140230680 (ObFastDereferenceObjectDeferDelete.c)
 *     CcReferenceSharedCacheMapFileObject @ 0x14027A1B4 (CcReferenceSharedCacheMapFileObject.c)
 *     MmIsWriteErrorFatal @ 0x14028D31C (MmIsWriteErrorFatal.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

bool __fastcall CcIsFatalWriteError(__int64 a1, int a2)
{
  unsigned __int64 v5; // rax
  unsigned int v6; // ebx

  if ( a2 >= 0 )
    return 0;
  if ( !*(_DWORD *)(a1 + 4) )
    KeBugCheckEx(0x34u, 0x189EuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  v5 = CcReferenceSharedCacheMapFileObject();
  v6 = *(_DWORD *)(*(_QWORD *)(v5 + 8) + 52LL) & 0x10;
  ObFastDereferenceObjectDeferDelete((signed __int64 *)(a1 + 96), v5, 0x63536343u);
  return (unsigned int)MmIsWriteErrorFatal(1LL, v6, (unsigned int)a2) != 0;
}
