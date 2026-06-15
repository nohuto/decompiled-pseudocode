/*
 * XREFs of sub_1800372D0 @ 0x1800372D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PTP_WAIT __fastcall sub_1800372D0(
        __int64 a1,
        void (__stdcall *a2)(PTP_CALLBACK_INSTANCE Instance, PVOID Context, PTP_WAIT Wait, TP_WAIT_RESULT WaitResult),
        void *a3)
{
  return CreateThreadpoolWait(a2, a3, (PTP_CALLBACK_ENVIRON)(a1 + 8));
}
