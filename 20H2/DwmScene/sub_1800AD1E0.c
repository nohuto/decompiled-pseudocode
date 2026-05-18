/*
 * XREFs of sub_1800AD1E0 @ 0x1800AD1E0
 * Callers:
 *     sub_1800AD16C @ 0x1800AD16C (sub_1800AD16C.c)
 * Callees:
 *     sub_18001A310 @ 0x18001A310 (sub_18001A310.c)
 *     sub_18001CB48 @ 0x18001CB48 (sub_18001CB48.c)
 *     sub_18007E3E4 @ 0x18007E3E4 (sub_18007E3E4.c)
 *     sub_1800AA3D4 @ 0x1800AA3D4 (sub_1800AA3D4.c)
 *     sub_1800ACE08 @ 0x1800ACE08 (sub_1800ACE08.c)
 *     sub_1800ADAB4 @ 0x1800ADAB4 (sub_1800ADAB4.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 */

char __fastcall sub_1800AD1E0(__int64 a1)
{
  __int128 v2; // xmm5
  int v3; // eax
  __int128 v4; // xmm2
  bool v5; // cc
  unsigned int *v6; // rcx
  __int128 v7; // xmm3
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 *v10; // rdx
  _DWORD v12[4]; // [rsp+20h] [rbp-49h] BYREF
  _BYTE v13[64]; // [rsp+30h] [rbp-39h] BYREF
  __int128 v14; // [rsp+70h] [rbp+7h] BYREF
  __int128 v15; // [rsp+80h] [rbp+17h]
  __int128 v16; // [rsp+90h] [rbp+27h]
  __int128 v17; // [rsp+A0h] [rbp+37h]

  if ( sub_1800AA3D4(a1, 2) )
    return 0;
  sub_1800ACE08(a1);
  v2 = *(unsigned int *)(a1 + 332);
  if ( (*(_BYTE *)(a1 + 544) & 2) == 0 )
    return 0;
  v3 = *(_DWORD *)(a1 + 316);
  v14 = xmmword_1801D1950;
  v15 = xmmword_1801D1960;
  v16 = xmmword_1801D1980;
  v17 = xmmword_1801C6AC0;
  switch ( v3 )
  {
    case 1:
      v4 = 0x3A83126Fu;
      v5 = *(float *)(a1 + 324) >= 0.001;
      v6 = v12;
      v12[0] = 981668463;
      if ( v5 )
        v6 = (unsigned int *)(a1 + 324);
      if ( *(float *)(a1 + 320) >= 0.001 )
        v4 = *(unsigned int *)(a1 + 320);
      *(_OWORD *)&v13[24] = 0LL;
LABEL_9:
      v7 = *v6;
      *(_OWORD *)&v13[4] = 0LL;
      *(_OWORD *)&v13[44] = 0LL;
      v9 = *(unsigned int *)(a1 + 328);
      v8 = v2;
      *(double *)&v9 = sub_1800ADAB4(v6);
      goto LABEL_10;
    case 2:
      v4 = 0x3A83126Fu;
      v5 = *(float *)(a1 + 320) >= 0.001;
      v6 = v12;
      v12[0] = 981668463;
      if ( v5 )
        v6 = (unsigned int *)(a1 + 320);
      if ( *(float *)(a1 + 324) >= 0.001 )
        v4 = *(unsigned int *)(a1 + 324);
      *(_OWORD *)&v13[24] = 0LL;
      goto LABEL_9;
    case 3:
      v7 = *(unsigned int *)(a1 + 324);
      v4 = *(unsigned int *)(a1 + 320);
      break;
    case 4:
      v7 = *(unsigned int *)(a1 + 320);
      v4 = *(unsigned int *)(a1 + 324);
      break;
    default:
      v10 = (__int128 *)(a1 + 932);
      if ( v3 != 5 )
        v10 = &xmmword_18020DC20;
      goto LABEL_24;
  }
  *(_OWORD *)&v13[4] = 0LL;
  *(_OWORD *)&v13[44] = 0LL;
  *(_OWORD *)&v13[24] = 0LL;
  v8 = *(unsigned int *)(a1 + 340);
  v9 = v8;
  *(float *)&v9 = sub_18001CB48(*(float *)&v8 * *(float *)&v2, *(float *)&v8, *(float *)&v4, *(float *)&v7);
LABEL_10:
  *(_OWORD *)v13 = v9;
  v10 = (__int128 *)v13;
  *(_OWORD *)&v13[16] = v8;
  *(_OWORD *)&v13[32] = v4;
  *(_OWORD *)&v13[48] = v7;
LABEL_24:
  sub_18007E3E4(&v14, v10);
  if ( *(_DWORD *)(a1 + 316) != 5 )
  {
    *(_OWORD *)v13 = v14;
    *(_OWORD *)&v13[16] = v15;
    *(_OWORD *)&v13[32] = v16;
    *(_OWORD *)&v13[48] = v17;
    sub_18007E3E4((_OWORD *)(a1 + 932), v13);
  }
  sub_18001A310(&v14, (__int64)v13);
  v14 = *(_OWORD *)v13;
  v15 = *(_OWORD *)&v13[16];
  v16 = *(_OWORD *)&v13[32];
  v17 = *(_OWORD *)&v13[48];
  sub_18007E3E4((_OWORD *)(a1 + 1124), &v14);
  *(_DWORD *)(a1 + 544) &= ~2u;
  return 1;
}
