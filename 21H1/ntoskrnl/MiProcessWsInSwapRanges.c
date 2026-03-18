/*
 * XREFs of MiProcessWsInSwapRanges @ 0x1402CCC64
 * Callers:
 *     MiProcessWsInSwapSupport @ 0x1402CCB90 (MiProcessWsInSwapSupport.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x140260DE0 (KiLeaveGuardedRegionUnsafe.c)
 *     MiReleaseOutSwapReservations @ 0x1402CCD1C (MiReleaseOutSwapReservations.c)
 *     MmPrefetchVirtualMemory @ 0x140655D68 (MmPrefetchVirtualMemory.c)
 */

__int64 __fastcall MiProcessWsInSwapRanges(_QWORD *a1, __int64 a2, char a3)
{
  int v6; // edi
  __int64 result; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  struct _KTHREAD *CurrentThread; // r8

  v6 = a3 & 2;
  if ( (a3 & 2) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
  }
  result = MmPrefetchVirtualMemory(-(__int64)(*a1 < 0xFFFF800000000000uLL));
  if ( v6 )
    result = KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread(), v8, v9, v10);
  if ( (a3 & 1) == 0 )
    return MiReleaseOutSwapReservations(a1, a2);
  return result;
}
