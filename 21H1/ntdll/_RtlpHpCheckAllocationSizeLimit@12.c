/*
 * XREFs of _RtlpHpCheckAllocationSizeLimit@12 @ 0x4B378285
 * Callers:
 *     _RtlpHpAllocateHeap@16 @ 0x4B37803E (_RtlpHpAllocateHeap@16.c)
 *     _RtlpHpReAllocateHeap@24 @ 0x4B37955B (_RtlpHpReAllocateHeap@24.c)
 * Callees:
 *     _RtlpLogHeapFailure@24 @ 0x4B375E3D (_RtlpLogHeapFailure@24.c)
 */

int __fastcall RtlpHpCheckAllocationSizeLimit(unsigned int a1, int a2, int a3)
{
  unsigned int v3; // eax
  int v4; // esi

  if ( dword_4B3A373C )
    return 1;
  v3 = *(_DWORD *)(a3 + 8);
  if ( !v3 )
  {
    v3 = dword_4B3A4334;
    if ( !dword_4B3A4334 )
      return 1;
  }
  if ( a1 <= v3 )
    return 1;
  v4 = 0;
  if ( *(_DWORD *)(a3 + 12) )
    RtlpLogHeapFailure(20, a2, 0, *(_DWORD *)(a3 + 12), a1, *(_DWORD *)(a3 + 8));
  return v4;
}
