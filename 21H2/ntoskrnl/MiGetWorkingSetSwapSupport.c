/*
 * XREFs of MiGetWorkingSetSwapSupport @ 0x1402872B0
 * Callers:
 *     MmQueryProcessWorkingSetSwapPages @ 0x140286CF0 (MmQueryProcessWorkingSetSwapPages.c)
 *     MiOutPageSingleKernelStack @ 0x140286DB0 (MiOutPageSingleKernelStack.c)
 *     MiOutlawInswaps @ 0x1402A098C (MiOutlawInswaps.c)
 *     MmInSwapWorkingSet @ 0x1402A1434 (MmInSwapWorkingSet.c)
 *     MmOutSwapWorkingSet @ 0x1402A1700 (MmOutSwapWorkingSet.c)
 *     MiWsleFlush @ 0x140332240 (MiWsleFlush.c)
 * Callees:
 *     MiGetSharedVm @ 0x1402BF850 (MiGetSharedVm.c)
 */

__int64 __fastcall MiGetWorkingSetSwapSupport(__int64 a1, __int64 a2)
{
  if ( (*(_BYTE *)(a1 + 184) & 7) != 0 )
    return 0LL;
  else
    return *(_QWORD *)(MiGetSharedVm(a1, a2) + 24);
}
