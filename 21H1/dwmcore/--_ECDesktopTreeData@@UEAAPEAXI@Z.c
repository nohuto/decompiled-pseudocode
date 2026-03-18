/*
 * XREFs of ??_ECDesktopTreeData@@UEAAPEAXI@Z @ 0x1801B0DE0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180038160 (--3@YAXPEAX_K@Z.c)
 *     ??1CTreeData@@UEAA@XZ @ 0x18007E69C (--1CTreeData@@UEAA@XZ.c)
 */

CDesktopTreeData *__fastcall CDesktopTreeData::`vector deleting destructor'(CDesktopTreeData *this, char a2)
{
  *((_BYTE *)this + 16) = 0;
  *(_QWORD *)this = &CDesktopTreeData::`vftable';
  CTreeData::~CTreeData(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
