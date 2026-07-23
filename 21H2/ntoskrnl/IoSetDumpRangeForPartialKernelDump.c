/*
 * XREFs of IoSetDumpRangeForPartialKernelDump @ 0x14050B9C0
 * Callers:
 *     <none>
 * Callees:
 *     IoSetDumpRange @ 0x140502950 (IoSetDumpRange.c)
 */

__int64 __fastcall IoSetDumpRangeForPartialKernelDump(__int64 a1, char *a2, unsigned __int64 a3, int a4)
{
  return IoSetDumpRange(a1, a2, a3, a4);
}
