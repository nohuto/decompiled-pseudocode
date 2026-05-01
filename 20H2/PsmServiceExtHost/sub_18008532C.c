/*
 * XREFs of sub_18008532C @ 0x18008532C
 * Callers:
 *     _wsetlocale_set_cat @ 0x180079634 (_wsetlocale_set_cat.c)
 *     sub_18007984C @ 0x18007984C (sub_18007984C.c)
 *     sub_180085200 @ 0x180085200 (sub_180085200.c)
 * Callees:
 *     sub_18000E6B0 @ 0x18000E6B0 (sub_18000E6B0.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     sub_180085180 @ 0x180085180 (sub_180085180.c)
 */

__int64 __fastcall sub_18008532C(__int64 a1, void *a2, unsigned int a3, int a4, __int64 a5)
{
  __int64 v8; // r8
  unsigned int v9; // ebx
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int64 v16; // rcx
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  _OWORD v21[12]; // [rsp+30h] [rbp-F8h] BYREF
  __int64 v22; // [rsp+F0h] [rbp-38h]
  int v23; // [rsp+F8h] [rbp-30h]

  v9 = 0;
  if ( (int)sub_18000E6B0(a2, a3) >= 0 )
  {
    sub_180085180(a1, a2, v8, a4, v21);
    v10 = v21[1];
    *(_OWORD *)a5 = v21[0];
    v11 = v21[2];
    *(_OWORD *)(a5 + 16) = v10;
    v12 = v21[3];
    *(_OWORD *)(a5 + 32) = v11;
    v13 = v21[4];
    *(_OWORD *)(a5 + 48) = v12;
    v14 = v21[5];
    *(_OWORD *)(a5 + 64) = v13;
    v15 = v21[6];
    *(_OWORD *)(a5 + 80) = v14;
    *(_OWORD *)(a5 + 96) = v15;
    *(_OWORD *)(a5 + 112) = v21[7];
    v16 = v22;
    v17 = v21[9];
    *(_OWORD *)(a5 + 128) = v21[8];
    v18 = v21[10];
    *(_OWORD *)(a5 + 144) = v17;
    v19 = v21[11];
    *(_OWORD *)(a5 + 160) = v18;
    *(_OWORD *)(a5 + 176) = v19;
    *(_QWORD *)(a5 + 192) = v16;
    *(_DWORD *)(a5 + 200) = v23;
  }
  else
  {
    return (unsigned int)-1073741584;
  }
  return v9;
}
