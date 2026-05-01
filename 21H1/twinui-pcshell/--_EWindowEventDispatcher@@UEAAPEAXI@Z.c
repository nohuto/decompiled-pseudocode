/*
 * XREFs of ??_EWindowEventDispatcher@@UEAAPEAXI@Z @ 0x180290A50
 * Callers:
 *     ??_EWindowEventDispatcher@@WIA@EAAPEAXI@Z @ 0x1800D1F00 (--_EWindowEventDispatcher@@WIA@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008CE60 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1WindowEventDispatcher@@UEAA@XZ @ 0x1802904D4 (--1WindowEventDispatcher@@UEAA@XZ.c)
 */

WindowEventDispatcher *__fastcall WindowEventDispatcher::`vector deleting destructor'(
        WindowEventDispatcher *this,
        char a2)
{
  WindowEventDispatcher::~WindowEventDispatcher(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x218);
  return this;
}
