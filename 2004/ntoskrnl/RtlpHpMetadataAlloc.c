/*
 * XREFs of RtlpHpMetadataAlloc @ 0x1402DAF5C
 * Callers:
 *     RtlpHpLargeAlloc @ 0x1402DA8E8 (RtlpHpLargeAlloc.c)
 *     RtlpHpHeapAllocate @ 0x140379930 (RtlpHpHeapAllocate.c)
 * Callees:
 *     RtlpHpSegAlloc @ 0x140256D60 (RtlpHpSegAlloc.c)
 *     RtlpHpMetadataHeapStart @ 0x1402DB060 (RtlpHpMetadataHeapStart.c)
 *     RtlpHpMetadataHeapCtxGet @ 0x1402DB094 (RtlpHpMetadataHeapCtxGet.c)
 *     RtlpHpAllocateHeap @ 0x1402DB0D8 (RtlpHpAllocateHeap.c)
 */

__int64 __fastcall RtlpHpMetadataAlloc(unsigned __int64 a1, unsigned __int64 a2, int a3, __int128 *a4)
{
  __int64 v7; // rbx
  _QWORD *v8; // rsi
  _QWORD *v9; // r9
  char v10; // dl
  __int128 v13; // [rsp+30h] [rbp-18h] BYREF

  v13 = *a4;
  v7 = 0LL;
  v8 = (_QWORD *)RtlpHpMetadataHeapCtxGet(&v13);
  *(_QWORD *)&v13 = *v9;
  v10 = BYTE1(v13);
  BYTE3(v13) = 0;
  *((_QWORD *)&v13 + 1) = 0LL;
  if ( BYTE1(v13) >= 2u )
    v10 = 2;
  BYTE1(v13) = v10;
  if ( (int)RtlpHpMetadataHeapStart(v8, &v13) >= 0 )
  {
    if ( a3 )
      return RtlpHpSegAlloc(
               *v8 + 256LL + (*(unsigned int *)(*v8 + 272LL) < a1 ? 0xC0 : 0),
               a1,
               a1,
               a2,
               a2 < a1 ? 83886080 : 0x1000000);
    else
      return RtlpHpAllocateHeap(*v8, a1, 0x1000000LL, 0LL);
  }
  return v7;
}
