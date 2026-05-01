/*
 * XREFs of ??_ECPerMonitorDesktopVisibilityService@@UEAAPEAXI@Z @ 0x1803CD8CC
 * Callers:
 *     ??_ECPerMonitorDesktopVisibilityService@@WCI@EAAPEAXI@Z @ 0x1800FD7B0 (--_ECPerMonitorDesktopVisibilityService@@WCI@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008D714 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CPerMonitorDesktopVisibilityService@@UEAA@XZ @ 0x1803CD67C (--1CPerMonitorDesktopVisibilityService@@UEAA@XZ.c)
 */

CPerMonitorDesktopVisibilityService *__fastcall CPerMonitorDesktopVisibilityService::`vector deleting destructor'(
        CPerMonitorDesktopVisibilityService *this,
        char a2)
{
  CPerMonitorDesktopVisibilityService::~CPerMonitorDesktopVisibilityService(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0xF0);
  return this;
}
