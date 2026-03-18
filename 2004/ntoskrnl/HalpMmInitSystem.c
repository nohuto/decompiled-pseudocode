/*
 * XREFs of HalpMmInitSystem @ 0x14099CCB0
 * Callers:
 *     <none>
 * Callees:
 *     HalpMmAllocCtxInit @ 0x1403B7CF0 (HalpMmAllocCtxInit.c)
 *     HalpMmReservePageTablePages @ 0x1403B7D6C (HalpMmReservePageTablePages.c)
 *     HalpPteReserveResources @ 0x1403B8740 (HalpPteReserveResources.c)
 *     HalpInitMemoryCachingRequirementsTable @ 0x14099D18C (HalpInitMemoryCachingRequirementsTable.c)
 *     HalpConsumeLowMemory @ 0x140A5BB04 (HalpConsumeLowMemory.c)
 */

__int64 __fastcall HalpMmInitSystem(int a1, __int64 a2, __int64 a3)
{
  int inited; // ebx
  int v4; // ecx
  int v5; // ecx
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rax

  inited = 0;
  if ( a1 )
  {
    v4 = a1 - 12;
    if ( v4 )
    {
      v5 = v4 - 4;
      if ( v5 )
      {
        if ( v5 == 1 )
        {
          inited = HalpInitMemoryCachingRequirementsTable(a3);
          if ( inited >= 0 )
          {
            HalpPteReserveResources();
            HalpMoveMemory = (__int64 (__fastcall *)())RtlCopyMemoryNonTemporal;
          }
        }
      }
      else
      {
        HalpMmReservePageTablePages();
        HalpMmLoaderBlock = 0LL;
        HalpMmLeftoverMemory = 0LL;
        HalpMmLeftoverMemorySize = 0;
      }
    }
    else if ( HalpMiscDiscardLowMemory )
    {
      HalpConsumeLowMemory(a3);
    }
  }
  else
  {
    v7 = *(_QWORD *)(a3 + 240);
    HalpMmLeftoverMemory = 0LL;
    HalpMmLeftoverMemorySize = 0;
    HalpMmLoaderBlock = a3;
    v8 = *(_QWORD *)(v7 + 2928);
    v9 = *(_QWORD *)(v7 + 2936);
    HalpHeapStart = v8;
    HalpHeapEnd = v8 + v9;
    HalpOriginalHeapEnd = v8 + v9 - 1;
    qword_140C00718 = (__int64)HalpAllocateEarlyPages;
    qword_140C00720 = (__int64)HalpMapEarlyPages;
    HalpOriginalHeapStart = v8;
    HalpMmAllocCtxInit();
  }
  return (unsigned int)inited;
}
