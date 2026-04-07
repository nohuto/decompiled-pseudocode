/*
 * XREFs of ??_GCTetherVisual@@MEAAPEAXI@Z @ 0x1800A4E10
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800560C0 (_guard_dispatch_icall_nop.c)
 *     ??1CTetherVisual@@MEAA@XZ @ 0x1800A4D1C (--1CTetherVisual@@MEAA@XZ.c)
 */

CBaseObject **__fastcall CTetherVisual::`scalar deleting destructor'(CBaseObject **this, char a2)
{
  CTetherVisual::~CTetherVisual(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::HeapBase *, CBaseObject **))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
