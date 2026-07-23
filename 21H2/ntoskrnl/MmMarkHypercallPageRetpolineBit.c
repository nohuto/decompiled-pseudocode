/*
 * XREFs of MmMarkHypercallPageRetpolineBit @ 0x140A935BC
 * Callers:
 *     HvlPhase1Initialize @ 0x1403CFCC8 (HvlPhase1Initialize.c)
 * Callees:
 *     MmReleaseLoadLock @ 0x1406A83F0 (MmReleaseLoadLock.c)
 *     MmAcquireLoadLock @ 0x1406A8450 (MmAcquireLoadLock.c)
 *     MiMarkRetpolineBits @ 0x1408D0E14 (MiMarkRetpolineBits.c)
 */

__int64 MmMarkHypercallPageRetpolineBit()
{
  PVOID v0; // rbx
  struct _KTHREAD *Lock; // rdi
  unsigned int v3; // ebx

  v0 = HvlpHypercallCodeVa;
  if ( (KiSpeculationFeatures & 0x20000000000LL) == 0 )
    return 0LL;
  Lock = MmAcquireLoadLock();
  v3 = MiMarkRetpolineBits((__int64)v0);
  MmReleaseLoadLock((__int64)Lock);
  return v3;
}
