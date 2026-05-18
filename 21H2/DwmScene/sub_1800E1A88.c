/*
 * XREFs of sub_1800E1A88 @ 0x1800E1A88
 * Callers:
 *     sub_18006F208 @ 0x18006F208 (sub_18006F208.c)
 * Callees:
 *     sub_18000FC14 @ 0x18000FC14 (sub_18000FC14.c)
 *     sub_180020E1C @ 0x180020E1C (sub_180020E1C.c)
 *     sub_180025F94 @ 0x180025F94 (sub_180025F94.c)
 *     sub_18005A894 @ 0x18005A894 (sub_18005A894.c)
 *     memmove @ 0x180123982 (memmove.c)
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 *     ??_L@YAXPEAX_K1P6AX0@Z2@Z @ 0x1801243E0 (--_L@YAXPEAX_K1P6AX0@Z2@Z.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall sub_1800E1A88(_QWORD *a1)
{
  int v2; // ebx
  _BYTE *v3; // rsi
  __int64 v4; // r14
  const void **v5; // rax
  __int64 v6; // r8
  __int128 *v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  __int64 *v11; // rcx
  _BYTE *v12; // rbx
  __int64 v13; // r8
  __int64 *v14; // rcx
  _BYTE *v15; // rbx
  __int64 v16; // r8
  __int64 *v17; // rcx
  _BYTE *v18; // rbx
  __int64 v19; // r8
  __int64 *v20; // rcx
  _BYTE *v21; // rbx
  __int64 v22; // r8
  __int64 *v23; // rcx
  _BYTE *v24; // rbx
  __int64 v25; // r8
  __int64 *v26; // rcx
  _BYTE *v27; // rbx
  __int64 v28; // r8
  __int64 *v29; // rcx
  _BYTE *v30; // rbx
  __int64 v31; // r8
  __int64 *v32; // rcx
  _BYTE *v33; // rbx
  __int64 v34; // r8
  __int64 *v35; // rcx
  _BYTE *v36; // rbx
  _BYTE *v37; // rax
  __int128 v39; // [rsp+30h] [rbp-50h] BYREF
  __int128 v40; // [rsp+40h] [rbp-40h]
  _QWORD *v41; // [rsp+50h] [rbp-30h]
  __int64 v42[3]; // [rsp+58h] [rbp-28h] BYREF
  unsigned __int64 v43; // [rsp+70h] [rbp-10h]

  v41 = a1;
  `eh vector constructor iterator'(
    a1,
    0x28uLL,
    0x40uLL,
    (void (*)(void *))sub_1800E1A70,
    (void (*)(void *))sub_180046850);
  v2 = 0;
  v3 = a1;
  v4 = 31LL;
  do
  {
    sub_180025F94(v42, v2);
    v5 = sub_18005A894(v42, 0LL, "System", 6uLL);
    v39 = *(_OWORD *)v5;
    v40 = *((_OWORD *)v5 + 1);
    v5[2] = 0LL;
    v5[3] = (const void *)15;
    *(_BYTE *)v5 = 0;
    v7 = (__int128 *)&a1[4 * v2 + 1 + v2];
    if ( v7 != &v39 )
      sub_180020E1C(v7, (__int64)&v39);
    if ( *((_QWORD *)&v40 + 1) >= 0x10uLL )
    {
      v8 = v39;
      if ( (unsigned __int64)(*((_QWORD *)&v40 + 1) + 1LL) >= 0x1000 )
      {
        v8 = *(_QWORD *)(v39 - 8);
        if ( (unsigned __int64)(v39 - v8 - 8) > 0x1F )
        {
          o__invalid_parameter_noinfo_noreturn(v8, *((_QWORD *)&v40 + 1) + 40LL);
LABEL_18:
          o__invalid_parameter_noinfo_noreturn(v9, v10);
          __debugbreak();
        }
      }
      j_j__o_free(v8);
    }
    if ( v43 >= 0x10 )
    {
      v9 = v42[0];
      if ( v43 + 1 >= 0x1000 )
      {
        v10 = v43 + 40;
        v9 = *(_QWORD *)(v42[0] - 8);
        if ( (unsigned __int64)(v42[0] - v9 - 8) > 0x1F )
          goto LABEL_18;
      }
      j_j__o_free(v9);
    }
    *v3 = 1;
    ++v2;
    v3 += 40;
  }
  while ( v2 <= 31 );
  v11 = a1 + 1;
  if ( a1[4] < 0xEuLL )
  {
    LOBYTE(v6) = 0;
    sub_18000FC14(v11, 0xEuLL, v6, "System0_Enable");
  }
  else
  {
    v12 = a1 + 1;
    if ( a1[4] >= 0x10uLL )
      v12 = (_BYTE *)*v11;
    a1[3] = 14LL;
    memmove(v12, "System0_Enable", 0xEuLL);
    v12[14] = 0;
  }
  v14 = a1 + 6;
  if ( a1[9] < 0xFuLL )
  {
    LOBYTE(v13) = 0;
    sub_18000FC14(v14, 0xFuLL, v13, "System1_Visible");
  }
  else
  {
    v15 = a1 + 6;
    if ( a1[9] >= 0x10uLL )
      v15 = (_BYTE *)*v14;
    a1[8] = 15LL;
    memmove(v15, "System1_Visible", 0xFuLL);
    v15[15] = 0;
  }
  v17 = a1 + 11;
  if ( a1[14] < 0x13uLL )
  {
    LOBYTE(v16) = 0;
    sub_18000FC14(v17, 0x13uLL, v16, "System2_VisibleTree");
  }
  else
  {
    v18 = (_BYTE *)*v17;
    a1[13] = 19LL;
    memmove(v18, "System2_VisibleTree", 0x13uLL);
    v18[19] = 0;
  }
  v20 = a1 + 16;
  if ( a1[19] < 0x12uLL )
  {
    LOBYTE(v19) = 0;
    sub_18000FC14(v20, 0x12uLL, v19, "System3_Renderable");
  }
  else
  {
    v21 = (_BYTE *)*v20;
    a1[18] = 18LL;
    memmove(v21, "System3_Renderable", 0x12uLL);
    v21[18] = 0;
  }
  v23 = a1 + 21;
  if ( a1[24] < 0xDuLL )
  {
    LOBYTE(v22) = 0;
    sub_18000FC14(v23, 0xDuLL, v22, "System4_Debug");
  }
  else
  {
    v24 = a1 + 21;
    if ( a1[24] >= 0x10uLL )
      v24 = (_BYTE *)*v23;
    a1[23] = 13LL;
    memmove(v24, "System4_Debug", 0xDuLL);
    v24[13] = 0;
  }
  v26 = a1 + 26;
  if ( a1[29] < 0xFuLL )
  {
    LOBYTE(v25) = 0;
    sub_18000FC14(v26, 0xFuLL, v25, "System5_Loading");
  }
  else
  {
    v27 = a1 + 26;
    if ( a1[29] >= 0x10uLL )
      v27 = (_BYTE *)*v26;
    a1[28] = 15LL;
    memmove(v27, "System5_Loading", 0xFuLL);
    v27[15] = 0;
  }
  v29 = a1 + 41;
  if ( a1[44] < 0x13uLL )
  {
    LOBYTE(v28) = 0;
    sub_18000FC14(v29, 0x13uLL, v28, "System8_Transparent");
  }
  else
  {
    v30 = (_BYTE *)*v29;
    a1[43] = 19LL;
    memmove(v30, "System8_Transparent", 0x13uLL);
    v30[19] = 0;
  }
  v32 = a1 + 46;
  if ( a1[49] < 0x12uLL )
  {
    LOBYTE(v31) = 0;
    sub_18000FC14(v32, 0x12uLL, v31, "System9_OpaqueMask");
  }
  else
  {
    v33 = (_BYTE *)*v32;
    a1[48] = 18LL;
    memmove(v33, "System9_OpaqueMask", 0x12uLL);
    v33[18] = 0;
  }
  v35 = a1 + 81;
  if ( a1[84] < 0x15uLL )
  {
    LOBYTE(v34) = 0;
    sub_18000FC14(v35, 0x15uLL, v34, "System16_ShadowCaster");
  }
  else
  {
    v36 = (_BYTE *)*v35;
    a1[83] = 21LL;
    memmove(v36, "System16_ShadowCaster", 0x15uLL);
    v36[21] = 0;
  }
  v37 = a1 + 160;
  do
  {
    *v37 = 0;
    v37 += 40;
    --v4;
  }
  while ( v4 );
  return a1;
}
