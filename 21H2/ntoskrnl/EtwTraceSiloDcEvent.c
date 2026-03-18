/*
 * XREFs of EtwTraceSiloDcEvent @ 0x14062E480
 * Callers:
 *     MmLogQueryCombineStats @ 0x1406EA034 (MmLogQueryCombineStats.c)
 *     CmEtwRunDown @ 0x1409103FC (CmEtwRunDown.c)
 *     CmpLogHiveRundownEvent @ 0x140910AA4 (CmpLogHiveRundownEvent.c)
 *     MmIdentifyPhysicalMemory @ 0x14096B768 (MmIdentifyPhysicalMemory.c)
 *     MmPerfLogSessionRundown @ 0x14096DDA8 (MmPerfLogSessionRundown.c)
 * Callees:
 *     EtwpLogKernelEvent @ 0x1402AB170 (EtwpLogKernelEvent.c)
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
