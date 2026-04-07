/*
 * XREFs of ??_ECDrawNineGridInstruction@@MEAAPEAXI@Z @ 0x18000D010
 * Callers:
 *     <none>
 * Callees:
 *     ??1CDrawNineGridInstruction@@MEAA@XZ @ 0x18000D058 (--1CDrawNineGridInstruction@@MEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x180056410 (_guard_dispatch_icall_nop.c)
 */

CDrawNineGridInstruction *__fastcall CDrawNineGridInstruction::`vector deleting destructor'(
        CDrawNineGridInstruction *this,
        char a2)
{
  CDrawNineGridInstruction::~CDrawNineGridInstruction(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::HeapBase *, CDrawNineGridInstruction *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
