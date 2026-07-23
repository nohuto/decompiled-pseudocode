/*
 * XREFs of RtlpHpMetadataCommit @ 0x1800059A8
 * Callers:
 *     RtlpHpHeapExtendContext @ 0x180003030 (RtlpHpHeapExtendContext.c)
 *     RtlpHpHeapAllocate @ 0x180007E6C (RtlpHpHeapAllocate.c)
 * Callees:
 *     RtlCSparseBitmapBitmaskRead @ 0x180002B78 (RtlCSparseBitmapBitmaskRead.c)
 *     RtlpHpMetadataHeapCtxGet @ 0x180008110 (RtlpHpMetadataHeapCtxGet.c)
 *     RtlpHpSegDescriptorValidate @ 0x180022944 (RtlpHpSegDescriptorValidate.c)
 *     RtlpHpSegPageRangeCommit @ 0x180023180 (RtlpHpSegPageRangeCommit.c)
 */

__int64 __fastcall RtlpHpMetadataCommit(__int64 a1, __int64 a2, __int64 a3, __int128 *a4)
{
  _QWORD *v5; // rbx
  int v6; // eax
  __int64 v7; // rbx
  __int64 v9; // rax
  __int128 v10; // [rsp+30h] [rbp-18h] BYREF

  v10 = *a4;
  v5 = (_QWORD *)RtlpHpMetadataHeapCtxGet(&v10);
  if ( (_WORD)a1 )
  {
    v6 = 0;
  }
  else
  {
    v9 = RtlCSparseBitmapBitmaskRead((__int64)&BaseAddress, 2 * ((unsigned __int64)(a1 - qword_18016DC48) >> 20));
    if ( v9 )
      v6 = v9 - 1;
    else
      v6 = 2;
  }
  v7 = 192LL * v6 + *v5;
  RtlpHpSegDescriptorValidate(v7 + 256, a1);
  return RtlpHpSegPageRangeCommit((int)v7 + 256, 0, 0LL);
}
