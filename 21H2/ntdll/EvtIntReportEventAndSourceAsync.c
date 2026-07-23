/*
 * XREFs of EvtIntReportEventAndSourceAsync @ 0x18004FE20
 * Callers:
 *     <none>
 * Callees:
 *     EvtIntReportEventWorker @ 0x18004FE90 (EvtIntReportEventWorker.c)
 */

__int64 __fastcall EvtIntReportEventAndSourceAsync(
        int a1,
        int a2,
        unsigned __int16 a3,
        __int16 a4,
        char a5,
        void *a6,
        __int16 a7,
        int a8,
        __int64 a9,
        __int64 a10)
{
  return EvtIntReportEventWorker(a1, 0, a2, a3, a4, a5, a6, a7, a8, a9, a10);
}
