/*
 * XREFs of ??_GCShoulderTapExperienceManager@@UEAAPEAXI@Z @ 0x1801D0170
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008D274 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CShoulderTapExperienceManager@@UEAA@XZ @ 0x1801CFFFC (--1CShoulderTapExperienceManager@@UEAA@XZ.c)
 */

CShoulderTapExperienceManager *__fastcall CShoulderTapExperienceManager::`scalar deleting destructor'(
        CShoulderTapExperienceManager *this,
        char a2)
{
  CShoulderTapExperienceManager::~CShoulderTapExperienceManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x150);
  return this;
}
