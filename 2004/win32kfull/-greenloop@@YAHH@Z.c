/*
 * XREFs of ?greenloop@@YAHH@Z @ 0x1C00EA930
 * Callers:
 *     ?redloop@@YAHXZ @ 0x1C00EA7E8 (-redloop@@YAHXZ.c)
 * Callees:
 *     ?blueloop@@YAHH@Z @ 0x1C00EAE40 (-blueloop@@YAHH@Z.c)
 */

__int64 __fastcall greenloop(int a1)
{
  int v1; // ebp
  int v2; // r13d
  int v3; // eax
  int v4; // ecx
  int v5; // r14d
  int v6; // edx
  int v7; // r15d
  int v8; // ecx
  int v9; // ebp
  __int64 v10; // r13
  __int64 v11; // r12
  int v12; // eax
  char v13; // r11
  int v14; // ebx
  int v15; // r10d
  int v16; // eax
  int v17; // r8d
  int v18; // edx
  int v19; // edi
  int v20; // r14d
  int v21; // esi
  unsigned int v22; // ecx
  unsigned int *v23; // rax
  _BYTE *v24; // r9
  unsigned int *v25; // rcx
  _BYTE *v26; // r9
  int v27; // r8d
  unsigned int v28; // eax
  int v29; // edx
  int v30; // ecx
  int v31; // r12d
  int v32; // ecx
  int v33; // ebx
  int v34; // r14d
  __int64 v35; // rdi
  int v36; // r15d
  __int64 v37; // rsi
  int v38; // ebp
  int v39; // eax
  unsigned int v40; // r10d
  int v41; // ecx
  int v42; // eax
  int v44; // [rsp+20h] [rbp-68h]
  __int64 v45; // [rsp+28h] [rbp-60h]
  __int64 v46; // [rsp+30h] [rbp-58h]
  int v47; // [rsp+90h] [rbp+8h]
  int v48; // [rsp+98h] [rbp+10h]
  int v49; // [rsp+A0h] [rbp+18h]
  int v50; // [rsp+A8h] [rbp+20h]

  if ( a1 )
  {
    v1 = dword_1C033AE30;
    v4 = 0;
    v2 = dword_1C033AE48;
    v3 = 31;
    dword_1C033B0D0 = 0;
    dword_1C033B0D4 = 31;
    dword_1C033B0DC = 0;
    dword_1C033B0CC = dword_1C033AE30;
    dword_1C033B0D8 = dword_1C033AE48;
    dword_1C033B0E0 = 32;
  }
  else
  {
    v1 = dword_1C033B0CC;
    v2 = dword_1C033B0D8;
    v3 = dword_1C033B0D4;
    v4 = dword_1C033B0D0;
  }
  v5 = dword_1C033AE3C;
  v6 = v3;
  v44 = v3;
  v7 = dword_1C033AE3C;
  v45 = qword_1C033AE58;
  v50 = v4;
  v8 = v1;
  v47 = 0;
  v9 = v2;
  v48 = v8;
  v10 = qword_1C033AE58;
  v46 = qword_1C033AE70;
  v11 = qword_1C033AE70;
  v49 = dword_1C033AE3C;
  v12 = 1;
  if ( v8 <= v6 )
  {
    v13 = dword_1C033AE94;
    v14 = dword_1C033B104;
    v15 = dword_1C033B108;
    while ( 1 )
    {
      if ( v12 )
      {
        v16 = dword_1C033AE2C;
        v14 = 0;
        v15 = 31;
        dword_1C033B104 = 0;
        dword_1C033B108 = 31;
        dword_1C033B114 = 0;
        dword_1C033B100 = dword_1C033AE2C;
        dword_1C033B10C = dword_1C033AE44;
        dword_1C033B110 = 32;
      }
      else
      {
        v16 = dword_1C033B100;
      }
      v17 = dword_1C033B10C;
      v18 = v16;
      v19 = 0;
      v20 = v14;
      v21 = v15;
      v22 = v7;
      v23 = (unsigned int *)v10;
      v24 = (_BYTE *)v11;
      if ( v18 <= v15 )
      {
        while ( *v23 <= v22 )
        {
          v22 += v17;
          ++v18;
          v17 += 128;
          ++v23;
          ++v24;
          if ( v18 > v15 )
            goto LABEL_16;
        }
        if ( v18 > dword_1C033B100 )
        {
          dword_1C033B100 = v18;
          v10 = (__int64)v23;
          v11 = (__int64)v24;
          dword_1C033B10C = v17;
          v7 = v22;
          v20 = v18;
        }
        v19 = 1;
        if ( v18 <= v15 )
        {
          while ( *v23 > v22 )
          {
            *v23 = v22;
            ++v18;
            v22 += v17;
            *v24++ = v13;
            v17 += 128;
            ++v23;
            if ( v18 > v15 )
              goto LABEL_16;
          }
          v21 = v18 - 1;
        }
      }
LABEL_16:
      v25 = (unsigned int *)(v10 - 4);
      v26 = (_BYTE *)(v11 - 1);
      v27 = dword_1C033B10C - 128;
      v28 = v7 - (dword_1C033B10C - 128);
      v29 = dword_1C033B100 - 1;
      if ( v19 )
        goto LABEL_17;
      if ( v29 >= v14 )
        break;
LABEL_48:
      if ( v47 )
      {
        v5 = dword_1C033AE3C;
        v31 = v48 - 1;
        goto LABEL_29;
      }
      v30 = v48;
LABEL_27:
      v49 += v9;
      v7 += v9;
      v45 += 128LL;
      v46 += 32LL;
      v9 += 128;
      v10 += 128LL;
      v48 = v30 + 1;
      v11 += 32LL;
      v12 = 0;
      if ( v30 + 1 > dword_1C033B0D4 )
      {
        v5 = dword_1C033AE3C;
        v31 = v44;
        goto LABEL_29;
      }
    }
    while ( *v25 <= v28 )
    {
      v27 -= 128;
      --v29;
      v28 -= v27;
      --v25;
      --v26;
      if ( v29 < v14 )
        goto LABEL_48;
    }
    dword_1C033B100 = v29;
    v10 = (__int64)v25;
    v11 = (__int64)v26;
    dword_1C033B10C = v27;
    v7 = v28;
    v21 = v29;
LABEL_17:
    if ( v29 >= v14 )
    {
      while ( *v25 > v28 )
      {
        *v25 = v28;
        v27 -= 128;
        *v26 = v13;
        v28 -= v27;
        --v26;
        --v29;
        --v25;
        if ( v29 < v14 )
          goto LABEL_22;
      }
      v20 = v29 + 1;
    }
LABEL_22:
    v30 = v48;
    if ( v21 < dword_1C033B114 )
      v15 = v21;
    dword_1C033B114 = v21;
    dword_1C033B108 = v15;
    if ( v20 > dword_1C033B110 )
      v14 = v20;
    dword_1C033B110 = v20;
    dword_1C033B104 = v14;
    if ( !v47 )
    {
      if ( v48 > dword_1C033B0CC )
      {
        qword_1C033AE58 = v45;
        qword_1C033AE70 = v46;
        dword_1C033AE3C = v49;
        dword_1C033B0CC = v48;
        dword_1C033B0D8 = v9;
        v50 = v48;
      }
      v47 = 1;
    }
    goto LABEL_27;
  }
  v31 = v6;
LABEL_29:
  v32 = 1;
  v33 = dword_1C033B0D8 - 128;
  v34 = v5 - (dword_1C033B0D8 - 128);
  v35 = qword_1C033AE58 - 128;
  v36 = dword_1C033B0D0;
  v37 = qword_1C033AE70 - 32;
  v38 = dword_1C033B0CC - 1;
  dword_1C033B0E8 = dword_1C033B0D8 - 128;
  dword_1C033AE38 = v34;
  dword_1C033B0E4 = v34;
  qword_1C033AE50 = qword_1C033AE58 - 128;
  qword_1C033B0F0 = qword_1C033AE58 - 128;
  qword_1C033AE68 = qword_1C033AE70 - 32;
  qword_1C033B0F8 = qword_1C033AE70 - 32;
  if ( dword_1C033B0CC - 1 < dword_1C033B0D0 )
  {
    v40 = v47;
    v41 = v50;
  }
  else
  {
    do
    {
      v39 = blueloop(v32);
      v40 = v47;
      if ( v39 )
      {
        if ( !v47 )
        {
          v40 = 1;
          dword_1C033B0CC = v38;
          v47 = 1;
          v31 = v38;
          qword_1C033AE58 = v35;
          qword_1C033AE70 = v37;
          dword_1C033AE3C = v34;
          dword_1C033B0D8 = v33;
        }
      }
      else if ( v47 )
      {
        v41 = v38 + 1;
        goto LABEL_33;
      }
      qword_1C033AE50 -= 128LL;
      v33 -= 128;
      dword_1C033AE38 -= v33;
      v34 -= v33;
      qword_1C033AE68 -= 32LL;
      v35 -= 128LL;
      v37 -= 32LL;
      qword_1C033B0F0 = v35;
      --v38;
      qword_1C033B0F8 = v37;
      v32 = 0;
      dword_1C033B0E8 = v33;
      dword_1C033B0E4 = v34;
    }
    while ( v38 >= v36 );
    v41 = v50;
  }
LABEL_33:
  if ( v40 )
  {
    v42 = dword_1C033B0D4;
    if ( v31 < dword_1C033B0DC )
      v42 = v31;
    dword_1C033B0DC = v31;
    dword_1C033B0D4 = v42;
    if ( v41 > dword_1C033B0E0 )
      v36 = v41;
    dword_1C033B0E0 = v41;
    dword_1C033B0D0 = v36;
  }
  return v40;
}
