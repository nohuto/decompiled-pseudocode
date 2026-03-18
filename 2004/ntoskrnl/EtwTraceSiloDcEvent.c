/*
 * XREFs of EtwTraceSiloDcEvent @ 0x1405A2CC0
 * Callers:
 *     CmEtwRunDown @ 0x140866D18 (CmEtwRunDown.c)
 *     CmpLogHiveRundownEvent @ 0x1408673AC (CmpLogHiveRundownEvent.c)
 *     MmIdentifyPhysicalMemory @ 0x1408C3AB8 (MmIdentifyPhysicalMemory.c)
 *     MmPerfLogSessionRundown @ 0x1408C5618 (MmPerfLogSessionRundown.c)
 *     MmLogQueryCombineStats @ 0x1408D6600 (MmLogQueryCombineStats.c)
 * Callees:
 *     EtwpLogKernelEvent @ 0x14029B0C0 (EtwpLogKernelEvent.c)
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
