/*
 * XREFs of ??_ESearchAppExperienceManager@@UEAAPEAXI@Z @ 0x1801D2950
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008CE60 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1SearchAppExperienceManager@@UEAA@XZ @ 0x1801D266C (--1SearchAppExperienceManager@@UEAA@XZ.c)
 */

SearchAppExperienceManager *__fastcall SearchAppExperienceManager::`vector deleting destructor'(
        SearchAppExperienceManager *this,
        char a2)
{
  SearchAppExperienceManager::~SearchAppExperienceManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x228);
  return this;
}
