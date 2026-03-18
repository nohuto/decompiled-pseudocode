/*
 * XREFs of sub_1C002CF78 @ 0x1C002CF78
 * Callers:
 *     sub_1C002CA30 @ 0x1C002CA30 (sub_1C002CA30.c)
 * Callees:
 *     sub_1C000A740 @ 0x1C000A740 (sub_1C000A740.c)
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C002E0B4 @ 0x1C002E0B4 (sub_1C002E0B4.c)
 */

bool __fastcall sub_1C002CF78(__int64 a1)
{
  _DWORD *v2; // rbx
  _QWORD *PoolWithTag; // rax
  void *v4; // rdi
  int v5; // ebx
  int v7; // [rsp+20h] [rbp-28h]
  __int16 v8; // [rsp+58h] [rbp+10h] BYREF
  int v9; // [rsp+60h] [rbp+18h] BYREF
  __int16 v10; // [rsp+68h] [rbp+20h] BYREF
  int v11; // [rsp+6Ah] [rbp+22h]
  __int16 v12; // [rsp+6Eh] [rbp+26h]

  v2 = sub_1C000F050(a1);
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
    sub_1C002E0B4(DeviceObject->DeviceExtension, 0, 1, 25, (__int64)&unk_1C0062088);
  if ( v2[633] != 1 )
    return 0;
  if ( v2[634] == 2 )
    return 1;
  PoolWithTag = ExAllocatePoolWithTag(PoolType, 0xAuLL, 0x42554855u);
  v4 = PoolWithTag;
  if ( !PoolWithTag )
    return 0;
  v8 = 10;
  *PoolWithTag = 0LL;
  *((_WORD *)PoolWithTag + 4) = 0;
  v10 = 1664;
  v11 = 1536;
  v12 = 10;
  v5 = sub_1C000A740(a1, (__int64)&v10, (__int64)PoolWithTag, &v8, v7, &v9);
  ExFreePoolWithTag(v4, 0);
  return v5 >= 0;
}
