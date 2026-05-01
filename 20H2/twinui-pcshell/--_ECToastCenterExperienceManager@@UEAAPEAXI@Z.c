/*
 * XREFs of ??_ECToastCenterExperienceManager@@UEAAPEAXI@Z @ 0x1801C1850
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008D274 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CToastCenterExperienceManager@@UEAA@XZ @ 0x1801C1434 (--1CToastCenterExperienceManager@@UEAA@XZ.c)
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
