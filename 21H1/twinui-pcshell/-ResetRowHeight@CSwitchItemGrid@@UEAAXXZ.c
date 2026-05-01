/*
 * XREFs of ?ResetRowHeight@CSwitchItemGrid@@UEAAXXZ @ 0x180386E70
 * Callers:
 *     <none>
 * Callees:
 *     ?Reset@GridLayout@@QEAAXXZ @ 0x180386E3C (-Reset@GridLayout@@QEAAXXZ.c)
 */

void __fastcall CSwitchItemGrid::ResetRowHeight(CSwitchItemGrid *this)
{
  GridLayout::Reset((CSwitchItemGrid *)((char *)this + 560));
  CMultitaskingViewElementBase::_LayoutChildren((_QWORD *)this - 26, 0, 0LL);
}
