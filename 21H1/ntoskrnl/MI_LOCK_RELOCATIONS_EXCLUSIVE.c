/*
 * XREFs of MI_LOCK_RELOCATIONS_EXCLUSIVE @ 0x1402AB534
 * Callers:
 *     MiRelocateImageAgain @ 0x14063B7B0 (MiRelocateImageAgain.c)
 *     MiRelocateImage @ 0x1406442B0 (MiRelocateImage.c)
 *     MiCaptureSecureImageBaseAddress @ 0x1408D3210 (MiCaptureSecureImageBaseAddress.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 */

void __fastcall MI_LOCK_RELOCATIONS_EXCLUSIVE(__int64 a1, __int64 a2)
{
  --*(_WORD *)(a1 + 486);
  ExAcquirePushLockExclusiveEx(a2 + 24, 0LL);
  *(_QWORD *)(a2 + 8) = a1;
}
