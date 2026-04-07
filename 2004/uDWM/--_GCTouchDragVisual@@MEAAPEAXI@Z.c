/*
 * XREFs of ??_GCTouchDragVisual@@MEAAPEAXI@Z @ 0x1800A4090
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800560C0 (_guard_dispatch_icall_nop.c)
 *     ??1CTouchDragVisual@@MEAA@XZ @ 0x1800A3FB4 (--1CTouchDragVisual@@MEAA@XZ.c)
 */

CBaseObject **__fastcall CTouchDragVisual::`scalar deleting destructor'(CBaseObject **this, char a2)
{
  CTouchDragVisual::~CTouchDragVisual(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::HeapBase *, CBaseObject **))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
