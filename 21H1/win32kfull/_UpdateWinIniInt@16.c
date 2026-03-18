/*
 * XREFs of _UpdateWinIniInt@16 @ 0x145EB1
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x270DA (xxxSystemParametersInfoWorker.c)
 *     _xxxSetIMEShowStatus@12 @ 0xCC776 (_xxxSetIMEShowStatus@12.c)
 *     ?UpdateThresholdFromMetric@@YGXHPAH0IEW4_THRESHOLD_SELECTOR@@@Z @ 0xE92D4 (-UpdateThresholdFromMetric@@YGXHPAH0IEW4_THRESHOLD_SELECTOR@@@Z.c)
 *     ?SetWindowMetricInt@@YGHPAU_UNICODE_STRING@@GH@Z @ 0x1457A0 (-SetWindowMetricInt@@YGHPAU_UNICODE_STRING@@GH@Z.c)
 * Callees:
 *     ?RtlStringCchPrintfW@@YAJPAGIPBGZZ @ 0x7F16E (-RtlStringCchPrintfW@@YAJPAGIPBGZZ.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

int __fastcall UpdateWinIniInt(int a1, int a2, int a3, int a4)
{
  _BYTE v7[80]; // [esp+8h] [ebp-74h] BYREF
  unsigned __int16 v8[16]; // [esp+58h] [ebp-24h] BYREF

  RtlStringCchPrintfW(v8, 0x10u, L"%d", a4);
  RtlLoadStringOrError(a3, v7, 40, 0);
  return FastWriteProfileStringW(a1, a2, v7, v8);
}
