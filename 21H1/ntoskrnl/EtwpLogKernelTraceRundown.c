/*
 * XREFs of EtwpLogKernelTraceRundown @ 0x14093933C
 * Callers:
 *     EtwpCheckGuidAccessAndDoRundown @ 0x140938EA8 (EtwpCheckGuidAccessAndDoRundown.c)
 *     EtwpCheckLoggerAccessAndDoRundown @ 0x140938FE0 (EtwpCheckLoggerAccessAndDoRundown.c)
 * Callees:
 *     EtwpLogGroupMask @ 0x1407800D4 (EtwpLogGroupMask.c)
 *     EtwpKernelTraceRundown @ 0x140780158 (EtwpKernelTraceRundown.c)
 *     EtwpLogAlwaysPresentRundown @ 0x140780CA0 (EtwpLogAlwaysPresentRundown.c)
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
