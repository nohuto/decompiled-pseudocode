/*
 * XREFs of ??_EShellFeedsDesktopExperienceView@@UEAAPEAXI@Z @ 0x1800A58D0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008D274 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1ShellFeedsDesktopExperienceView@@UEAA@XZ @ 0x1800A578C (--1ShellFeedsDesktopExperienceView@@UEAA@XZ.c)
 */

ShellFeedsDesktopExperienceView *__fastcall ShellFeedsDesktopExperienceView::`vector deleting destructor'(
        ShellFeedsDesktopExperienceView *this,
        char a2)
{
  ShellFeedsDesktopExperienceView::~ShellFeedsDesktopExperienceView(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0xF0);
  return this;
}
