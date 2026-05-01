/*
 * XREFs of ?Shutdown@ViewEventDispatcher@@UEAAJXZ @ 0x1802848B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Shutdown@ViewManagerBridge@@UEAAXXZ @ 0x1802A0C50 (-Shutdown@ViewManagerBridge@@UEAAXXZ.c)
 */

__int64 __fastcall ViewEventDispatcher::Shutdown(ViewManagerBridge **this)
{
  ViewManagerBridge::Shutdown(this[55]);
  return 0LL;
}
