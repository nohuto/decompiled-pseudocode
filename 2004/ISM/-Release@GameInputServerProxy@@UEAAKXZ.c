/*
 * XREFs of ?Release@GameInputServerProxy@@UEAAKXZ @ 0x180042CB0
 * Callers:
 *     ?Release@GameInputServerProxy@@W7EAAKXZ @ 0x18004B030 (-Release@GameInputServerProxy@@W7EAAKXZ.c)
 *     ?Release@GameInputServerProxy@@WBA@EAAKXZ @ 0x18004B040 (-Release@GameInputServerProxy@@WBA@EAAKXZ.c)
 * Callees:
 *     ?ReleasePublicReference@SharedObjectBase@@IEAAIXZ @ 0x1800BEBB0 (-ReleasePublicReference@SharedObjectBase@@IEAAIXZ.c)
 */

__int64 __fastcall GameInputServerProxy::Release(GameInputServerProxy *this)
{
  AcquireSRWLockExclusive(&GameInputServerProxy::s_singletonLock);
  LODWORD(this) = SharedObjectBase::ReleasePublicReference((GameInputServerProxy *)((char *)this - 16));
  ReleaseSRWLockExclusive(&GameInputServerProxy::s_singletonLock);
  return (unsigned int)this;
}
