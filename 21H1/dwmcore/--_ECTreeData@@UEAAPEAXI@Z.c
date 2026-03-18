/*
 * XREFs of ??_ECTreeData@@UEAAPEAXI@Z @ 0x1801B0E30
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180038160 (--3@YAXPEAX_K@Z.c)
 *     ??1CTreeData@@UEAA@XZ @ 0x18007E69C (--1CTreeData@@UEAA@XZ.c)
 */

CTreeData *__fastcall CTreeData::`vector deleting destructor'(CTreeData *this, char a2)
{
  CTreeData::~CTreeData(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
