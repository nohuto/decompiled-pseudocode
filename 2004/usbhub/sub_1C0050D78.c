/*
 * XREFs of sub_1C0050D78 @ 0x1C0050D78
 * Callers:
 *     sub_1C0039198 @ 0x1C0039198 (sub_1C0039198.c)
 * Callees:
 *     sub_1C0011220 @ 0x1C0011220 (sub_1C0011220.c)
 *     sub_1C001D340 @ 0x1C001D340 (sub_1C001D340.c)
 *     sub_1C002E0B4 @ 0x1C002E0B4 (sub_1C002E0B4.c)
 *     sub_1C002E188 @ 0x1C002E188 (sub_1C002E188.c)
 *     sub_1C002E288 @ 0x1C002E288 (sub_1C002E288.c)
 *     sub_1C004A608 @ 0x1C004A608 (sub_1C004A608.c)
 *     sub_1C0053B04 @ 0x1C0053B04 (sub_1C0053B04.c)
 *     sub_1C00552B8 @ 0x1C00552B8 (sub_1C00552B8.c)
 */

__int64 __fastcall sub_1C0050D78(__int64 a1, __int64 a2, __int64 a3)
{
  int v5; // esi
  _DWORD *v6; // rdi
  PDEVICE_OBJECT v7; // rcx
  unsigned __int16 v8; // r9
  __m128 *PoolWithTag; // rax
  char *v10; // rbx
  __int32 v11; // esi
  __int64 v12; // rcx
  int v13; // ebp
  __int64 v14; // r8
  __int64 v15; // rdx
  _WORD *v16; // rsi
  __int64 v17; // rcx
  char *v18; // rdi
  int v19; // ebp
  __int64 v21; // [rsp+28h] [rbp-60h]
  __int64 v22; // [rsp+30h] [rbp-58h]
  __int32 v23[4]; // [rsp+50h] [rbp-38h] BYREF
  unsigned __int16 v24; // [rsp+A8h] [rbp+20h] BYREF

  v23[0] = 0;
  v5 = a2;
  v6 = sub_1C0011220(a2);
  if ( !*((_BYTE *)v6 + 1415) )
  {
    if ( off_1C006B000 == (_UNKNOWN *)&off_1C006B000 )
      return 3221225659LL;
    v7 = DeviceObject;
    if ( !LOWORD(DeviceObject->DeviceType) )
      return 3221225659LL;
    v8 = 23;
    goto LABEL_26;
  }
  PoolWithTag = (__m128 *)ExAllocatePoolWithTag(PoolType, 0xFFuLL, 0x42554855u);
  v10 = (char *)PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  sub_1C001D340(PoolWithTag, 0, 0xFFuLL);
  v24 = 255;
  v11 = sub_1C00552B8(a1, v5, (unsigned int)v23, (_DWORD)v10, (__int64)&v24, 0, 0);
  v12 = v11 & 0xC0000000;
  if ( (_DWORD)v12 == -1073741824 || (v13 = v24, !(unsigned __int8)sub_1C0053B04(v12, v10, v24, v23)) )
  {
    sub_1C004A608(a1, *((_WORD *)v6 + 714), 0x3Fu, v10, v24, v11, v23[0], aIdstringC, 1762, 0);
    ExFreePoolWithTag(v10, 0);
    if ( off_1C006B000 == (_UNKNOWN *)&off_1C006B000 )
      return 3221225659LL;
    v7 = DeviceObject;
    if ( !LOWORD(DeviceObject->DeviceType) )
      return 3221225659LL;
    v8 = 24;
LABEL_26:
    sub_1C002E0B4((__int64)v7->DeviceExtension, 0, 1u, v8, (__int64)&unk_1C0064FB8);
    return 3221225659LL;
  }
  v15 = ((unsigned __int8)*v10 >> 1) - 1;
  if ( (unsigned __int8)*v10 >> 1 == 1 )
  {
    ExFreePoolWithTag(v10, 0);
    return 3221225659LL;
  }
  v16 = v10 + 2;
  v17 = (unsigned int)v15;
  v18 = v10;
  while ( v17 )
  {
    *(_WORD *)v18 = *v16++;
    v18 += 2;
    --v17;
  }
  *(_WORD *)&v10[2 * (unsigned int)v15] = 0;
  *(_DWORD *)(a3 + 4) = v13;
  *(_QWORD *)(a3 + 8) = v10;
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
  {
    LODWORD(v21) = v15;
    sub_1C002E188((__int64)DeviceObject->DeviceExtension, 0, 1u, 0x19u, (__int64)&unk_1C0064FB8, v21);
  }
  v19 = 0;
  while ( *(_WORD *)v10 )
  {
    if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
    {
      LODWORD(v22) = *(unsigned __int16 *)v10;
      LODWORD(v21) = v19;
      sub_1C002E288((__int64)DeviceObject->DeviceExtension, v15, v14, 0x1Au, (__int64)&unk_1C0064FB8, v21, v22);
      ++v19;
    }
    v10 += 2;
  }
  return 0LL;
}
