/*
 * XREFs of StorpUpdateUncachedExtensionAllocationRegion @ 0x1C003C524
 * Callers:
 *     StorPortGetUncachedExtension @ 0x1C0038570 (StorPortGetUncachedExtension.c)
 * Callees:
 *     RaidDmaAllocateUncachedExtension @ 0x1C0032E50 (RaidDmaAllocateUncachedExtension.c)
 *     StorFreeContiguousMemory @ 0x1C0071830 (StorFreeContiguousMemory.c)
 */

__int64 __fastcall StorpUpdateUncachedExtensionAllocationRegion(__int64 a1, int *a2)
{
  __int64 v2; // r14
  unsigned int v3; // esi
  __int64 v4; // rbp
  int UncachedExtension; // edi
  __int64 v8; // rdx
  unsigned int v9; // esi
  __int64 v10; // rcx

  v2 = a1 + 744;
  v3 = 0x80000000;
  v4 = a1 + 712;
  while ( 1 )
  {
    UncachedExtension = RaidDmaAllocateUncachedExtension(
                          v4,
                          v3,
                          *(_QWORD *)(a1 + 4440),
                          *(_QWORD *)(a1 + 4432),
                          *(_QWORD *)(a1 + 4448),
                          *(_DWORD *)(a1 + 4424),
                          *a2,
                          v2);
    if ( UncachedExtension < 0 )
    {
      v3 >>= 1;
    }
    else
    {
      v8 = *(_QWORD *)(a1 + 752) | 0xFFFFFFFFLL;
      *(_QWORD *)(a1 + 4440) = *(_QWORD *)(a1 + 752) & 0xFFFFFFFF00000000uLL;
      *(_QWORD *)(a1 + 4432) = v8;
      StorFreeContiguousMemory(v4, v2);
    }
    if ( UncachedExtension >= 0 )
      break;
    if ( v3 < 0x8000000 )
    {
      if ( *a2 != 0x80000000 )
      {
        v9 = 0x80000000;
        do
        {
          UncachedExtension = RaidDmaAllocateUncachedExtension(
                                v4,
                                v9,
                                *(_QWORD *)(a1 + 4440),
                                *(_QWORD *)(a1 + 4432),
                                *(_QWORD *)(a1 + 4448),
                                *(_DWORD *)(a1 + 4424),
                                0x80000000,
                                v2);
          if ( UncachedExtension < 0 )
          {
            v9 >>= 1;
          }
          else
          {
            v10 = *(_QWORD *)(a1 + 752);
            *a2 = 0x80000000;
            *(_QWORD *)(a1 + 4440) = v10 & 0xFFFFFFFF00000000uLL;
            *(_QWORD *)(a1 + 4432) = v10 | 0xFFFFFFFFLL;
            StorFreeContiguousMemory(v4, v2);
          }
        }
        while ( UncachedExtension < 0 && v9 >= 0x8000000 );
      }
      return (unsigned int)UncachedExtension;
    }
  }
  return (unsigned int)UncachedExtension;
}
