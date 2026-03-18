/*
 * XREFs of MiGetWorkingSetSwapSupport @ 0x1402F237C
 * Callers:
 *     MiWsleFlush @ 0x1402B30D0 (MiWsleFlush.c)
 *     MiOutPageSingleKernelStack @ 0x1402F5850 (MiOutPageSingleKernelStack.c)
 *     MmInSwapWorkingSet @ 0x14030DA98 (MmInSwapWorkingSet.c)
 *     MmOutSwapWorkingSet @ 0x14030DD64 (MmOutSwapWorkingSet.c)
 *     MiOutlawInswaps @ 0x140310854 (MiOutlawInswaps.c)
 *     MmQueryProcessWorkingSetSwapPages @ 0x140311198 (MmQueryProcessWorkingSetSwapPages.c)
 * Callees:
 *     MiGetSharedVm @ 0x1402AD3F0 (MiGetSharedVm.c)
 */

__int64 __fastcall MiGetWorkingSetSwapSupport(__int64 a1)
{
  if ( (*(_BYTE *)(a1 + 184) & 7) != 0 )
    return 0LL;
  else
    return *((_QWORD *)MiGetSharedVm(a1) + 3);
}
