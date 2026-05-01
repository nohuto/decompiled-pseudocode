/*
 * XREFs of ??_ECAppTransitionManager@@UEAAPEAXI@Z @ 0x1803C4E50
 * Callers:
 *     ??_ECAppTransitionManager@@WBI@EAAPEAXI@Z @ 0x1800FD5D0 (--_ECAppTransitionManager@@WBI@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18008DC44 (--3@YAXPEAX@Z.c)
 *     ??1CAppTransitionManager@@UEAA@XZ @ 0x1803C4CFC (--1CAppTransitionManager@@UEAA@XZ.c)
 */

CAppTransitionManager *__fastcall CAppTransitionManager::`vector deleting destructor'(
        CAppTransitionManager *this,
        char a2)
{
  CAppTransitionManager::~CAppTransitionManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
