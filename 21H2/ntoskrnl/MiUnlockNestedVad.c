/*
 * XREFs of MiUnlockNestedVad @ 0x1408D9BF4
 * Callers:
 *     MiDeleteVad @ 0x1402C08F0 (MiDeleteVad.c)
 *     MiDeletePartialVad @ 0x14030862C (MiDeletePartialVad.c)
 *     MiFreeVadRange @ 0x140323314 (MiFreeVadRange.c)
 *     MiUpControlAreaRefs @ 0x14052ADB0 (MiUpControlAreaRefs.c)
 *     MiUnlockAndDereferenceNestedVad @ 0x14055C010 (MiUnlockAndDereferenceNestedVad.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 */

char __fastcall MiUnlockNestedVad(__int64 a1)
{
  ULONG_PTR v1; // rbx

  v1 = a1 + 40;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 40), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(a1 + 40);
  return KeAbPostRelease(v1);
}
