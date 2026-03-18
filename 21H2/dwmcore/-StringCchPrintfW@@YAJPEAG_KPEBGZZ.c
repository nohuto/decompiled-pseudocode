/*
 * XREFs of ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x180025E3C
 * Callers:
 *     ?SetOutputValue@CBaseExpression@@IEAAJPEBVCExpressionValue@@@Z @ 0x180019498 (-SetOutputValue@CBaseExpression@@IEAAJPEBVCExpressionValue@@@Z.c)
 *     ?OpenComposedEvent@@YAJIKPEAPEAX@Z @ 0x180025880 (-OpenComposedEvent@@YAJIKPEAPEAX@Z.c)
 *     ?RegisterDwmGuidWithEtw@@YAXXZ @ 0x180025928 (-RegisterDwmGuidWithEtw@@YAXXZ.c)
 *     ?Acquire@?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x1800261C4 (-Acquire@-$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@SAJPEBDP.c)
 *     ?CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180050DC0 (-CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?StopAnalyzingAnimationScenario@CAnimationTracking@@AEAAXIAEBUTelFrameInfo@1@@Z @ 0x1800745D0 (-StopAnalyzingAnimationScenario@CAnimationTracking@@AEAAXIAEBUTelFrameInfo@1@@Z.c)
 *     ?Acquire@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x1800F5230 (-Acquire@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDP.c)
 *     ?OpenDxBltEvent@@YAJ_KPEAPEAX@Z @ 0x180115BE2 (-OpenDxBltEvent@@YAJ_KPEAPEAX@Z.c)
 *     ??$ReportFailure_Msg@$02@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@1PEAD@Z @ 0x1801FB2AC (--$ReportFailure_Msg@$02@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@1PEAD@Z.c)
 *     ?MilUnexpectedError@@YAXJPEBG@Z @ 0x18026BE1C (-MilUnexpectedError@@YAXJPEBG@Z.c)
 * Callees:
 *     StringVPrintfWorkerW @ 0x180025E78 (StringVPrintfWorkerW.c)
 */

HRESULT StringCchPrintfW(unsigned __int16 *a1, size_t a2, size_t *a3, ...)
{
  HRESULT result; // eax
  va_list va; // [rsp+58h] [rbp+20h] BYREF

  va_start(va, a3);
  if ( a2 - 1 <= 0x7FFFFFFE )
    return StringVPrintfWorkerW(a1, a2, a3, (STRSAFE_LPCWSTR)a3, va);
  result = -2147024809;
  if ( a2 )
    *a1 = 0;
  return result;
}
