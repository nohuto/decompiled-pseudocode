/*
 * XREFs of RtlCSparseBitmapBitmaskRead @ 0x1402F5320
 * Callers:
 *     ExFreeHeapPool @ 0x14024C790 (ExFreeHeapPool.c)
 *     RtlpHpGetOwnerHeap @ 0x1402AC314 (RtlpHpGetOwnerHeap.c)
 *     RtlpHpFreeHeap @ 0x1402AC6EC (RtlpHpFreeHeap.c)
 *     RtlpHpMetadataCommit @ 0x1403C6CD4 (RtlpHpMetadataCommit.c)
 *     RtlpHpExtrasSetPresent @ 0x14058EE00 (RtlpHpExtrasSetPresent.c)
 *     RtlpHpSizeHeapInternal @ 0x14058EF50 (RtlpHpSizeHeapInternal.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlCSparseBitmapBitmaskRead(__int64 a1, unsigned __int64 a2)
{
  int v2; // eax

  if ( _bittest64((const signed __int64 *)(a1 + 56), a2 >> 30) )
  {
    if ( _bittest64(*(const signed __int64 **)a1, a2 >> 15) )
      v2 = 2;
    else
      v2 = 1;
  }
  else
  {
    v2 = 0;
  }
  if ( v2 == 2 )
    return (*(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * (a2 >> 6)) >> (a2 & 0x3F)) & 3LL;
  else
    return 0LL;
}
