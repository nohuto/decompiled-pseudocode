/*
 * XREFs of MiRewritePteWithLockBit @ 0x1403ACEB8
 * Callers:
 *     MiRevertValidPte @ 0x14021C800 (MiRevertValidPte.c)
 *     MiMoveDirtyBitsToPfns @ 0x14027A0D0 (MiMoveDirtyBitsToPfns.c)
 *     MiMakePteClean @ 0x1402BBED4 (MiMakePteClean.c)
 *     MiProtectAweRegion @ 0x140547844 (MiProtectAweRegion.c)
 *     MiWriteAweClusterPte @ 0x1405486C4 (MiWriteAweClusterPte.c)
 *     MiDeleteLargeUserPde @ 0x140549E6C (MiDeleteLargeUserPde.c)
 *     MiScrubLargeMappedPage @ 0x14055DF98 (MiScrubLargeMappedPage.c)
 *     MiProtectLargeKernelHalRange @ 0x1407838B0 (MiProtectLargeKernelHalRange.c)
 * Callees:
 *     MiLockPageTableInternal @ 0x14020DFC0 (MiLockPageTableInternal.c)
 *     MiUnlockNestedPageTableWritePte @ 0x1402F2CE8 (MiUnlockNestedPageTableWritePte.c)
 */

void __fastcall MiRewritePteWithLockBit(__int64 a1, volatile __int64 *a2, __int64 a3)
{
  MiLockPageTableInternal(a1, (unsigned __int64)a2, 0LL);
  MiUnlockNestedPageTableWritePte(a1, a2, a3, 0);
}
