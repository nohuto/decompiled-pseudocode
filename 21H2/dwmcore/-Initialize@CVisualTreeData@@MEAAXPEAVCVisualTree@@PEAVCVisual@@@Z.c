/*
 * XREFs of ?Initialize@CVisualTreeData@@MEAAXPEAVCVisualTree@@PEAVCVisual@@@Z @ 0x18004A6B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CVisualTreeData::Initialize(CVisualTreeData *this, struct CVisualTree *a2, struct CVisual *a3)
{
  *((_QWORD *)this + 52) = a2;
  CTreeData::Initialize(this, 0LL, a3);
}
