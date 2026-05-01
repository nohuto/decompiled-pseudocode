/*
 * XREFs of ??_ECJumpViewExperienceManager@@UEAAPEAXI@Z @ 0x1801D7260
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008D714 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CJumpViewExperienceManager@@UEAA@XZ @ 0x1801D6D60 (--1CJumpViewExperienceManager@@UEAA@XZ.c)
 */

CJumpViewExperienceManager *__fastcall CJumpViewExperienceManager::`vector deleting destructor'(
        CJumpViewExperienceManager *this,
        char a2)
{
  CJumpViewExperienceManager::~CJumpViewExperienceManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x350);
  return this;
}
