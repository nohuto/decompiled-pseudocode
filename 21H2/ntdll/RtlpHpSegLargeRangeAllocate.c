/*
 * XREFs of RtlpHpSegLargeRangeAllocate @ 0x18010EDF8
 * Callers:
 *     RtlpHpSegAlloc @ 0x180029B70 (RtlpHpSegAlloc.c)
 * Callees:
 *     RtlpHpSegFreeRangeInsert @ 0x180006CD0 (RtlpHpSegFreeRangeInsert.c)
 *     RtlpHpSegFreeRangeRemove @ 0x180006DB8 (RtlpHpSegFreeRangeRemove.c)
 *     RtlpHpSegPageRangeSplit @ 0x18010F4E8 (RtlpHpSegPageRangeSplit.c)
 */

unsigned __int64 __fastcall RtlpHpSegLargeRangeAllocate(__int64 a1, unsigned __int64 i, int a3, int a4)
{
  unsigned int v4; // ebp
  unsigned int v6; // r10d
  unsigned __int64 j; // rcx
  __int64 v10; // r8
  unsigned __int8 v11; // al
  __int64 v12; // r9
  unsigned __int64 v13; // r8
  int v14; // ebx
  __int16 *v15; // rdx
  unsigned __int64 v16; // rax
  _QWORD **v17; // rax
  unsigned __int64 v18; // rcx
  _QWORD *v19; // rcx
  unsigned int v21; // ebx
  __int64 v22; // rbx

  v4 = *(unsigned __int8 *)(a1 + 8);
  v6 = a3 << *(_BYTE *)(a1 + 8);
  while ( 1 )
  {
    j = v4;
    v10 = *(unsigned __int8 *)(i + 31) << v4;
    if ( !a4 )
      break;
    v11 = *(_BYTE *)(i + 30);
    if ( v11 <= 2u )
    {
      if ( !v11 && (v6 <= ((unsigned int)v10 & 0x1FFFFF) || (v10 & 0x1FFFFF) == 0) )
      {
        v21 = 0;
        goto LABEL_26;
      }
      break;
    }
LABEL_14:
    v17 = *(_QWORD ***)(i + 8);
    v18 = i;
    if ( v17 )
    {
      v19 = *v17;
      for ( i = *(_QWORD *)(i + 8); v19; v19 = (_QWORD *)*v19 )
        i = (unsigned __int64)v19;
    }
    else
    {
      while ( 1 )
      {
        i = *(_QWORD *)(i + 16) & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !i || *(_QWORD *)i == v18 )
          break;
        v18 = i;
      }
    }
    if ( !i )
      return 0LL;
  }
  v12 = (i & *(_QWORD *)a1) + ((__int64)(i - (i & *(_QWORD *)a1)) >> 5 << v4);
  v13 = v12 + v10;
  v14 = v12;
  v15 = (__int16 *)(*(_QWORD *)((v12 & *(_QWORD *)a1) + 0x18)
                  + 2 * ((v12 - ((unsigned __int64)v12 & *(_QWORD *)a1)) >> 21));
  for ( j = (v12 + 0x200000) & 0xFFFFFFFFFFE00000uLL; ; j += 0x200000LL )
  {
    if ( *v15 < 0 )
    {
      v16 = v13;
      if ( j < v13 )
        v16 = j;
      j = v16;
      if ( (int)v16 - v14 >= v6 )
        break;
    }
    if ( j >= v13 )
      goto LABEL_14;
    v14 = j;
    ++v15;
  }
  v21 = v14 - v12;
LABEL_26:
  if ( a4 )
    RtlpHpSegFreeRangeRemove(a1, i);
  if ( v21 )
  {
    LOBYTE(j) = *(_BYTE *)(a1 + 8);
    v22 = RtlpHpSegPageRangeSplit(j, i, v21 >> j);
    RtlpHpSegFreeRangeInsert(a1, i, 0);
    return v22;
  }
  return i;
}
