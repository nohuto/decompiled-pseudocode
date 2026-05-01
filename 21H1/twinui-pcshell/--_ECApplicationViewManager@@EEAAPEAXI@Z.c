/*
 * XREFs of ??_ECApplicationViewManager@@EEAAPEAXI@Z @ 0x18016A720
 * Callers:
 *     ??_ECApplicationViewManager@@GEI@EAAPEAXI@Z @ 0x1800CC3C0 (--_ECApplicationViewManager@@GEI@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008CE60 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CApplicationViewManager@@EEAA@XZ @ 0x180169C3C (--1CApplicationViewManager@@EEAA@XZ.c)
 */

CApplicationViewManager *__fastcall CApplicationViewManager::`vector deleting destructor'(
        CApplicationViewManager *this,
        char a2)
{
  CApplicationViewManager::~CApplicationViewManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x330);
  return this;
}
