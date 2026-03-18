/*
 * XREFs of sub_1C002BAB8 @ 0x1C002BAB8
 * Callers:
 *     sub_1C002CA30 @ 0x1C002CA30 (sub_1C002CA30.c)
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C0016CA0 @ 0x1C0016CA0 (sub_1C0016CA0.c)
 *     sub_1C001D340 @ 0x1C001D340 (sub_1C001D340.c)
 *     sub_1C002AE10 @ 0x1C002AE10 (sub_1C002AE10.c)
 *     sub_1C002E0B4 @ 0x1C002E0B4 (sub_1C002E0B4.c)
 *     sub_1C002E188 @ 0x1C002E188 (sub_1C002E188.c)
 *     sub_1C005C7EC @ 0x1C005C7EC (sub_1C005C7EC.c)
 */

__int64 __fastcall sub_1C002BAB8(__int64 a1)
{
  _DWORD *v2; // r15
  unsigned int v3; // ebx
  _DWORD *v4; // rax
  __m128 *PoolWithTag; // rsi
  _DWORD *v6; // rax
  unsigned __int16 i; // di
  unsigned __int16 j; // di
  __int64 v9; // rax

  v2 = sub_1C000F050(a1);
  v3 = 0;
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
    sub_1C002E0B4(DeviceObject->DeviceExtension, 0, 1, 41, (__int64)&unk_1C0062088);
  v4 = sub_1C000F050(a1);
  PoolWithTag = (__m128 *)ExAllocatePoolWithTag(PoolType, 4LL * *((unsigned __int8 *)v4 + 2938) + 4, 0x42554855u);
  if ( PoolWithTag )
  {
    v6 = sub_1C000F050(a1);
    sub_1C001D340(PoolWithTag, 0, 4LL * *((unsigned __int8 *)v6 + 2938) + 4);
  }
  *((_QWORD *)v2 + 377) = PoolWithTag;
  if ( PoolWithTag )
  {
    for ( i = 1; i <= *((unsigned __int8 *)sub_1C000F050(a1) + 2938); ++i )
    {
      if ( ((unsigned __int8)(1 << (i & 7)) & *((_BYTE *)v2 + ((unsigned __int64)i >> 3) + 2943)) != 0 )
      {
        if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 )
        {
          if ( LOWORD(DeviceObject->DeviceType) )
            sub_1C002E188(DeviceObject->DeviceExtension, 0, 1, 42, (__int64)&unk_1C0062088, i);
        }
        PoolWithTag->m128_i32[i] |= 0x10u;
      }
    }
    sub_1C002AE10(a1, (__int64)PoolWithTag);
    if ( *((_QWORD *)v2 + 378) )
    {
      for ( j = 1; j <= *((unsigned __int8 *)sub_1C000F050(a1) + 2938); ++j )
      {
        if ( (PoolWithTag->m128_i32[j] & 0x40) != 0 )
        {
          v9 = sub_1C0016CA0(a1, j);
          if ( v9 )
            *(_QWORD *)(v9 + 2920) = (*(_DWORD *)(28LL * j + *((_QWORD *)v2 + 378) + 20) & 0x7F8000 | (unsigned __int64)(HIWORD(*(_DWORD *)(28LL * j + *((_QWORD *)v2 + 378) + 20)) & 0x7F80)) >> 7;
        }
      }
    }
    sub_1C005C7EC(a1);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v3;
}
