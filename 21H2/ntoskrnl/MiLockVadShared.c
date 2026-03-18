/*
 * XREFs of MiLockVadShared @ 0x14030EBA0
 * Callers:
 *     MmEnumerateAddressSpaceAndReferenceImages @ 0x1406F71A0 (MmEnumerateAddressSpaceAndReferenceImages.c)
 *     MmQueryVirtualMemory @ 0x1407BA750 (MmQueryVirtualMemory.c)
 *     NtAreMappedFilesTheSame @ 0x1407FAEE0 (NtAreMappedFilesTheSame.c)
 *     MiHotPatchProcess @ 0x1409736EC (MiHotPatchProcess.c)
 *     MmIsFileMapped @ 0x1409780D4 (MmIsFileMapped.c)
 *     MiFinishPlaceholderVadReplacement @ 0x14097EF10 (MiFinishPlaceholderVadReplacement.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 */

__int64 __fastcall MiLockVadShared(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  --*(_WORD *)(a1 + 486);
  result = ExAcquirePushLockSharedEx(a2 + 40, 0LL);
  *(_BYTE *)(a1 + 1385) |= 0x40u;
  return result;
}
