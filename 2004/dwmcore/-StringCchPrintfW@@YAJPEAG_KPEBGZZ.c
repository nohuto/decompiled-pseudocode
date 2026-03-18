/*
 * XREFs of ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x18003125C
 * Callers:
 *     ?OpenComposedEvent@@YAJIKPEAPEAX@Z @ 0x18002E708 (-OpenComposedEvent@@YAJIKPEAPEAX@Z.c)
 *     ?RegisterDwmGuidWithEtw@@YAXXZ @ 0x1800310FC (-RegisterDwmGuidWithEtw@@YAXXZ.c)
 *     ?Acquire@?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x1800319F8 (-Acquire@-$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@SAJPEBDP.c)
 *     ?CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x18005FB20 (-CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?StopAnalyzingAnimationScenario@CAnimationTracking@@AEAAXIAEBUTelFrameInfo@1@@Z @ 0x180088DE0 (-StopAnalyzingAnimationScenario@CAnimationTracking@@AEAAXIAEBUTelFrameInfo@1@@Z.c)
 *     ?Acquire@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x18014E24C (-Acquire@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDP.c)
 *     ?ReportFailure_Msg@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J1PEAD@Z @ 0x1801B2B14 (-ReportFailure_Msg@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J1PEAD@Z.c)
 *     ?SetOutputValue@CBaseExpression@@IEAAJPEBVCExpressionValue@@@Z @ 0x1801DBA78 (-SetOutputValue@CBaseExpression@@IEAAJPEBVCExpressionValue@@@Z.c)
 *     ?MilUnexpectedError@@YAXJPEBG@Z @ 0x180215BB0 (-MilUnexpectedError@@YAXJPEBG@Z.c)
 *     ?OpenDxBltEvent@@YAJ_KPEAPEAX@Z @ 0x18021AEDC (-OpenDxBltEvent@@YAJ_KPEAPEAX@Z.c)
 * Callees:
 *     StringVPrintfWorkerW @ 0x1800312B4 (StringVPrintfWorkerW.c)
 */

__int64 StringCchPrintfW(unsigned __int16 *a1, size_t a2, size_t *a3, ...)
{
  int v3; // r9d
  va_list va; // [rsp+58h] [rbp+20h] BYREF

  va_start(va, a3);
  v3 = 0;
  if ( a2 - 1 > 0x7FFFFFFE )
    v3 = -2147024809;
  if ( v3 < 0 )
  {
    if ( a2 )
      *a1 = 0;
  }
  else
  {
    return (unsigned int)StringVPrintfWorkerW(a1, a2, a3, (STRSAFE_LPCWSTR)a3, va);
  }
  return (unsigned int)v3;
}
