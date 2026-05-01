/*
 * XREFs of ??_ECachedWindowArrangementViewLifetime@TabletModeViewManager@@EEAAPEAXI@Z @ 0x1803DFFD0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18008D394 (--3@YAXPEAX@Z.c)
 *     ??1CachedWindowArrangementViewLifetime@TabletModeViewManager@@EEAA@XZ @ 0x1803DFE64 (--1CachedWindowArrangementViewLifetime@TabletModeViewManager@@EEAA@XZ.c)
 */

TabletModeViewManager::CachedWindowArrangementViewLifetime *__fastcall TabletModeViewManager::CachedWindowArrangementViewLifetime::`vector deleting destructor'(
        TabletModeViewManager::CachedWindowArrangementViewLifetime *this,
        char a2)
{
  TabletModeViewManager::CachedWindowArrangementViewLifetime::~CachedWindowArrangementViewLifetime(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
