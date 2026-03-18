/*
 * XREFs of MiGetWorkingSetSwapSupport @ 0x1402829A8
 * Callers:
 *     MiOutlawInswaps @ 0x14025F440 (MiOutlawInswaps.c)
 *     MmInSwapWorkingSet @ 0x14025F4D4 (MmInSwapWorkingSet.c)
 *     MmOutSwapWorkingSet @ 0x140260144 (MmOutSwapWorkingSet.c)
 *     MiOutPageSingleKernelStack @ 0x1402704A0 (MiOutPageSingleKernelStack.c)
 *     MmQueryProcessWorkingSetSwapPages @ 0x1402A188C (MmQueryProcessWorkingSetSwapPages.c)
 *     MiWsleFlush @ 0x1402C1F50 (MiWsleFlush.c)
 * Callees:
 *     MiGetSharedVm @ 0x140282AD0 (MiGetSharedVm.c)
 */

__int64 __fastcall MiGetWorkingSetSwapSupport(__int64 a1)
{
  if ( (*(_BYTE *)(a1 + 184) & 7) != 0 )
    return 0LL;
  else
    return *(_QWORD *)(MiGetSharedVm(a1) + 24);
}
