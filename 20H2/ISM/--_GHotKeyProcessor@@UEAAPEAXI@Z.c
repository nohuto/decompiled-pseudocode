/*
 * XREFs of ??_GHotKeyProcessor@@UEAAPEAXI@Z @ 0x18019F5E0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003C740 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1HotKeyProcessor@@UEAA@XZ @ 0x18019EFA8 (--1HotKeyProcessor@@UEAA@XZ.c)
 */

HotKeyProcessor *__fastcall HotKeyProcessor::`scalar deleting destructor'(HotKeyProcessor *this, char a2)
{
  HotKeyProcessor::~HotKeyProcessor(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0xA0);
  return this;
}
