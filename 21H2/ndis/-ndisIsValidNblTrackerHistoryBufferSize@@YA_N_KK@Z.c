/*
 * XREFs of ?ndisIsValidNblTrackerHistoryBufferSize@@YA_N_KK@Z @ 0x1C0147300
 * Callers:
 *     ?ndisCalculateIdealNblTrackerHistoryBufferSize@@YAXXZ @ 0x1C011765C (-ndisCalculateIdealNblTrackerHistoryBufferSize@@YAXXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall ndisIsValidNblTrackerHistoryBufferSize(unsigned __int64 a1)
{
  return ((ndisNblTrackerHistorySize - 1) & ndisNblTrackerHistorySize) == 0 && ndisNblTrackerHistorySize <= a1;
}
