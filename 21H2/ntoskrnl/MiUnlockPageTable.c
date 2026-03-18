/*
 * XREFs of MiUnlockPageTable @ 0x1403C2CA0
 * Callers:
 *     MiInitializeDynamicBitmap @ 0x14082B1B4 (MiInitializeDynamicBitmap.c)
 *     MiProtectLargeKernelHalRange @ 0x14082B4E0 (MiProtectLargeKernelHalRange.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x14020D8D0 (MiUnlockPageTableInternal.c)
 */

void __fastcall MiUnlockPageTable(__int64 a1, unsigned __int64 a2)
{
  MiUnlockPageTableInternal(a1, a2);
}
