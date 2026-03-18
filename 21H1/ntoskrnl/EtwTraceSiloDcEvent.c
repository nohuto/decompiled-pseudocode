/*
 * XREFs of EtwTraceSiloDcEvent @ 0x1405A25D0
 * Callers:
 *     CmEtwRunDown @ 0x1408659F8 (CmEtwRunDown.c)
 *     CmpLogHiveRundownEvent @ 0x14086608C (CmpLogHiveRundownEvent.c)
 *     MmIdentifyPhysicalMemory @ 0x1408C2768 (MmIdentifyPhysicalMemory.c)
 *     MmPerfLogSessionRundown @ 0x1408C42C8 (MmPerfLogSessionRundown.c)
 *     MmLogQueryCombineStats @ 0x1408D52B0 (MmLogQueryCombineStats.c)
 * Callees:
 *     EtwpLogKernelEvent @ 0x1402085B0 (EtwpLogKernelEvent.c)
 */

void __fastcall EtwTraceSiloDcEvent(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        unsigned int a4,
        unsigned __int16 a5,
        unsigned int a6)
{
  EtwpLogKernelEvent(a1, a3, a4, a2, a5, a6);
}
