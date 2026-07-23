/*
 * XREFs of RtlpHpSegPageRangeComputeLargePageCost @ 0x18010F44C
 * Callers:
 *     RtlpHpSegFreeRangeInsert @ 0x180006CD0 (RtlpHpSegFreeRangeInsert.c)
 *     RtlpHpSegFree @ 0x1800279F0 (RtlpHpSegFree.c)
 *     RtlpHpSegLfhAllocate @ 0x180029AC0 (RtlpHpSegLfhAllocate.c)
 *     RtlpHpSegAlloc @ 0x180029B70 (RtlpHpSegAlloc.c)
 *     RtlpHpSegSubAllocate @ 0x180078588 (RtlpHpSegSubAllocate.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpHpSegPageRangeComputeLargePageCost(_QWORD *a1, __int64 a2, int a3)
{
  __int64 v4; // rax
  unsigned int v5; // edx
  __int64 v6; // r9
  unsigned __int64 v7; // r10
  __int16 *v8; // rdx
  unsigned int v9; // r8d
  unsigned int v10; // ecx
  int v11; // eax
  int v12; // r9d

  v4 = a2 & *a1;
  v5 = a2 - v4;
  v6 = *(_QWORD *)(v4 + 24);
  v7 = v6 + 2 * ((unsigned __int64)(v5 + a3 - 1) >> 21);
  v8 = (__int16 *)(v6 + 2 * ((unsigned __int64)v5 >> 21));
  v9 = ((__int64)(v7 - (_QWORD)v8) >> 1) + 1;
  v10 = 0;
  v11 = 0;
  v12 = 0;
  while ( (unsigned __int64)v8 <= v7 )
  {
    if ( (*v8 & 0x7FF) != 0 )
    {
      if ( *v8 < 0 )
        ++v11;
    }
    else
    {
      ++v12;
    }
    ++v8;
  }
  if ( v11 == v9 )
  {
    LOBYTE(v10) = v9 > (unsigned int)(a3 + 0x1FFFFF) >> 21;
  }
  else if ( v11 )
  {
    return 2;
  }
  else
  {
    return 4 - (unsigned int)(v12 != 0);
  }
  return v10;
}
