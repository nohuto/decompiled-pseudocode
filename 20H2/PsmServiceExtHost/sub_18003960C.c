/*
 * XREFs of sub_18003960C @ 0x18003960C
 * Callers:
 *     sub_1800393C8 @ 0x1800393C8 (sub_1800393C8.c)
 * Callees:
 *     sub_18003911C @ 0x18003911C (sub_18003911C.c)
 *     sub_1800398DC @ 0x1800398DC (sub_1800398DC.c)
 *     sub_180039910 @ 0x180039910 (sub_180039910.c)
 *     sub_1800399CC @ 0x1800399CC (sub_1800399CC.c)
 *     sub_180039E74 @ 0x180039E74 (sub_180039E74.c)
 *     sub_1800664F0 @ 0x1800664F0 (sub_1800664F0.c)
 */

char __fastcall sub_18003960C(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  __int64 v6; // rdi
  char *v10; // rdi
  char v11; // r13
  __int64 v12; // r8
  char v13; // al
  int v14; // esi
  __int64 v15; // r14
  int v16; // eax
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rax
  unsigned int v19; // edx
  __int64 v20; // r8
  __int64 v21; // r15
  __int64 v22; // rax
  unsigned __int64 v23; // r9
  __int64 v24; // rdx
  unsigned __int64 v25; // rsi
  unsigned __int64 v26; // rdx
  char *v28; // rax
  unsigned int v29; // esi
  __int16 v30; // [rsp+30h] [rbp-49h] BYREF
  char v31; // [rsp+32h] [rbp-47h]
  unsigned int v32; // [rsp+34h] [rbp-45h]
  __int16 v33; // [rsp+38h] [rbp-41h]
  __int128 v34; // [rsp+40h] [rbp-39h]
  __int16 v35; // [rsp+50h] [rbp-29h] BYREF
  char v36; // [rsp+52h] [rbp-27h]
  int v37; // [rsp+54h] [rbp-25h]
  __int16 v38; // [rsp+58h] [rbp-21h]
  __int64 v39; // [rsp+60h] [rbp-19h]
  __int64 v40; // [rsp+68h] [rbp-11h]
  __int16 v41; // [rsp+70h] [rbp-9h] BYREF
  char v42; // [rsp+72h] [rbp-7h]
  int v43; // [rsp+74h] [rbp-5h]
  __int16 v44; // [rsp+78h] [rbp-1h]
  __int128 v45; // [rsp+80h] [rbp+7h]
  void *Source; // [rsp+D0h] [rbp+57h] BYREF
  __int64 v47; // [rsp+E8h] [rbp+6Fh]

  v47 = a4;
  v6 = *(_QWORD *)(a1 + 24);
  if ( !v6 )
    return 0;
  v30 = *(_WORD *)(a1 + 2);
  v10 = (char *)(v6 + 10);
  v11 = 0;
  v31 = *(_BYTE *)(a1 + 4);
  v32 = 0;
  v33 = 0;
  v34 = 0LL;
  while ( 1 )
  {
    v12 = *(_QWORD *)(a1 + 32);
    Source = v10;
    v13 = sub_180039910(&v30, &Source, v12);
    v14 = a6;
    v15 = a5;
    if ( !v13 )
    {
      v10 = (char *)Source;
      *(_QWORD *)(a1 + 32) = Source;
LABEL_11:
      v32 = 1;
      v33 = a3;
      *(_QWORD *)&v34 = 0LL;
      *((_QWORD *)&v34 + 1) = a2;
      sub_180039E74(&v30);
      v21 = v47;
      goto LABEL_12;
    }
    v16 = sub_1800398DC(&v30, a2, a3);
    if ( v16 < 0 )
    {
      Source = v10;
      goto LABEL_11;
    }
    if ( !v16 )
      break;
    v17 = *(_QWORD *)(a1 + 16);
    v10 = (char *)Source;
    if ( v17 )
    {
      v18 = (*(_QWORD *)(a1 + 32) - *(_QWORD *)(a1 + 24)) / v17;
      v19 = v32;
      if ( v32 > v18 )
      {
        sub_1800664F0(&v30, (unsigned int)v18);
        v17 = *(_QWORD *)(a1 + 16);
        v19 = v32;
      }
      v10 += v17 * v19;
    }
    else
    {
      v29 = 0;
      v41 = *(_WORD *)(a1 + 6);
      v42 = *(_BYTE *)(a1 + 8);
      v43 = 0;
      v44 = 0;
      v45 = 0LL;
      if ( v32 )
      {
        do
        {
          if ( !(unsigned __int8)sub_180039910(&v41, &Source, *(_QWORD *)(a1 + 32)) )
            break;
          ++v29;
        }
        while ( v29 < v32 );
        v10 = (char *)Source;
      }
      sub_1800664F0(&v30, v29);
    }
  }
  v21 = v47;
  v28 = (char *)sub_18003911C(a1, (__int64)&v30, (unsigned __int64)Source, v47, v15, v14);
  v20 = 0LL;
  Source = v28;
  v10 = v28;
  if ( !v28 )
    return 1;
  v11 = 1;
LABEL_12:
  v35 = *(_WORD *)(a1 + 6);
  v36 = *(_BYTE *)(a1 + 8);
  v37 = v14;
  v38 = v15;
  v39 = v20;
  v40 = v21;
  v22 = sub_180039E74(&v35);
  v23 = *(_QWORD *)(a1 + 32);
  v25 = v24 + v22;
  v26 = *(_QWORD *)(a1 + 40);
  if ( ((v26 - v23) & -(__int64)(v23 < v26)) < v25 )
    return 0;
  memmove_s(&v10[v25], v26 - v25 - (_QWORD)v10, v10, v23 - (_QWORD)v10);
  *(_QWORD *)(a1 + 32) += v25;
  if ( v11 )
  {
    if ( v31 )
      sub_1800664F0(&v30, v32 + 1);
  }
  else
  {
    sub_1800399CC(&v30, &Source);
  }
  sub_1800399CC(&v35, &Source);
  *(_BYTE *)(a1 + 56) = 1;
  return 1;
}
