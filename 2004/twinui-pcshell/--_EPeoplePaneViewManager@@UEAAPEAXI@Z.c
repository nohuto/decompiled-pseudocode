/*
 * XREFs of ??_EPeoplePaneViewManager@@UEAAPEAXI@Z @ 0x18025E2E8
 * Callers:
 *     ??_EPeoplePaneViewManager@@WBI@EAAPEAXI@Z @ 0x1800F55E0 (--_EPeoplePaneViewManager@@WBI@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008D714 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1PeoplePaneViewManager@@UEAA@XZ @ 0x18025DDCC (--1PeoplePaneViewManager@@UEAA@XZ.c)
 */

PeoplePaneViewManager *__fastcall PeoplePaneViewManager::`vector deleting destructor'(
        PeoplePaneViewManager *this,
        char a2)
{
  PeoplePaneViewManager::~PeoplePaneViewManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x250);
  return this;
}
