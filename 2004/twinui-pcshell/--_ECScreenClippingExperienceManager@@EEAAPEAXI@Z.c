/*
 * XREFs of ??_ECScreenClippingExperienceManager@@EEAAPEAXI@Z @ 0x1801E8260
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008D714 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CScreenClippingExperienceManager@@EEAA@XZ @ 0x1801E7D6C (--1CScreenClippingExperienceManager@@EEAA@XZ.c)
 */

CScreenClippingExperienceManager *__fastcall CScreenClippingExperienceManager::`vector deleting destructor'(
        CScreenClippingExperienceManager *this,
        char a2)
{
  CScreenClippingExperienceManager::~CScreenClippingExperienceManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x158);
  return this;
}
