/*
 * XREFs of MiProcessWsInSwapRanges @ 0x14025EA9C
 * Callers:
 *     MiProcessWsInSwapSupport @ 0x14025EC08 (MiProcessWsInSwapSupport.c)
 * Callees:
 *     MiReleaseOutSwapReservations @ 0x14025EB44 (MiReleaseOutSwapReservations.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     MmPrefetchVirtualMemory @ 0x1406EC048 (MmPrefetchVirtualMemory.c)
 */

struct _KTHREAD *__fastcall MiProcessWsInSwapRanges(_QWORD *a1, __int64 a2, char a3)
{
  int v6; // edi
  struct _KTHREAD *result; // rax
  struct _KTHREAD *CurrentThread; // r8

  v6 = a3 & 2;
  if ( (a3 & 2) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
  }
  result = (struct _KTHREAD *)MmPrefetchVirtualMemory((HANDLE)-(__int64)(*a1 < 0xFFFF800000000000uLL));
  if ( v6 )
  {
    result = KeGetCurrentThread();
    if ( result->SpecialApcDisable++ == -1 )
    {
      result = (struct _KTHREAD *)((char *)result + 152);
      if ( *(struct _KTHREAD **)&result->Header.Lock != result )
        result = (struct _KTHREAD *)KiCheckForKernelApcDelivery();
    }
  }
  if ( (a3 & 1) == 0 )
    return (struct _KTHREAD *)MiReleaseOutSwapReservations(a1, a2);
  return result;
}
