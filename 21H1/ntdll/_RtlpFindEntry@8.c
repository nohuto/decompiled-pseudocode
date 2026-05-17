/*
 * XREFs of _RtlpFindEntry@8 @ 0x4B2B1BCE
 * Callers:
 *     @RtlpCreateSplitBlock@28 @ 0x4B2B16CC (@RtlpCreateSplitBlock@28.c)
 *     _RtlpInsertFreeBlock@12 @ 0x4B2C0AD0 (_RtlpInsertFreeBlock@12.c)
 *     @RtlpFreeHeap@16 @ 0x4B2C3C10 (@RtlpFreeHeap@16.c)
 *     @RtlpAllocateHeap@24 @ 0x4B2C6F90 (@RtlpAllocateHeap@24.c)
 *     _RtlZeroHeap@8 @ 0x4B35D0F0 (_RtlZeroHeap@8.c)
 *     _RtlpValidateHeapSegment@32 @ 0x4B360CCF (_RtlpValidateHeapSegment@32.c)
 * Callees:
 *     _RtlpHeapFindListLookupEntry@20 @ 0x4B2C0D29 (_RtlpHeapFindListLookupEntry@20.c)
 */

int __fastcall RtlpFindEntry(int a1, unsigned int a2)
{
  _DWORD *i; // esi
  int v4; // eax
  int result; // eax

  for ( i = *(_DWORD **)(a1 + 180); ; i = (_DWORD *)*i )
  {
    if ( a2 < i[1] )
    {
      v4 = a2;
      goto LABEL_4;
    }
    if ( !*i )
      break;
  }
  v4 = i[1] - 1;
LABEL_4:
  while ( 1 )
  {
    result = RtlpHeapFindListLookupEntry(1, v4, a2);
    if ( result )
      break;
    i = (_DWORD *)*i;
    v4 = i[5];
  }
  return result;
}
