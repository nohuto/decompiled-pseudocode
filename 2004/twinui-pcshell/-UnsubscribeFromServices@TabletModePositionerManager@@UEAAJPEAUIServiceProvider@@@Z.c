/*
 * XREFs of ?UnsubscribeFromServices@TabletModePositionerManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x1803F2D40
 * Callers:
 *     <none>
 * Callees:
 *     ?Unregister@SmartCookie@@QEAAJXZ @ 0x180141980 (-Unregister@SmartCookie@@QEAAJXZ.c)
 */

__int64 __fastcall TabletModePositionerManager::UnsubscribeFromServices(
        TabletModePositionerManager *this,
        struct IServiceProvider *a2)
{
  SmartCookie::Unregister((TabletModePositionerManager *)((char *)this + 152));
  return 0LL;
}
