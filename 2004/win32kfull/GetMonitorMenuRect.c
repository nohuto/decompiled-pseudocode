/*
 * XREFs of GetMonitorMenuRect @ 0x1C025EA20
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x1C003E1F8 (xxxSystemParametersInfoWorker.c)
 *     FindBestPos @ 0x1C024B718 (FindBestPos.c)
 * Callees:
 *     ?GetCurrentThreadCompositedDpiContext@@YAKXZ @ 0x1C002A778 (-GetCurrentThreadCompositedDpiContext@@YAKXZ.c)
 *     ?GetMonitorMenuRectForDpiContext@@YA?AUtagRECT@@PEBUtagMONITOR@@K@Z @ 0x1C025E8D4 (-GetMonitorMenuRectForDpiContext@@YA-AUtagRECT@@PEBUtagMONITOR@@K@Z.c)
 */

_OWORD *__fastcall GetMonitorMenuRect(_OWORD *a1, const struct tagMONITOR *a2)
{
  unsigned int CurrentThreadCompositedDpiContext; // eax
  __int128 v5; // xmm0
  _OWORD *result; // rax
  struct tagRECT v7; // [rsp+20h] [rbp-18h] BYREF

  CurrentThreadCompositedDpiContext = GetCurrentThreadCompositedDpiContext();
  v5 = (__int128)*GetMonitorMenuRectForDpiContext(&v7, a2, CurrentThreadCompositedDpiContext);
  result = a1;
  *a1 = v5;
  return result;
}
