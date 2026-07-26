/*
 * XREFs of ?ndisCmLazyInitializeCleanup@@YAXXZ @ 0x1C00B0E6C
 * Callers:
 *     NdisSetSessionCompartmentId @ 0x1C00B1000 (NdisSetSessionCompartmentId.c)
 * Callees:
 *     <none>
 */

void ndisCmLazyInitializeCleanup(void)
{
  if ( !_InterlockedCompareExchange(&dword_1C00E62F4, 1, 0) )
    KeSetCoalescableTimer(&Timer, (LARGE_INTEGER)-300000000LL, 0x7530u, 0x1D4Cu, &Dpc);
}
