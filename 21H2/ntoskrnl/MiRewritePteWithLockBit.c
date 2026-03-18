/*
 * XREFs of MiRewritePteWithLockBit @ 0x1403C2C58
 * Callers:
 *     MiMakePteClean @ 0x14028ECFC (MiMakePteClean.c)
 *     MiRevertValidPte @ 0x14032E130 (MiRevertValidPte.c)
 *     MiProtectAweRegion @ 0x1405ABD20 (MiProtectAweRegion.c)
 *     MiWriteAweClusterPte @ 0x1405ACAD0 (MiWriteAweClusterPte.c)
 *     MiDeleteLargeUserPde @ 0x1405B07F4 (MiDeleteLargeUserPde.c)
 *     MiScrubLargeMappedPage @ 0x1405C4FB8 (MiScrubLargeMappedPage.c)
 *     MiProtectLargeKernelHalRange @ 0x14082B4E0 (MiProtectLargeKernelHalRange.c)
 * Callees:
 *     MiUnlockNestedPageTableWritePte @ 0x1402292C0 (MiUnlockNestedPageTableWritePte.c)
 *     MiLockPageTableInternal @ 0x14031DE00 (MiLockPageTableInternal.c)
 */

void __fastcall MiRewritePteWithLockBit(__int64 a1, volatile __int64 *a2, __int64 a3, __int64 a4)
{
  MiLockPageTableInternal(a1, (unsigned __int64)a2, 0LL, a4);
  MiUnlockNestedPageTableWritePte(a1, a2, a3, 0);
}
