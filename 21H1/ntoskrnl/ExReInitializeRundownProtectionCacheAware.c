/*
 * XREFs of ExReInitializeRundownProtectionCacheAware @ 0x14033F760
 * Callers:
 *     EtwpFreeLoggerContext @ 0x1407013FC (EtwpFreeLoggerContext.c)
 * Callees:
 *     ExRundownCompletedCacheAware @ 0x14033F7B0 (ExRundownCompletedCacheAware.c)
 */

void __stdcall ExReInitializeRundownProtectionCacheAware(PEX_RUNDOWN_REF_CACHE_AWARE RunRefCacheAware)
{
  unsigned int Number; // ecx
  unsigned int i; // r8d
  int v4; // edx

  ExRundownCompletedCacheAware(RunRefCacheAware);
  Number = RunRefCacheAware->Number;
  for ( i = 0; i < Number; Number = RunRefCacheAware->Number )
  {
    v4 = i % Number;
    ++i;
    _InterlockedExchange64(
      (volatile __int64 *)((char *)RunRefCacheAware->RunRefs + RunRefCacheAware->RunRefSize * v4),
      0LL);
  }
}
