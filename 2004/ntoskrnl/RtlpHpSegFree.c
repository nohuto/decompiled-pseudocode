/*
 * XREFs of RtlpHpSegFree @ 0x1402538BC
 * Callers:
 *     RtlpHpSegLfhVsFree @ 0x140252540 (RtlpHpSegLfhVsFree.c)
 *     RtlpHpFreeHeap @ 0x1402536BC (RtlpHpFreeHeap.c)
 * Callees:
 *     RtlpHpSegDescriptorValidate @ 0x140256450 (RtlpHpSegDescriptorValidate.c)
 *     RtlpHpSegPageRangeShrink @ 0x140259780 (RtlpHpSegPageRangeShrink.c)
 *     RtlpHpVsContextFree @ 0x14028A9F0 (RtlpHpVsContextFree.c)
 *     RtlpHpLfhBucketUpdateStats @ 0x1402CA890 (RtlpHpLfhBucketUpdateStats.c)
 *     RtlpHpLfhSubsegmentFreeBlock @ 0x1402CB580 (RtlpHpLfhSubsegmentFreeBlock.c)
 *     RtlpLogHeapFailure @ 0x14058E080 (RtlpLogHeapFailure.c)
 */

__int64 __fastcall RtlpHpSegFree(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v5; // rax
  __int64 v6; // r8
  unsigned __int64 v7; // r11
  unsigned __int64 v8; // rdx
  unsigned int v9; // edi
  __int64 v10; // rcx
  unsigned int v12; // [rsp+58h] [rbp+20h] BYREF

  v12 = 0;
  v5 = RtlpHpSegDescriptorValidate();
  if ( v5 )
  {
    v8 = (v5 & *(_QWORD *)a1) + ((v5 - (v5 & *(_QWORD *)a1)) >> 5 << *(_BYTE *)(a1 + 8));
    if ( v7 <= v8 )
    {
      RtlpHpSegPageRangeShrink(a1, v5, v6, a3);
      return 1;
    }
    else if ( (*(_BYTE *)(v5 + 24) & 0xC) == 8 )
    {
      return (unsigned int)RtlpHpLfhSubsegmentFreeBlock(*(_QWORD *)(a1 + 24), v8, v7, a3);
    }
    else
    {
      v9 = RtlpHpVsContextFree(*(_QWORD *)(a1 + 32), v8, v7, a3, (__int64)&v12);
      if ( v9 )
      {
        v10 = *(_QWORD *)(a1 + 24);
        if ( v12 <= (unsigned int)*(unsigned __int16 *)(v10 + 60) - 16 )
          RtlpHpLfhBucketUpdateStats(v10, v12, 0LL);
      }
    }
  }
  else
  {
    RtlpLogHeapFailure(9, *(_QWORD *)(a1 + 56), v7, 0, 0LL, 0LL);
    return 0;
  }
  return v9;
}
