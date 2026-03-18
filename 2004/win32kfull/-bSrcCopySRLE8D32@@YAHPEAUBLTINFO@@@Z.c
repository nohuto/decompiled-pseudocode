/*
 * XREFs of ?bSrcCopySRLE8D32@@YAHPEAUBLTINFO@@@Z @ 0x1C00BA730
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall bSrcCopySRLE8D32(struct BLTINFO *a1)
{
  int v1; // r11d
  __int64 v2; // rdi
  int v3; // r15d
  unsigned __int8 *v4; // r8
  int v5; // r14d
  int v6; // ebp
  int v7; // r13d
  unsigned int v8; // r12d
  int v9; // r9d
  int v10; // ebx
  __int64 v11; // r10
  unsigned int v12; // esi
  unsigned int v13; // edx
  __int64 v14; // rax
  unsigned int v15; // esi
  unsigned int v16; // r11d
  unsigned int v17; // ebx
  __int64 v18; // rcx
  __int64 v19; // rdi
  __int64 v20; // rcx
  unsigned __int8 *v21; // r8
  __int64 v22; // rax
  int v23; // ebx
  int v24; // r11d
  __int64 v25; // rax
  __int64 v26; // rcx
  _DWORD *v27; // rdi
  int v28; // ecx
  unsigned int v29; // edx
  __int64 v31; // [rsp+0h] [rbp-58h]
  int v33; // [rsp+68h] [rbp+10h]
  int v34; // [rsp+70h] [rbp+18h]
  int v35; // [rsp+78h] [rbp+20h]

  v1 = *((_DWORD *)a1 + 23);
  v2 = *((_QWORD *)a1 + 2);
  v3 = *((_DWORD *)a1 + 15);
  v4 = (unsigned __int8 *)*((_QWORD *)a1 + 1);
  v5 = *((_DWORD *)a1 + 22);
  v6 = *((_DWORD *)a1 + 24);
  v7 = *((_DWORD *)a1 + 25);
  v8 = *(_DWORD *)(*((_QWORD *)a1 + 9) + 64LL);
  v9 = *((_DWORD *)a1 + 32);
  v35 = *((_DWORD *)a1 + 11) / 4;
  v10 = v35;
  v11 = *(_QWORD *)(*(_QWORD *)a1 + 16LL);
  v31 = v2;
  v33 = v1;
  v34 = *((_DWORD *)a1 + 14);
  if ( v3 < v1 )
    return 1LL;
  v12 = *((_DWORD *)a1 + 30) + 2;
  if ( v12 <= v8 )
  {
    while ( 1 )
    {
      v13 = *v4;
      v14 = v4[1];
      v4 += 2;
      if ( v13 )
      {
        if ( v3 >= v7 || v9 >= v6 || (int)(v13 + v9) <= v5 )
        {
          v9 += v13;
        }
        else
        {
          v23 = *(_DWORD *)(v11 + 4 * v14);
          if ( v9 < v5 )
          {
            v13 += v9 - v5;
            v9 = v5;
          }
          if ( (int)(v13 + v9) > v6 )
          {
            v24 = v9 + v13 - v6;
            v13 = v6 - v9;
          }
          else
          {
            v24 = 0;
          }
          if ( v13 )
          {
            v25 = v9;
            v9 += v13;
            v26 = v13;
            v27 = (_DWORD *)(v2 + 4 * v25);
            while ( v26 )
            {
              *v27++ = v23;
              --v26;
            }
            v2 = v31;
          }
          v9 += v24;
          v1 = v33;
        }
      }
      else if ( (unsigned int)v14 <= 2 )
      {
        if ( (_DWORD)v14 )
        {
          if ( (_DWORD)v14 == 1 )
            return 0LL;
          v12 += 2;
          if ( v12 > v8 )
            return 0LL;
          v28 = v4[1];
          v9 += *v4;
          v4 += 2;
          v3 -= v28;
          v2 += 4LL * v28 * v10;
          v31 = v2;
          if ( v3 < v1 )
          {
            *((_DWORD *)a1 + 31) = v12;
            *((_QWORD *)a1 + 13) = v4;
            *((_QWORD *)a1 + 14) = v2;
            *((_DWORD *)a1 + 34) = v9;
            *((_DWORD *)a1 + 33) = v3;
            return 1LL;
          }
        }
        else
        {
          --v3;
          v9 = v34;
          v2 += 4LL * v10;
          v31 = v2;
          if ( v3 < v1 )
          {
            *((_DWORD *)a1 + 31) = v12;
            *((_QWORD *)a1 + 13) = v4;
            *((_QWORD *)a1 + 14) = v2;
            *((_DWORD *)a1 + 34) = v34;
            *((_DWORD *)a1 + 33) = v3;
            return 1LL;
          }
        }
      }
      else
      {
        v15 = v14 + v12;
        if ( v15 > v8 )
          return 0LL;
        v16 = v14 & 1;
        if ( v3 >= v7 || v9 >= v6 || (int)v14 + v9 <= v5 )
        {
          v9 += v14;
        }
        else
        {
          if ( v9 < v5 )
          {
            v29 = v5 - v9;
            v9 = v5;
            v4 += v29;
            LODWORD(v14) = v14 - v29;
          }
          if ( (int)v14 + v9 > v6 )
          {
            v17 = v9 + v14 - v6;
            LODWORD(v14) = v6 - v9;
          }
          else
          {
            v17 = 0;
          }
          if ( (_DWORD)v14 )
          {
            v18 = v9;
            v9 += v14;
            v19 = v2 + 4 * v18;
            do
            {
              v20 = *v4;
              v19 += 4LL;
              ++v4;
              *(_DWORD *)(v19 - 4) = *(_DWORD *)(v11 + 4 * v20);
              LODWORD(v14) = v14 - 1;
            }
            while ( (_DWORD)v14 );
            v2 = v31;
          }
          v9 += v17;
          v14 = v17;
        }
        v21 = &v4[v14];
        v12 = v16 + v15;
        v22 = v16;
        v1 = v33;
        v4 = &v21[v22];
      }
      v12 += 2;
      if ( v12 > v8 )
        return 0LL;
      v10 = v35;
    }
  }
  return 0LL;
}
