/*
 * XREFs of sub_180037180 @ 0x180037180
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PTP_WORK __fastcall sub_180037180(
        __int64 a1,
        void (__stdcall *a2)(PTP_CALLBACK_INSTANCE Instance, PVOID Context, PTP_WORK Work),
        void *a3)
{
  return CreateThreadpoolWork(a2, a3, (PTP_CALLBACK_ENVIRON)(a1 + 8));
}
