/*
 * XREFs of sub_1800371F0 @ 0x1800371F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PTP_TIMER __fastcall sub_1800371F0(
        __int64 a1,
        void (__stdcall *a2)(PTP_CALLBACK_INSTANCE Instance, PVOID Context, PTP_TIMER Timer),
        void *a3)
{
  return CreateThreadpoolTimer(a2, a3, (PTP_CALLBACK_ENVIRON)(a1 + 8));
}
