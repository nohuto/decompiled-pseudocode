/*
 * XREFs of ?CreateSingleton@GameInputServerProxy@@SAJPEAUIGameInputServerInputRouter@@PEAPEAV1@@Z @ 0x180042BB0
 * Callers:
 *     ??0GameControllerRawInputProvider@@AEAA@PEAUIRawInputClient@@@Z @ 0x18003406C (--0GameControllerRawInputProvider@@AEAA@PEAUIRawInputClient@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18003D280 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0GameInputServerProxy@@AEAA@PEAUIGameInputServerInputRouter@@@Z @ 0x180042710 (--0GameInputServerProxy@@AEAA@PEAUIGameInputServerInputRouter@@@Z.c)
 *     ?LoadGameInput@GameInputServerProxy@@AEAAJXZ @ 0x180042D00 (-LoadGameInput@GameInputServerProxy@@AEAAJXZ.c)
 *     ?ReleasePrivateReference@SharedObjectBase@@IEAAIXZ @ 0x1800BEFF0 (-ReleasePrivateReference@SharedObjectBase@@IEAAIXZ.c)
 */

__int64 __fastcall GameInputServerProxy::CreateSingleton(
        struct IGameInputServerInputRouter *a1,
        struct GameInputServerProxy **a2)
{
  unsigned int v3; // ebx
  GameInputServerProxy *v5; // rax
  SharedObjectBase *v6; // rax
  int GameInput; // edi

  v3 = 0;
  *a2 = 0LL;
  AcquireSRWLockExclusive(&GameInputServerProxy::s_singletonLock);
  if ( GameInputServerProxy::s_singleton )
  {
    v3 = -2147418113;
  }
  else
  {
    v5 = (GameInputServerProxy *)operator new(0xE8uLL, (const struct std::nothrow_t *)&std::nothrow);
    if ( v5 )
      v6 = GameInputServerProxy::GameInputServerProxy(v5, a1);
    else
      v6 = 0LL;
    GameInputServerProxy::s_singleton = v6;
    if ( v6 )
    {
      GameInput = GameInputServerProxy::LoadGameInput(v6);
      if ( GameInput < 0 )
      {
        SharedObjectBase::ReleasePrivateReference(GameInputServerProxy::s_singleton);
        GameInputServerProxy::s_singleton = 0LL;
        v3 = GameInput;
      }
      else
      {
        if ( (unsigned int)_InterlockedExchangeAdd64(
                             (volatile signed __int64 *)GameInputServerProxy::s_singleton + 1,
                             2uLL) )
          __fastfail(0xEu);
        *a2 = GameInputServerProxy::s_singleton;
      }
    }
    else
    {
      v3 = -2147024882;
    }
  }
  ReleaseSRWLockExclusive(&GameInputServerProxy::s_singletonLock);
  return v3;
}
