/*
 * XREFs of MmPrefetchVirtualAddresses @ 0x1406EBFB0
 * Callers:
 *     VmpPrefetchForVirtualFault @ 0x1409DA3EC (VmpPrefetchForVirtualFault.c)
 * Callees:
 *     MiGetEffectivePagePriorityThread @ 0x1402E670C (MiGetEffectivePagePriorityThread.c)
 *     PsGetIoPriorityThread @ 0x14033D760 (PsGetIoPriorityThread.c)
 *     MmPrefetchVirtualMemory @ 0x1406EC048 (MmPrefetchVirtualMemory.c)
 */

__int64 __fastcall MmPrefetchVirtualAddresses(_DWORD *a1)
{
  unsigned int v1; // edx
  __int64 v2; // r10

  if ( *a1 != 1 )
    return 3221225711LL;
  v1 = a1[1];
  if ( v1 >= 8 || (v1 & 6) > 4 )
    return 3221225711LL;
  if ( (v1 & 6) != 0 && (v1 & 6) != 2 )
    MiGetEffectivePagePriorityThread((__int64)KeGetCurrentThread());
  PsGetIoPriorityThread((__int64)KeGetCurrentThread());
  return MmPrefetchVirtualMemory(*(HANDLE *)(v2 + 8));
}
