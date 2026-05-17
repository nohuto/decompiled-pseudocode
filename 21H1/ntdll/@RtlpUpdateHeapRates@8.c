/*
 * XREFs of @RtlpUpdateHeapRates@8 @ 0x4B2E9CBB
 * Callers:
 *     @RtlpReAllocateHeap@16 @ 0x4B2C2870 (@RtlpReAllocateHeap@16.c)
 *     @RtlpFreeHeap@16 @ 0x4B2C3C10 (@RtlpFreeHeap@16.c)
 *     @RtlpAllocateHeap@24 @ 0x4B2C6F90 (@RtlpAllocateHeap@24.c)
 * Callees:
 *     <none>
 */

void __fastcall RtlpUpdateHeapRates(int a1, int a2)
{
  int v2; // edx
  unsigned int v3; // edx
  unsigned int v4; // eax
  bool v5; // zf
  int v6; // edx

  v2 = a2 - 1;
  if ( v2 )
  {
    v6 = v2 - 1;
    if ( v6 )
    {
      if ( v6 == 1 )
        ++*(_DWORD *)(a1 + 544);
    }
    else
    {
      ++*(_DWORD *)(a1 + 540);
    }
  }
  else
  {
    v3 = *(_DWORD *)(a1 + 532) + 1;
    v4 = *(_DWORD *)(a1 + 536) + 1;
    *(_DWORD *)(a1 + 532) = v3;
    v5 = *(_BYTE *)(a1 + 234) == 2;
    *(_DWORD *)(a1 + 536) = v4;
    if ( !v5 )
    {
      if ( v3 < v4 )
      {
        v3 = 0;
        *(_DWORD *)(a1 + 532) = 0;
        v4 = 0;
        *(_DWORD *)(a1 + 536) = 0;
      }
      if ( v4 >= v3 >> 4 )
        *(_DWORD *)(a1 + 72) |= 0x20000000u;
    }
  }
}
