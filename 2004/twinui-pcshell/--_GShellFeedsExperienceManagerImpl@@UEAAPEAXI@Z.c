/*
 * XREFs of ??_GShellFeedsExperienceManagerImpl@@UEAAPEAXI@Z @ 0x180099210
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008D714 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1ShellFeedsExperienceManagerImpl@@UEAA@XZ @ 0x180098EE4 (--1ShellFeedsExperienceManagerImpl@@UEAA@XZ.c)
 */

ShellFeedsExperienceManagerImpl *__fastcall ShellFeedsExperienceManagerImpl::`scalar deleting destructor'(
        ShellFeedsExperienceManagerImpl *this,
        char a2)
{
  ShellFeedsExperienceManagerImpl::~ShellFeedsExperienceManagerImpl(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0xC0);
  return this;
}
