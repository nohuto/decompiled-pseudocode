/*
 * XREFs of ??_ECDrawGeometryInstruction@@EEAAPEAXI@Z @ 0x180015EE0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180017894 (-Release@CBaseObject@@QEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800560C0 (_guard_dispatch_icall_nop.c)
 */

CDrawGeometryInstruction *__fastcall CDrawGeometryInstruction::`vector deleting destructor'(
        CDrawGeometryInstruction *this,
        char a2)
{
  CBaseObject *v4; // rcx
  CBaseObject *v5; // rcx

  *(_QWORD *)this = &CDrawGeometryInstruction::`vftable';
  v4 = (CBaseObject *)*((_QWORD *)this + 3);
  if ( v4 )
    CBaseObject::Release(v4);
  v5 = (CBaseObject *)*((_QWORD *)this + 2);
  if ( v5 )
    CBaseObject::Release(v5);
  *(_QWORD *)this = &CGlassColorizationResources::`vftable';
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::HeapBase *, CDrawGeometryInstruction *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
