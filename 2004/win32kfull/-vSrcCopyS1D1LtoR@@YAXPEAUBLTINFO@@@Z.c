/*
 * XREFs of ?vSrcCopyS1D1LtoR@@YAXPEAUBLTINFO@@@Z @ 0x1C00F0660
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C015BD40 (memmove.c)
 *     memset @ 0x1C015C000 (memset.c)
 */

void __fastcall vSrcCopyS1D1LtoR(struct BLTINFO *a1)
{
  struct BLTINFO *v1; // r9
  int v2; // r8d
  _BYTE *v3; // rdi
  unsigned int v4; // r14d
  __int64 v5; // r12
  BOOL v6; // r15d
  __int64 v7; // rbp
  int v8; // r13d
  int v9; // edx
  char v10; // cl
  char v11; // bl
  int v12; // r10d
  __int64 v13; // rcx
  _BYTE *v14; // r14
  char *v15; // rbx
  __int64 v16; // rdx
  int v17; // r15d
  int v18; // r9d
  int v19; // r8d
  __int64 v20; // r13
  size_t v21; // r12
  unsigned __int8 v22; // r8
  int v23; // r11d
  int v24; // esi
  __int64 v25; // rax
  int v26; // r8d
  unsigned __int8 *v27; // r9
  unsigned int v28; // ecx
  unsigned int v29; // edx
  int v30; // r13d
  char v31; // al
  _BYTE *v32; // r8
  unsigned __int8 *v33; // r10
  int v34; // r9d
  char v35; // cl
  __int64 v36; // rax
  __int64 v37; // r11
  char *v38; // r9
  char v39; // r8
  char v40; // al
  char v41; // r8
  unsigned __int8 v42; // dl
  char v43; // dl
  unsigned __int8 v44; // al
  unsigned __int8 v45; // dl
  __int64 v46; // rax
  __int64 v47; // r11
  char *v48; // r9
  char v49; // r8
  char v50; // al
  __int64 v51; // rax
  __int64 v52; // rbx
  size_t v53; // r8
  int i; // ecx
  char v55; // al
  unsigned __int8 v56; // dl
  unsigned __int8 v57; // al
  unsigned __int8 v58; // dl
  unsigned __int8 v59; // dl
  unsigned __int8 v60; // cl
  unsigned __int8 v61; // dl
  unsigned __int8 v62; // al
  unsigned __int8 v63; // dl
  char v64; // r11
  int v65; // r13d
  char v66; // si
  unsigned __int8 v67; // dl
  char v68; // dl
  unsigned __int8 v69; // al
  char v70; // cl
  char v71; // [rsp+20h] [rbp-78h]
  unsigned int v72; // [rsp+24h] [rbp-74h]
  char v73; // [rsp+2Ch] [rbp-6Ch]
  int v74; // [rsp+30h] [rbp-68h]
  int v75; // [rsp+34h] [rbp-64h]
  int v76; // [rsp+38h] [rbp-60h]
  __int64 v77; // [rsp+38h] [rbp-60h]
  __int64 v78; // [rsp+38h] [rbp-60h]
  int v79; // [rsp+40h] [rbp-58h]
  unsigned int v80; // [rsp+44h] [rbp-54h]
  __int64 v81; // [rsp+48h] [rbp-50h]
  unsigned __int8 v83; // [rsp+A8h] [rbp+10h]
  __int64 v84; // [rsp+B0h] [rbp+18h]
  __int64 v85; // [rsp+B0h] [rbp+18h]
  char v86; // [rsp+B8h] [rbp+20h]

  v1 = a1;
  v2 = *((_DWORD *)a1 + 12);
  v3 = 0LL;
  v4 = v2 & 7;
  v5 = *((int *)a1 + 10);
  v6 = 1;
  v7 = *((int *)a1 + 11);
  v72 = v4;
  v8 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 16LL) + 4LL) | (2 * **(_DWORD **)(*(_QWORD *)a1 + 16LL));
  v9 = *((_DWORD *)a1 + 14);
  v74 = v8;
  v80 = v9 & 7;
  v10 = (*((_BYTE *)a1 + 48) & 7) - (*((_BYTE *)a1 + 56) & 7);
  v75 = v5;
  v11 = v10 + 8;
  if ( v4 >= v80 )
    v11 = v10;
  v86 = v11;
  v73 = 8 - v11;
  v79 = *((_DWORD *)v1 + 7);
  v12 = v9 + v79;
  v71 = v9 + v79;
  if ( (((v9 + v79) ^ v9) & 0xFFFFFFF8) != 0 )
  {
    v13 = *((_QWORD *)v1 + 2);
    v3 = (_BYTE *)(v13 + ((__int64)v12 >> 3));
    v14 = (_BYTE *)(v13 + ((__int64)(v9 + 7) >> 3));
    v15 = (char *)(*((_QWORD *)v1 + 1) + ((__int64)(v2 + (-(v9 & 7) & 7)) >> 3));
    LODWORD(v16) = (_DWORD)v3 - (_DWORD)v14;
    v83 = 1;
    v17 = *((_DWORD *)a1 + 8);
    v18 = v5 - ((_DWORD)v3 - (_DWORD)v14);
    v19 = v7 - ((_DWORD)v3 - (_DWORD)v14);
    v76 = (_DWORD)v3 - (_DWORD)v14;
    if ( v86 && v8 && v8 != 3 )
    {
      if ( v8 == 1 )
      {
        if ( v17 )
        {
          v16 = (int)v16;
          v36 = v18;
          v77 = (int)v16;
          v84 = v18;
          v37 = v19;
          do
          {
            v38 = &v15[v16];
            --v17;
            v39 = *v15 << v86;
            if ( v15 != &v15[v16] )
            {
              do
              {
                v40 = v39 | ((unsigned __int8)*++v15 >> v73);
                v41 = *v15;
                *v14++ = v40;
                v39 = v41 << v86;
              }
              while ( v15 != v38 );
              v36 = v84;
              v16 = v77;
            }
            v14 += v37;
            v15 += v36;
          }
          while ( v17 );
        }
        goto LABEL_12;
      }
      if ( v8 == 2 && v17 )
      {
        v16 = (int)v16;
        v46 = v18;
        v78 = (int)v16;
        v85 = v18;
        v47 = v19;
        do
        {
          v48 = &v15[v16];
          --v17;
          v49 = *v15 << v86;
          if ( v15 != &v15[v16] )
          {
            do
            {
              v50 = ~(v49 | ((unsigned __int8)*++v15 >> v73));
              v49 = *v15 << v86;
              *v14++ = v50;
            }
            while ( v15 != v48 );
            v46 = v85;
            v16 = v78;
          }
          v14 += v47;
          v15 += v46;
        }
        while ( v17 );
        goto LABEL_11;
      }
      goto LABEL_12;
    }
    if ( v8 )
    {
      if ( v8 == 1 )
      {
        if ( v17 )
        {
          v20 = v5;
          v21 = (int)v16;
          do
          {
            memmove(v14, v15, v21);
            v14 += v7;
            v15 += v20;
            --v17;
          }
          while ( v17 );
          LODWORD(v5) = v20;
LABEL_11:
          v8 = v74;
        }
LABEL_12:
        LOBYTE(v12) = v71;
        v1 = a1;
        v6 = 1;
        v4 = v72;
        v11 = v86;
        goto LABEL_13;
      }
      if ( v8 == 2 )
      {
        for ( ; v17; v15 += v18 )
        {
          --v17;
          for ( i = v16; i; --i )
          {
            v55 = *v15++;
            *v14++ = ~v55;
          }
          v14 += v19;
        }
        goto LABEL_12;
      }
      if ( v8 != 3 )
        goto LABEL_12;
    }
    if ( v17 )
    {
      v51 = v19;
      v81 = v19;
      do
      {
        --v17;
        if ( (_DWORD)v16 )
        {
          v52 = (unsigned int)v16;
          v53 = (unsigned int)v16;
          LOBYTE(v16) = -(v8 != 0);
          memset(v14, v16, v53);
          LODWORD(v16) = v76;
          v14 += v52;
          v51 = v81;
        }
        v14 += v51;
      }
      while ( v17 );
    }
    goto LABEL_12;
  }
  v83 = 0;
