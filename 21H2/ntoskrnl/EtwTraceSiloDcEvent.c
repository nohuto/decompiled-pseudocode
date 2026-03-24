/*
 * XREFs of EtwTraceSiloDcEvent @ 0x1405A8190
 * Callers:
 *     CmEtwRunDown @ 0x14086A368 (CmEtwRunDown.c)
 *     CmpLogHiveRundownEvent @ 0x14086A9FC (CmpLogHiveRundownEvent.c)
 *     MmIdentifyPhysicalMemory @ 0x1408C70B8 (MmIdentifyPhysicalMemory.c)
 *     MmPerfLogSessionRundown @ 0x1408C8C18 (MmPerfLogSessionRundown.c)
 *     MmLogQueryCombineStats @ 0x1408D9C00 (MmLogQueryCombineStats.c)
 * Callees:
 *     EtwpLogKernelEvent @ 0x140350000 (EtwpLogKernelEvent.c)
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
