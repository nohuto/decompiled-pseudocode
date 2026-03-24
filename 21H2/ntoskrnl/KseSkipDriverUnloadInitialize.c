/*
 * XREFs of KseSkipDriverUnloadInitialize @ 0x140A687DC
 * Callers:
 *     KseInitialize @ 0x140A3C89C (KseInitialize.c)
 * Callees:
 *     KsepLogError @ 0x140371F74 (KsepLogError.c)
 *     KsepDebugPrint @ 0x140526EE8 (KsepDebugPrint.c)
 *     KseRegisterShim @ 0x1407BD420 (KseRegisterShim.c)
 */

void KseSkipDriverUnloadInitialize()
{
  int v0; // eax
  __int64 v1; // rcx
  char v2; // al

  v0 = KseRegisterShim((__int64)&KseSkipDriverUnloadShim, 0LL, 0LL);
  if ( v0 < 0 )
  {
    v1 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
    KsepHistoryErrors[2 * v1 + 1] = v0;
    v2 = KsepDebugFlag;
    KsepHistoryErrors[2 * v1] = 852115;
    if ( (v2 & 2) != 0 )
      KsepDebugPrint(12LL, "Built-in SkipDriverUnload shims: failed to register.\n");
    KsepLogError(12, "Built-in SkipDriverUnload shims: failed to register.\n");
  }
}
