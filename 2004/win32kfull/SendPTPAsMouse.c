/*
 * XREFs of SendPTPAsMouse @ 0x1C0214850
 * Callers:
 *     <none>
 * Callees:
 *     ?QueuePTPMouseEvent@@YAXPEAXUtagPOINT@@K_K2PEAU_PTPMouseLatencyTracker@@@Z @ 0x1C0213F38 (-QueuePTPMouseEvent@@YAXPEAXUtagPOINT@@K_K2PEAU_PTPMouseLatencyTracker@@@Z.c)
 */

void __fastcall SendPTPAsMouse(
        void *a1,
        struct tagPOINT a2,
        int a3,
        __int64 a4,
        unsigned __int64 a5,
        struct _PTPMouseLatencyTracker *a6)
{
  QueuePTPMouseEvent(a1, a2, a3, a4, a5, a6);
}
