/*
 * XREFs of _RtlDumpResource@4 @ 0x4B34A5E0
 * Callers:
 *     <none>
 * Callees:
 *     _DbgPrint @ 0x4B2AB8D0 (_DbgPrint.c)
 */

int __stdcall RtlDumpResource(_DWORD *a1)
{
  DbgPrint("Resource @ %p\n", a1);
  DbgPrint(" NumberOfWaitingShared = %lx\n", a1[7]);
  DbgPrint(" NumberOfWaitingExclusive = %lx\n", a1[9]);
  return DbgPrint(" NumberOfActive = %lx\n", a1[10]);
}
