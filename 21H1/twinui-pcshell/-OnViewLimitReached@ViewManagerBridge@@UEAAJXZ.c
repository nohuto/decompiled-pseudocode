/*
 * XREFs of ?OnViewLimitReached@ViewManagerBridge@@UEAAJXZ @ 0x18029F8E0
 * Callers:
 *     <none>
 * Callees:
 *     ?ViewManagerViewLimitReached@ViewManagerInteropTelemetry@@SAXXZ @ 0x1802A6704 (-ViewManagerViewLimitReached@ViewManagerInteropTelemetry@@SAXXZ.c)
 */

__int64 __fastcall ViewManagerBridge::OnViewLimitReached(ViewManagerBridge *this)
{
  ViewManagerInteropTelemetry::ViewManagerViewLimitReached();
  return 0LL;
}
