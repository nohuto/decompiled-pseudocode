/*
 * XREFs of sub_1C0032E60 @ 0x1C0032E60
 * Callers:
 *     sub_1C0039198 @ 0x1C0039198 (sub_1C0039198.c)
 * Callees:
 *     sub_1C0011220 @ 0x1C0011220 (sub_1C0011220.c)
 *     sub_1C001D340 @ 0x1C001D340 (sub_1C001D340.c)
 *     sub_1C002E0B4 @ 0x1C002E0B4 (sub_1C002E0B4.c)
 *     sub_1C002E188 @ 0x1C002E188 (sub_1C002E188.c)
 *     sub_1C00320D4 @ 0x1C00320D4 (sub_1C00320D4.c)
 *     sub_1C0033138 @ 0x1C0033138 (sub_1C0033138.c)
 */

__m128 *__fastcall sub_1C0032E60(__int64 a1, __int64 a2)
{
  int v2; // ebp
  _DWORD *v3; // r14
  __m128 *v4; // rsi
  unsigned int *PoolWithTag; // rax
  int v6; // r8d
  unsigned int *v7; // rdi
  int v8; // ebx
  PDEVICE_OBJECT v9; // rcx
  unsigned __int16 v10; // r9
  __int64 v11; // rax
  SIZE_T v12; // rdx
  __m128 *v13; // rax
  int v14; // r8d
  unsigned int v15; // ebx
  __int64 v17; // [rsp+28h] [rbp-40h]
  __int64 v18; // [rsp+70h] [rbp+8h] BYREF

  v18 = a1;
  v2 = a2;
  v3 = sub_1C0011220(a2);
  v4 = 0LL;
  LODWORD(v18) = 0;
  if ( (v3[358] & 0x400) == 0 )
    return 0LL;
  PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(PoolType, 0x10uLL, 0x42554855u);
  v7 = PoolWithTag;
  if ( !PoolWithTag )
    return 0LL;
  *(_OWORD *)PoolWithTag = 0LL;
  v8 = sub_1C0033138(v2, 0, v6, 4, (__int64)PoolWithTag, 16, (__int64)&v18);
  if ( v8 >= 0 )
  {
    if ( (_DWORD)v18 != 16
      || v7[1] != 262400
      || (v11 = *((unsigned __int8 *)v7 + 8), !(_BYTE)v11)
      || (v12 = *v7, v12 != 24 * v11 + 16) )
    {
      v8 = -1073741668;
      if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
        sub_1C002E0B4((__int64)DeviceObject->DeviceExtension, 0, 1u, 0xDu, (__int64)&unk_1C0062D38);
      goto LABEL_28;
    }
    v13 = (__m128 *)ExAllocatePoolWithTag(PoolType, v12, 0x42554855u);
    v4 = v13;
    if ( !v13 )
    {
      v8 = -1073741670;
      goto LABEL_28;
    }
    sub_1C001D340(v13, 0, *v7);
    v8 = sub_1C0033138(v2, 0, v14, 4, (__int64)v4, *v7, (__int64)&v18);
    if ( v8 >= 0 )
    {
      v15 = v18;
      if ( (_DWORD)v18 != *v7 || RtlCompareMemory(v7, v4, 0x10uLL) != 16 )
      {
        v8 = -1073741668;
        goto LABEL_28;
      }
      v8 = sub_1C00320D4(
             (unsigned int *)v4,
             v15,
             *((_QWORD *)v3 + 299),
             *(unsigned __int16 *)(*((_QWORD *)v3 + 299) + 2LL));
      if ( v8 >= 0 )
        goto LABEL_28;
      if ( off_1C006B000 == (_UNKNOWN *)&off_1C006B000 )
        goto LABEL_28;
      v9 = DeviceObject;
      if ( !LOWORD(DeviceObject->DeviceType) )
        goto LABEL_28;
      v10 = 15;
    }
    else
    {
      if ( off_1C006B000 == (_UNKNOWN *)&off_1C006B000 )
        goto LABEL_28;
      v9 = DeviceObject;
      if ( !LOWORD(DeviceObject->DeviceType) )
        goto LABEL_28;
      v10 = 14;
    }
  }
  else
  {
    if ( off_1C006B000 == (_UNKNOWN *)&off_1C006B000 )
      goto LABEL_28;
    v9 = DeviceObject;
    if ( !LOWORD(DeviceObject->DeviceType) )
      goto LABEL_28;
    v10 = 12;
  }
  LODWORD(v17) = v8;
  sub_1C002E188((__int64)v9->DeviceExtension, 0, 1u, v10, (__int64)&unk_1C0062D38, v17);
LABEL_28:
  ExFreePoolWithTag(v7, 0);
  if ( v8 >= 0 )
    return v4;
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
  return 0LL;
}
