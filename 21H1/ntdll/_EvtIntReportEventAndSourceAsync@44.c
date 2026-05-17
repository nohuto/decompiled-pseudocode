/*
 * XREFs of _EvtIntReportEventAndSourceAsync@44 @ 0x4B382B80
 * Callers:
 *     <none>
 * Callees:
 *     _EvtIntReportEventWorker@48 @ 0x4B382BB1 (_EvtIntReportEventWorker@48.c)
 */

int __stdcall EvtIntReportEventAndSourceAsync(
        int a1,
        int a2,
        int a3,
        __int16 a4,
        __int16 a5,
        char a6,
        int a7,
        __int16 a8,
        int a9,
        int a10,
        int a11)
{
  return EvtIntReportEventWorker(a1, a2, a4, a5, a6, a7, a8, a9, a10, a11);
}
