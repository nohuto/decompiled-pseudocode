/*
 * XREFs of ??_GApplicationViewManagerVisibilityDebouncer@@UEAAPEAXI@Z @ 0x180190F10
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008D274 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1ApplicationViewManagerVisibilityDebouncer@@UEAA@XZ @ 0x180190CC4 (--1ApplicationViewManagerVisibilityDebouncer@@UEAA@XZ.c)
 */

ApplicationViewManagerVisibilityDebouncer *__fastcall ApplicationViewManagerVisibilityDebouncer::`scalar deleting destructor'(
        ApplicationViewManagerVisibilityDebouncer *this,
        char a2)
{
  ApplicationViewManagerVisibilityDebouncer::~ApplicationViewManagerVisibilityDebouncer(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0xE0);
  return this;
}
