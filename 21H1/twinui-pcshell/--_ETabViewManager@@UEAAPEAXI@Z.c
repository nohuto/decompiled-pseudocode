/*
 * XREFs of ??_ETabViewManager@@UEAAPEAXI@Z @ 0x180249F48
 * Callers:
 *     ??_ETabViewManager@@WDA@EAAPEAXI@Z @ 0x1800D0AE0 (--_ETabViewManager@@WDA@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008CE60 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1TabViewManager@@UEAA@XZ @ 0x1802489C8 (--1TabViewManager@@UEAA@XZ.c)
 */

TabViewManager *__fastcall TabViewManager::`vector deleting destructor'(TabViewManager *this, char a2)
{
  TabViewManager::~TabViewManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x5A0);
  return this;
}
