/*
 * XREFs of MI_LOCK_RELOCATIONS_EXCLUSIVE @ 0x140252504
 * Callers:
 *     MiRelocateImageAgain @ 0x14060666C (MiRelocateImageAgain.c)
 *     MiRelocateImage @ 0x14060F080 (MiRelocateImage.c)
 *     MiCaptureSecureImageBaseAddress @ 0x1408D4560 (MiCaptureSecureImageBaseAddress.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140207AC0 (ExAcquirePushLockExclusiveEx.c)
 */

void __fastcall MI_LOCK_RELOCATIONS_EXCLUSIVE(__int64 a1, __int64 a2)
{
  --*(_WORD *)(a1 + 486);
  ExAcquirePushLockExclusiveEx(a2 + 24, 0LL);
  *(_QWORD *)(a2 + 8) = a1;
}
