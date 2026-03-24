/*
 * XREFs of MiGetWorkingSetSwapSupport @ 0x1402D5F60
 * Callers:
 *     MiOutlawInswaps @ 0x1402D5144 (MiOutlawInswaps.c)
 *     MmQueryProcessWorkingSetSwapPages @ 0x1402D59A4 (MmQueryProcessWorkingSetSwapPages.c)
 *     MiOutPageSingleKernelStack @ 0x1402D5A60 (MiOutPageSingleKernelStack.c)
 *     MiWsleFlush @ 0x1403274F0 (MiWsleFlush.c)
 *     MmInSwapWorkingSet @ 0x14035C504 (MmInSwapWorkingSet.c)
 *     MmOutSwapWorkingSet @ 0x14035C7D0 (MmOutSwapWorkingSet.c)
 * Callees:
 *     MiGetSharedVm @ 0x14021AF50 (MiGetSharedVm.c)
 */

__int64 __fastcall MiGetWorkingSetSwapSupport(__int64 a1)
{
  if ( (*(_BYTE *)(a1 + 184) & 7) != 0 )
    return 0LL;
  else
    return *((_QWORD *)MiGetSharedVm(a1) + 3);
}
