/*
 * XREFs of MiRewritePteWithLockBit @ 0x1403B54A8
 * Callers:
 *     MiMoveDirtyBitsToPfns @ 0x14022F4F0 (MiMoveDirtyBitsToPfns.c)
 *     MiMakePteClean @ 0x14029EC0C (MiMakePteClean.c)
 *     MiRevertValidPte @ 0x1402B7550 (MiRevertValidPte.c)
 *     MiProtectAweRegion @ 0x14054B864 (MiProtectAweRegion.c)
 *     MiWriteAweClusterPte @ 0x14054C6E4 (MiWriteAweClusterPte.c)
 *     MiDeleteLargeUserPde @ 0x14054DE8C (MiDeleteLargeUserPde.c)
 *     MiScrubLargeMappedPage @ 0x140561FB8 (MiScrubLargeMappedPage.c)
 *     MiProtectLargeKernelHalRange @ 0x140796F50 (MiProtectLargeKernelHalRange.c)
 * Callees:
 *     MiLockPageTableInternal @ 0x14026FE10 (MiLockPageTableInternal.c)
 *     MiUnlockNestedPageTableWritePte @ 0x1402CC62C (MiUnlockNestedPageTableWritePte.c)
 */

__int64 __fastcall MiRewritePteWithLockBit(__int64 a1, volatile __int64 *a2, __int64 a3)
{
  MiLockPageTableInternal(a1, (unsigned __int64)a2, 0LL);
  return MiUnlockNestedPageTableWritePte(a1, a2, a3, 0);
}
