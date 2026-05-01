/*
 * XREFs of ??_GViewEventDispatcher@@EEAAPEAXI@Z @ 0x18028030C
 * Callers:
 *     ??_EViewEventDispatcher@@GHI@EAAPEAXI@Z @ 0x1800D13F0 (--_EViewEventDispatcher@@GHI@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008CE60 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1ViewEventDispatcher@@EEAA@XZ @ 0x18027EF6C (--1ViewEventDispatcher@@EEAA@XZ.c)
 */

ViewEventDispatcher *__fastcall ViewEventDispatcher::`scalar deleting destructor'(ViewEventDispatcher *this, char a2)
{
  ViewEventDispatcher::~ViewEventDispatcher(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x250);
  return this;
}
