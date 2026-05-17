/*
 * XREFs of RtlpHpTagAllocateHeap @ 0x180007AB4
 * Callers:
 *     RtlAllocateHeap @ 0x18002A9A0 (RtlAllocateHeap.c)
 *     RtlpHpAllocWithExceptionProtection @ 0x18002C270 (RtlpHpAllocWithExceptionProtection.c)
 * Callees:
 *     RtlpHpTaggableHeap @ 0x180007BC4 (RtlpHpTaggableHeap.c)
 *     RtlpAllocateHeapInternal @ 0x18002AA20 (RtlpAllocateHeapInternal.c)
 *     RtlpHpTagContextGetTag @ 0x18009CEB4 (RtlpHpTagContextGetTag.c)
 */

__int64 __fastcall RtlpHpTagAllocateHeap(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v6; // rcx
  unsigned __int16 Tag; // di
  __int64 result; // rax

  if ( (unsigned int)RtlpHpTaggableHeap() )
    Tag = RtlpHpTagContextGetTag(v6, a2);
  else
    Tag = 0;
  result = RtlpAllocateHeapInternal(a1, a2, a3, Tag);
  if ( !result )
  {
    if ( Tag )
      _InterlockedExchangeAdd64((volatile signed __int64 *)(*(_QWORD *)(qword_18016AB18 + 8LL * Tag - 8) + 32LL), -a2);
  }
  return result;
}
