/*
 * XREFs of _RtlpHpSegPageRangeShrink@16 @ 0x4B37D0E7
 * Callers:
 *     _RtlpHpSegAlloc@20 @ 0x4B37B40B (_RtlpHpSegAlloc@20.c)
 *     _RtlpHpSegFree@12 @ 0x4B37B8B6 (_RtlpHpSegFree@12.c)
 *     _RtlpHpSegReAlloc@16 @ 0x4B37D316 (_RtlpHpSegReAlloc@16.c)
 * Callees:
 *     _RtlpHpSegLockAcquire@8 @ 0x4B307A34 (_RtlpHpSegLockAcquire@8.c)
 *     _RtlpHpLargeLockRelease@12 @ 0x4B307A6C (_RtlpHpLargeLockRelease@12.c)
 *     _RtlpHpSegFreeRangeInsert@12 @ 0x4B37B9EA (_RtlpHpSegFreeRangeInsert@12.c)
 *     _RtlpHpSegPageRangeCoalesce@20 @ 0x4B37CA1F (_RtlpHpSegPageRangeCoalesce@20.c)
 *     _RtlpHpSegSegmentFree@16 @ 0x4B37D796 (_RtlpHpSegSegmentFree@16.c)
 */

void __fastcall RtlpHpSegPageRangeShrink(int a1, int a2, int a3, char a4)
{
  int v6; // eax
  int v7; // edi
  _BYTE *v8; // ecx
  int v9; // edx
  int v10; // edx
  int v11; // eax
  _RTL_BALANCED_NODE *v12; // eax
  _DWORD *v13; // eax
  _DWORD *v14; // ecx
  _DWORD *v15; // esi
  int v16; // eax
  int v17; // [esp+Ch] [ebp-Ch]
  int v18; // [esp+10h] [ebp-8h]
  char v19; // [esp+17h] [ebp-1h] BYREF

  v6 = *(unsigned __int8 *)(a2 + 15) - a3;
  v7 = a2 + 16 * a3;
  v18 = v6;
  if ( (unsigned int)(v6 - 1) > 1 )
  {
    v8 = (_BYTE *)(v7 + 28);
    v9 = v6 - 2;
    do
    {
      *v8 &= ~1u;
      v8 += 16;
      --v9;
    }
    while ( v9 );
  }
  v19 = RtlpHpSegLockAcquire((_RTL_SRWLOCK *)a1, a4);
  v17 = ~(*(_DWORD *)(a2 + 12) >> 8);
  if ( *(unsigned __int8 *)(a2 + 15) == v18 )
  {
    v10 = 0;
  }
  else
  {
    *(_BYTE *)(a2 + 15) = a3;
    v10 = a3 << *(_BYTE *)(a1 + 5);
    *(_DWORD *)(a2 + 12) ^= (*(_DWORD *)(a2 + 12) ^ (~v10 << 8)) & 0xFFFF00;
  }
  *(_BYTE *)(v7 + 12) |= 2u;
  *(_BYTE *)(v7 + 16 * v18 - 1) = v18 - 1;
  *(_BYTE *)(v7 + 15) = v18;
  v11 = (*(_DWORD *)(v7 + 12) ^ (~(v17 - v10) << 8)) & 0xFFFF00;
  *(_DWORD *)v7 = -857879331;
  *(_DWORD *)(v7 + 12) ^= v11;
  *(_BYTE *)(v7 + 12) &= 0xF3u;
  v12 = RtlpHpSegPageRangeCoalesce(a1, (_RTL_BALANCED_NODE *)v7, a4, 0, &v19);
  v13 = (_DWORD *)RtlpHpSegFreeRangeInsert(a1, (int)v12, 0);
  v15 = v13;
  if ( v13 )
  {
    v16 = *v13;
    if ( *(_DWORD **)(*v15 + 4) != v15 || (v14 = (_DWORD *)v15[1], (_DWORD *)*v14 != v15) )
      __fastfail(3u);
    *v14 = v16;
    *(_DWORD *)(v16 + 4) = v14;
    --*(_DWORD *)(a1 + 76);
  }
  RtlpHpLargeLockRelease((_RTL_SRWLOCK *)a1, a4, (int)v14);
  if ( v15 )
    RtlpHpSegSegmentFree(0x7FFFFFFF, 1);
}
