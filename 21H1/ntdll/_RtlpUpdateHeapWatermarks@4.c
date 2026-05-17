/*
 * XREFs of _RtlpUpdateHeapWatermarks@4 @ 0x4B35D7E4
 * Callers:
 *     @RtlpAllocateHeap@24 @ 0x4B2C6F90 (@RtlpAllocateHeap@24.c)
 * Callees:
 *     <none>
 */

void __thiscall RtlpUpdateHeapWatermarks(int this)
{
  unsigned int v1; // esi
  int v2; // eax
  int v3; // edx
  unsigned int v4; // edx
  unsigned int v5; // eax

  if ( (*(_DWORD *)(this + 68) & 0x1000000) == 0 )
  {
    ++*(_DWORD *)(this + 556);
    v1 = *(_DWORD *)(this + 564);
    if ( *(_DWORD *)(this + 556) > v1 )
    {
      v2 = *(_DWORD *)(this + 116);
      v3 = *(_DWORD *)(this + 504);
      *(_DWORD *)(this + 556) = 0;
      v4 = v3 - 8 * v2;
      if ( v4 > *(_DWORD *)(this + 584) )
        *(_DWORD *)(this + 584) = v4;
      *(_DWORD *)(this + 588) = v4;
    }
    if ( ++*(_DWORD *)(this + 568) >= 0x1000u )
    {
      v5 = 16;
      if ( *(_BYTE *)(this + 234) == 2 && *(_DWORD *)(this + 572) > 0x10u )
        v5 = 256;
      if ( *(_DWORD *)(this + 560) > v5 && v1 < 0x10000 )
        *(_DWORD *)(this + 564) = 2 * v1;
      *(_DWORD *)(this + 560) = 0;
      *(_DWORD *)(this + 568) = 0;
    }
  }
}
