/*
 * XREFs of EtwTraceSiloDcEvent @ 0x1405A83C0
 * Callers:
 *     CmEtwRunDown @ 0x14086A4C8 (CmEtwRunDown.c)
 *     CmpLogHiveRundownEvent @ 0x14086AB5C (CmpLogHiveRundownEvent.c)
 *     MmIdentifyPhysicalMemory @ 0x1408C7218 (MmIdentifyPhysicalMemory.c)
 *     MmPerfLogSessionRundown @ 0x1408C8D78 (MmPerfLogSessionRundown.c)
 *     MmLogQueryCombineStats @ 0x1408D9D60 (MmLogQueryCombineStats.c)
 * Callees:
 *     EtwpLogKernelEvent @ 0x14035AD50 (EtwpLogKernelEvent.c)
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
