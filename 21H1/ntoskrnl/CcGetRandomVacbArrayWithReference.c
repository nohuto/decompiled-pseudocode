/*
 * XREFs of CcGetRandomVacbArrayWithReference @ 0x1404E5A78
 * Callers:
 *     CcUnmapInactiveViewsInternal @ 0x1404E5E74 (CcUnmapInactiveViewsInternal.c)
 * Callees:
 *     KeReleaseQueuedSpinLock @ 0x14022B8C0 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x14022B960 (KeAcquireQueuedSpinLock.c)
 *     CcReferenceVacbArray @ 0x14022BB70 (CcReferenceVacbArray.c)
 *     CcRecalculateVacbArrayHighwaterMark @ 0x1404E5B18 (CcRecalculateVacbArrayHighwaterMark.c)
 *     RtlRandom @ 0x1406E70D0 (RtlRandom.c)
 */

_DWORD *CcGetRandomVacbArrayWithReference()
{
  ULONG v0; // ebx
  KIRQL v1; // di
  _DWORD *v2; // rax
  _DWORD *v3; // rbx

  while ( 1 )
  {
    do
      v0 = RtlRandom(&CcRandomSeed) % (CcVacbArraysHighestUsedIndex + 1);
    while ( !*(_QWORD *)(CcVacbArrays + 8LL * v0) );
    v1 = KeAcquireQueuedSpinLock(4uLL);
    v2 = CcReferenceVacbArray(v0);
    v3 = v2;
    if ( v2 )
      break;
    KeReleaseQueuedSpinLock(4uLL, v1);
  }
  CcRecalculateVacbArrayHighwaterMark(v2);
  KeReleaseQueuedSpinLock(4uLL, v1);
  return v3;
}
