/*
 * XREFs of KiIsTraceMemoryAccess @ 0x1402F65F0
 * Callers:
 *     KeInvalidAccessAllowed @ 0x1402F6560 (KeInvalidAccessAllowed.c)
 * Callees:
 *     <none>
 */

bool __fastcall KiIsTraceMemoryAccess(unsigned __int64 a1)
{
  return KiDynamicTraceEnabled && a1 >= ControlPc && a1 < qword_140CFCBB0 && KeGetCurrentIrql() == 15;
}
