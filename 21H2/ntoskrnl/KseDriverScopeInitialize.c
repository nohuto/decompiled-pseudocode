/*
 * XREFs of KseDriverScopeInitialize @ 0x140A696E8
 * Callers:
 *     KseInitialize @ 0x140A3D89C (KseInitialize.c)
 * Callees:
 *     KsepLogInfo @ 0x1403712F8 (KsepLogInfo.c)
 *     KsepDebugPrint @ 0x140527128 (KsepDebugPrint.c)
 *     KseRegisterShim @ 0x1407BDBB0 (KseRegisterShim.c)
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
