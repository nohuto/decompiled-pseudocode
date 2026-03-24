/*
 * XREFs of ?FreeCpuClipStackState@CScopedClipStack@@AEAAXPEAUCpuClipStackState@1@@Z @ 0x18018ED30
 * Callers:
 *     ?Clear@CScopedClipStack@@QEAAXXZ @ 0x18008EFC8 (-Clear@CScopedClipStack@@QEAAXXZ.c)
 *     ?PopCpuClipFromScope@CScopedClipStack@@QEAAXPEA_N@Z @ 0x18018EDB4 (-PopCpuClipFromScope@CScopedClipStack@@QEAAXPEA_N@Z.c)
 * Callees:
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800C891C (-Release@CShapePtr@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CScopedClipStack::FreeCpuClipStackState(
        CScopedClipStack *this,
        struct CScopedClipStack::CpuClipStackState *a2)
{
  void (__fastcall ***v3)(_QWORD, __int64); // rcx

  CShapePtr::Release(a2);
  v3 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)a2 + 11);
  if ( v3 )
    (**v3)(v3, 1LL);
}
