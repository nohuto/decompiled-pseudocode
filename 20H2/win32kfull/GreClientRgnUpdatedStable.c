/*
 * XREFs of GreClientRgnUpdatedStable @ 0x1C0041C1C
 * Callers:
 *     xxxEndDeferWindowPosEx @ 0x1C00472F4 (xxxEndDeferWindowPosEx.c)
 *     ?bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z @ 0x1C0085DBC (-bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z.c)
 *     NtGdiBitBltInternal @ 0x1C00B0060 (NtGdiBitBltInternal.c)
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
