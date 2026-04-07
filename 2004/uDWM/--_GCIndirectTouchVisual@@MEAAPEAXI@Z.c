/*
 * XREFs of ??_GCIndirectTouchVisual@@MEAAPEAXI@Z @ 0x1800AD810
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800560C0 (_guard_dispatch_icall_nop.c)
 *     ??1CIndirectTouchVisual@@MEAA@XZ @ 0x1800AD77C (--1CIndirectTouchVisual@@MEAA@XZ.c)
 */

CBaseObject **__fastcall CIndirectTouchVisual::`scalar deleting destructor'(CBaseObject **this, char a2)
{
  CIndirectTouchVisual::~CIndirectTouchVisual(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::HeapBase *, CBaseObject **))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
