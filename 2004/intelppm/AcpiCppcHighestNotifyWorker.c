/*
 * XREFs of AcpiCppcHighestNotifyWorker @ 0x1C00318E0
 * Callers:
 *     <none>
 * Callees:
 *     CpcHighestNotifyWorker @ 0x1C002D9E4 (CpcHighestNotifyWorker.c)
 */

__int64 __fastcall AcpiCppcHighestNotifyWorker(__int64 a1, struct _IO_WORKITEM *a2)
{
  return CpcHighestNotifyWorker(a1, a2, "Notify 0x85");
}
