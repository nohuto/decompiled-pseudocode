/*
 * XREFs of ??_EHotKeyClient@@UEAAPEAXI@Z @ 0x1801483B0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003C660 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1HotKeyClient@@UEAA@XZ @ 0x180148248 (--1HotKeyClient@@UEAA@XZ.c)
 */

HotKeyClient *__fastcall HotKeyClient::`vector deleting destructor'(HotKeyClient *this, char a2)
{
  HotKeyClient::~HotKeyClient(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0xC8);
  return this;
}
