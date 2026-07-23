/*
 * XREFs of RtlpHpSegContextCompact @ 0x180006B88
 * Callers:
 *     RtlpHpHeapCompact @ 0x180006AE4 (RtlpHpHeapCompact.c)
 * Callees:
 *     RtlpHpSegSegmentFree @ 0x180004B70 (RtlpHpSegSegmentFree.c)
 *     RtlpHpSegFreeRangeInsert @ 0x180006CD0 (RtlpHpSegFreeRangeInsert.c)
 *     RtlpHpSegFreeRangeRemove @ 0x180006DB8 (RtlpHpSegFreeRangeRemove.c)
 *     RtlReleaseSRWLockExclusive @ 0x180012C70 (RtlReleaseSRWLockExclusive.c)
 *     RtlpHpSegPageRangeCoalesce @ 0x1800281F0 (RtlpHpSegPageRangeCoalesce.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 */

_QWORD *__fastcall RtlpHpSegContextCompact(__int64 a1, char a2)
{
  bool v2; // zf
  int v4; // r15d
  _QWORD *i; // rsi
  _QWORD *v6; // rbx
  _QWORD *result; // rax
  unsigned __int64 j; // rbx
  __int64 v9; // rcx
  _QWORD *v10; // rax
  __int64 v11; // rcx
  _QWORD *v12; // rdx
  _QWORD **v13; // rcx
  __int64 v14; // rdx
  _QWORD *v15; // [rsp+30h] [rbp-10h] BYREF
  _QWORD *v16; // [rsp+38h] [rbp-8h]
  __int64 v17; // [rsp+70h] [rbp+30h] BYREF

  v2 = *(_QWORD *)(a1 + 88) == 0LL;
  v16 = &v15;
  v15 = &v15;
  if ( !v2 )
  {
    v4 = a2 & 1;
    if ( (a2 & 1) == 0 )
      RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 64));
    LOBYTE(v17) = -1;
    for ( i = *(_QWORD **)(a1 + 72); i != (_QWORD *)(a1 + 72); i = (_QWORD *)*i )
    {
      for ( j = (unsigned __int64)&i[4 * *(unsigned __int8 *)(a1 + 10)];
            j < (unsigned __int64)(i + 1024);
            j += 32LL * *(unsigned __int8 *)(j + 31) )
      {
        if ( (*(_BYTE *)(j + 24) & 1) == 0 && *(_WORD *)(j + 28) != 0xFFFF )
        {
          RtlpHpSegFreeRangeRemove(a1, j);
          *(_BYTE *)(j + 24) |= 1u;
          v9 = 32LL * ((unsigned int)*(unsigned __int8 *)(j + 31) - 1);
          *(_BYTE *)(v9 + j + 24) |= 1u;
          j = RtlpHpSegPageRangeCoalesce(a1, (__int64)&v17);
          v10 = (_QWORD *)RtlpHpSegFreeRangeInsert(a1, j, 0LL);
          if ( v10 )
          {
            v11 = *v10;
            i = (_QWORD *)i[1];
            if ( *(_QWORD **)(*v10 + 8LL) != v10
              || (v12 = (_QWORD *)v10[1], (_QWORD *)*v12 != v10)
              || (*v12 = v11, *(_QWORD *)(v11 + 8) = v12, v13 = (_QWORD **)v16, --*(_QWORD *)(a1 + 88), *v13 != &v15) )
            {
              __fastfail(3u);
            }
            v10[1] = v13;
            *v10 = &v15;
            *v13 = v10;
            v16 = v10;
            break;
          }
        }
      }
    }
    if ( !v4 )
      RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 64));
  }
  v6 = v15;
  while ( 1 )
  {
    result = &v15;
    if ( v6 == &v15 )
      break;
    v14 = (__int64)v6;
    v6 = (_QWORD *)*v6;
    RtlpHpSegSegmentFree(a1, v14, 0x7FFFFFFF, 1);
  }
  return result;
}
