/*
 * XREFs of MiLockVadShared @ 0x14025B344
 * Callers:
 *     MmEnumerateAddressSpaceAndReferenceImages @ 0x14061E590 (MmEnumerateAddressSpaceAndReferenceImages.c)
 *     MmQueryVirtualMemory @ 0x14061E930 (MmQueryVirtualMemory.c)
 *     NtAreMappedFilesTheSame @ 0x1406BD520 (NtAreMappedFilesTheSame.c)
 *     MiHotPatchImage @ 0x1408CA334 (MiHotPatchImage.c)
 *     MiHotPatchProcess @ 0x1408CA658 (MiHotPatchProcess.c)
 *     MiSetImageHotPatchAllowed @ 0x1408CE504 (MiSetImageHotPatchAllowed.c)
 *     MmIsFileMapped @ 0x1408D1020 (MmIsFileMapped.c)
 *     MiFinishPlaceholderVadReplacement @ 0x1408D8388 (MiFinishPlaceholderVadReplacement.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x14034AB50 (ExAcquirePushLockSharedEx.c)
 */

__int64 __fastcall MiLockVadShared(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  --*(_WORD *)(a1 + 486);
  result = ExAcquirePushLockSharedEx(a2 + 40, 0LL);
  *(_BYTE *)(a1 + 1305) |= 0x40u;
  return result;
}
