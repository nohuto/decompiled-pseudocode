/*
 * XREFs of ?bSrcCopySRLE4D24@@YAHPEAUBLTINFO@@@Z @ 0x1C02CDD70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall bSrcCopySRLE4D24(struct BLTINFO *a1)
{
  struct BLTINFO *v1; // r10
  int v2; // r13d
  int v3; // r8d
  unsigned __int8 *v4; // r11
  int v5; // r12d
  __int64 v6; // rsi
  int v7; // r9d
  unsigned int v8; // r15d
  __int64 v9; // rax
  int v10; // ecx
  __int64 result; // rax
  unsigned int v12; // ebx
  unsigned int v13; // edx
  unsigned __int8 *v14; // r11
  unsigned __int64 v15; // rdi
  unsigned int v16; // ebx
  BOOL v17; // ecx
  unsigned int v18; // ecx
  __int64 v19; // r15
  __int64 v20; // rax
  int v21; // r8d
  __int64 v22; // rax
  unsigned int v23; // r13d
  int v24; // eax
  int v25; // r9d
  unsigned int v26; // edi
  __int64 v27; // r10
  __int64 v28; // r13
  unsigned __int64 v29; // rax
  int v30; // edx
  int v31; // r8d
  __int64 v32; // r15
  __int64 v33; // r13
  __int64 v34; // r10
  int v35; // r8d
  unsigned __int64 v36; // r11
  int v37; // eax
  unsigned __int8 *v38; // r11
  int v39; // ecx
  int v40; // eax
  int v41; // eax
  int v42; // r8d
  __int64 v43; // r15
  __int64 v44; // rcx
  int v45; // r9d
  unsigned int v46; // edx
  int v47; // edi
  int v48; // eax
  __int64 v49; // r13
  __int64 v50; // rcx
  __int64 v51; // r15
  __int64 v52; // r13
  __int64 v53; // rcx
  unsigned int v54; // [rsp+8h] [rbp-50h]
  int v55; // [rsp+Ch] [rbp-4Ch]
  BOOL v56; // [rsp+10h] [rbp-48h]
  int v57; // [rsp+14h] [rbp-44h]
  int v58; // [rsp+18h] [rbp-40h]
  int v59; // [rsp+1Ch] [rbp-3Ch]
  unsigned int v60; // [rsp+20h] [rbp-38h]
  __int64 v61; // [rsp+28h] [rbp-30h]
  int v62; // [rsp+30h] [rbp-28h]
  int v63; // [rsp+40h] [rbp-18h]
  int v65; // [rsp+A8h] [rbp+50h]
  int v66; // [rsp+B0h] [rbp+58h]
  int v67; // [rsp+B8h] [rbp+60h]

  v1 = a1;
  v2 = *((_DWORD *)a1 + 22);
  v3 = *((_DWORD *)a1 + 24);
  v4 = (unsigned __int8 *)*((_QWORD *)a1 + 1);
  v5 = *((_DWORD *)a1 + 15);
  v6 = *((_QWORD *)a1 + 2);
  v7 = *((_DWORD *)a1 + 32);
  v57 = *((_DWORD *)a1 + 11);
  v59 = v2;
  v67 = v3;
  v65 = v5;
  v8 = *(_DWORD *)(*((_QWORD *)a1 + 9) + 64LL);
  v9 = *(_QWORD *)a1;
  v10 = *((_DWORD *)a1 + 23);
  v60 = v8;
  v66 = v10;
  v61 = *(_QWORD *)(v9 + 16);
  v58 = *((_DWORD *)v1 + 25);
  v62 = *((_DWORD *)v1 + 14);
  if ( v5 < v10 )
    return 1LL;
  v12 = *((_DWORD *)v1 + 30) + 2;
  if ( v12 > v8 )
    return 0LL;
  while ( 1 )
  {
    v13 = *v4;
    v14 = v4 + 1;
    v15 = *v14;
    v4 = v14 + 1;
    if ( !v13 )
      break;
    if ( v5 < v58 && v7 < v3 && (int)(v13 + v7) > v2 )
    {
      if ( v7 < v2 )
      {
        v41 = v2 - v7;
        v7 = v2;
        v13 -= v41;
      }
      if ( (int)(v13 + v7) <= v3 )
      {
        v42 = 0;
      }
      else
      {
        v42 = v7 + v13 - v67;
        v13 = v67 - v7;
      }
      v43 = (unsigned int)(3 * v7);
      v44 = v15 & 0xF;
      v63 = v13 & 1;
      v45 = v13 + v7;
      v46 = v13 >> 1;
      v47 = *(_DWORD *)(v61 + 4 * (v15 >> 4));
      v48 = *(_DWORD *)(v61 + 4 * v44);
      if ( v46 )
      {
        v49 = (unsigned int)(v43 + 1);
        v50 = (unsigned int)(v43 + 2);
        do
        {
          *(_BYTE *)(v43 + v6) = v47;
          v51 = (unsigned int)(v43 + 3);
          *(_BYTE *)(v49 + v6) = BYTE1(v47);
          v52 = (unsigned int)(v49 + 3);
          *(_BYTE *)(v50 + v6) = BYTE2(v47);
          v53 = (unsigned int)(v50 + 3);
          *(_BYTE *)(v51 + v6) = v48;
          v43 = (unsigned int)(v51 + 3);
          *(_BYTE *)(v52 + v6) = BYTE1(v48);
          v49 = (unsigned int)(v52 + 3);
          *(_BYTE *)(v53 + v6) = BYTE2(v48);
          v50 = (unsigned int)(v53 + 3);
          --v46;
        }
        while ( v46 );
        v1 = a1;
        v5 = v65;
        v2 = v59;
      }
      if ( v63 )
      {
        *(_BYTE *)(v43 + v6) = v47;
        *(_BYTE *)((unsigned int)(v43 + 1) + v6) = BYTE1(v47);
        *(_BYTE *)((unsigned int)(v43 + 2) + v6) = BYTE2(v47);
      }
      v8 = v60;
      v7 = v42 + v45;
LABEL_50:
      v10 = v66;
      goto LABEL_52;
    }
    v7 += v13;
LABEL_52:
    v12 += 2;
    if ( v12 > v8 )
      return 0LL;
    v3 = v67;
  }
  if ( (_DWORD)v15 )
  {
    if ( (_DWORD)v15 == 1 )
      return 0LL;
    if ( (_DWORD)v15 != 2 )
    {
      v16 = ((unsigned int)(v15 + 1) >> 1) + v12;
      if ( v16 > v8 )
        return 0LL;
      v17 = (((_DWORD)v15 + 1) & 2) != 0;
      v56 = v17;
      if ( v5 >= v58 || v7 >= v3 || (int)v15 + v7 <= v2 )
      {
        v7 += v15;
        v36 = (unsigned __int64)&v4[(unsigned __int64)(unsigned int)(v15 + 1) >> 1];
      }
      else
      {
        if ( v7 >= v2 )
        {
          v19 = (unsigned int)(3 * v7);
        }
        else
        {
          v18 = v2 - v7;
          v19 = (unsigned int)(3 * v2);
          LODWORD(v15) = v15 - (v2 - v7);
          v7 = v2;
          v4 += (unsigned __int64)v18 >> 1;
          if ( (v18 & 1) != 0 )
          {
            v7 = v2 + 1;
            v20 = *v4++ & 0xF;
            v21 = *(_DWORD *)(v61 + 4 * v20);
            *(_BYTE *)(v19 + v6) = v21;
            *(_BYTE *)((unsigned int)(v19 + 1) + v6) = BYTE1(v21);
            v22 = (unsigned int)(v19 + 2);
            v19 = (unsigned int)(v19 + 3);
            *(_BYTE *)(v22 + v6) = BYTE2(v21);
            v3 = v67;
            LODWORD(v15) = v15 - 1;
          }
        }
        if ( (int)v15 + v7 <= v3 )
        {
          v23 = 0;
        }
        else
        {
          v23 = v7 + v15 - v3;
          LODWORD(v15) = v3 - v7;
        }
        v54 = v23;
        v24 = v15 & 1;
        v25 = v15 + v7;
        v26 = (unsigned int)v15 >> 1;
        v55 = v24;
        if ( v26 )
        {
          v27 = (unsigned int)(v19 + 2);
          v28 = (unsigned int)(v19 + 1);
          do
          {
            v29 = *v4++;
            v30 = *(_DWORD *)(v61 + 4 * (v29 >> 4));
            v31 = *(_DWORD *)(v61 + 4 * (v29 & 0xF));
            *(_BYTE *)(v19 + v6) = v30;
            *(_BYTE *)(v28 + v6) = BYTE1(v30);
            *(_BYTE *)(v27 + v6) = BYTE2(v30);
            v32 = (unsigned int)(v19 + 3);
            v33 = (unsigned int)(v28 + 3);
            v34 = (unsigned int)(v27 + 3);
            *(_BYTE *)(v32 + v6) = v31;
            v19 = (unsigned int)(v32 + 3);
            *(_BYTE *)(v33 + v6) = BYTE1(v31);
            v28 = (unsigned int)(v33 + 3);
            *(_BYTE *)(v34 + v6) = BYTE2(v31);
            v27 = (unsigned int)(v34 + 3);
            --v26;
          }
          while ( v26 );
          v1 = a1;
          v23 = v54;
          v5 = v65;
          v24 = v55;
        }
        if ( v24 )
        {
          v35 = *(_DWORD *)(v61 + 4 * ((unsigned __int64)*v4 >> 4));
          *(_BYTE *)(v19 + v6) = v35;
          *(_BYTE *)((unsigned int)(v19 + 1) + v6) = BYTE1(v35);
          *(_BYTE *)((unsigned int)(v19 + 2) + v6) = BYTE2(v35);
          v36 = (unsigned __int64)&v4[((unsigned __int64)v23 >> 1) + 1];
        }
        else
        {
          v36 = (unsigned __int64)&v4[(unsigned __int64)(v23 + 1) >> 1];
        }
        v17 = v56;
        v7 = v23 + v25;
        v2 = v59;
        v8 = v60;
      }
      v12 = v17 + v16;
      v4 = (unsigned __int8 *)(v17 + v36);
      goto LABEL_50;
    }
    v12 += 2;
    if ( v12 > v8 )
      return 0LL;
    v37 = *v4;
    v38 = v4 + 1;
    v7 += v37;
    v39 = *v38;
    v4 = v38 + 1;
    v40 = v39 * v57;
    v5 -= v39;
    v10 = v66;
    v65 = v5;
    v6 += v40;
    if ( v5 < v66 )
    {
      *((_DWORD *)v1 + 34) = v7;
      goto LABEL_32;
    }
    goto LABEL_52;
  }
  --v5;
  v6 += v57;
  v65 = v5;
  v7 = v62;
  if ( v5 >= v10 )
    goto LABEL_52;
  *((_DWORD *)v1 + 34) = v62;
LABEL_32:
  *((_QWORD *)v1 + 14) = v6;
  result = 1LL;
  *((_QWORD *)v1 + 13) = v4;
  *((_DWORD *)v1 + 31) = v12;
  *((_DWORD *)v1 + 33) = v5;
  return result;
}
