/*
 * XREFs of ??_GHotKeyProcessor@@UEAAPEAXI@Z @ 0x18019FAE0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003C660 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1HotKeyProcessor@@UEAA@XZ @ 0x18019F4A8 (--1HotKeyProcessor@@UEAA@XZ.c)
 */

HotKeyProcessor *__fastcall HotKeyProcessor::`scalar deleting destructor'(HotKeyProcessor *this, char a2)
{
  HotKeyProcessor::~HotKeyProcessor(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0xA0);
  return this;
}
