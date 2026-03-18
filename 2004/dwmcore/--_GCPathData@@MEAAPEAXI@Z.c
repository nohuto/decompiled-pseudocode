/*
 * XREFs of ??_GCPathData@@MEAAPEAXI@Z @ 0x18021FAD0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180084B20 (--3@YAXPEAX_K@Z.c)
 *     ??1CPathData@@MEAA@XZ @ 0x18021F970 (--1CPathData@@MEAA@XZ.c)
 */

CPathData *__fastcall CPathData::`scalar deleting destructor'(CPathData *this, char a2)
{
  CPathData::~CPathData(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
