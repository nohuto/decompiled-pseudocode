/*
 * XREFs of ??_GCStartExperienceManager@@UEAAPEAXI@Z @ 0x1801AF760
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008CE60 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CStartExperienceManager@@UEAA@XZ @ 0x1801AF578 (--1CStartExperienceManager@@UEAA@XZ.c)
 */

CStartExperienceManager *__fastcall CStartExperienceManager::`scalar deleting destructor'(
        CStartExperienceManager *this,
        char a2)
{
  CStartExperienceManager::~CStartExperienceManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x2A0);
  return this;
}
