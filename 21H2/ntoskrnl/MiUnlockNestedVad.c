/*
 * XREFs of MiUnlockNestedVad @ 0x14097EE28
 * Callers:
 *     MiFreeVadRange @ 0x1402ECEB0 (MiFreeVadRange.c)
 *     MiPerformVadSplitting @ 0x1402ED194 (MiPerformVadSplitting.c)
 *     MiUpControlAreaRefs @ 0x14058C330 (MiUpControlAreaRefs.c)
 *     MiUnlockAndDereferenceNestedVad @ 0x1405B204C (MiUnlockAndDereferenceNestedVad.c)
 * Callees:
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 */

__int64 __fastcall MiUnlockNestedVad(__int64 a1)
{
  ULONG_PTR v1; // rbx

  v1 = a1 + 40;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 40), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(a1 + 40);
  return KeAbPostRelease(v1);
}
