/*
 * XREFs of ??_GKeyboardOverriderDispatcher@@UEAAPEAXI@Z @ 0x1800AED40
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003C740 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1KeyboardOverriderDispatcher@@UEAA@XZ @ 0x1800B46A4 (--1KeyboardOverriderDispatcher@@UEAA@XZ.c)
 */

KeyboardOverriderDispatcher *__fastcall KeyboardOverriderDispatcher::`scalar deleting destructor'(
        KeyboardOverriderDispatcher *this,
        char a2)
{
  KeyboardOverriderDispatcher::~KeyboardOverriderDispatcher(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x328);
  return this;
}
