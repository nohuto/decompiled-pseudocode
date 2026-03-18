/*
 * XREFs of _GetMonitorMenuRect@4 @ 0x1B71FD
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x270DA (xxxSystemParametersInfoWorker.c)
 *     _FindBestPos@40 @ 0x1A7CE6 (_FindBestPos@40.c)
 * Callees:
 *     ?GetCurrentThreadCompositedDpiContext@@YGKXZ @ 0xB49EE (-GetCurrentThreadCompositedDpiContext@@YGKXZ.c)
 *     ?GetMonitorMenuRectForDpiContext@@YG?AUtagRECT@@PBUtagMONITOR@@K@Z @ 0x1B70D7 (-GetMonitorMenuRectForDpiContext@@YG-AUtagRECT@@PBUtagMONITOR@@K@Z.c)
 */

LONG *__thiscall GetMonitorMenuRect(void *this, LONG *a2)
{
  unsigned int CurrentThreadCompositedDpiContext; // eax
  struct tagRECT *MonitorMenuRectForDpiContext; // esi
  LONG *result; // eax
  const struct tagMONITOR *v6; // [esp+0h] [ebp-1Ch]
  unsigned int v7; // [esp+4h] [ebp-18h]
  struct tagRECT v8; // [esp+8h] [ebp-14h] BYREF

  CurrentThreadCompositedDpiContext = GetCurrentThreadCompositedDpiContext();
  MonitorMenuRectForDpiContext = GetMonitorMenuRectForDpiContext(
                                   CurrentThreadCompositedDpiContext,
                                   (int)this,
                                   &v8,
                                   v6,
                                   v7);
  result = a2;
  *a2 = MonitorMenuRectForDpiContext->left;
  MonitorMenuRectForDpiContext = (struct tagRECT *)((char *)MonitorMenuRectForDpiContext + 4);
  a2[1] = MonitorMenuRectForDpiContext->left;
  MonitorMenuRectForDpiContext = (struct tagRECT *)((char *)MonitorMenuRectForDpiContext + 4);
  a2[2] = MonitorMenuRectForDpiContext->left;
  a2[3] = MonitorMenuRectForDpiContext->top;
  return result;
}
