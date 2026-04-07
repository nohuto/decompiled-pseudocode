/*
 * XREFs of ??1CWindowData@@QEAA@XZ @ 0x180014210
 * Callers:
 *     ?ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x18001472C (-ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ??_GCWindowData@@QEAAPEAXI@Z @ 0x18002A9B0 (--_GCWindowData@@QEAAPEAXI@Z.c)
 *     ??1CAutoRestoreAnimationWindowData@@QEAA@XZ @ 0x1800ADF4C (--1CAutoRestoreAnimationWindowData@@QEAA@XZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180056410 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CWindowData::~CWindowData(CWindowData **this)
{
  if ( this[2] != (CWindowData *)((char *)this + 702) )
    (*(void (__fastcall **)(WPF::HeapBase *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap);
  if ( this[68] != this[69] )
  {
    (*(void (__fastcall **)(WPF::HeapBase *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap);
    this[68] = 0LL;
  }
  if ( this[63] != this[64] )
  {
    (*(void (__fastcall **)(WPF::HeapBase *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap);
    this[63] = 0LL;
  }
  if ( this[59] != this[60] )
  {
    (*(void (__fastcall **)(WPF::HeapBase *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap);
    this[59] = 0LL;
  }
  if ( this[54] != this[55] )
  {
    (*(void (__fastcall **)(WPF::HeapBase *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap);
    this[54] = 0LL;
  }
}
