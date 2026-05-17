/*
 * XREFs of _RtlpHpTaggableHeap@4 @ 0x4B37072D
 * Callers:
 *     _RtlpHpTagAllocateHeap@12 @ 0x4B36FCF9 (_RtlpHpTagAllocateHeap@12.c)
 *     _RtlpHpTagDestroyHeap@4 @ 0x4B37013C (_RtlpHpTagDestroyHeap@4.c)
 * Callees:
 *     _RtlpHpMetadataHeapCtxGet@8 @ 0x4B3794D2 (_RtlpHpMetadataHeapCtxGet@8.c)
 */

BOOL __thiscall RtlpHpTaggableHeap(_DWORD *this)
{
  _DWORD *v1; // eax
  int v2; // ecx
  BOOL result; // eax

  result = 0;
  if ( this[2] == -571548178 )
  {
    v1 = (_DWORD *)RtlpHpMetadataHeapCtxGet(RtlpHpEnvHandle, dword_4B3A446C);
    if ( v2 != *v1 )
      return 1;
  }
  return result;
}
