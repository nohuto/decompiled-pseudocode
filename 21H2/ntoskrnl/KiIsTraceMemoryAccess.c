/*
 * XREFs of KiIsTraceMemoryAccess @ 0x1402A2CD0
 * Callers:
 *     KeInvalidAccessAllowed @ 0x1402A2C40 (KeInvalidAccessAllowed.c)
 * Callees:
 *     <none>
 */

bool __fastcall KiIsTraceMemoryAccess(unsigned __int64 a1)
{
  return KiDynamicTraceEnabled && a1 >= qword_140CFCBD8 && a1 < qword_140CFCBE0 && KeGetCurrentIrql() == 15;
}
