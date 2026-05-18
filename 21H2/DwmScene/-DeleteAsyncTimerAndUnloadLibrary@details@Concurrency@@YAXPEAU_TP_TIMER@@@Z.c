/*
 * XREFs of ?DeleteAsyncTimerAndUnloadLibrary@details@Concurrency@@YAXPEAU_TP_TIMER@@@Z @ 0x18001B0A8
 * Callers:
 *     sub_180017A94 @ 0x180017A94 (sub_180017A94.c)
 *     sub_180017B64 @ 0x180017B64 (sub_180017B64.c)
 *     sub_180017C34 @ 0x180017C34 (sub_180017C34.c)
 *     sub_18001950C @ 0x18001950C (sub_18001950C.c)
 *     sub_180019674 @ 0x180019674 (sub_180019674.c)
 * Callees:
 *     <none>
 */

void __fastcall Concurrency::details::DeleteAsyncTimerAndUnloadLibrary(PTP_TIMER pti, struct _TP_TIMER *a2)
{
  SetThreadpoolTimer(pti, 0LL, 0, 0);
  WaitForThreadpoolTimerCallbacks(pti, 1);
  CloseThreadpoolTimer(pti);
}
