/*
 * XREFs of ??_GCDirectTouchVisual@@MEAAPEAXI@Z @ 0x180047650
 * Callers:
 *     <none>
 * Callees:
 *     ??1CDirectTouchVisual@@MEAA@XZ @ 0x180047698 (--1CDirectTouchVisual@@MEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x180056410 (_guard_dispatch_icall_nop.c)
 */

CDirectTouchVisual *__fastcall CDirectTouchVisual::`scalar deleting destructor'(CDirectTouchVisual *this, char a2)
{
  CDirectTouchVisual::~CDirectTouchVisual(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::HeapBase *, CDirectTouchVisual *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
