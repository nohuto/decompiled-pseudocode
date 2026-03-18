/*
 * XREFs of HalFreeAdapterObject @ 0x1404C0C20
 * Callers:
 *     HalpAllocateDmaResourcesInternal @ 0x1404C51FC (HalpAllocateDmaResourcesInternal.c)
 * Callees:
 *     IoFreeAdapterChannel @ 0x1404B3750 (IoFreeAdapterChannel.c)
 */

void __fastcall HalFreeAdapterObject(__int64 a1, int a2)
{
  if ( a2 != 2 )
  {
    if ( a2 != 3 )
      return;
    *(_DWORD *)(a1 + 240) = 0;
  }
  IoFreeAdapterChannel((PDMA_ADAPTER)a1);
}
