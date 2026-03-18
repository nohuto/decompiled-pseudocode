/*
 * XREFs of GreClientRgnUpdatedStable @ 0x1C006A32C
 * Callers:
 *     ?bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z @ 0x1C00503BC (-bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z.c)
 *     xxxEndDeferWindowPosEx @ 0x1C006DEE0 (xxxEndDeferWindowPosEx.c)
 *     NtGdiBitBltInternal @ 0x1C0081610 (NtGdiBitBltInternal.c)
 * Callees:
 *     <none>
 */

// write access to const memory has been detected, the output may be wrong!
__int64 GreClientRgnUpdatedStable()
{
  GreAcquireSemaphore(ghsemVisRgnUniqueness);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemVisRgnUniqueness", ghsemVisRgnUniqueness, 10LL);
  giVisRgnUniquenessStable = giVisRgnUniqueness;
  EtwTraceGreLockReleaseSemaphore(L"ghsemVisRgnUniqueness", ghsemVisRgnUniqueness);
  return GreReleaseSemaphoreInternal(ghsemVisRgnUniqueness);
}
