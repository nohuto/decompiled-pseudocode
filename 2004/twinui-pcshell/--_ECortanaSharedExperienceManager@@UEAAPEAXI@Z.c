/*
 * XREFs of ??_ECortanaSharedExperienceManager@@UEAAPEAXI@Z @ 0x1801B7B70
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008D714 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CortanaSharedExperienceManager@@UEAA@XZ @ 0x1801B7644 (--1CortanaSharedExperienceManager@@UEAA@XZ.c)
 */

CortanaSharedExperienceManager *__fastcall CortanaSharedExperienceManager::`vector deleting destructor'(
        CortanaSharedExperienceManager *this,
        char a2)
{
  CortanaSharedExperienceManager::~CortanaSharedExperienceManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x220);
  return this;
}
