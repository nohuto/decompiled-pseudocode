/*
 * XREFs of MI_LOCK_RELOCATIONS_EXCLUSIVE @ 0x1402A41D0
 * Callers:
 *     MiRelocateImage @ 0x1406AC790 (MiRelocateImage.c)
 *     MiRelocateImageAgain @ 0x1406C290C (MiRelocateImageAgain.c)
 *     MiCaptureSecureImageBaseAddress @ 0x1408D7CC0 (MiCaptureSecureImageBaseAddress.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 */

__int64 __fastcall MI_LOCK_RELOCATIONS_EXCLUSIVE(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  --*(_WORD *)(a1 + 486);
  result = ExAcquirePushLockExclusiveEx(a2 + 24, 0LL);
  *(_QWORD *)(a2 + 8) = a1;
  return result;
}
