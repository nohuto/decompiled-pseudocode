/*
 * XREFs of _RtlpHpMetadataCommit@24 @ 0x4B3793EF
 * Callers:
 *     _RtlpHpHeapAllocate@16 @ 0x4B37877E (_RtlpHpHeapAllocate@16.c)
 *     _RtlpHpHeapExtendContext@8 @ 0x4B378E8C (_RtlpHpHeapExtendContext@8.c)
 * Callees:
 *     _RtlpHpMetadataHeapCtxGet@8 @ 0x4B3794D2 (_RtlpHpMetadataHeapCtxGet@8.c)
 *     _RtlpHpSegDescriptorValidate@8 @ 0x4B37B82D (_RtlpHpSegDescriptorValidate@8.c)
 *     _RtlpHpSegPageRangeCommit@24 @ 0x4B37CC3B (_RtlpHpSegPageRangeCommit@24.c)
 *     _RtlCSparseBitmapBitmaskRead@12 @ 0x4B37DCEF (_RtlCSparseBitmapBitmaskRead@12.c)
 */

int __fastcall RtlpHpMetadataCommit(int a1, int a2, unsigned int a3, int a4, int a5, int a6)
{
  int v8; // ecx
  int v9; // eax
  int v10; // eax
  unsigned int v11; // ebx
  int v12; // edx
  _DWORD *v14; // [esp+Ch] [ebp-4h]

  v14 = (_DWORD *)RtlpHpMetadataHeapCtxGet(a5, a6);
  if ( (_WORD)a1 )
  {
    v10 = 0;
  }
  else
  {
    v9 = RtlCSparseBitmapBitmaskRead(v8);
    if ( v9 )
      v10 = v9 - 1;
    else
      v10 = 2;
  }
  RtlpHpSegDescriptorValidate(*v14 + ((v10 + 2) << 7), a1);
  v11 = (unsigned int)(a2 - a1) >> 12;
  v12 = a3 >> 12;
  if ( !a4 )
    v12 = -v12;
  return RtlpHpSegPageRangeCommit(v11, v12, 0, 0);
}
