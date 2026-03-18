/*
 * XREFs of GetMonitorMenuRect @ 0x1C025D40C
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x1C002F978 (xxxSystemParametersInfoWorker.c)
 *     FindBestPos @ 0x1C024A110 (FindBestPos.c)
 * Callees:
 *     ?GetCurrentThreadCompositedDpiContext@@YAKXZ @ 0x1C003AF80 (-GetCurrentThreadCompositedDpiContext@@YAKXZ.c)
 *     ?GetMonitorMenuRectForDpiContext@@YA?AUtagRECT@@PEBUtagMONITOR@@K@Z @ 0x1C025D2C0 (-GetMonitorMenuRectForDpiContext@@YA-AUtagRECT@@PEBUtagMONITOR@@K@Z.c)
 */

_OWORD *__fastcall GetMonitorMenuRect(_OWORD *a1, const struct tagMONITOR *a2, __int64 a3, __int64 a4)
{
  unsigned int CurrentThreadCompositedDpiContext; // eax
  __int128 v7; // xmm0
  _OWORD *result; // rax
  struct tagRECT v9; // [rsp+20h] [rbp-18h] BYREF

  CurrentThreadCompositedDpiContext = GetCurrentThreadCompositedDpiContext((__int64)a1, (__int64)a2, a3, a4);
  v7 = (__int128)*GetMonitorMenuRectForDpiContext(&v9, a2, CurrentThreadCompositedDpiContext);
  result = a1;
  *a1 = v7;
  return result;
}
