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

__int64 __fastcall RtlpHpMetadataCommit(__int64 a1, int a2, unsigned __int64 a3, __int128 *a4, int a5)
{
  _QWORD *v8; // rbx
  int v9; // eax
  __int64 v10; // rbx
  int v11; // eax
  unsigned __int64 v12; // rbp
  int v13; // r9d
  __int64 v15; // rax
  __int128 v16; // [rsp+30h] [rbp-18h] BYREF

  v16 = *a4;
  v8 = (_QWORD *)RtlpHpMetadataHeapCtxGet(&v16);
  if ( (_WORD)a1 )
  {
    v9 = 0;
  }
  else
  {
    v15 = RtlCSparseBitmapBitmaskRead((__int64)&unk_18016DC60, 2 * ((unsigned __int64)(a1 - qword_18016DC58) >> 20));
    if ( v15 )
      v9 = v15 - 1;
    else
      v9 = 2;
  }
  v10 = 192LL * v9 + *v8;
  v11 = RtlpHpSegDescriptorValidate(v10 + 256, a1);
  v12 = a3 >> 12;
  v13 = -(int)v12;
  if ( a5 )
    v13 = v12;
  return RtlpHpSegPageRangeCommit((int)v10 + 256, v11, (unsigned int)(a2 - a1) >> 12, v13, 0, 0LL);
}
