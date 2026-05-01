/*
 * XREFs of ??_ECToastCenterExperienceManager@@UEAAPEAXI@Z @ 0x18019E1D0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008CE60 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CToastCenterExperienceManager@@UEAA@XZ @ 0x18019DDB4 (--1CToastCenterExperienceManager@@UEAA@XZ.c)
 */

CToastCenterExperienceManager *__fastcall CToastCenterExperienceManager::`vector deleting destructor'(
        CToastCenterExperienceManager *this,
        volatile int *a2)
{
  char v2; // bl

  v2 = (char)a2;
  CToastCenterExperienceManager::~CToastCenterExperienceManager(this, a2);
  if ( (v2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x2F0);
  return this;
}
