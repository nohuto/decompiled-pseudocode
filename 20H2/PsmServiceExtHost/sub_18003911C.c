/*
 * XREFs of sub_18003911C @ 0x18003911C
 * Callers:
 *     sub_18003960C @ 0x18003960C (sub_18003960C.c)
 * Callees:
 *     sub_180039810 @ 0x180039810 (sub_180039810.c)
 *     sub_1800398DC @ 0x1800398DC (sub_1800398DC.c)
 *     sub_180039910 @ 0x180039910 (sub_180039910.c)
 *     sub_1800664F0 @ 0x1800664F0 (sub_1800664F0.c)
 */

unsigned __int64 __fastcall sub_18003911C(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4, __int64 a5, int a6)
{
  char v6; // bl
  unsigned __int64 v7; // r15
  int v8; // r12d
  unsigned __int64 v10; // rsi
  __int64 v13; // rax
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rax
  __int64 v16; // r14
  unsigned __int64 v17; // r15
  unsigned __int64 v18; // rax
  __int64 v19; // r8
  unsigned int v20; // r15d
  __int64 v21; // r8
  __int16 v23; // [rsp+30h] [rbp-20h] BYREF
  char v24; // [rsp+32h] [rbp-1Eh]
  int v25; // [rsp+34h] [rbp-1Ch]
  __int16 v26; // [rsp+38h] [rbp-18h]
  __int128 v27; // [rsp+40h] [rbp-10h]
  unsigned __int64 v28; // [rsp+80h] [rbp+30h] BYREF

  v6 = 0;
  v7 = *(_QWORD *)(a1 + 16);
  v8 = -1;
  v23 = *(_WORD *)(a1 + 6);
  v24 = *(_BYTE *)(a1 + 8);
  v10 = a3;
  v25 = 0;
  v26 = 0;
  v27 = 0LL;
  if ( v7 )
  {
    v13 = *(_QWORD *)(a1 + 32);
    v14 = *(unsigned int *)(a2 + 4);
    v15 = (v13 - a3) / v7;
    if ( v14 > v15 )
    {
      sub_1800664F0(a2, (unsigned int)v15);
      LODWORD(v14) = *(_DWORD *)(a2 + 4);
      v7 = *(_QWORD *)(a1 + 16);
    }
    v16 = a5;
    v17 = v10 + (unsigned int)v14 * v7;
    v18 = sub_180039810(a1, v10, v14, a4, a5);
    v10 = v18;
    if ( v18 >= v17 )
      return v10;
    v19 = *(_QWORD *)(a1 + 32);
    v28 = v18;
    sub_180039910(&v23, &v28, v19);
    v8 = sub_1800398DC(&v23, a4, v16);
  }
  else
  {
    v20 = 0;
    if ( !*(_DWORD *)(a2 + 4) )
      return v10;
    while ( 1 )
    {
      v21 = *(_QWORD *)(a1 + 32);
      v28 = v10;
      if ( !(unsigned __int8)sub_180039910(&v23, &v28, v21) )
        break;
      v8 = sub_1800398DC(&v23, a4, a5);
      if ( v8 > 0 )
      {
        v10 = v28;
        if ( ++v20 < *(_DWORD *)(a2 + 4) )
          continue;
      }
      goto LABEL_12;
    }
    sub_1800664F0(a2, v20);
  }
LABEL_12:
  if ( !v8 )
  {
    if ( v24 )
    {
      sub_1800664F0(&v23, (unsigned int)(a6 + v25));
    }
    else if ( !*(_BYTE *)(a1 + 56) )
    {
LABEL_17:
      *(_BYTE *)(a1 + 56) = v6;
      return 0LL;
    }
    v6 = 1;
    goto LABEL_17;
  }
  return v10;
}
