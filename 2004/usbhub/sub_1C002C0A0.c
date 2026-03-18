/*
 * XREFs of sub_1C002C0A0 @ 0x1C002C0A0
 * Callers:
 *     sub_1C002CA30 @ 0x1C002CA30 (sub_1C002CA30.c)
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C001D340 @ 0x1C001D340 (sub_1C001D340.c)
 *     sub_1C002DE04 @ 0x1C002DE04 (sub_1C002DE04.c)
 *     sub_1C002DF88 @ 0x1C002DF88 (sub_1C002DF88.c)
 *     sub_1C002E0B4 @ 0x1C002E0B4 (sub_1C002E0B4.c)
 *     sub_1C0037BB4 @ 0x1C0037BB4 (sub_1C0037BB4.c)
 *     sub_1C004A608 @ 0x1C004A608 (sub_1C004A608.c)
 *     sub_1C00530C8 @ 0x1C00530C8 (sub_1C00530C8.c)
 */

__int64 __fastcall sub_1C002C0A0(__int64 a1, __int64 a2)
{
  _DWORD *v4; // r13
  __int64 v5; // rbp
  unsigned int v7; // esi
  __m128 *PoolWithTag; // rax
  __m128 *v9; // rdi
  int v10; // esi
  __int128 v11; // xmm0
  int v12; // r8d
  int v13; // [rsp+A0h] [rbp+18h] BYREF
  int v14; // [rsp+A8h] [rbp+20h] BYREF

  v14 = 0;
  v4 = sub_1C000F050(a1);
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
    sub_1C002E0B4(DeviceObject->DeviceExtension, 0, 1, 24, (__int64)&unk_1C0062088);
  v5 = sub_1C0037BB4(a1, a2);
  if ( !v5 )
    return 3221225473LL;
  v7 = 64;
  while ( 1 )
  {
    PoolWithTag = (__m128 *)ExAllocatePoolWithTag(PagedPool, v7, 0x42554855u);
    v9 = PoolWithTag;
    if ( !PoolWithTag )
    {
      sub_1C002DE04(a1, v5, a2, 1212445810LL);
      return 3221225626LL;
    }
    sub_1C001D340(PoolWithTag, 0, v7);
    v9->m128_i32[0] = 0;
    v10 = sub_1C002DF88(a1, v5, (_DWORD)v9, v7, (__int64)&v14);
    if ( v10 != -1073741789 )
      break;
    v7 = v9->m128_u32[1];
    ExFreePoolWithTag(v9, 0);
  }
  sub_1C002DE04(a1, v5, a2, 1212445810LL);
  if ( v10 >= 0 )
  {
    v4[633] = v9[2].m128_i32[3];
    v4[634] = v9[2].m128_i32[2];
    v11 = *(__int128 *)((char *)v9 + 12);
    v13 = 0;
    *(_OWORD *)(v4 + 635) = v11;
    *((_WORD *)v4 + 1278) = v9[1].m128_i16[6];
    sub_1C000FD80(a1, 8, 1768842800, (__int64)v9, (__int64)v4);
    sub_1C000FD80(a1, 8, 1768842872, (int)v4[634], (int)v4[633]);
    if ( !(unsigned __int8)sub_1C00530C8(a1, (int)v4 + 2540, v12, (unsigned int)&v13, 0LL) )
    {
      v10 = -1073741811;
      sub_1C004A608(a1, 0, 64, (_DWORD)v4 + 2540, 18, -1073741811, v13, (__int64)aHubC, 4205, 0);
    }
  }
  ExFreePoolWithTag(v9, 0);
  sub_1C000FD80(a1, 8, 1768842814, v10, 0LL);
  return (unsigned int)v10;
}
