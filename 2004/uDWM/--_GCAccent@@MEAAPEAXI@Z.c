/*
 * XREFs of ??_GCAccent@@MEAAPEAXI@Z @ 0x18000D3F0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CAccent@@MEAA@XZ @ 0x18000D438 (--1CAccent@@MEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800560C0 (_guard_dispatch_icall_nop.c)
 */

CAccent *__fastcall CAccent::`scalar deleting destructor'(CAccent *this, char a2)
{
  CAccent::~CAccent(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::HeapBase *, CAccent *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
