/*
 * XREFs of ExReInitializeRundownProtectionCacheAware @ 0x1402D31C0
 * Callers:
 *     EtwpFreeLoggerContext @ 0x1406D1830 (EtwpFreeLoggerContext.c)
 * Callees:
 *     ExRundownCompletedCacheAware @ 0x1402D3210 (ExRundownCompletedCacheAware.c)
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
