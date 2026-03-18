/*
 * XREFs of ?TryBufferHasSameContent@UmfdAllocation@@CG_NPAX0I@Z @ 0xE0606
 * Callers:
 *     <none>
 * Callees:
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 */

bool __stdcall UmfdAllocation::TryBufferHasSameContent(void *Source1, void *Source2, SIZE_T Length)
{
  return RtlCompareMemory(Source1, Source2, Length) == Length;
}
