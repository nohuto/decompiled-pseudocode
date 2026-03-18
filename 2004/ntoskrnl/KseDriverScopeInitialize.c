/*
 * XREFs of KseDriverScopeInitialize @ 0x140A63FE0
 * Callers:
 *     KseInitialize @ 0x140A38D38 (KseInitialize.c)
 * Callees:
 *     KsepLogInfo @ 0x14036F168 (KsepLogInfo.c)
 *     KsepDebugPrint @ 0x140521A38 (KsepDebugPrint.c)
 *     KseRegisterShim @ 0x1407AB350 (KseRegisterShim.c)
 */

__int64 KseDriverScopeInitialize()
{
  __int64 result; // rax
  __int64 v1; // rax

  result = KseRegisterShim((__int64)&KseDsShim, 0LL, 0LL);
  if ( (int)result >= 0 )
  {
    v1 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryMessagesIndex, 1u) + 1) & 0x3F;
    HIDWORD(KsepHistoryMessages[v1]) = 0;
    LODWORD(KsepHistoryMessages[v1]) = 721040;
    if ( (KsepDebugFlag & 1) != 0 )
      KsepDebugPrint(11LL, "KSE-DS: driver scope shim registered.\n");
    return KsepLogInfo(11LL, (__int64)"KSE-DS: driver scope shim registered.\n");
  }
  return result;
}
