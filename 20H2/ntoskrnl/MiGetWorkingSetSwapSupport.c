/*
 * XREFs of MiGetWorkingSetSwapSupport @ 0x140250E80
 * Callers:
 *     MiOutPageSingleKernelStack @ 0x140250980 (MiOutPageSingleKernelStack.c)
 *     MmQueryProcessWorkingSetSwapPages @ 0x14025371C (MmQueryProcessWorkingSetSwapPages.c)
 *     MiWsleFlush @ 0x1402AAC40 (MiWsleFlush.c)
 *     MmInSwapWorkingSet @ 0x140339228 (MmInSwapWorkingSet.c)
 *     MmOutSwapWorkingSet @ 0x1403394F4 (MmOutSwapWorkingSet.c)
 *     MiOutlawInswaps @ 0x14033B3FC (MiOutlawInswaps.c)
 * Callees:
 *     MiGetSharedVm @ 0x14027C730 (MiGetSharedVm.c)
 */

__int64 __fastcall MiGetWorkingSetSwapSupport(__int64 a1, __int64 a2)
{
  if ( (*(_BYTE *)(a1 + 184) & 7) != 0 )
    return 0LL;
  else
    return *(_QWORD *)(MiGetSharedVm(a1, a2) + 24);
}
