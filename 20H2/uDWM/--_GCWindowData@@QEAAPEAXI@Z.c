/*
 * XREFs of ??_GCWindowData@@QEAAPEAXI@Z @ 0x18002A9B0
 * Callers:
 *     ??1CWindowSnapshot@@MEAA@XZ @ 0x180029EF8 (--1CWindowSnapshot@@MEAA@XZ.c)
 *     ??1CWindowIconic@@MEAA@XZ @ 0x180043888 (--1CWindowIconic@@MEAA@XZ.c)
 * Callees:
 *     ??1CWindowData@@QEAA@XZ @ 0x180014210 (--1CWindowData@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x180056410 (_guard_dispatch_icall_nop.c)
 */

CWindowData **__fastcall CWindowData::`scalar deleting destructor'(CWindowData **this)
{
  CWindowData::~CWindowData(this);
  (*(void (__fastcall **)(WPF::HeapBase *, CWindowData **))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
    WPF::g_pProcessHeap,
    this);
  return this;
}
