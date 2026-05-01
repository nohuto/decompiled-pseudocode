/*
 * XREFs of ??_EMeetNowExperienceManager@@UEAAPEAXI@Z @ 0x18009F640
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008D714 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1MeetNowExperienceManager@@UEAA@XZ @ 0x18009F150 (--1MeetNowExperienceManager@@UEAA@XZ.c)
 */

MeetNowExperienceManager *__fastcall MeetNowExperienceManager::`vector deleting destructor'(
        MeetNowExperienceManager *this,
        char a2)
{
  MeetNowExperienceManager::~MeetNowExperienceManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x198);
  return this;
}
