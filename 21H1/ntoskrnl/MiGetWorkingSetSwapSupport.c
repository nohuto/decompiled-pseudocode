/*
 * XREFs of MiGetWorkingSetSwapSupport @ 0x1402CCB68
 * Callers:
 *     MiWsleFlush @ 0x140220450 (MiWsleFlush.c)
 *     MmInSwapWorkingSet @ 0x1402CBE58 (MmInSwapWorkingSet.c)
 *     MmOutSwapWorkingSet @ 0x1402CC124 (MmOutSwapWorkingSet.c)
 *     MiOutlawInswaps @ 0x1402CCA18 (MiOutlawInswaps.c)
 *     MmQueryProcessWorkingSetSwapPages @ 0x1402CCAAC (MmQueryProcessWorkingSetSwapPages.c)
 *     MiOutPageSingleKernelStack @ 0x140351830 (MiOutPageSingleKernelStack.c)
 * Callees:
 *     MiGetSharedVm @ 0x14021A770 (MiGetSharedVm.c)
 */

__int64 __fastcall MiGetWorkingSetSwapSupport(__int64 a1)
{
  if ( (*(_BYTE *)(a1 + 184) & 7) != 0 )
    return 0LL;
  else
    return *((_QWORD *)MiGetSharedVm(a1) + 3);
}
