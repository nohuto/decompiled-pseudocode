/*
 * XREFs of ??_ETabletModeViewManager@@UEAAPEAXI@Z @ 0x1803E0008
 * Callers:
 *     ??_ETabletModeViewManager@@WBI@EAAPEAXI@Z @ 0x1800D97D0 (--_ETabletModeViewManager@@WBI@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18008D394 (--3@YAXPEAX@Z.c)
 *     ??1TabletModeViewManager@@UEAA@XZ @ 0x1803DFF08 (--1TabletModeViewManager@@UEAA@XZ.c)
 */

TabletModeViewManager *__fastcall TabletModeViewManager::`vector deleting destructor'(
        TabletModeViewManager *this,
        char a2)
{
  TabletModeViewManager::~TabletModeViewManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
