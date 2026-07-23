/*
 * XREFs of EtwpLogKernelTraceRundown @ 0x14093DDB0
 * Callers:
 *     EtwpCheckGuidAccessAndDoRundown @ 0x14093D91C (EtwpCheckGuidAccessAndDoRundown.c)
 *     EtwpCheckLoggerAccessAndDoRundown @ 0x14093DA54 (EtwpCheckLoggerAccessAndDoRundown.c)
 * Callees:
 *     EtwpLogGroupMask @ 0x1407975B8 (EtwpLogGroupMask.c)
 *     EtwpKernelTraceRundown @ 0x14079763C (EtwpKernelTraceRundown.c)
 *     EtwpLogAlwaysPresentRundown @ 0x140798180 (EtwpLogAlwaysPresentRundown.c)
 */

void __fastcall EtwpLogKernelTraceRundown(
        __int64 a1,
        unsigned int a2,
        __int128 *a3,
        unsigned __int8 a4,
        __int64 a5,
        int a6)
{
  EtwpLogGroupMask(a1, a2, a3, 0x20u);
  EtwpKernelTraceRundown((int *)a3, a1, a2, a4, a5, a6);
  EtwpLogAlwaysPresentRundown(a1, a2);
}
