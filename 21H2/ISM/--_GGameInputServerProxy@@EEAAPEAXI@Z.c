/*
 * XREFs of ??_GGameInputServerProxy@@EEAAPEAXI@Z @ 0x180042FD0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003C400 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1GameInputServerProxy@@EEAA@XZ @ 0x180042DA4 (--1GameInputServerProxy@@EEAA@XZ.c)
 */

GameInputServerProxy *__fastcall GameInputServerProxy::`scalar deleting destructor'(
        GameInputServerProxy *this,
        unsigned int a2)
{
  char v2; // bl

  v2 = a2;
  GameInputServerProxy::~GameInputServerProxy(this, a2);
  if ( (v2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0xE8);
  return this;
}
