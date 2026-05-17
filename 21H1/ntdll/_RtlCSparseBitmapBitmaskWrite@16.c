/*
 * XREFs of _RtlCSparseBitmapBitmaskWrite@16 @ 0x4B37DD69
 * Callers:
 *     _RtlpHpSegSegmentAllocate@12 @ 0x4B37D5F7 (_RtlpHpSegSegmentAllocate@12.c)
 * Callees:
 *     _RtlCSparseBitmapBitsClear@12 @ 0x4B37DE0D (_RtlCSparseBitmapBitsClear@12.c)
 *     _RtlpCSparseBitmapPageCommit@16 @ 0x4B37E46E (_RtlpCSparseBitmapPageCommit@16.c)
 *     _RtlpCSparseBitmapUnlock@4 @ 0x4B380071 (_RtlpCSparseBitmapUnlock@4.c)
 */

int __fastcall RtlCSparseBitmapBitmaskWrite(int a1, unsigned int a2, int a3, int a4)
{
  int v6; // esi
  volatile signed __int32 *v7; // esi
  volatile signed __int32 v8; // edx
  int v9; // edi
  int v10; // ebx
  signed __int32 v11; // esi
  signed __int32 v12; // ecx
  volatile signed __int32 *v14; // [esp+10h] [ebp-18h]
  _BYTE v15[8]; // [esp+14h] [ebp-14h] BYREF
  _BYTE v16[12]; // [esp+1Ch] [ebp-Ch] BYREF

  if ( a4 )
  {
    v6 = RtlpCSparseBitmapPageCommit(v16, v15);
    if ( v6 >= 0 )
    {
      v7 = (volatile signed __int32 *)(*(_DWORD *)(a1 + 4) + 4 * (a2 >> 5));
      v8 = *v7;
      v9 = a4 << (a2 & 0x1F);
      v10 = ~(3 << (a2 & 0x1F));
      v14 = v7;
      v11 = _InterlockedCompareExchange(v7, v9 | v10 & *v7, *v7);
      if ( v8 != v11 )
      {
        do
        {
          v12 = v11;
          v11 = _InterlockedCompareExchange(v14, v9 | v10 & v11, v11);
        }
        while ( v12 != v11 );
      }
      v6 = 0;
      RtlpCSparseBitmapUnlock(v16);
    }
    return v6;
  }
  else
  {
    RtlCSparseBitmapBitsClear(2);
    return 0;
  }
}
