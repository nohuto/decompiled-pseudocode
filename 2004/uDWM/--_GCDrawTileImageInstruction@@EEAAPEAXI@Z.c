/*
 * XREFs of ??_GCDrawTileImageInstruction@@EEAAPEAXI@Z @ 0x18003D920
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180017894 (-Release@CBaseObject@@QEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800560C0 (_guard_dispatch_icall_nop.c)
 */

CDrawTileImageInstruction *__fastcall CDrawTileImageInstruction::`scalar deleting destructor'(
        CDrawTileImageInstruction *this,
        char a2)
{
  CBaseObject *v4; // rcx

  *(_QWORD *)this = &CDrawTileImageInstruction::`vftable';
  v4 = (CBaseObject *)*((_QWORD *)this + 6);
  if ( v4 )
  {
    CBaseObject::Release(v4);
    *((_QWORD *)this + 6) = 0LL;
  }
  *(_QWORD *)this = &CGlassColorizationResources::`vftable';
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::HeapBase *, CDrawTileImageInstruction *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
