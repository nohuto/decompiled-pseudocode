/*
 * XREFs of ??_GShellFeedsExperienceManagerImpl@@UEAAPEAXI@Z @ 0x18009B190
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008D274 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1ShellFeedsExperienceManagerImpl@@UEAA@XZ @ 0x18009AE60 (--1ShellFeedsExperienceManagerImpl@@UEAA@XZ.c)
 */

ShellFeedsExperienceManagerImpl *__fastcall ShellFeedsExperienceManagerImpl::`scalar deleting destructor'(
        ShellFeedsExperienceManagerImpl *this,
        char a2)
{
  ShellFeedsExperienceManagerImpl::~ShellFeedsExperienceManagerImpl(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0xE8);
  return this;
}
