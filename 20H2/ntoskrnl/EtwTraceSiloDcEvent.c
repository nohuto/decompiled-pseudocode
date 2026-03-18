/*
 * XREFs of EtwTraceSiloDcEvent @ 0x1405A6760
 * Callers:
 *     CmEtwRunDown @ 0x14086C738 (CmEtwRunDown.c)
 *     CmpLogHiveRundownEvent @ 0x14086CDCC (CmpLogHiveRundownEvent.c)
 *     MmIdentifyPhysicalMemory @ 0x1408C98F8 (MmIdentifyPhysicalMemory.c)
 *     MmPerfLogSessionRundown @ 0x1408CB458 (MmPerfLogSessionRundown.c)
 *     MmLogQueryCombineStats @ 0x1408DC440 (MmLogQueryCombineStats.c)
 * Callees:
 *     EtwpLogKernelEvent @ 0x140226150 (EtwpLogKernelEvent.c)
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
