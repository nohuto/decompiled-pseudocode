/*
 * XREFs of ??_ECWinRTAppIconLoader@@UEAAPEAXI@Z @ 0x180089320
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18008D7A4 (--3@YAXPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=1
CWinRTAppIconLoader *__fastcall CWinRTAppIconLoader::`vector deleting destructor'(CWinRTAppIconLoader *this, char a2)
{
  *((_DWORD *)this + 3) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
