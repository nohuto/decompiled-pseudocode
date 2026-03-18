/*
 * XREFs of MmMarkHypercallPageRetpolineBit @ 0x140A9575C
 * Callers:
 *     HvlPhase1Initialize @ 0x1403CF1E8 (HvlPhase1Initialize.c)
 * Callees:
 *     MmReleaseLoadLock @ 0x1406592C0 (MmReleaseLoadLock.c)
 *     MmAcquireLoadLock @ 0x140659320 (MmAcquireLoadLock.c)
 *     MiMarkRetpolineBits @ 0x1408D34F4 (MiMarkRetpolineBits.c)
 */

__int64 MmMarkHypercallPageRetpolineBit()
{
  PVOID v0; // rbx
  struct _KTHREAD *Lock; // rdi
  unsigned int v3; // ebx

  v0 = HvlpHypercallCodeVa;
  if ( (KiSpeculationFeatures & 0x2000000) == 0 )
    return 0LL;
  Lock = MmAcquireLoadLock();
  v3 = MiMarkRetpolineBits((__int64)v0);
  MmReleaseLoadLock((__int64)Lock);
  return v3;
}
