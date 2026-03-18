/*
 * XREFs of RtlpHpSegSegmentAllocate @ 0x1402D8CF4
 * Callers:
 *     RtlpHpSegPageRangeAllocate @ 0x140256F00 (RtlpHpSegPageRangeAllocate.c)
 *     RtlpHpSegContextReserve @ 0x140379400 (RtlpHpSegContextReserve.c)
 * Callees:
 *     RtlpHpEnvGetHeapManager @ 0x14025A6D4 (RtlpHpEnvGetHeapManager.c)
 *     RtlCSparseBitmapBitmaskWrite @ 0x1402D8E00 (RtlCSparseBitmapBitmaskWrite.c)
 *     RtlpHpSegMgrAllocate @ 0x1402D9CCC (RtlpHpSegMgrAllocate.c)
 *     RtlpHpSegSegmentFree @ 0x1403871B4 (RtlpHpSegSegmentFree.c)
 */

__int64 __fastcall RtlpHpSegSegmentAllocate(__int64 a1, int a2)
{
  unsigned int v2; // ebp
  unsigned int v4; // r15d
  __int64 v5; // rdi
  _QWORD *HeapManager; // r8
  unsigned int v7; // edx
  unsigned __int64 v8; // r14
  _BOOL8 v9; // r13
  unsigned __int64 v10; // rsi
  char *v11; // r12
  __int64 v12; // rsi
  __int128 v14[3]; // [rsp+20h] [rbp-38h] BYREF
  unsigned __int64 v15; // [rsp+78h] [rbp+20h]

  v2 = a2 + 2;
  v4 = 0;
  v5 = RtlpHpSegMgrAllocate(a1, (unsigned int)(a2 + 2));
  if ( !v5 )
    return 0LL;
  v14[0] = *(_OWORD *)(a1 + 40);
  HeapManager = RtlpHpEnvGetHeapManager(v14);
  v8 = v7;
  v9 = v7 != 0x100000;
  v10 = 2 * ((unsigned __int64)(v5 - HeapManager[1]) >> 20);
  v15 = v10 + 2 * ((unsigned __int64)v7 >> 20);
  if ( v10 >= v15 )
  {
LABEL_6:
    v4 = 1;
    _InterlockedExchangeAdd64((volatile signed __int64 *)(*(__int16 *)(a1 + 22) + a1), v8 >> 12);
    _InterlockedExchangeAdd64((volatile signed __int64 *)(*(__int16 *)(a1 + 22) + a1 + 8), v2);
    v12 = v5;
    v5 = 0LL;
  }
  else
  {
    v11 = (char *)(HeapManager + 2);
    while ( (int)RtlCSparseBitmapBitmaskWrite(v11, v10, HeapManager, v9 + 1) >= 0 )
    {
      v10 += 2LL;
      if ( v10 >= v15 )
        goto LABEL_6;
    }
    v12 = 0LL;
  }
  if ( v5 )
    RtlpHpSegSegmentFree(a1, v5, v2, v4);
  return v12;
}
