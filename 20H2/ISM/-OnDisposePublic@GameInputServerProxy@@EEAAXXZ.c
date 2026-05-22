/*
 * XREFs of ?OnDisposePublic@GameInputServerProxy@@EEAAXXZ @ 0x180042B30
 * Callers:
 *     <none>
 * Callees:
 *     ?UnloadGameInput@GameInputServerProxy@@AEAAXXZ @ 0x180043274 (-UnloadGameInput@GameInputServerProxy@@AEAAXXZ.c)
 *     ?ReleasePrivateReference@SharedObjectBase@@IEAAIXZ @ 0x1800BEA90 (-ReleasePrivateReference@SharedObjectBase@@IEAAIXZ.c)
 */

void __fastcall GameInputServerProxy::OnDisposePublic(GameInputServerProxy *this)
{
  GameInputServerProxy::UnloadGameInput(this);
  SharedObjectBase::ReleasePrivateReference(GameInputServerProxy::s_singleton);
  GameInputServerProxy::s_singleton = 0LL;
}
