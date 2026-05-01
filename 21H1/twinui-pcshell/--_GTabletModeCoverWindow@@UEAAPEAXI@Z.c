/*
 * XREFs of ??_GTabletModeCoverWindow@@UEAAPEAXI@Z @ 0x1803F1F20
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18008D394 (--3@YAXPEAX@Z.c)
 *     ??1TabletModeCoverWindow@@UEAA@XZ @ 0x1803F1E08 (--1TabletModeCoverWindow@@UEAA@XZ.c)
 */

TabletModeCoverWindow *__fastcall TabletModeCoverWindow::`scalar deleting destructor'(
        TabletModeCoverWindow *this,
        char a2)
{
  TabletModeCoverWindow::~TabletModeCoverWindow(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
