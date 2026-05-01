/*
 * XREFs of ??_ECDesktopPositioner@@UEAAPEAXI@Z @ 0x1803EA818
 * Callers:
 *     ??_ECDesktopPositioner@@WCI@EAAPEAXI@Z @ 0x1800FF440 (--_ECDesktopPositioner@@WCI@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008D274 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CDesktopPositioner@@UEAA@XZ @ 0x1803E9D50 (--1CDesktopPositioner@@UEAA@XZ.c)
 */

CDesktopPositioner *__fastcall CDesktopPositioner::`vector deleting destructor'(CDesktopPositioner *this, char a2)
{
  CDesktopPositioner::~CDesktopPositioner(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x198);
  return this;
}
