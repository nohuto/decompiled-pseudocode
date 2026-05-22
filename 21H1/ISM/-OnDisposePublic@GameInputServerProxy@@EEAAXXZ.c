/*
 * XREFs of ?OnDisposePublic@GameInputServerProxy@@EEAAXXZ @ 0x1800431A0
 * Callers:
 *     <none>
 * Callees:
 *     ?UnloadGameInput@GameInputServerProxy@@AEAAXXZ @ 0x1800438D4 (-UnloadGameInput@GameInputServerProxy@@AEAAXXZ.c)
 *     ?ReleasePrivateReference@SharedObjectBase@@IEAAIXZ @ 0x1800BEFF0 (-ReleasePrivateReference@SharedObjectBase@@IEAAIXZ.c)
 */

void __fastcall GameInputServerProxy::OnDisposePublic(GameInputServerProxy *this)
{
  GameInputServerProxy::UnloadGameInput(this);
  SharedObjectBase::ReleasePrivateReference(GameInputServerProxy::s_singleton);
  GameInputServerProxy::s_singleton = 0LL;
}
