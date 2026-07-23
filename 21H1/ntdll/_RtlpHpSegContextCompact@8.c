/*
 * XREFs of _RtlpHpSegContextCompact@8 @ 0x4B37B591
 * Callers:
 *     _RtlpHpHeapCompact@8 @ 0x4B378991 (_RtlpHpHeapCompact@8.c)
 * Callees:
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     _RtlpHpSegFreeRangeInsert@12 @ 0x4B37B9EA (_RtlpHpSegFreeRangeInsert@12.c)
 *     _RtlpHpSegFreeRangeRemove@8 @ 0x4B37BAC9 (_RtlpHpSegFreeRangeRemove@8.c)
 *     _RtlpHpSegPageRangeCoalesce@20 @ 0x4B37CA1F (_RtlpHpSegPageRangeCoalesce@20.c)
 *     _RtlpHpSegSegmentFree@16 @ 0x4B37D796 (_RtlpHpSegSegmentFree@16.c)
 */

_DWORD *__fastcall RtlpHpSegContextCompact(int a1, int a2)
{
  _DWORD *v3; // eax
  _DWORD *v4; // ebx
  int v5; // eax
  _DWORD *v6; // esi
  _DWORD *v7; // eax
  int v8; // ecx
  _DWORD *v9; // edx
  _DWORD **v10; // ecx
  _DWORD *v11; // esi
  _DWORD *result; // eax
  char v13; // [esp+13h] [ebp-15h] BYREF
  int v14; // [esp+14h] [ebp-14h]
  _DWORD *v15; // [esp+18h] [ebp-10h]
  int v16; // [esp+1Ch] [ebp-Ch]
  _DWORD *v17; // [esp+20h] [ebp-8h] BYREF
  _DWORD *v18; // [esp+24h] [ebp-4h]

  v14 = a2;
  v18 = &v17;
  v17 = &v17;
  if ( *(_DWORD *)(a1 + 76) )
  {
    v16 = a2 & 1;
    if ( (a2 & 1) == 0 )
      RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 64));
    v3 = (_DWORD *)(a1 + 68);
    v13 = -1;
    v4 = *(_DWORD **)(a1 + 68);
    while ( v4 != v3 )
    {
      v5 = 4 * *(unsigned __int8 *)(a1 + 6);
      v6 = &v4[v5];
      v15 = v4 + 1024;
      if ( &v4[v5] < v4 + 1024 )
      {
        while ( 1 )
        {
          if ( ((unsigned __int8)-((unsigned __int16)~(v6[3] >> 8) != 0) & ((v6[3] & 1) == 0)) != 0 )
          {
            RtlpHpSegFreeRangeRemove(a1, v6);
            *((_BYTE *)v6 + 12) |= 1u;
            LOBYTE(v6[4 * *((unsigned __int8 *)v6 + 15) - 1]) |= 1u;
            v6 = (_DWORD *)RtlpHpSegPageRangeCoalesce(v14, 1, &v13);
            v7 = (_DWORD *)RtlpHpSegFreeRangeInsert(a1, v6, 0);
            if ( v7 )
              break;
          }
          v6 += 4 * *((unsigned __int8 *)v6 + 15);
          if ( v6 >= v15 )
            goto LABEL_14;
        }
        v8 = *v7;
        v4 = (_DWORD *)v4[1];
        if ( *(_DWORD **)(*v7 + 4) != v7
          || (v9 = (_DWORD *)v7[1], (_DWORD *)*v9 != v7)
          || (*v9 = v8, *(_DWORD *)(v8 + 4) = v9, v10 = (_DWORD **)v18, --*(_DWORD *)(a1 + 76), *v10 != &v17) )
        {
          __fastfail(3u);
        }
        *v7 = &v17;
        v7[1] = v10;
        *v10 = v7;
        v18 = v7;
      }
LABEL_14:
      v4 = (_DWORD *)*v4;
      v3 = (_DWORD *)(a1 + 68);
    }
    if ( !v16 )
      RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 64));
  }
  v11 = v17;
  while ( 1 )
  {
    result = &v17;
    if ( v11 == &v17 )
      break;
    v11 = (_DWORD *)*v11;
    RtlpHpSegSegmentFree(0x7FFFFFFF, 1);
  }
  return result;
}
