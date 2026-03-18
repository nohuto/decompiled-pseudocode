/*
 * XREFs of ViKeLowerIrqlSanityChecks @ 0x1409DF148
 * Callers:
 *     VerifierKeReleaseQueuedSpinLock @ 0x1409D64E0 (VerifierKeReleaseQueuedSpinLock.c)
 *     VerifierKeLowerIrql @ 0x1409DDE50 (VerifierKeLowerIrql.c)
 *     VerifierKeReleaseInStackQueuedSpinLockCommon @ 0x1409DE000 (VerifierKeReleaseInStackQueuedSpinLockCommon.c)
 *     ViKeReleaseSpinLockCommon @ 0x1409DF370 (ViKeReleaseSpinLockCommon.c)
 * Callees:
 *     VerifierBugCheckIfAppropriate @ 0x1409D3D64 (VerifierBugCheckIfAppropriate.c)
 *     VfKeIrqlTransitionReserveLogEntry @ 0x1409DEE60 (VfKeIrqlTransitionReserveLogEntry.c)
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
