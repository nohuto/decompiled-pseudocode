/*
 * XREFs of ??_ECVisualTreeData@@UEAAPEAXI@Z @ 0x180024160
 * Callers:
 *     ?ReleaseVisualTreeData@CVisual@@QEAAXPEAVCVisualTreeData@@@Z @ 0x180024088 (-ReleaseVisualTreeData@CVisual@@QEAAXPEAVCVisualTreeData@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180084B20 (--3@YAXPEAX_K@Z.c)
 *     ??1CTreeData@@UEAA@XZ @ 0x1800A3EDC (--1CTreeData@@UEAA@XZ.c)
 */

CVisualTreeData *__fastcall CVisualTreeData::`vector deleting destructor'(CVisualTreeData *this, char a2)
{
  *(_QWORD *)this = &CVisualTreeData::`vftable';
  CTreeData::~CTreeData(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x148uLL);
  return this;
}
