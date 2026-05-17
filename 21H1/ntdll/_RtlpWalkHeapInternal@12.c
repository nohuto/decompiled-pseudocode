/*
 * XREFs of _RtlpWalkHeapInternal@12 @ 0x4B35A1E8
 * Callers:
 *     _RtlWalkHeap@8 @ 0x4B3575D0 (_RtlWalkHeap@8.c)
 *     _RtlpQueryExtendedInformationHeap@8 @ 0x4B358EC0 (_RtlpQueryExtendedInformationHeap@8.c)
 *     _RtlpHpStackTraceHeapSerialize@8 @ 0x4B36E530 (_RtlpHpStackTraceHeapSerialize@8.c)
 *     _RtlpHpTagDestroyHeap@4 @ 0x4B37013C (_RtlpHpTagDestroyHeap@4.c)
 * Callees:
 *     _RtlpWalkHeap@12 @ 0x4B359AF8 (_RtlpWalkHeap@12.c)
 *     _RtlpHpHeapWalk@12 @ 0x4B37924D (_RtlpHpHeapWalk@12.c)
 */

int __fastcall RtlpWalkHeapInternal(int a1, int a2, int a3)
{
  int v4; // eax
  int v5; // ecx
  int *v6; // edx
  int v7; // eax
  char *v8; // edx

  if ( *(_DWORD *)(a1 + 8) != -571548178 )
    return RtlpWalkHeap(a1, a2, a3);
  if ( (RtlpHpAppCompatFlags & 2) != 0 && *(_DWORD *)a2 && (*(_BYTE *)(a2 + 10) & 1) != 0 )
    *(_DWORD *)a2 -= *(_DWORD *)(*(_DWORD *)a2 - 8);
  v4 = RtlpHpHeapWalk(a3);
  v5 = v4;
  if ( (RtlpHpAppCompatFlags & 2) != 0 && v4 != -2147483622 && (*(_BYTE *)(a2 + 10) & 1) != 0 )
  {
    v6 = *(int **)a2;
    if ( *(_DWORD *)a2 )
    {
      v7 = *v6;
      v8 = (char *)v6 + *v6;
    }
    else
    {
      v7 = 0;
      v8 = 0;
    }
    *(_DWORD *)(a2 + 4) -= v7;
    *(_DWORD *)a2 = v8;
  }
  return v5;
}
