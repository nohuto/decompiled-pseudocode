/*
 * XREFs of ??_GCActionCenterExperienceManager@@UEAAPEAXI@Z @ 0x1801AE800
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008D274 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CActionCenterExperienceManager@@UEAA@XZ @ 0x1801AE218 (--1CActionCenterExperienceManager@@UEAA@XZ.c)
 */

CActionCenterExperienceManager *__fastcall CActionCenterExperienceManager::`scalar deleting destructor'(
        CActionCenterExperienceManager *this,
        volatile int *a2)
{
  char v2; // bl

  v2 = (char)a2;
  CActionCenterExperienceManager::~CActionCenterExperienceManager(this, a2);
  if ( (v2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x280);
  return this;
}
