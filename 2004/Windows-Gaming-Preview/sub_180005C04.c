/*
 * XREFs of sub_180005C04 @ 0x180005C04
 * Callers:
 *     sub_1800067C4 @ 0x1800067C4 (sub_1800067C4.c)
 * Callees:
 *     sub_180005DD8 @ 0x180005DD8 (sub_180005DD8.c)
 *     __security_check_cookie @ 0x1800440D0 (__security_check_cookie.c)
 */

bool __fastcall sub_180005C04(__int64 a1, unsigned __int64 *a2, _BYTE *a3, unsigned __int64 a4)
{
  char *v5; // rbx
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // rdx
  _BYTE *v18; // [rsp+20h] [rbp-49h] BYREF
  unsigned __int64 v19; // [rsp+28h] [rbp-41h] BYREF
  _QWORD v20[5]; // [rsp+30h] [rbp-39h] BYREF
  _BYTE *v21; // [rsp+58h] [rbp-11h] BYREF
  _BYTE *v22; // [rsp+60h] [rbp-9h] BYREF
  char v23; // [rsp+68h] [rbp-1h] BYREF

  v19 = a4;
  v21 = a3;
  v18 = a3;
  *a2 = 36LL;
  v5 = &v23;
  v22 = &a3[a4];
  if ( a4 >= 0x24 )
    v5 = a3;
  if ( a4 >= 0x24 )
  {
    *(_OWORD *)v5 = 0LL;
    *((_OWORD *)v5 + 1) = 0LL;
    *((_DWORD *)v5 + 8) = 0;
    *(_DWORD *)v5 = *(_DWORD *)a1;
    *((_WORD *)v5 + 2) = *(_WORD *)(a1 + 4);
    *((_DWORD *)v5 + 3) = *(_DWORD *)(a1 + 32);
    *((_WORD *)v5 + 9) = *(_WORD *)(a1 + 56);
    *((_DWORD *)v5 + 6) = *(_DWORD *)(a1 + 80);
    v18 += 36;
  }
  v7 = *(_QWORD *)(a1 + 8);
  v20[0] = &v21;
  v20[2] = &v19;
  v20[3] = &v18;
  v20[4] = &v22;
  v20[1] = a2;
  if ( v7 )
    sub_180005DD8(v20, v7, v5 + 6, 0LL);
  v8 = *(_QWORD *)(a1 + 16);
  if ( v8 )
    sub_180005DD8(v20, v8, v5 + 32, 0LL);
  v9 = *(_QWORD *)(a1 + 24);
  if ( v9 )
    sub_180005DD8(v20, v9, v5 + 8, *((unsigned __int16 *)v5 + 16));
  v10 = *(_QWORD *)(a1 + 40);
  if ( v10 )
    sub_180005DD8(v20, v10, v5 + 10, *((unsigned __int16 *)v5 + 4));
  v11 = *(_QWORD *)(a1 + 48);
  if ( v11 )
    sub_180005DD8(v20, v11, v5 + 16, 0LL);
  v12 = *(_QWORD *)(a1 + 64);
  if ( v12 )
    sub_180005DD8(v20, v12, v5 + 20, *((unsigned __int16 *)v5 + 3));
  v13 = *(_QWORD *)(a1 + 40);
  if ( v13 )
    sub_180005DD8(v20, v13, v5 + 10, *((unsigned __int16 *)v5 + 4));
  v14 = *(_QWORD *)(a1 + 72);
  if ( v14 )
    sub_180005DD8(v20, v14, v5 + 22, *((unsigned __int16 *)v5 + 4));
  v15 = *(_QWORD *)(a1 + 88);
  if ( v15 )
    sub_180005DD8(v20, v15, v5 + 28, *((unsigned __int16 *)v5 + 11));
  v16 = *(_QWORD *)(a1 + 96);
  if ( v16 )
    sub_180005DD8(v20, v16, v5 + 30, 0LL);
  return *a2 <= v19;
}
