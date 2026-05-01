/*
 * XREFs of ??_GSearchAppDesktopExperienceView@@UEAAPEAXI@Z @ 0x1802062F0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008D274 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1SearchAppDesktopExperienceView@@UEAA@XZ @ 0x180206098 (--1SearchAppDesktopExperienceView@@UEAA@XZ.c)
 */

SearchAppDesktopExperienceView *__fastcall SearchAppDesktopExperienceView::`scalar deleting destructor'(
        SearchAppDesktopExperienceView *this,
        __int64 a2)
{
  char v2; // bl

  v2 = a2;
  SearchAppDesktopExperienceView::~SearchAppDesktopExperienceView(this, a2);
  if ( (v2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x140);
  return this;
}
