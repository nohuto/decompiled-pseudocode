/*
 * XREFs of ??_GCBaseTrayFlyoutExperienceManager@@UEAAPEAXI@Z @ 0x1800A09D0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008D274 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CBaseTrayFlyoutExperienceManager@@UEAA@XZ @ 0x1800A0428 (--1CBaseTrayFlyoutExperienceManager@@UEAA@XZ.c)
 */

CBaseTrayFlyoutExperienceManager *__fastcall CBaseTrayFlyoutExperienceManager::`scalar deleting destructor'(
        CBaseTrayFlyoutExperienceManager *this,
        char a2)
{
  CBaseTrayFlyoutExperienceManager::~CBaseTrayFlyoutExperienceManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x1E8);
  return this;
}
