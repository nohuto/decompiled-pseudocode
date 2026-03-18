/*
 * XREFs of RtlpUnlockAtomTable @ 0x140638EA8
 * Callers:
 *     RtlDestroyLowBoxAtoms @ 0x140203018 (RtlDestroyLowBoxAtoms.c)
 *     RtlAddAtomToAtomTableEx @ 0x1402A8F50 (RtlAddAtomToAtomTableEx.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140261420 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 */

void __fastcall RtlpUnlockAtomTable(__int64 a1)
{
  ULONG_PTR v1; // rbx

  v1 = a1 + 8;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 8), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(a1 + 8);
  KeAbPostRelease(v1);
  KeLeaveCriticalRegion();
}
