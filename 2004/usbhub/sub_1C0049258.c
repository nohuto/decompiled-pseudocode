/*
 * XREFs of sub_1C0049258 @ 0x1C0049258
 * Callers:
 *     sub_1C0049400 @ 0x1C0049400 (sub_1C0049400.c)
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C0011220 @ 0x1C0011220 (sub_1C0011220.c)
 *     __security_check_cookie @ 0x1C001CF60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D060 (_guard_dispatch_icall_nop.c)
 *     sub_1C001D340 @ 0x1C001D340 (sub_1C001D340.c)
 */

__int64 __fastcall sub_1C0049258(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4, __int64 a5)
{
  _DWORD *v7; // r14
  __int64 v8; // rbx
  _DWORD *v9; // rax
  __int64 (__fastcall *v10)(_QWORD, __int64, int *, __int64, _DWORD *); // r10
  __int64 result; // rax
  unsigned int v12; // ebx
  __int32 v13; // ecx
  __int128 v14; // xmm0
  __int64 v15; // xmm1_8
  int v16; // eax
  __int32 v17; // ecx
  _DWORD v18[4]; // [rsp+30h] [rbp-51h] BYREF
  int v19; // [rsp+40h] [rbp-41h] BYREF
  __m128 v20; // [rsp+44h] [rbp-3Dh] BYREF
  int v21; // [rsp+54h] [rbp-2Dh]
  int v22; // [rsp+58h] [rbp-29h]
  int v23; // [rsp+5Ch] [rbp-25h]
  int v24; // [rsp+60h] [rbp-21h]
  int v25; // [rsp+64h] [rbp-1Dh]
  __int128 v26; // [rsp+68h] [rbp-19h]
  __int64 v27; // [rsp+78h] [rbp-9h]
  int v28; // [rsp+80h] [rbp-1h]
  int v29; // [rsp+84h] [rbp+3h]
  int v30; // [rsp+88h] [rbp+7h]
  int v31; // [rsp+8Ch] [rbp+Bh]
  int v32; // [rsp+90h] [rbp+Fh]
  int v33; // [rsp+94h] [rbp+13h]

  v7 = sub_1C0011220(a1);
  v8 = *((_QWORD *)v7 + 148);
  sub_1C001D340(&v20, 0, 0x54uLL);
  v18[0] = 0;
  v19 = 0;
  v9 = sub_1C000F050(v8);
  v10 = (__int64 (__fastcall *)(_QWORD, __int64, int *, __int64, _DWORD *))*((_QWORD *)v9 + 555);
  if ( !v10 )
  {
    result = 3221225474LL;
LABEL_3:
    *a4 = 0;
    return result;
  }
  result = v10(*((_QWORD *)v9 + 529), a5, &v19, 88LL, v18);
  v12 = result;
  if ( (int)result < 0 || v18[0] != 88 )
    goto LABEL_3;
  sub_1C001D340((__m128 *)a2, 0, 0xE4uLL);
  v13 = v20.m128_i32[1];
  v14 = v26;
  *(_DWORD *)(a2 + 4) = v20.m128_i32[3];
  v15 = v27;
  *(_DWORD *)(a2 + 20) = v21;
  *(_DWORD *)(a2 + 12) = v24;
  *(_DWORD *)(a2 + 28) = v25;
  *(_DWORD *)(a2 + 8) = v22;
  *(_DWORD *)(a2 + 24) = v23;
  *(_DWORD *)(a2 + 56) = v28;
  *(_DWORD *)(a2 + 60) = v29;
  *(_DWORD *)(a2 + 64) = v30;
  *(_DWORD *)(a2 + 200) = v33;
  *(_DWORD *)(a2 + 196) = v32;
  v16 = v31;
  *(_DWORD *)a2 = v13;
  v17 = v20.m128_i32[2];
  *(_DWORD *)(a2 + 192) = v16;
  *(_DWORD *)(a2 + 16) = v17;
  *(_OWORD *)(a2 + 32) = v14;
  *(_QWORD *)(a2 + 48) = v15;
  *(_OWORD *)(a2 + 68) = *(_OWORD *)((char *)v7 + 2442);
  *(_OWORD *)(a2 + 84) = *(_OWORD *)((char *)v7 + 2458);
  *(_OWORD *)(a2 + 100) = *(_OWORD *)((char *)v7 + 2474);
  *(_OWORD *)(a2 + 116) = *(_OWORD *)((char *)v7 + 2490);
  *(_OWORD *)(a2 + 132) = *(_OWORD *)((char *)v7 + 2506);
  *(_DWORD *)(a2 + 188) = v7[292];
  result = v12;
  *a4 = 228;
  return result;
}
