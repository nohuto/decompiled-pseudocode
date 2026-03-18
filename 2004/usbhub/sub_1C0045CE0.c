/*
 * XREFs of sub_1C0045CE0 @ 0x1C0045CE0
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

__int64 __fastcall sub_1C0045CE0(__int64 a1, __int64 a2, char *a3, unsigned int a4, __int64 a5, __int64 a6)
{
  SIZE_T v6; // r15
  int v8; // edi
  unsigned int v10; // ebx
  int v11; // edi
  unsigned int v12; // eax
  char *v13; // rcx
  __m128 *PoolWithTag; // rax
  char *v15; // rdi
  __int64 v16; // rsi
  __int64 v18; // [rsp+28h] [rbp-30h]

  v6 = a4;
  v8 = a2;
  v10 = 0;
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 )
  {
    if ( LOWORD(DeviceObject->DeviceType) )
      sub_1C002E0B4((__int64)DeviceObject->DeviceExtension, 0, 1u, 0x41u, (__int64)&unk_1C0063940);
    if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 )
    {
      if ( LOWORD(DeviceObject->DeviceType) )
        sub_1C003B2A0(DeviceObject->DeviceExtension, a2, (_DWORD)a3, 66, (__int64)&unk_1C0063940, a1);
      if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 )
      {
        if ( LOWORD(DeviceObject->DeviceType) )
        {
          LODWORD(v18) = v8;
          sub_1C002E188((__int64)DeviceObject->DeviceExtension, 0, 1u, 0x43u, (__int64)&unk_1C0063940, v18);
        }
        if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 )
        {
          if ( LOWORD(DeviceObject->DeviceType) )
            sub_1C002E62C((__int64)DeviceObject->DeviceExtension, a2, 1u, 0x44u, (__int64)&unk_1C0063940, a3);
          if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 )
          {
            if ( LOWORD(DeviceObject->DeviceType) )
            {
              LODWORD(v18) = v6;
              sub_1C002E188((__int64)DeviceObject->DeviceExtension, 0, 1u, 0x45u, (__int64)&unk_1C0063940, v18);
            }
            if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 )
            {
              if ( LOWORD(DeviceObject->DeviceType) )
                sub_1C002E62C((__int64)DeviceObject->DeviceExtension, a2, 1u, 0x46u, (__int64)&unk_1C0063940, a5);
              if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
                sub_1C002E62C((__int64)DeviceObject->DeviceExtension, a2, 1u, 0x47u, (__int64)&unk_1C0063940, a6);
            }
          }
        }
      }
    }
  }
  v11 = v8 - 1;
  if ( v11 )
  {
    v12 = 2;
    if ( v11 == 2 )
    {
      if ( *(_DWORD *)a6 != 3 )
        return v10;
      if ( (unsigned int)v6 <= 2 )
        v12 = v6;
      if ( v12 )
      {
        if ( a3 )
        {
          v13 = *(char **)(a6 + 8);
          if ( v13 )
          {
            if ( v13 != a3 )
              sub_1C001D080(v13, a3, v12);
            return v10;
          }
        }
      }
    }
    return (unsigned int)-1073741811;
  }
  if ( *(_DWORD *)a6 > 1u )
    return v10;
  if ( !(_DWORD)v6 || !a3 || !*(_QWORD *)(a6 + 8) )
    return (unsigned int)-1073741811;
  PoolWithTag = (__m128 *)ExAllocatePoolWithTag(PoolType, v6, 0x42554855u);
  v15 = (char *)PoolWithTag;
  if ( PoolWithTag )
    sub_1C001D340(PoolWithTag, 0, v6);
  v16 = *(_QWORD *)(a6 + 8);
  if ( v15 )
  {
    sub_1C001D080(v15, a3, v6);
    *(_QWORD *)(v16 + 8) = v15;
    *(_DWORD *)(v16 + 4) = v6;
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v10;
}
