/*
 * XREFs of _RtlpHpSegPageRangeAllocate@12 @ 0x4B37C863
 * Callers:
 *     _RtlpHpSegAlloc@20 @ 0x4B37B40B (_RtlpHpSegAlloc@20.c)
 * Callees:
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     _RtlpHpSegFreeRangeInsert@12 @ 0x4B37B9EA (_RtlpHpSegFreeRangeInsert@12.c)
 *     _RtlpHpSegFreeRangeRemove@8 @ 0x4B37BAC9 (_RtlpHpSegFreeRangeRemove@8.c)
 *     _RtlpHpSegHeapAddSegment@8 @ 0x4B37BB8C (_RtlpHpSegHeapAddSegment@8.c)
 *     _RtlpHpSegLargeRangeAllocate@16 @ 0x4B37BBBC (_RtlpHpSegLargeRangeAllocate@16.c)
 *     _RtlpHpSegPageRangeSplit@12 @ 0x4B37D204 (_RtlpHpSegPageRangeSplit@12.c)
 *     _RtlpHpSegSegmentAllocate@12 @ 0x4B37D5F7 (_RtlpHpSegSegmentAllocate@12.c)
 *     _RtlpHpSegSegmentInitialize@12 @ 0x4B37D82A (_RtlpHpSegSegmentInitialize@12.c)
 */

unsigned int __fastcall RtlpHpSegPageRangeAllocate(int a1, int a2, int a3)
{
  _RTL_BALANCED_NODE *v4; // esi
  unsigned int v5; // edi
  _RTL_BALANCED_NODE *v6; // ecx
  unsigned int v7; // ecx
  unsigned int v8; // eax
  unsigned int v9; // esi
  int v10; // eax
  unsigned int v11; // esi
  unsigned int v12; // edx
  _BYTE *v13; // eax
  unsigned int v15; // [esp+10h] [ebp-10h]
  unsigned int v16; // [esp+18h] [ebp-8h]
  unsigned int v17; // [esp+18h] [ebp-8h]

  v15 = (unsigned int)(a2 - 1 + (1 << *(_BYTE *)(a1 + 5))) >> *(_BYTE *)(a1 + 5);
  v4 = (_RTL_BALANCED_NODE *)(v15 << 24);
  if ( (a3 & 1) == 0 )
    RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 64));
  v5 = *(_DWORD *)(a1 + 80);
  if ( (*(_BYTE *)(a1 + 84) & 1) != 0 )
  {
    if ( v5 )
      v5 ^= a1 + 80;
    else
      v5 = 0;
  }
  v6 = 0;
  v16 = 0;
  if ( v5 )
  {
    do
    {
      if ( (unsigned int)v4 < *(_DWORD *)(v5 + 12) )
      {
        v7 = *(_DWORD *)v5;
        v16 = v5;
      }
      else
      {
        if ( (unsigned int)v4 <= *(_DWORD *)(v5 + 12) )
          goto LABEL_19;
        v7 = *(_DWORD *)(v5 + 4);
      }
      if ( (*(_BYTE *)(a1 + 84) & 1) != 0 && v7 )
        v5 ^= v7;
      else
        v5 = v7;
    }
    while ( v5 );
    v6 = (_RTL_BALANCED_NODE *)v16;
  }
  v5 = (unsigned int)v6;
LABEL_19:
  if ( v5 )
  {
    if ( (a3 & 0x800000) != 0 )
      v5 = RtlpHpSegLargeRangeAllocate(a1, v5, v15, 1);
    else
      RtlpHpSegFreeRangeRemove(a1, (_RTL_BALANCED_NODE *)v5);
  }
  else
  {
    v5 = 0;
  }
  if ( v5 )
  {
    v9 = v15;
  }
  else
  {
    if ( (a3 & 1) == 0 )
      RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 64));
    v17 = RtlpHpSegSegmentAllocate((a3 & 0x800000) != 0 ? 2 : 0);
    if ( !v17 )
      return 0;
    RtlpHpSegSegmentInitialize(0);
    v8 = v17;
    v5 = v17 + 16 * *(unsigned __int8 *)(a1 + 6);
    if ( (a3 & 1) == 0 )
    {
      RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 64));
      v8 = v17;
    }
    RtlpHpSegHeapAddSegment(a1, v8);
    v9 = v15;
    if ( (a3 & 0x800000) != 0 )
      v5 = RtlpHpSegLargeRangeAllocate(a1, v5, v15, 0);
  }
  v10 = RtlpHpSegPageRangeSplit(v9);
  if ( v10 )
    RtlpHpSegFreeRangeInsert(a1, v10, 0);
  *(_BYTE *)(v5 + 12) |= HIBYTE(a3) & 0xC | 1;
  *(_BYTE *)(v5 + 16 * v9 - 4) |= 1u;
  if ( (a3 & 1) == 0 )
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 64));
  v11 = v9 - 1;
  v12 = 1;
  if ( v11 > 1 )
  {
    v13 = (_BYTE *)(v5 + 28);
    do
    {
      v13[3] = v12++;
      *v13 |= 1u;
      v13 += 16;
    }
    while ( v12 < v11 );
  }
  return v5;
}
