/*
 * XREFs of MiRewritePteWithLockBit @ 0x1403B2B38
 * Callers:
 *     MiMoveDirtyBitsToPfns @ 0x140221080 (MiMoveDirtyBitsToPfns.c)
 *     MiMakePteClean @ 0x140262EA4 (MiMakePteClean.c)
 *     MiRevertValidPte @ 0x1402AF480 (MiRevertValidPte.c)
 *     MiProtectAweRegion @ 0x140547E94 (MiProtectAweRegion.c)
 *     MiWriteAweClusterPte @ 0x140548D14 (MiWriteAweClusterPte.c)
 *     MiDeleteLargeUserPde @ 0x14054A4BC (MiDeleteLargeUserPde.c)
 *     MiScrubLargeMappedPage @ 0x14055E5E8 (MiScrubLargeMappedPage.c)
 *     MiProtectLargeKernelHalRange @ 0x140789240 (MiProtectLargeKernelHalRange.c)
 * Callees:
 *     MiLockPageTableInternal @ 0x1402A0AD0 (MiLockPageTableInternal.c)
 *     MiUnlockNestedPageTableWritePte @ 0x14032EA88 (MiUnlockNestedPageTableWritePte.c)
 */

void __fastcall MiRewritePteWithLockBit(__int64 a1, volatile __int64 *a2, __int64 a3)
{
  MiLockPageTableInternal(a1, (unsigned __int64)a2, 0LL);
  MiUnlockNestedPageTableWritePte(a1, a2, a3, 0);
}
