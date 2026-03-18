/*
 * XREFs of MiUnlockNestedVad @ 0x1408D5144
 * Callers:
 *     MiDeleteVad @ 0x14026B790 (MiDeleteVad.c)
 *     MiDeletePartialVad @ 0x1402AA764 (MiDeletePartialVad.c)
 *     MiFreeVadRange @ 0x1402AB094 (MiFreeVadRange.c)
 *     MiUpControlAreaRefs @ 0x140525050 (MiUpControlAreaRefs.c)
 *     MiUnlockAndDereferenceNestedVad @ 0x1405562E0 (MiUnlockAndDereferenceNestedVad.c)
 * Callees:
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 */

char __fastcall MiUnlockNestedVad(__int64 a1)
{
  ULONG_PTR v1; // rbx

  v1 = a1 + 40;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 40), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(a1 + 40);
  return KeAbPostRelease(v1);
}
