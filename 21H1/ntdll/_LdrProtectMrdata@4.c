/*
 * XREFs of _LdrProtectMrdata@4 @ 0x4B2E1D36
 * Callers:
 *     _LdrpGetShimEngineInterface@0 @ 0x4B2A6828 (_LdrpGetShimEngineInterface@0.c)
 *     _RtlpAddVectoredHandler@12 @ 0x4B2AB096 (_RtlpAddVectoredHandler@12.c)
 *     _RtlpRemoveVectoredHandler@8 @ 0x4B2AB233 (_RtlpRemoveVectoredHandler@8.c)
 *     _RtlInsertInvertedFunctionTable@8 @ 0x4B2B9D0A (_RtlInsertInvertedFunctionTable@8.c)
 *     _LdrEnsureMrdataHeapExists@0 @ 0x4B2E1C77 (_LdrEnsureMrdataHeapExists@0.c)
 *     _RtlxRemoveInvertedFunctionTable@8 @ 0x4B2E6831 (_RtlxRemoveInvertedFunctionTable@8.c)
 *     _RtlSetProtectedPolicy@12 @ 0x4B2EA320 (_RtlSetProtectedPolicy@12.c)
 *     _RtlpCallVectoredHandlers@12 @ 0x4B2ECCA1 (_RtlpCallVectoredHandlers@12.c)
 *     _RtlInitializeNtUserPfn@24 @ 0x4B2F4850 (_RtlInitializeNtUserPfn@24.c)
 *     _RtlResetNtUserPfn@0 @ 0x4B2F4970 (_RtlResetNtUserPfn@0.c)
 *     _LdrpInitializeProcess@8 @ 0x4B32A2D0 (_LdrpInitializeProcess@8.c)
 *     _LdrpInitializeExecutionOptions@24 @ 0x4B331EB9 (_LdrpInitializeExecutionOptions@24.c)
 *     _AVrfInitializeVerifier@24 @ 0x4B338523 (_AVrfInitializeVerifier@24.c)
 *     _RtlCreateInvertedFunctionTableCacheEntry@8 @ 0x4B36D377 (_RtlCreateInvertedFunctionTableCacheEntry@8.c)
 * Callees:
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     _LdrpChangeMrdataProtection@4 @ 0x4B2E1D9E (_LdrpChangeMrdataProtection@4.c)
 */

void __stdcall LdrProtectMrdata(int a1)
{
  int v1; // esi

  RtlAcquireSRWLockExclusive(&LdrpMrdataLock);
  v1 = LdrpMrdataUnprotected;
  if ( !a1 )
  {
    if ( !LdrpMrdataUnprotected )
      LdrpChangeMrdataProtection(4);
    if ( v1 != -1 )
    {
      LdrpMrdataUnprotected = v1 + 1;
      goto LABEL_6;
    }
LABEL_10:
    RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
    __fastfail(0xEu);
  }
  if ( !LdrpMrdataUnprotected )
    goto LABEL_10;
  if ( !--LdrpMrdataUnprotected )
    LdrpChangeMrdataProtection(2);
LABEL_6:
  RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
}
