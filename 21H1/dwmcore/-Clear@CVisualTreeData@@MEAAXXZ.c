/*
 * XREFs of ?Clear@CVisualTreeData@@MEAAXXZ @ 0x1801B14C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Clear@CTreeData@@MEAAXXZ @ 0x1800C1190 (-Clear@CTreeData@@MEAAXXZ.c)
 */

void __fastcall CVisualTreeData::Clear(CVisualTreeData *this)
{
  CTreeData::Clear(this);
  *((_QWORD *)this + 40) = 0LL;
}
