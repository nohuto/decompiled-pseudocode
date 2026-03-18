/*
 * XREFs of MiLockVadShared @ 0x14022C164
 * Callers:
 *     MmQueryVirtualMemory @ 0x140621F60 (MmQueryVirtualMemory.c)
 *     MmEnumerateAddressSpaceAndReferenceImages @ 0x1406F0160 (MmEnumerateAddressSpaceAndReferenceImages.c)
 *     NtAreMappedFilesTheSame @ 0x1406F0FC0 (NtAreMappedFilesTheSame.c)
 *     MiHotPatchImage @ 0x1408CCB74 (MiHotPatchImage.c)
 *     MiHotPatchProcess @ 0x1408CCE98 (MiHotPatchProcess.c)
 *     MiSetImageHotPatchAllowed @ 0x1408D0D44 (MiSetImageHotPatchAllowed.c)
 *     MmIsFileMapped @ 0x1408D3860 (MmIsFileMapped.c)
 *     MiFinishPlaceholderVadReplacement @ 0x1408DABC8 (MiFinishPlaceholderVadReplacement.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140220C00 (ExAcquirePushLockSharedEx.c)
 */

__int64 __fastcall MiLockVadShared(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  --*(_WORD *)(a1 + 486);
  result = ExAcquirePushLockSharedEx(a2 + 40, 0LL);
  *(_BYTE *)(a1 + 1305) |= 0x40u;
  return result;
}
