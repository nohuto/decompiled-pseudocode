/*
 * XREFs of _RtlpHpTagAllocateHeap@12 @ 0x4B36FCF9
 * Callers:
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _RtlpHpAllocWithExceptionProtection@12 @ 0x4B34D363 (_RtlpHpAllocWithExceptionProtection@12.c)
 * Callees:
 *     _RtlpAllocateHeapInternal@16 @ 0x4B2C5D90 (_RtlpAllocateHeapInternal@16.c)
 *     _RtlpHpTagContextGetTag@8 @ 0x4B36FF45 (_RtlpHpTagContextGetTag@8.c)
 *     _RtlpHpTaggableHeap@4 @ 0x4B37072D (_RtlpHpTaggableHeap@4.c)
 */

char *__fastcall RtlpHpTagAllocateHeap(_DWORD *a1, unsigned int a2, int a3)
{
  int Tag; // edi
  char *HeapInternal; // edx
  int savedregs; // [esp+Ch] [ebp+0h] BYREF

  if ( RtlpHpTaggableHeap() )
    Tag = (unsigned __int16)RtlpHpTagContextGetTag();
  else
    Tag = 0;
  HeapInternal = RtlpAllocateHeapInternal(a1, a2, (int)&savedregs, Tag, a3, Tag);
  if ( !HeapInternal && (_WORD)Tag )
    _InterlockedExchangeAdd(
      (volatile signed __int32 *)(*(_DWORD *)(dword_4B3A46B0 + 4 * (unsigned __int16)Tag - 4) + 24),
      -a2);
  return HeapInternal;
}
