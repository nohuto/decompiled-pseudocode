/*
 * XREFs of ?bSrcCopySRLE4D4@@YAHPEAUBLTINFO@@@Z @ 0x1C02CE210
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall bSrcCopySRLE4D4(struct BLTINFO *a1)
{
  struct BLTINFO *v1; // r9
  char *v2; // r10
  __int64 v3; // rbx
  unsigned int v4; // r14d
  int v5; // r8d
  int v6; // r15d
  int v7; // r12d
  int v8; // edx
  __int64 v9; // rax
  int v10; // ecx
  int v11; // eax
  __int64 result; // rax
  unsigned int v13; // r13d
  unsigned int v14; // edi
  __int64 v15; // rbp
  char v16; // r8
  __int64 v17; // rax
  unsigned int v18; // esi
  unsigned __int8 *v19; // r10
  unsigned __int64 v20; // rdi
  unsigned int v21; // r14d
  BOOL v22; // r13d
  unsigned int v23; // ecx
  char v24; // al
  char v25; // cl
  unsigned int v26; // esi
  char v27; // al
  unsigned int v28; // eax
  char v29; // r12
  __int64 v30; // rbp
  unsigned int v31; // edi
  unsigned int v32; // eax
  char v33; // dl
  unsigned __int64 v34; // rcx
  unsigned int v35; // edi
  unsigned __int64 v36; // rax
  unsigned __int64 v37; // r10
  unsigned int v38; // edi
  int v39; // eax
  unsigned __int8 *v40; // r10
  int v41; // ecx
  unsigned int v42; // ecx
  __int64 v43; // rax
  int v44; // eax
  __int64 v45; // rcx
  char v46; // di
  char v47; // r13
  __int64 v48; // rax
  char v49; // di
  unsigned int v50; // edx
  unsigned int i; // esi
  __int64 v52; // rax
  int v53; // [rsp+0h] [rbp-78h]
  int v54; // [rsp+0h] [rbp-78h]
  unsigned int v55; // [rsp+4h] [rbp-74h]
  unsigned int v56; // [rsp+8h] [rbp-70h]
  int v57; // [rsp+Ch] [rbp-6Ch]
  __int64 v58; // [rsp+10h] [rbp-68h]
  int v59; // [rsp+18h] [rbp-60h]
  int v60; // [rsp+1Ch] [rbp-5Ch]
  int v61; // [rsp+20h] [rbp-58h]
  int v62; // [rsp+24h] [rbp-54h]
  int v64; // [rsp+88h] [rbp+10h]
  int v65; // [rsp+90h] [rbp+18h]
  unsigned int v66; // [rsp+98h] [rbp+20h]

  v1 = a1;
  v2 = (char *)*((_QWORD *)a1 + 1);
  v3 = *((_QWORD *)a1 + 2);
  v4 = *((_DWORD *)a1 + 30);
  v5 = *((_DWORD *)a1 + 23);
  v6 = *((_DWORD *)a1 + 15);
  v7 = *((_DWORD *)a1 + 24);
  v59 = *((_DWORD *)a1 + 11);
  v62 = *((_DWORD *)a1 + 14);
  v8 = *((_DWORD *)a1 + 32);
  v61 = v7;
  v56 = *(_DWORD *)(*((_QWORD *)a1 + 9) + 64LL);
  v9 = *(_QWORD *)a1;
  v10 = *((_DWORD *)a1 + 22);
  v65 = v10;
  v60 = v5;
  v58 = *(_QWORD *)(v9 + 16);
  v11 = *((_DWORD *)v1 + 25);
  v64 = v11;
  if ( v6 < v5 )
    return 1LL;
  v13 = (unsigned int)v10 >> 1;
  v14 = (unsigned int)(v7 - 1) >> 1;
  v55 = (unsigned int)v10 >> 1;
  v66 = v14;
  v15 = (unsigned int)(v8 >> 1);
  v16 = 0;
  v57 = v7 & 1;
  if ( v6 < v11 )
  {
    if ( (unsigned int)v15 < v13 )
    {
      v17 = v13;
    }
    else
    {
      v17 = v14;
      if ( (unsigned int)v15 <= v14 )
        v17 = (unsigned int)v15;
    }
    v16 = *(_BYTE *)(v17 + v3);
    v11 = *((_DWORD *)v1 + 25);
  }
  while ( 1 )
  {
    v4 += 2;
    if ( v4 > v56 )
      return 0LL;
    v18 = (unsigned __int8)*v2;
    v19 = (unsigned __int8 *)(v2 + 1);
    v20 = *v19;
    v2 = (char *)(v19 + 1);
    if ( !v18 )
      break;
    if ( v6 < v11 && v8 < v7 )
    {
      if ( (int)(v18 + v8) > v10 )
      {
        if ( v8 < v10 )
        {
          LODWORD(v15) = v13;
          v44 = v10 - v8;
          v8 = v10;
          v18 -= v44;
        }
        if ( (int)(v18 + v8) <= v7 )
        {
          v54 = 0;
        }
        else
        {
          v54 = v8 + v18 - v7;
          v18 = v7 - v8;
        }
        v45 = v20 & 0xF;
        v46 = *(_BYTE *)(v58 + 4 * (v20 >> 4));
        v47 = *(_BYTE *)(v58 + 4 * v45);
        if ( (v8 & 1) != 0 )
        {
          v48 = (unsigned int)v15;
          LODWORD(v15) = v15 + 1;
          ++v8;
          *(_BYTE *)(v48 + v3) = v16 ^ (v16 ^ v46) & 0xF;
          --v18;
          LOBYTE(v48) = v47 ^ v46;
          v47 = v46;
          v46 ^= v48;
        }
        v49 = 16 * v46;
        v50 = v18 + v8;
        v16 = v49 | v47 & 0xF;
        for ( i = v18 >> 1; i; --i )
        {
          v52 = (unsigned int)v15;
          LODWORD(v15) = v15 + 1;
          *(_BYTE *)(v52 + v3) = v16;
        }
        if ( (v50 & 1) != 0 )
          v16 = v49 | v49 & 0xF | v47 & 0xF;
        v8 = v54 + v50;
LABEL_92:
        v10 = v65;
LABEL_93:
        v13 = v55;
LABEL_94:
        v11 = v64;
        goto LABEL_97;
      }
      v11 = v64;
    }
    v8 += v18;
LABEL_97:
    v15 = (unsigned int)(v8 >> 1);
  }
  if ( (_DWORD)v20 )
  {
    if ( (_DWORD)v20 == 1 )
    {
      if ( v6 < v64 )
      {
        if ( v8 >= v10 && v8 < v7 && (v8 & 1) != 0 )
        {
          *(_BYTE *)(v15 + v3) = v16 ^ (v16 ^ *(_BYTE *)(v15 + v3)) & 0xF;
        }
        else if ( v57 && v8 >= v7 )
        {
          *(_BYTE *)(v66 + v3) = v16 ^ (v16 ^ *(_BYTE *)(v66 + v3)) & 0xF;
        }
      }
      return 0LL;
    }
    if ( (_DWORD)v20 != 2 )
    {
      v21 = ((unsigned int)(v20 + 1) >> 1) + v4;
      if ( v21 > v56 )
        return 0LL;
      v22 = (((_DWORD)v20 + 1) & 2) != 0;
      if ( v6 >= v64 || v8 >= v7 || (int)v20 + v8 <= v65 )
      {
        v8 += v20;
        v37 = (unsigned __int64)&v2[(unsigned __int64)(unsigned int)(v20 + 1) >> 1];
        goto LABEL_47;
      }
      if ( v8 < v65 )
      {
        v23 = v65 - v8;
        v15 = v55;
        LODWORD(v20) = v20 - (v65 - v8);
        v8 = v65;
        v2 += (unsigned __int64)v23 >> 1;
        if ( (v23 & 1) != 0 )
        {
          v24 = *v2++;
          v25 = *(_BYTE *)(v58 + 4LL * (v24 & 0xF));
          if ( (v65 & 1) != 0 )
          {
            v16 ^= (v16 ^ v25) & 0xF;
            *(_BYTE *)(v55 + v3) = v16;
            v15 = v55 + 1;
          }
          else
          {
            v16 = v16 & 0xF | (16 * v25);
          }
          v10 = v65;
          v8 = v65 + 1;
          LODWORD(v20) = v20 - 1;
          if ( !(_DWORD)v20 )
          {
            v4 = v22 + v21;
            v2 += v22;
            goto LABEL_93;
          }
        }
      }
      if ( (int)v20 + v8 <= v7 )
      {
        v26 = 0;
      }
      else
      {
        v26 = v8 + v20 - v7;
        LODWORD(v20) = v7 - v8;
      }
      if ( (_DWORD)v20 )
      {
        v27 = v20 + v8;
        v53 = v20 + v8;
        if ( (v8 & 1) != 0 )
        {
          v28 = (unsigned __int8)*v2++;
          v29 = *(_BYTE *)(v58 + 4LL * (v28 & 0xF));
          v16 ^= (v16 ^ *(_BYTE *)(v58 + 4 * ((unsigned __int64)v28 >> 4))) & 0xF;
          *(_BYTE *)(v15 + v3) = v16;
          v30 = (unsigned int)(v15 + 1);
          v31 = (unsigned int)(v20 - 1) >> 1;
          if ( v31 )
          {
            do
            {
              v32 = (unsigned __int8)*v2++;
              v33 = 16 * v29;
              v29 = *(_BYTE *)(v58 + 4LL * (v32 & 0xF));
              v16 = v33 | *(_BYTE *)(v58 + 4 * ((unsigned __int64)v32 >> 4)) & 0xF;
              *(_BYTE *)(v30 + v3) = v16;
              v30 = (unsigned int)(v30 + 1);
              --v31;
            }
            while ( v31 );
            v1 = a1;
          }
          v8 = v53;
          if ( (v53 & 1) != 0 )
          {
            v34 = v26 + 1;
            v16 = v16 & 0xF | (16 * v29);
          }
          else
          {
            v34 = v26;
          }
          v7 = v61;
          goto LABEL_44;
        }
        v35 = (unsigned int)v20 >> 1;
        if ( v35 )
        {
          do
          {
            v36 = (unsigned __int8)*v2++;
            v16 = *(_BYTE *)(v58 + 4 * (v36 & 0xF)) & 0xF | (16 * *(_BYTE *)(v58 + 4 * (v36 >> 4)));
            *(_BYTE *)(v15 + v3) = v16;
            v15 = (unsigned int)(v15 + 1);
            --v35;
          }
          while ( v35 );
          v27 = v53;
        }
        if ( (v27 & 1) != 0 )
        {
          v8 = v53;
          v16 = v16 & 0xF | (16 * *(_BYTE *)(v58 + 4 * ((unsigned __int64)(unsigned __int8)*v2 >> 4)));
          v37 = (unsigned __int64)&v2[((unsigned __int64)v26 >> 1) + 1];
LABEL_45:
          v8 += v26;
LABEL_47:
          v4 = v22 + v21;
          v2 = (char *)(v22 + v37);
          goto LABEL_92;
        }
        v8 = v53;
      }
      v34 = v26 + 1;
LABEL_44:
      v37 = (unsigned __int64)&v2[v34 >> 1];
      goto LABEL_45;
    }
    if ( v6 < v64 )
    {
      if ( v8 >= v10 && v8 < v7 && (v8 & 1) != 0 )
      {
        *(_BYTE *)(v15 + v3) = v16 ^ (v16 ^ *(_BYTE *)(v15 + v3)) & 0xF;
      }
      else if ( v57 && v8 >= v7 )
      {
        v38 = v66;
        *(_BYTE *)(v66 + v3) = v16 ^ (v16 ^ *(_BYTE *)(v66 + v3)) & 0xF;
        goto LABEL_54;
      }
    }
    v38 = v66;
LABEL_54:
    v4 += 2;
    if ( v4 > v56 )
      return 0LL;
    v39 = (unsigned __int8)*v2;
    v40 = (unsigned __int8 *)(v2 + 1);
    v8 += v39;
    v41 = *v40;
    v2 = (char *)(v40 + 1);
    v6 -= v41;
    v3 += v41 * v59;
    if ( v6 < v60 )
    {
      *((_DWORD *)v1 + 34) = v8;
      goto LABEL_101;
    }
    if ( v8 >> 1 < v13 )
    {
      v42 = v13;
    }
    else
    {
      v42 = v38;
      if ( v8 >> 1 <= v38 )
        v42 = v8 >> 1;
    }
    v43 = v42;
    v10 = v65;
    v16 = *(_BYTE *)(v43 + v3);
    goto LABEL_94;
  }
  v11 = v64;
  if ( v6 < v64 )
  {
    if ( v8 >= v10 && v8 < v7 && (v8 & 1) != 0 )
    {
      v16 ^= (v16 ^ *(_BYTE *)(v15 + v3)) & 0xF;
      *(_BYTE *)(v15 + v3) = v16;
LABEL_73:
      v11 = v64;
      v10 = v65;
      goto LABEL_74;
    }
    if ( v57 && v8 >= v7 )
    {
      v16 ^= (v16 ^ *(_BYTE *)(v66 + v3)) & 0xF;
      *(_BYTE *)(v66 + v3) = v16;
      goto LABEL_73;
    }
  }
LABEL_74:
  --v6;
  v3 += v59;
  v8 = v62;
  if ( v6 >= v60 )
  {
    if ( v6 >= v11 )
      goto LABEL_97;
    v16 = *(_BYTE *)(v13 + v3);
    goto LABEL_94;
  }
  *((_DWORD *)v1 + 34) = v62;
LABEL_101:
  *((_QWORD *)v1 + 14) = v3;
  result = 1LL;
  *((_QWORD *)v1 + 13) = v2;
  *((_DWORD *)v1 + 31) = v4;
  *((_DWORD *)v1 + 33) = v6;
  return result;
}
