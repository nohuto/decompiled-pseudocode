/*
 * XREFs of sub_1C0048A24 @ 0x1C0048A24
 * Callers:
 *     sub_1C002F764 @ 0x1C002F764 (sub_1C002F764.c)
 *     sub_1C004A410 @ 0x1C004A410 (sub_1C004A410.c)
 *     sub_1C004AE00 @ 0x1C004AE00 (sub_1C004AE00.c)
 *     sub_1C004AF80 @ 0x1C004AF80 (sub_1C004AF80.c)
 *     sub_1C004B020 @ 0x1C004B020 (sub_1C004B020.c)
 *     sub_1C004B0B0 @ 0x1C004B0B0 (sub_1C004B0B0.c)
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     __security_check_cookie @ 0x1C001CF60 (__security_check_cookie.c)
 *     sub_1C002D9E8 @ 0x1C002D9E8 (sub_1C002D9E8.c)
 *     sub_1C002E188 @ 0x1C002E188 (sub_1C002E188.c)
 *     sub_1C002E62C @ 0x1C002E62C (sub_1C002E62C.c)
 */

_QWORD *__fastcall sub_1C0048A24(__int64 a1, unsigned __int16 a2)
{
  int v2; // esi
  __int64 v4; // rdx
  _QWORD *PoolWithTag; // rbx
  int v6; // eax
  __int64 v7; // r9
  int v8; // r11d
  int v9; // r10d
  __int64 v10; // rax
  int v12; // [rsp+28h] [rbp-30h]
  int v13; // [rsp+30h] [rbp-28h] BYREF
  __int16 v14; // [rsp+34h] [rbp-24h]

  v2 = a2;
  v13 = 0;
  v14 = 0;
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
  {
    v12 = a2;
    sub_1C002E188((__int64)DeviceObject->DeviceExtension, 0, 1u, 0x14u, (__int64)&unk_1C0063950, v12);
  }
  sub_1C000F050(a1);
  PoolWithTag = ExAllocatePoolWithTag(PoolType, 0x18uLL, 0x42554855u);
  if ( PoolWithTag )
  {
    *(_OWORD *)PoolWithTag = 0LL;
    PoolWithTag[2] = 0LL;
    *((_DWORD *)PoolWithTag + 1) = v2;
    v6 = sub_1C002D9E8(a1, v4, &v13, 6u);
    sub_1C000FD80(a1, 64, 1752067121, (__int64)PoolWithTag, v6);
    if ( v9 < 0 )
    {
      *((_DWORD *)PoolWithTag + 5) = 0;
      v10 = 0LL;
    }
    else
    {
      LODWORD(v10) = v13;
      *((_DWORD *)PoolWithTag + 5) = v13;
      v10 = (unsigned int)v10;
    }
    sub_1C000FD80(a1, v8, 1752067122, v7, v10);
  }
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
    sub_1C002E62C((__int64)DeviceObject->DeviceExtension, v4, 1u, 0x15u, (__int64)&unk_1C0063950, PoolWithTag);
  return PoolWithTag;
}
