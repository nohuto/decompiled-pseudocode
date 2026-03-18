/*
 * XREFs of MiLockVadShared @ 0x1402A4694
 * Callers:
 *     MmQueryVirtualMemory @ 0x140634A10 (MmQueryVirtualMemory.c)
 *     MmEnumerateAddressSpaceAndReferenceImages @ 0x140635840 (MmEnumerateAddressSpaceAndReferenceImages.c)
 *     NtAreMappedFilesTheSame @ 0x1406E74A0 (NtAreMappedFilesTheSame.c)
 *     MiHotPatchImage @ 0x1408C59E4 (MiHotPatchImage.c)
 *     MiHotPatchProcess @ 0x1408C5D08 (MiHotPatchProcess.c)
 *     MiSetImageHotPatchAllowed @ 0x1408C9BB4 (MiSetImageHotPatchAllowed.c)
 *     MmIsFileMapped @ 0x1408CC6D0 (MmIsFileMapped.c)
 *     MiFinishPlaceholderVadReplacement @ 0x1408D3A38 (MiFinishPlaceholderVadReplacement.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140260BA0 (ExAcquirePushLockSharedEx.c)
 */

__int64 __fastcall MiLockVadShared(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  --*(_WORD *)(a1 + 486);
  result = ExAcquirePushLockSharedEx(a2 + 40, 0LL);
  *(_BYTE *)(a1 + 1305) |= 0x40u;
  return result;
}
