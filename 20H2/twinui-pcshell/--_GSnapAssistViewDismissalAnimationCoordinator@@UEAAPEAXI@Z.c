/*
 * XREFs of ??_GSnapAssistViewDismissalAnimationCoordinator@@UEAAPEAXI@Z @ 0x18039D510
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18008D7A4 (--3@YAXPEAX@Z.c)
 *     ??1MultitaskingViewAnimationCoordinatorBase@@QEAA@XZ @ 0x18039C2A0 (--1MultitaskingViewAnimationCoordinatorBase@@QEAA@XZ.c)
 */

SnapAssistViewDismissalAnimationCoordinator *__fastcall SnapAssistViewDismissalAnimationCoordinator::`scalar deleting destructor'(
        SnapAssistViewDismissalAnimationCoordinator *this,
        char a2)
{
  *((_DWORD *)this + 59) = -1073741823;
  MultitaskingViewAnimationCoordinatorBase::~MultitaskingViewAnimationCoordinatorBase(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
