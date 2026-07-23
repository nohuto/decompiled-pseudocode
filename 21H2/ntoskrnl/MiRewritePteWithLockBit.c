/*
 * XREFs of MiRewritePteWithLockBit @ 0x1403B6D88
 * Callers:
 *     MiMakePteClean @ 0x14031A2BC (MiMakePteClean.c)
 *     MiMoveDirtyBitsToPfns @ 0x1403221E0 (MiMoveDirtyBitsToPfns.c)
 *     MiRevertValidPte @ 0x14033F050 (MiRevertValidPte.c)
 *     MiProtectAweRegion @ 0x14054D5A4 (MiProtectAweRegion.c)
 *     MiWriteAweClusterPte @ 0x14054E424 (MiWriteAweClusterPte.c)
 *     MiDeleteLargeUserPde @ 0x14054FB9C (MiDeleteLargeUserPde.c)
 *     MiScrubLargeMappedPage @ 0x140563CC8 (MiScrubLargeMappedPage.c)
 *     MiProtectLargeKernelHalRange @ 0x1407A1670 (MiProtectLargeKernelHalRange.c)
 * Callees:
 *     MiLockPageTableInternal @ 0x1402B33F0 (MiLockPageTableInternal.c)
 *     MiUnlockNestedPageTableWritePte @ 0x14031759C (MiUnlockNestedPageTableWritePte.c)
 */

void __fastcall MiRewritePteWithLockBit(__int64 a1, volatile __int64 *a2, __int64 a3)
{
  MiLockPageTableInternal(a1, (unsigned __int64)a2, 0);
  MiUnlockNestedPageTableWritePte(a1, a2, a3, 0);
}
