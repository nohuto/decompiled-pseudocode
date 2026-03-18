/*
 * XREFs of IoSetDumpRangeForPartialKernelDump @ 0x140505CD0
 * Callers:
 *     <none>
 * Callees:
 *     IoSetDumpRange @ 0x1404FCF30 (IoSetDumpRange.c)
 */

__int64 __fastcall IoSetDumpRangeForPartialKernelDump(__int64 a1, char *a2, unsigned __int64 a3, int a4)
{
  return IoSetDumpRange(a1, a2, a3, a4);
}
