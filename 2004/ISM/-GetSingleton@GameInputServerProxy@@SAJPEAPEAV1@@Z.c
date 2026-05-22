/*
 * XREFs of ?GetSingleton@GameInputServerProxy@@SAJPEAPEAV1@@Z @ 0x180042694
 * Callers:
 *     ?OnFocusRequest@GameInputProcessor@@UEAAJPEAUDeviceInfo@@PEAVInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x18000BB80 (-OnFocusRequest@GameInputProcessor@@UEAAJPEAUDeviceInfo@@PEAVInputContext@@PEAUContextualProcess.c)
 *     ?LazyInitialize@GameInputProcessor@@AEAAJXZ @ 0x18003772C (-LazyInitialize@GameInputProcessor@@AEAAJXZ.c)
 * Callees:
 *     ?AddPublicReference@SharedObjectBase@@IEAAIXZ @ 0x1800BEB0C (-AddPublicReference@SharedObjectBase@@IEAAIXZ.c)
 */

__int64 __fastcall GameInputServerProxy::GetSingleton(struct GameInputServerProxy **a1)
{
  struct GameInputServerProxy *v2; // rax

  AcquireSRWLockShared(&GameInputServerProxy::s_singletonLock);
  v2 = GameInputServerProxy::s_singleton;
  if ( GameInputServerProxy::s_singleton )
  {
    SharedObjectBase::AddPublicReference(GameInputServerProxy::s_singleton);
    v2 = GameInputServerProxy::s_singleton;
  }
  *a1 = v2;
  ReleaseSRWLockShared(&GameInputServerProxy::s_singletonLock);
  return 0LL;
}