LABEL_13:
  v22 = v83;
  v23 = 255 >> v80;
  if ( !v83 )
  {
    LOBYTE(v23) = (-1 << (8 - (v12 & 7))) & v23;
    v6 = (int)(v4 + v79) > 8;
  }
  if ( v80 | v83 ^ 1 )
  {
    v32 = (_BYTE *)(*((_QWORD *)v1 + 2) + ((__int64)*((int *)v1 + 14) >> 3));
    v33 = (unsigned __int8 *)(*((_QWORD *)v1 + 1) + ((__int64)*((int *)v1 + 12) >> 3));
    v34 = *((_DWORD *)v1 + 8);
    switch ( v8 )
    {
      case 0:
        if ( v34 )
        {
          v64 = ~(_BYTE)v23;
          do
          {
            *v32 &= v64;
            v32 += v7;
            --v34;
          }
          while ( v34 );
        }
        break;
      case 1:
        if ( v34 )
        {
          if ( v4 < v80 )
          {
            do
            {
              v45 = *v33;
              v33 += (int)v5;
              *v32 = ~(_BYTE)v23 & *v32 | v23 & (v45 >> v73);
              v32 += v7;
              --v34;
            }
            while ( v34 );
            goto LABEL_49;
          }
          if ( v4 <= v80 )
          {
            do
            {
              v35 = *v33 & v23 | ~(_BYTE)v23 & *v32;
              v33 += (int)v5;
              *v32 = v35;
              v32 += v7;
              --v34;
            }
            while ( v34 );
            break;
          }
          if ( !v6 )
          {
            do
            {
              v63 = *v33;
              v33 += (int)v5;
              *v32 = ~(_BYTE)v23 & *v32 | v23 & (v63 << v11);
              v32 += v7;
              --v34;
            }
            while ( v34 );
            break;
          }
          do
          {
            v61 = v33[1];
            v62 = *v33;
            v33 += (int)v5;
            *v32 = ~(_BYTE)v23 & *v32 | v23 & ((v62 << v11) | (v61 >> v73));
            v32 += v7;
            --v34;
          }
          while ( v34 );
LABEL_80:
          LODWORD(v5) = v75;
LABEL_49:
          v8 = v74;
        }
        break;
      case 2:
        if ( v34 )
        {
          if ( v4 <= v80 )
          {
            if ( v4 >= v80 )
            {
              do
              {
                v60 = *v33;
                v33 += (int)v5;
                *v32 = ~(_BYTE)v23 & *v32 | v23 & ~v60;
                v32 += v7;
                --v34;
              }
              while ( v34 );
              break;
            }
            do
            {
              v59 = *v33;
              v33 += (int)v5;
              *v32 = ~(_BYTE)v23 & *v32 | v23 & ~(v59 >> v73);
              v32 += v7;
              --v34;
            }
            while ( v34 );
            goto LABEL_49;
          }
          if ( !v6 )
          {
            do
            {
              v58 = *v33;
              v33 += (int)v5;
              *v32 = ~(_BYTE)v23 & *v32 | v23 & ~(v58 << v11);
              v32 += v7;
              --v34;
            }
            while ( v34 );
            break;
          }
          do
          {
            v56 = v33[1];
            v57 = *v33;
            v33 += (int)v5;
            *v32 = ~(_BYTE)v23 & *v32 | v23 & ~((v57 << v11) | (v56 >> v73));
            v32 += v7;
            --v34;
          }
          while ( v34 );
          goto LABEL_80;
        }
        break;
      default:
        if ( v8 == 3 && v34 )
        {
          do
          {
            *v32 |= v23;
            v32 += v7;
            --v34;
          }
          while ( v34 );
        }
        break;
    }
    v22 = v83;
  }
  v24 = 255 >> ((*((_BYTE *)a1 + 56) + v79) & 7);
  if ( (v71 & 7) != 0 && v22 )
  {
    v25 = *((int *)a1 + 13);
    v26 = *((_DWORD *)a1 + 8);
    v27 = (unsigned __int8 *)(*((_QWORD *)a1 + 1) + ((v25 - 1) >> 3));
    v28 = ((_BYTE)v25 - 1) & 7;
    v29 = (v71 - 1) & 7;
    if ( v8 )
    {
      v30 = v8 - 1;
      if ( v30 )
      {
        v65 = v30 - 1;
        if ( v65 )
        {
          if ( v65 == 1 && v26 )
          {
            v66 = ~(_BYTE)v24;
            do
            {
              *v3 |= v66;
              v3 += v7;
              --v26;
            }
            while ( v26 );
          }
        }
        else if ( v26 )
        {
          if ( v28 <= v29 )
          {
            if ( v28 >= v29 )
            {
              do
              {
                v70 = ~(*v27 | v24);
                v27 += (int)v5;
                *v3 = v24 & *v3 | v70;
                v3 += v7;
                --v26;
              }
              while ( v26 );
            }
            else
            {
              do
              {
                v68 = *(v27 - 1);
                v69 = *v27;
                v27 += (int)v5;
                *v3 = v24 & *v3 | ~(v24 | (v69 >> v73) | (v68 << v86));
                v3 += v7;
                --v26;
              }
              while ( v26 );
            }
          }
          else
          {
            do
            {
              v67 = *v27;
              v27 += (int)v5;
              *v3 = v24 & *v3 | ~(v24 | (v67 << v86));
              v3 += v7;
              --v26;
            }
            while ( v26 );
          }
        }
      }
      else if ( v26 )
      {
        if ( v28 > v29 )
        {
          do
          {
            v42 = *v27;
            v27 += (int)v5;
            *v3 = v24 & *v3 | ~(_BYTE)v24 & (v42 << v86);
            v3 += v7;
            --v26;
          }
          while ( v26 );
        }
        else if ( v28 < v29 )
        {
          do
          {
            v43 = *(v27 - 1);
            v44 = *v27;
            v27 += (int)v5;
            *v3 = v24 & *v3 | ~(_BYTE)v24 & ((v44 >> v73) | (v43 << v86));
            v3 += v7;
            --v26;
          }
          while ( v26 );
        }
        else
        {
          do
          {
            v31 = *v27 & ~(_BYTE)v24;
            v27 += (int)v5;
            *v3 = v31 | v24 & *v3;
            v3 += v7;
            --v26;
          }
          while ( v26 );
        }
      }
    }
    else
    {
      for ( ; v26; --v26 )
      {
        *v3 &= v24;
        v3 += v7;
      }
    }
  }
}
