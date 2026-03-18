/*
 * XREFs of sub_1C0040ACC @ 0x1C0040ACC
 * Callers:
 *     sub_1C003DF14 @ 0x1C003DF14 (sub_1C003DF14.c)
 *     sub_1C003E6C4 @ 0x1C003E6C4 (sub_1C003E6C4.c)
 *     sub_1C003E9F8 @ 0x1C003E9F8 (sub_1C003E9F8.c)
 *     sub_1C003EC70 @ 0x1C003EC70 (sub_1C003EC70.c)
 *     sub_1C003EF34 @ 0x1C003EF34 (sub_1C003EF34.c)
 *     sub_1C003F208 @ 0x1C003F208 (sub_1C003F208.c)
 *     sub_1C003F498 @ 0x1C003F498 (sub_1C003F498.c)
 *     sub_1C003F948 @ 0x1C003F948 (sub_1C003F948.c)
 *     sub_1C003FC88 @ 0x1C003FC88 (sub_1C003FC88.c)
 *     sub_1C003FF9C @ 0x1C003FF9C (sub_1C003FF9C.c)
 *     sub_1C004028C @ 0x1C004028C (sub_1C004028C.c)
 *     sub_1C0040574 @ 0x1C0040574 (sub_1C0040574.c)
 *     sub_1C0040864 @ 0x1C0040864 (sub_1C0040864.c)
 * Callees:
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C002E0B4 @ 0x1C002E0B4 (sub_1C002E0B4.c)
 *     sub_1C002E188 @ 0x1C002E188 (sub_1C002E188.c)
 *     sub_1C002E354 @ 0x1C002E354 (sub_1C002E354.c)
 *     sub_1C0041184 @ 0x1C0041184 (sub_1C0041184.c)
 *     sub_1C00412A8 @ 0x1C00412A8 (sub_1C00412A8.c)
 */

__int64 __fastcall sub_1C0040ACC(__int64 a1, __int64 a2)
{
  __int64 v3; // r8
  __int64 v4; // r14
  unsigned int v5; // esi
  __int64 v6; // rbp
  __int64 v7; // r10
  __int64 v8; // r10
  __int64 v9; // r11
  __int64 v10; // r10
  __int64 v11; // rdx
  int v12; // r11d
  int v13; // ebx
  __int64 result; // rax
  __int128 *v15; // rax
  __int64 v16; // r10
  __int64 v17; // rcx
  int v18; // edx
  __int64 v19; // [rsp+28h] [rbp-50h]
  __int64 v20; // [rsp+30h] [rbp-48h]
  __int128 v21; // [rsp+40h] [rbp-38h] BYREF
  _BYTE v22[16]; // [rsp+50h] [rbp-28h] BYREF

  sub_1C000FD80(a1, 32, 1768907604, 0LL, a2);
  v3 = *(_QWORD *)(a2 + 184);
  v4 = *(_QWORD *)(a2 + 24);
  v5 = *(_DWORD *)(v3 + 8);
  v6 = *(unsigned int *)(v3 + 16);
  sub_1C000FD80(v7, 32, 1768911921, v5, v6);
  sub_1C000FD80(v8, 32, 1768911922, v4, v9);
  sub_1C000FD80(v10, 32, 1768911923, *(int *)(a2 + 48), *(_QWORD *)(a2 + 56));
  v13 = *(_DWORD *)(a2 + 56);
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 )
  {
    if ( LOWORD(DeviceObject->DeviceType) )
      sub_1C002E188((__int64)DeviceObject->DeviceExtension, 0, 2u, 0xAu, (__int64)&unk_1C0062E18, v12);
    if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 )
    {
      if ( LOWORD(DeviceObject->DeviceType) )
      {
        LODWORD(v19) = v6;
        sub_1C002E354((__int64)DeviceObject->DeviceExtension, v11, 2u, 0xBu, (__int64)&unk_1C0062E18, v19, v5);
      }
      if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
      {
        LODWORD(v20) = v13;
        LODWORD(v19) = *(_DWORD *)(a2 + 48);
        sub_1C002E354((__int64)DeviceObject->DeviceExtension, v11, 2u, 0xCu, (__int64)&unk_1C0062E18, v19, v20);
      }
    }
  }
  result = 255LL;
  if ( (_BYTE)v13 )
  {
    if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
    {
      v15 = (__int128 *)sub_1C00412A8(v22, (unsigned __int8)v13, v4);
      v17 = *(_QWORD *)(v16 + 64);
      v21 = *v15;
      return sub_1C0041184(v17, v18, 2, 14, (__int64)&unk_1C0062E18, (__int64)&v21);
    }
  }
  else if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 )
  {
    if ( LOWORD(DeviceObject->DeviceType) )
      return sub_1C002E0B4((__int64)DeviceObject->DeviceExtension, 0, 2u, 0xDu, (__int64)&unk_1C0062E18);
  }
  return result;
}
