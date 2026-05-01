/*
 * XREFs of ??_ECPeopleBarJumpViewExperienceManager@@UEAAPEAXI@Z @ 0x1801AA9E0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008CE60 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CPeopleBarJumpViewExperienceManager@@UEAA@XZ @ 0x1801AA8C8 (--1CPeopleBarJumpViewExperienceManager@@UEAA@XZ.c)
 */

CPeopleBarJumpViewExperienceManager *__fastcall CPeopleBarJumpViewExperienceManager::`vector deleting destructor'(
        CPeopleBarJumpViewExperienceManager *this,
        char a2)
{
  CPeopleBarJumpViewExperienceManager::~CPeopleBarJumpViewExperienceManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x1B0);
  return this;
}
