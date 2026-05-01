/*
 * XREFs of ??_EWin32AppStateManager@@UEAAPEAXI@Z @ 0x180438A30
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008CE60 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1Win32AppStateManager@@UEAA@XZ @ 0x180438840 (--1Win32AppStateManager@@UEAA@XZ.c)
 */

Win32AppStateManager *__fastcall Win32AppStateManager::`vector deleting destructor'(
        Win32AppStateManager *this,
        char a2)
{
  Win32AppStateManager::~Win32AppStateManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0xA8);
  return this;
}
