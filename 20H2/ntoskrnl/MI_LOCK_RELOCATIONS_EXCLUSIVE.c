/*
 * XREFs of MI_LOCK_RELOCATIONS_EXCLUSIVE @ 0x140237984
 * Callers:
 *     MiRelocateImageAgain @ 0x14062B714 (MiRelocateImageAgain.c)
 *     MiRelocateImage @ 0x14070B8DC (MiRelocateImage.c)
 *     MiCaptureSecureImageBaseAddress @ 0x1408DA3A0 (MiCaptureSecureImageBaseAddress.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 */

void __fastcall MI_LOCK_RELOCATIONS_EXCLUSIVE(__int64 a1, __int64 a2)
{
  --*(_WORD *)(a1 + 486);
  ExAcquirePushLockExclusiveEx(a2 + 24, 0LL);
  *(_QWORD *)(a2 + 8) = a1;
}
