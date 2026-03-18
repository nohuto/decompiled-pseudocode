/*
 * XREFs of sub_1C005B530 @ 0x1C005B530
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C001D080 @ 0x1C001D080 (sub_1C001D080.c)
 *     sub_1C001D340 @ 0x1C001D340 (sub_1C001D340.c)
 *     sub_1C002E0B4 @ 0x1C002E0B4 (sub_1C002E0B4.c)
 *     sub_1C002E188 @ 0x1C002E188 (sub_1C002E188.c)
 *     sub_1C002E62C @ 0x1C002E62C (sub_1C002E62C.c)
 *     sub_1C003B2A0 @ 0x1C003B2A0 (sub_1C003B2A0.c)
 */

__int64 __fastcall sub_1C005B530(__int64 a1, __int64 a2, char *a3, unsigned int a4, __int64 a5, __int64 a6)
{
  SIZE_T v6; // rdi
  int v8; // esi
  unsigned int v10; // ebx
  int v12; // esi
  char *v13; // rcx
  __m128 *PoolWithTag; // rax
  __int64 v15; // [rsp+28h] [rbp-30h]

  v6 = a4;
  v8 = a2;
  v10 = 0;
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 )
  {
    if ( LOWORD(DeviceObject->DeviceType) )
      sub_1C002E0B4((__int64)DeviceObject->DeviceExtension, 0, 1u, 0xBu, (__int64)&unk_1C00654F0);
    if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 )
    {
      if ( LOWORD(DeviceObject->DeviceType) )
        sub_1C003B2A0(DeviceObject->DeviceExtension, a2, (_DWORD)a3, 12, (__int64)&unk_1C00654F0, a1);
      if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 )
      {
        if ( LOWORD(DeviceObject->DeviceType) )
        {
          LODWORD(v15) = v8;
          sub_1C002E188((__int64)DeviceObject->DeviceExtension, 0, 1u, 0xDu, (__int64)&unk_1C00654F0, v15);
        }
        if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 )
        {
          if ( LOWORD(DeviceObject->DeviceType) )
            sub_1C002E62C((__int64)DeviceObject->DeviceExtension, a2, 1u, 0xEu, (__int64)&unk_1C00654F0, a3);
          if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 )
          {
            if ( LOWORD(DeviceObject->DeviceType) )
            {
              LODWORD(v15) = v6;
              sub_1C002E188((__int64)DeviceObject->DeviceExtension, 0, 1u, 0xFu, (__int64)&unk_1C00654F0, v15);
            }
            if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 )
            {
              if ( LOWORD(DeviceObject->DeviceType) )
                sub_1C002E62C((__int64)DeviceObject->DeviceExtension, a2, 1u, 0x10u, (__int64)&unk_1C00654F0, a5);
              if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
                sub_1C002E62C((__int64)DeviceObject->DeviceExtension, a2, 1u, 0x11u, (__int64)&unk_1C00654F0, a6);
            }
          }
        }
      }
    }
  }
  if ( !a6 )
    return 3221225485LL;
  v12 = v8 - 1;
  if ( !v12 )
  {
    if ( (unsigned int)v6 <= 0x200 )
    {
      PoolWithTag = (__m128 *)ExAllocatePoolWithTag(PoolType, v6, 0x42554855u);
      *(_QWORD *)a6 = PoolWithTag;
      if ( !PoolWithTag )
        return v10;
      sub_1C001D340(PoolWithTag, 0, v6);
      v13 = *(char **)a6;
      if ( !*(_QWORD *)a6 )
        return v10;
      *(_DWORD *)(a6 + 8) = v6;
      goto LABEL_34;
    }
    return (unsigned int)-2147483643;
  }
  if ( v12 == 2 )
  {
    if ( (unsigned int)v6 <= 0x44 )
    {
      v13 = (char *)a6;
LABEL_34:
      sub_1C001D080(v13, a3, v6);
      return v10;
    }
    return (unsigned int)-2147483643;
  }
  return (unsigned int)-1073741811;
}
