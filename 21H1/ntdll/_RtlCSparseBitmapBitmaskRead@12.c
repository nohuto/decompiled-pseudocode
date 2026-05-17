/*
 * XREFs of _RtlCSparseBitmapBitmaskRead@12 @ 0x4B37DCEF
 * Callers:
 *     _RtlpHpExtrasSetPresent@12 @ 0x4B378497 (_RtlpHpExtrasSetPresent@12.c)
 *     _RtlpHpFreeHeap@20 @ 0x4B3784F8 (_RtlpHpFreeHeap@20.c)
 *     _RtlpHpHeapWalk@12 @ 0x4B37924D (_RtlpHpHeapWalk@12.c)
 *     _RtlpHpMetadataCommit@24 @ 0x4B3793EF (_RtlpHpMetadataCommit@24.c)
 *     _RtlpHpReAllocateHeap@24 @ 0x4B37955B (_RtlpHpReAllocateHeap@24.c)
 *     _RtlpHpSizeHeapInternal@16 @ 0x4B379A08 (_RtlpHpSizeHeapInternal@16.c)
 * Callees:
 *     __SEH_prolog4 @ 0x4B307AC4 (__SEH_prolog4.c)
 */

int __fastcall RtlCSparseBitmapBitmaskRead(int a1, unsigned int a2, int a3)
{
  unsigned int v3; // edx
  int v4; // eax

  v3 = a2 >> 15;
  if ( _bittest((const signed __int32 *)(a1 + 32), v3 >> 15) )
    v4 = _bittest(*(const signed __int32 **)a1, v3) + 1;
  else
    v4 = 0;
  if ( v4 == 2 )
    return (*(_DWORD *)(*(_DWORD *)(a1 + 4) + 4 * (a2 >> 5)) >> (a2 & 0x1F)) & 3;
  else
    return 0;
}
