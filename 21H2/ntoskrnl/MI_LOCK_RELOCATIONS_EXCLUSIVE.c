/*
 * XREFs of MI_LOCK_RELOCATIONS_EXCLUSIVE @ 0x14035F2A0
 * Callers:
 *     MiRelocateImage @ 0x1406D54B0 (MiRelocateImage.c)
 *     MiRelocateImageAgain @ 0x1407142BC (MiRelocateImageAgain.c)
 *     MiCaptureSecureImageBaseAddress @ 0x1408D7B60 (MiCaptureSecureImageBaseAddress.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14034A990 (ExAcquirePushLockExclusiveEx.c)
 */

void __fastcall MI_LOCK_RELOCATIONS_EXCLUSIVE(__int64 a1, __int64 a2)
{
  --*(_WORD *)(a1 + 486);
  ExAcquirePushLockExclusiveEx(a2 + 24, 0LL);
  *(_QWORD *)(a2 + 8) = a1;
}
