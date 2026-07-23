/*
 * XREFs of KiIsTraceMemoryAccess @ 0x140306440
 * Callers:
 *     KeInvalidAccessAllowed @ 0x1403063B0 (KeInvalidAccessAllowed.c)
 * Callees:
 *     <none>
 */

bool __fastcall KiIsTraceMemoryAccess(unsigned __int64 a1)
{
  return KiDynamicTraceEnabled && a1 >= ControlPc && a1 < qword_140CFCBE0 && KeGetCurrentIrql() == 15;
}
