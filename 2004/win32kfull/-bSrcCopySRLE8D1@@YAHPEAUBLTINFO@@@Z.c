/*
 * XREFs of ?bSrcCopySRLE8D1@@YAHPEAUBLTINFO@@@Z @ 0x1C02CC290
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C015C000 (memset.c)
 */

__int64 __fastcall bSrcCopySRLE8D1(struct BLTINFO *a1)
{
  int v1; // edx
  unsigned __int8 *v2; // r15
  __int64 v3; // rsi
  int v4; // r10d
  int v5; // r12d
  int v6; // r13d
  int v7; // ebx
  unsigned int v8; // r11d
  int v9; // eax
  int v10; // ecx
  __int64 result; // rax
  char v12; // r8
  struct BLTINFO *v13; // rdi
  int v14; // ecx
  __int64 i; // rax
  unsigned int v16; // r12d
  __int64 v17; // r14
  unsigned __int8 *v18; // r15
  __int64 v19; // r11
  __int64 v20; // r9
  unsigned int v21; // r12d
  int v22; // ecx
  __int64 v23; // rax
  int v24; // r10d
  __int64 v25; // rcx
  int v26; // ebx
  unsigned __int8 v27; // r14
  __int64 v28; // rdx
  char v29; // cl
  unsigned __int8 *v30; // r15
  unsigned int v31; // r11d
  int v32; // eax
  unsigned __int8 *v33; // r15
  int v34; // ecx
  char v35; // cl
  int v36; // ebx
  int v37; // edx
  int v38; // r9d
  char v39; // dl
  unsigned int v41; // r12d
  char v42; // al
  char v43; // r8
  unsigned int v44; // r11d
  __int64 v45; // r14
  unsigned int v46; // [rsp+20h] [rbp-88h]
  int v47; // [rsp+24h] [rbp-84h]
  int v48; // [rsp+28h] [rbp-80h]
  int v49; // [rsp+2Ch] [rbp-7Ch]
  int v50; // [rsp+2Ch] [rbp-7Ch]
  unsigned int v51; // [rsp+30h] [rbp-78h]
  int v52; // [rsp+34h] [rbp-74h]
  int v53; // [rsp+38h] [rbp-70h]
  unsigned int v54; // [rsp+3Ch] [rbp-6Ch]
  int v55; // [rsp+40h] [rbp-68h]
  int v56; // [rsp+44h] [rbp-64h]
  int v57; // [rsp+48h] [rbp-60h]
  __int64 v58; // [rsp+50h] [rbp-58h]
  char v60; // [rsp+B8h] [rbp+10h]
  char v61; // [rsp+C0h] [rbp+18h]
  unsigned int v62; // [rsp+C8h] [rbp+20h]

  v1 = *((_DWORD *)a1 + 22);
  v2 = (unsigned __int8 *)*((_QWORD *)a1 + 1);
  v3 = *((_QWORD *)a1 + 2);
  v4 = *((_DWORD *)a1 + 15);
  v5 = *((_DWORD *)a1 + 30);
  v6 = *((_DWORD *)a1 + 24);
  v7 = *((_DWORD *)a1 + 32);
  v52 = *((_DWORD *)a1 + 11);
  v55 = v1;
  v56 = *((_DWORD *)a1 + 14);
  v48 = v4;
  v8 = *(_DWORD *)(*((_QWORD *)a1 + 9) + 64LL);
  v51 = v8;
  v58 = *(_QWORD *)(*(_QWORD *)a1 + 16LL);
  v9 = *((_DWORD *)a1 + 23);
  v10 = *((_DWORD *)a1 + 25);
  v47 = v10;
  v53 = v9;
  if ( v4 < v9 )
    return 1LL;
  v12 = 0;
  v54 = (unsigned int)v1 >> 3;
  v61 = EndMask[v1 & 7];
  v62 = (unsigned int)(v6 - 1) >> 3;
  v13 = a1;
  v60 = ~EndMask[v6 & 7];
  if ( v4 >= v10 )
    goto LABEL_10;
  if ( v7 < v1 )
  {
    if ( v7 < v6 )
    {
      v12 = EndMask[v1 & 7] & *(_BYTE *)(((unsigned int)v1 >> 3) + v3);
      goto LABEL_10;
    }
    goto LABEL_8;
  }
  if ( v7 >= v6 )
  {
LABEL_8:
    v12 = *(_BYTE *)(((unsigned int)(v6 - 1) >> 3) + v3);
    goto LABEL_10;
  }
  v12 = EndMask[v7 & 7] & *(_BYTE *)((unsigned int)(v7 >> 3) + v3);
LABEL_10:
  v14 = 1;
  for ( i = 1LL; i < 256; ++i )
  {
    *(_DWORD *)(v58 + 4 * i) = v14;
    v14 ^= 1u;
  }
  v16 = v5 + 2;
  v46 = v16;
  if ( v16 > v8 )
    return 0LL;
  while ( 1 )
  {
    v17 = *v2;
    v18 = v2 + 1;
    v19 = (unsigned int)(v7 >> 3);
    v20 = *v18;
    v2 = v18 + 1;
    if ( (_DWORD)v17 )
    {
      if ( v4 >= v47 || v7 >= v6 || (int)v17 + v7 <= v1 )
      {
        v7 += v17;
      }
      else
      {
        if ( v7 < v1 )
        {
          v17 = (unsigned int)(v7 - v1 + v17);
          v7 = v1;
          v19 = (unsigned int)(v1 >> 3);
        }
        if ( (int)v17 + v7 <= v6 )
        {
          v50 = 0;
        }
        else
        {
          v50 = v7 + v17 - v6;
          v17 = (unsigned int)(v6 - v7);
        }
        v35 = v7 & 7;
        v36 = v17 + v7;
        LOBYTE(v37) = 7 - v35;
        v38 = *(_DWORD *)(v58 + 4 * v20);
        v57 = v38;
        if ( (unsigned __int8)(7 - v35) < (unsigned __int8)v17 )
        {
          v37 = (unsigned __int8)v37;
          v41 = ((unsigned __int8)v17 - (unsigned __int8)v37 - 1) >> 3;
          v42 = *((_BYTE *)&unk_1C02FB00F - (unsigned __int8)v37);
          if ( v38 )
            v43 = ~v42 | v12;
          else
            v43 = v42 & v12;
          *(_BYTE *)(v19 + v3) = v43;
          v44 = v19 + 1;
          v45 = -1 - (unsigned __int8)v37 + (unsigned int)v17;
          if ( v41 )
          {
            LOBYTE(v37) = -(v38 != 0);
            memset((void *)(v3 + v44), v37, v41);
            v4 = v48;
            v38 = v57;
            v45 = (unsigned int)v45 - 8 * v41;
          }
          v12 = 0;
          if ( (_DWORD)v45 && v38 )
          {
            v16 = v46;
            if ( (unsigned int)v45 < 9 )
              v12 = EndMask[v45];
          }
          else
          {
            v16 = v46;
          }
        }
        else if ( (unsigned int)v17 < 9 )
        {
          v39 = EndMask[v17] >> v35;
          if ( v38 )
            v12 |= v39;
          else
            v12 &= ~v39;
        }
        v7 = v50 + v36;
      }
      goto LABEL_91;
    }
    if ( !(_DWORD)v20 )
    {
      if ( v4 < v47 && (v7 & 7) != 0 )
      {
        if ( v7 < v1 )
        {
          if ( v7 < v6 )
            goto LABEL_63;
        }
        else if ( v7 < v6 )
        {
          *(_BYTE *)(v19 + v3) = v12 | *(_BYTE *)(v19 + v3) & ~EndMask[v7 & 7];
          goto LABEL_63;
        }
        *(_BYTE *)(v62 + v3) = v12 | v60 & *(_BYTE *)(v62 + v3);
      }
LABEL_63:
      --v4;
      v3 += v52;
      v7 = v56;
      v48 = v4;
      if ( v4 < v53 )
      {
        *((_DWORD *)v13 + 34) = v56;
        goto LABEL_94;
      }
      if ( v4 < v47 )
        goto LABEL_65;
      goto LABEL_91;
    }
    if ( (_DWORD)v20 == 1 )
      break;
    if ( (_DWORD)v20 != 2 )
    {
      v21 = v20 + v16;
      if ( v21 > v51 )
        return 0LL;
      v22 = v20 & 1;
      v49 = v22;
      if ( v4 >= v47 || v7 >= v6 || (int)v20 + v7 <= v1 )
      {
        v7 += v20;
        v30 = &v2[v20];
      }
      else
      {
        if ( v7 < v1 )
        {
          v23 = (unsigned int)(v1 - v7);
          v19 = (unsigned int)(v1 >> 3);
          LODWORD(v20) = v20 - v23;
          v7 = v1;
          v2 += v23;
        }
        if ( (int)v20 + v7 <= v6 )
        {
          v24 = 0;
        }
        else
        {
          v24 = v7 + v20 - v6;
          LODWORD(v20) = v6 - v7;
        }
        v25 = (unsigned __int8)(7 - (v7 & 7));
        v26 = v20 + v7;
        v27 = byte_1C02FAFF8[v25];
        do
        {
          if ( v27 )
          {
            do
            {
              if ( !(_DWORD)v20 )
                break;
              v28 = *v2++;
              LODWORD(v20) = v20 - 1;
              v29 = v12 | v27;
              if ( !*(_DWORD *)(v58 + 4 * v28) )
                v29 = v12;
              v27 >>= 1;
              v12 = v29;
            }
            while ( v27 );
            if ( v27 )
              continue;
          }
          *(_BYTE *)(v19 + v3) = v12;
          v27 = 0x80;
          v19 = (unsigned int)(v19 + 1);
          v12 = 0;
        }
        while ( (_DWORD)v20 );
        v13 = a1;
        v22 = v49;
        v30 = &v2[v24];
        v7 = v24 + v26;
        v4 = v48;
      }
      v16 = v22 + v21;
      v2 = &v30[v22];
      goto LABEL_91;
    }
    if ( v4 >= v47 )
    {
      v31 = (unsigned int)(v6 - 1) >> 3;
    }
    else
    {
      if ( (v7 & 7) != 0 )
      {
        if ( v7 < v1 )
        {
          if ( v7 >= v6 )
          {
LABEL_44:
            v31 = (unsigned int)(v6 - 1) >> 3;
            *(_BYTE *)(v62 + v3) = v12 | v60 & *(_BYTE *)(v62 + v3);
            goto LABEL_48;
          }
        }
        else
        {
          if ( v7 >= v6 )
            goto LABEL_44;
          v1 = v55;
          *(_BYTE *)(v19 + v3) = v12 | *(_BYTE *)(v19 + v3) & ~EndMask[v7 & 7];
        }
      }
      v31 = (unsigned int)(v6 - 1) >> 3;
    }
LABEL_48:
    v16 += 2;
    if ( v16 > v51 )
      return 0LL;
    v32 = *v2;
    v33 = v2 + 1;
    v7 += v32;
    v34 = *v33;
    v2 = v33 + 1;
    v4 -= v34;
    v48 = v4;
    v3 += v34 * v52;
    if ( v4 < v53 )
    {
      *((_DWORD *)v13 + 34) = v7;
LABEL_94:
      *((_QWORD *)v13 + 14) = v3;
      result = 1LL;
      *((_QWORD *)v13 + 13) = v2;
      *((_DWORD *)v13 + 31) = v16;
      *((_DWORD *)v13 + 33) = v4;
      return result;
    }
    if ( v4 < v47 )
    {
      if ( v7 >= v1 )
      {
        if ( v7 < v6 )
        {
          v12 = EndMask[v7 & 7] & *(_BYTE *)((unsigned int)(v7 >> 3) + v3);
          goto LABEL_91;
        }
LABEL_55:
        v12 = *(_BYTE *)(v31 + v3);
        goto LABEL_91;
      }
      if ( v7 >= v6 )
        goto LABEL_55;
LABEL_65:
      v12 = v61 & *(_BYTE *)(v54 + v3);
    }
LABEL_91:
    v16 += 2;
    v46 = v16;
    if ( v16 > v51 )
      return 0LL;
    v1 = v55;
  }
  if ( v4 < v47 && (v7 & 7) != 0 )
  {
    if ( v7 < v1 )
    {
      if ( v7 >= v6 )
        goto LABEL_102;
    }
    else
    {
      if ( v7 < v6 )
      {
        *(_BYTE *)(v19 + v3) = v12 | *(_BYTE *)(v19 + v3) & ~EndMask[v7 & 7];
        return 0LL;
      }
LABEL_102:
      *(_BYTE *)(v62 + v3) = v12 | v60 & *(_BYTE *)(v62 + v3);
    }
  }
  return 0LL;
}
