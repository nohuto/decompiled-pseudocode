/*
 * XREFs of ?RemoveAllDescendants@CSwitchItemGrid@@UEAAXXZ @ 0x1803A7F40
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ?RemoveAllDescendants@CMultitaskingViewElementBase@@UEAAXXZ @ 0x1803A3CC0 (-RemoveAllDescendants@CMultitaskingViewElementBase@@UEAAXXZ.c)
 *     ?Reset@GridLayout@@QEAAXXZ @ 0x1803A808C (-Reset@GridLayout@@QEAAXXZ.c)
 */

void __fastcall CSwitchItemGrid::RemoveAllDescendants(CSwitchItemGrid *this)
{
  char *v1; // rdi

  v1 = (char *)this + 208;
  (*(void (__fastcall **)(char *))(*((_QWORD *)this + 26) + 56LL))((char *)this + 208);
  GridLayout::Reset((CSwitchItemGrid *)((char *)this + 768));
  CMultitaskingViewElementBase::RemoveAllDescendants(this);
  (*(void (__fastcall **)(char *))(*(_QWORD *)v1 + 64LL))(v1);
}
