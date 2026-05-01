/*
 * XREFs of ??_ECEnumerateEntries@@UEAAPEAXI@Z @ 0x180042720
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180045400 (--3@YAXPEAX@Z.c)
 */

CEnumerateEntries *__fastcall CEnumerateEntries::`vector deleting destructor'(CEnumerateEntries *this, char a2)
{
  *(_QWORD *)this = &CEnumerateEntries::`vftable';
  *((_DWORD *)this + 3) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
