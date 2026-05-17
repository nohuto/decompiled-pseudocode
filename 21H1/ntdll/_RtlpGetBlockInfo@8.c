/*
 * XREFs of _RtlpGetBlockInfo@8 @ 0x4B35E70A
 * Callers:
 *     _RtlpGetHeapBlock@4 @ 0x4B35E746 (_RtlpGetHeapBlock@4.c)
 *     _RtlpPushPageDescriptor@8 @ 0x4B35E9DA (_RtlpPushPageDescriptor@8.c)
 *     _RtlpScanHeapAllocBlocks@0 @ 0x4B35EB37 (_RtlpScanHeapAllocBlocks@0.c)
 * Callees:
 *     <none>
 */

int __fastcall RtlpGetBlockInfo(_DWORD *a1, unsigned int a2)
{
  unsigned int v2; // eax
  _DWORD *v3; // eax

  while ( 1 )
  {
    if ( a2 < a1[1] || a2 > a1[2] )
      return 0;
    v2 = a2 <= a1[1] ? 0 : (a2 - a1[1]) / *a1;
    v3 = &a1[v2];
    if ( *a1 == 4096 )
      break;
    a1 = (_DWORD *)v3[11];
    if ( !a1 )
      return 0;
  }
  return v3[11];
}
