/*
 * XREFs of sub_1C003DC2C @ 0x1C003DC2C
 * Callers:
 *     sub_1C003F948 @ 0x1C003F948 (sub_1C003F948.c)
 * Callees:
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C0011220 @ 0x1C0011220 (sub_1C0011220.c)
 *     sub_1C0015C80 @ 0x1C0015C80 (sub_1C0015C80.c)
 *     sub_1C0016670 @ 0x1C0016670 (sub_1C0016670.c)
 *     sub_1C001D340 @ 0x1C001D340 (sub_1C001D340.c)
 *     sub_1C002E0B4 @ 0x1C002E0B4 (sub_1C002E0B4.c)
 *     sub_1C002E188 @ 0x1C002E188 (sub_1C002E188.c)
 *     sub_1C003DAA8 @ 0x1C003DAA8 (sub_1C003DAA8.c)
 */

__int64 __fastcall sub_1C003DC2C(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, unsigned int *a6, char a7)
{
  int v11; // ebp
  __int64 v12; // rbx
  __int64 v13; // rax
  _DWORD *v14; // r14
  __int64 v15; // rdi
  __m128 *v16; // rax
  __m128 *v17; // rdi
  __int8 v18; // al
  int v19; // ecx
  unsigned int v20; // r9d
  __int64 v21; // rax
  unsigned int v22; // r10d
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v26; // [rsp+30h] [rbp-38h]
  _DWORD *v27; // [rsp+38h] [rbp-30h]
  int v28; // [rsp+80h] [rbp+18h] BYREF

  v28 = -1073741811;
  v11 = 0;
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
    sub_1C002E0B4((__int64)DeviceObject->DeviceExtension, 0, 2u, 0x2Au, (__int64)&unk_1C0062E18);
  v12 = a5;
  sub_1C000FD80(a1, 32, 1735290417, *(unsigned __int16 *)(a3 + 4), a5);
  v27 = sub_1C0011220(a4);
  v13 = sub_1C0015C80(a1, a4, a2, 0x48446E67u);
  v14 = a6;
  v26 = v13;
  v15 = v13;
  sub_1C001D340((__m128 *)v12, 0, *a6);
  if ( v15 )
  {
    v16 = sub_1C003DAA8(a1, &v28, v15);
    v11 = v28;
    v17 = v16;
    sub_1C000FD80(a1, 32, 1735281713, (__int64)v16, v28);
    sub_1C0016670(a1, v26, a2, 0x48446E67u);
    if ( v11 >= 0 )
    {
      *(_DWORD *)v12 = *(unsigned __int16 *)(a3 + 4);
      *(__m128 *)(v12 + 4) = *(__m128 *)((char *)v17 + 12);
      *(_WORD *)(v12 + 20) = v17[1].m128_i16[6];
      *(_BYTE *)(v12 + 22) = v17[2].m128_i8[0];
      if ( a7 )
        v18 = v17[2].m128_i8[8];
      else
        v18 = v17[2].m128_i32[2] == 0;
      *(_BYTE *)(v12 + 23) = v18;
      if ( sub_1C0011220(a4)[280] == 101 )
        *(_BYTE *)(v12 + 24) = (v27[355] & 4) != 0;
      v19 = 1;
      *(_WORD *)(v12 + 25) = v17[2].m128_i16[1];
      v20 = 0;
      *(_DWORD *)(v12 + 27) = v17[3].m128_i32[0];
      if ( (unsigned int)(*(_DWORD *)(a3 + 428) - 4) <= 3 )
        v19 = *(_DWORD *)(a3 + 428);
      *(_DWORD *)(v12 + 31) = v19;
      v21 = *(unsigned int *)(v12 + 27);
      v22 = *v14 - 35;
      if ( (_DWORD)v21 )
      {
        do
        {
          if ( v22 < 0xB )
            break;
          v23 = v20;
          v22 -= 11;
          v24 = 11LL * v20++;
          *(_DWORD *)(v24 + v12 + 35) = v17[3].m128_i32[3 * v23 + 1];
          *(_WORD *)(v24 + v12 + 39) = v17[3].m128_i16[6 * v23 + 4];
          *(_BYTE *)(v24 + v12 + 41) = v17[3].m128_i8[12 * v23 + 10];
          *(_DWORD *)(v24 + v12 + 42) = v17[3].m128_i32[3 * v23 + 3];
          v21 = *(unsigned int *)(v12 + 27);
        }
        while ( v20 < (unsigned int)v21 );
      }
      if ( v20 != (_DWORD)v21 )
        sub_1C000FD80(a1, 32, 1735290451, v22, v21);
      *v14 -= v22;
    }
    if ( v17 )
      ExFreePoolWithTag(v17, 0);
  }
  else
  {
    sub_1C000FD80(a1, 32, 1735290468, *(int *)(a3 + 428), v12);
    *(_DWORD *)v12 = *(unsigned __int16 *)(a3 + 4);
    *(_DWORD *)(v12 + 31) = *(_DWORD *)(a3 + 428);
    *v14 = 35;
  }
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
    sub_1C002E188((__int64)DeviceObject->DeviceExtension, 0, 2u, 0x2Bu, (__int64)&unk_1C0062E18, v11);
  return (unsigned int)v11;
}
