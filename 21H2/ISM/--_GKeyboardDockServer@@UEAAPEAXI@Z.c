/*
 * XREFs of ??_GKeyboardDockServer@@UEAAPEAXI@Z @ 0x180126600
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003C400 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1KeyboardDockServer@@UEAA@XZ @ 0x18012643C (--1KeyboardDockServer@@UEAA@XZ.c)
 */

KeyboardDockServer *__fastcall KeyboardDockServer::`scalar deleting destructor'(KeyboardDockServer *this, char a2)
{
  KeyboardDockServer::~KeyboardDockServer(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x90);
  return this;
}
