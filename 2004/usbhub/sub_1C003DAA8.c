/*
 * XREFs of sub_1C003DAA8 @ 0x1C003DAA8
 * Callers:
 *     sub_1C003DC2C @ 0x1C003DC2C (sub_1C003DC2C.c)
 *     sub_1C0048D4C @ 0x1C0048D4C (sub_1C0048D4C.c)
 *     sub_1C0048FE8 @ 0x1C0048FE8 (sub_1C0048FE8.c)
 * Callees:
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C001D340 @ 0x1C001D340 (sub_1C001D340.c)
 *     sub_1C002DF88 @ 0x1C002DF88 (sub_1C002DF88.c)
 *     sub_1C002E0B4 @ 0x1C002E0B4 (sub_1C002E0B4.c)
 *     sub_1C002E188 @ 0x1C002E188 (sub_1C002E188.c)
 */

__m128 *__fastcall sub_1C003DAA8(__int64 a1, _DWORD *a2, __int64 a3)
{
  unsigned int v6; // ebp
  __m128 *PoolWithTag; // rax
  __m128 *v8; // rbx
  int v9; // eax
  __int64 v10; // rdi
  int v12; // [rsp+78h] [rbp+20h] BYREF

  v12 = 0;
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
    sub_1C002E0B4((__int64)DeviceObject->DeviceExtension, 0, 2u, 0x28u, (__int64)&unk_1C0062E18);
  v6 = 64;
  do
  {
    PoolWithTag = (__m128 *)ExAllocatePoolWithTag(PagedPool, v6, 0x42554855u);
    v8 = PoolWithTag;
    if ( !PoolWithTag )
    {
      *a2 = -1073741670;
      return 0LL;
    }
    sub_1C001D340(PoolWithTag, 0, v6);
    v8->m128_i32[0] = 0;
    v9 = sub_1C002DF88(a1, a3, (__int64)v8, v6, (__int64)&v12);
    v10 = v9;
    if ( (v9 & 0xC0000000) == 0xC0000000 )
    {
      if ( v9 == -1073741789 )
        v6 = v8->m128_u32[1];
      ExFreePoolWithTag(v8, 0);
      v8 = 0LL;
    }
  }
  while ( (_DWORD)v10 == -1073741789 );
  sub_1C000FD80(a1, 32, 1734633848, a3, v10);
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 )
  {
    if ( LOWORD(DeviceObject->DeviceType) )
      sub_1C002E188((__int64)DeviceObject->DeviceExtension, 0, 2u, 0x29u, (__int64)&unk_1C0062E18, v10);
  }
  *a2 = v10;
  return v8;
}
