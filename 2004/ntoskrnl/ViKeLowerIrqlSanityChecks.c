/*
 * XREFs of ViKeLowerIrqlSanityChecks @ 0x1409D9128
 * Callers:
 *     VerifierKeReleaseQueuedSpinLock @ 0x1409D04C0 (VerifierKeReleaseQueuedSpinLock.c)
 *     VerifierKeLowerIrql @ 0x1409D7E30 (VerifierKeLowerIrql.c)
 *     VerifierKeReleaseInStackQueuedSpinLockCommon @ 0x1409D7FE0 (VerifierKeReleaseInStackQueuedSpinLockCommon.c)
 *     ViKeReleaseSpinLockCommon @ 0x1409D9350 (ViKeReleaseSpinLockCommon.c)
 * Callees:
 *     VerifierBugCheckIfAppropriate @ 0x1409CDD44 (VerifierBugCheckIfAppropriate.c)
 *     VfKeIrqlTransitionReserveLogEntry @ 0x1409D8E40 (VfKeIrqlTransitionReserveLogEntry.c)
 */

char *__fastcall ViKeLowerIrqlSanityChecks(unsigned __int8 a1, unsigned __int8 a2)
{
  ULONG_PTR v2; // rbx
  ULONG_PTR v3; // rdi

  v2 = a2;
  v3 = a1;
  if ( (MmVerifierData & 2) != 0 )
  {
    if ( a1 < a2 )
      VerifierBugCheckIfAppropriate(0xC4u, 0x31uLL, a1, a2, 0LL);
    if ( (unsigned __int8)v3 >= 2u && (unsigned __int8)v2 < 2u && (KeGetPcr()->Prcb.DpcRequestSummary & 1) != 0 )
      VerifierBugCheckIfAppropriate(0xC4u, 0x31uLL, v3, v2, 1LL);
    if ( (unsigned __int8)v2 > 0xFu )
      VerifierBugCheckIfAppropriate(0xC4u, 0x31uLL, v3, v2, 0LL);
  }
  return VfKeIrqlTransitionReserveLogEntry(v3, v2);
}
