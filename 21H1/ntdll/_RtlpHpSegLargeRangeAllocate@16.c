/*
 * XREFs of _RtlpHpSegLargeRangeAllocate@16 @ 0x4B37BBBC
 * Callers:
 *     _RtlpHpSegPageRangeAllocate@12 @ 0x4B37C863 (_RtlpHpSegPageRangeAllocate@12.c)
 * Callees:
 *     _RtlpHpSegFreeRangeInsert@12 @ 0x4B37B9EA (_RtlpHpSegFreeRangeInsert@12.c)
 *     _RtlpHpSegFreeRangeRemove@8 @ 0x4B37BAC9 (_RtlpHpSegFreeRangeRemove@8.c)
 *     _RtlpHpSegPageRangeSplit@12 @ 0x4B37D204 (_RtlpHpSegPageRangeSplit@12.c)
 */

unsigned int __fastcall RtlpHpSegLargeRangeAllocate(int a1, unsigned int a2, int a3, int a4)
{
  _DWORD *v4; // ebx
  char v6; // cl
  int v7; // edx
  unsigned int v8; // esi
  unsigned int i; // ecx
  unsigned int v10; // eax
  _DWORD **v11; // eax
  unsigned int v12; // ecx
  _DWORD *j; // ecx
  unsigned int v14; // esi
  int v15; // esi
  char v17; // [esp+10h] [ebp-10h]
  unsigned int v19; // [esp+18h] [ebp-8h]
  __int16 *v20; // [esp+1Ch] [ebp-4h]
  unsigned int v21; // [esp+28h] [ebp+8h]

  v4 = (_DWORD *)a1;
  v6 = *(_BYTE *)(a1 + 4);
  v21 = a3 << v6;
  v17 = v6;
  while ( 2 )
  {
    v7 = (a2 & *v4) + ((int)(a2 - (a2 & *v4)) >> 4 << v6);
    v8 = v7;
    v19 = v7 + (*(unsigned __int8 *)(a2 + 15) << v6);
    v20 = (__int16 *)(*(_DWORD *)((v7 & *v4) + 0xC) + 2 * ((v7 - ((unsigned int)v7 & *v4)) >> 21));
    for ( i = (v7 + 0x200000) & 0xFFE00000; ; i += 0x200000 )
    {
      v4 = (_DWORD *)a1;
      v10 = v19;
      if ( *v20 < 0 )
      {
        if ( i >= v19 )
          i = v19;
        if ( i - v8 >= v21 )
        {
          v14 = v8 - v7;
          if ( a4 )
            RtlpHpSegFreeRangeRemove(a1, (_RTL_BALANCED_NODE *)a2);
          if ( v14 )
          {
            v15 = RtlpHpSegPageRangeSplit(v14 >> *(_BYTE *)(a1 + 4));
            RtlpHpSegFreeRangeInsert(a1, a2, 0);
            return v15;
          }
          return a2;
        }
        v10 = v19;
      }
      if ( i >= v10 )
        break;
      v8 = i;
      ++v20;
    }
    v11 = *(_DWORD ***)(a2 + 4);
    v12 = a2;
    if ( v11 )
    {
      a2 = *(_DWORD *)(a2 + 4);
      for ( j = *v11; j; j = (_DWORD *)*j )
        a2 = (unsigned int)j;
    }
    else
    {
      while ( 1 )
      {
        a2 = *(_DWORD *)(a2 + 8) & 0xFFFFFFFC;
        if ( !a2 || *(_DWORD *)a2 == v12 )
          break;
        v12 = a2;
      }
    }
    if ( a2 )
    {
      v6 = v17;
      continue;
    }
    break;
  }
  return 0;
}
