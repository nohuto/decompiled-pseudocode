/*
 * XREFs of sub_1C005A3A0 @ 0x1C005A3A0
 * Callers:
 *     sub_1C004FEB8 @ 0x1C004FEB8 (sub_1C004FEB8.c)
 *     sub_1C0050274 @ 0x1C0050274 (sub_1C0050274.c)
 * Callees:
 *     sub_1C0011220 @ 0x1C0011220 (sub_1C0011220.c)
 *     sub_1C001D080 @ 0x1C001D080 (sub_1C001D080.c)
 *     sub_1C001D340 @ 0x1C001D340 (sub_1C001D340.c)
 *     sub_1C002E0B4 @ 0x1C002E0B4 (sub_1C002E0B4.c)
 *     sub_1C005AC64 @ 0x1C005AC64 (sub_1C005AC64.c)
 */

__int64 __fastcall sub_1C005A3A0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  PDEVICE_OBJECT v5; // rcx
  _DWORD *v6; // rbx
  int v7; // ebx
  __int64 v8; // rsi
  __m128 *PoolWithTag; // rax
  char *v10; // r14
  __int128 v12; // [rsp+30h] [rbp-38h] BYREF
  __int64 v13; // [rsp+70h] [rbp+8h] BYREF
  PVOID P; // [rsp+80h] [rbp+18h] BYREF

  v13 = a1;
  v6 = sub_1C0011220(a2);
  P = 0LL;
  LODWORD(v13) = 0;
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 )
  {
    v5 = DeviceObject;
    if ( LOWORD(DeviceObject->DeviceType) )
      sub_1C002E0B4((__int64)DeviceObject->DeviceExtension, 0, 1u, 0x21u, (__int64)&unk_1C00654F0);
  }
  *(_QWORD *)(a3 + 8) = 0LL;
  *(_DWORD *)(a3 + 4) = 0;
  v12 = *(_OWORD *)(v6 + 651);
  v7 = sub_1C005AC64(v5, v4, &v12, &P, &v13);
  if ( v7 >= 0 )
  {
    v8 = (unsigned int)v13;
    if ( (_DWORD)v13 )
    {
      PoolWithTag = (__m128 *)ExAllocatePoolWithTag(PoolType, (unsigned int)v13 + 2LL, 0x42554855u);
      v10 = (char *)PoolWithTag;
      if ( PoolWithTag )
      {
        sub_1C001D340(PoolWithTag, 0, v8 + 2);
        sub_1C001D080(v10, (char *)P, (unsigned int)v8);
        *(_QWORD *)(a3 + 8) = v10;
        *(_DWORD *)(a3 + 4) = v8 + 2;
      }
      else
      {
        v7 = -1073741670;
      }
      if ( P )
        ExFreePoolWithTag(P, 0);
    }
  }
  return (unsigned int)v7;
}
