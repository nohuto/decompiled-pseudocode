/*
 * XREFs of MiProcessWsInSwapRanges @ 0x14030E630
 * Callers:
 *     MiProcessWsInSwapSupport @ 0x14030E55C (MiProcessWsInSwapSupport.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x140207EC0 (KiLeaveGuardedRegionUnsafe.c)
 *     MiReleaseOutSwapReservations @ 0x14030E6E8 (MiReleaseOutSwapReservations.c)
 *     MmPrefetchVirtualMemory @ 0x1406D03C8 (MmPrefetchVirtualMemory.c)
 */

__int64 __fastcall MiProcessWsInSwapRanges(_QWORD *a1, __int64 a2, char a3)
{
  int v6; // edi
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // r8

  v6 = a3 & 2;
  if ( (a3 & 2) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
  }
  result = MmPrefetchVirtualMemory(-(__int64)(*a1 < 0xFFFF800000000000uLL));
  if ( v6 )
    result = KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
  if ( (a3 & 1) == 0 )
    return MiReleaseOutSwapReservations(a1, a2);
  return result;
}
