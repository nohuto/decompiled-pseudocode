/*
 * XREFs of KseSkipDriverUnloadInitialize @ 0x140A6B3A4
 * Callers:
 *     KseInitialize @ 0x140A3ED1C (KseInitialize.c)
 * Callees:
 *     KsepLogError @ 0x140371884 (KsepLogError.c)
 *     KsepDebugPrint @ 0x140525408 (KsepDebugPrint.c)
 *     KseRegisterShim @ 0x1407B9290 (KseRegisterShim.c)
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
