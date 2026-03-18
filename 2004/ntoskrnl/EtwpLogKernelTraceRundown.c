/*
 * XREFs of EtwpLogKernelTraceRundown @ 0x14093A5DC
 * Callers:
 *     EtwpCheckGuidAccessAndDoRundown @ 0x14093A148 (EtwpCheckGuidAccessAndDoRundown.c)
 *     EtwpCheckLoggerAccessAndDoRundown @ 0x14093A280 (EtwpCheckLoggerAccessAndDoRundown.c)
 * Callees:
 *     EtwpLogGroupMask @ 0x14077F6F8 (EtwpLogGroupMask.c)
 *     EtwpKernelTraceRundown @ 0x14077F77C (EtwpKernelTraceRundown.c)
 *     EtwpLogAlwaysPresentRundown @ 0x1407802C0 (EtwpLogAlwaysPresentRundown.c)
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
