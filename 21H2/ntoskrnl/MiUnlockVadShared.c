/*
 * XREFs of MiUnlockVadShared @ 0x140280EF8
 * Callers:
 *     MiObtainReferencedVadEx @ 0x14030E7C0 (MiObtainReferencedVadEx.c)
 *     MiScrubProcessLargePages @ 0x1405C5930 (MiScrubProcessLargePages.c)
 *     MmEnumerateAddressSpaceAndReferenceImages @ 0x1406F71A0 (MmEnumerateAddressSpaceAndReferenceImages.c)
 *     MiReferenceCfgVad @ 0x14075876C (MiReferenceCfgVad.c)
 *     MmQueryVirtualMemory @ 0x1407BA750 (MmQueryVirtualMemory.c)
 *     NtAreMappedFilesTheSame @ 0x1407FAEE0 (NtAreMappedFilesTheSame.c)
 *     MiHotPatchProcess @ 0x1409736EC (MiHotPatchProcess.c)
 *     MmIsFileMapped @ 0x1409780D4 (MmIsFileMapped.c)
 * Callees:
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 */

_QWORD *__fastcall MiUnlockVadShared(__int64 a1, __int64 a2)
{
  ULONG_PTR v2; // rdi
  _QWORD *result; // rax

  *(_BYTE *)(a1 + 1385) &= ~0x40u;
  v2 = a2 + 40;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a2 + 40), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(a2 + 40);
  result = (_QWORD *)KeAbPostRelease(v2);
  if ( (*(_WORD *)(a1 + 486))++ == 0xFFFF )
  {
    result = (_QWORD *)(a1 + 152);
    if ( (_QWORD *)*result != result )
      return (_QWORD *)KiCheckForKernelApcDelivery();
  }
  return result;
}
