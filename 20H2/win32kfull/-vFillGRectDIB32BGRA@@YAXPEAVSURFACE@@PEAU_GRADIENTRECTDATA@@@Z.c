/*
 * XREFs of ?vFillGRectDIB32BGRA@@YAXPEAVSURFACE@@PEAU_GRADIENTRECTDATA@@@Z @ 0x1C00EF700
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C015F5C0 (memmove.c)
 */

void __fastcall vFillGRectDIB32BGRA(struct SURFACE *a1, struct _GRADIENTRECTDATA *a2)
{
  int v2; // r14d
  __int64 v3; // rsi
  int v5; // r15d
  __int64 v6; // rax
  __int64 v7; // r11
  __int64 v8; // rbp
  __int64 v9; // r12
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // r10
  __int64 v14; // r13
  __int64 v15; // r11
  void *v16; // r12
  unsigned int v17; // ebp
  unsigned __int64 v18; // r14
  __int64 v19; // r12
  int v20; // ecx
  const void *v21; // rbp
  unsigned __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rdi
  unsigned __int64 v25; // r8
  __int64 v26; // rax
  int *v27; // r13
  unsigned __int64 v28; // r11
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // r11
  __int64 v31; // r15
  unsigned __int64 v32; // rax
  int v33; // r10d
  unsigned __int64 v34; // rax
  int v35; // r9d
  char *v36; // rdi
  char *i; // rsi
  __int64 v38; // [rsp+20h] [rbp-68h]
  __int64 v39; // [rsp+28h] [rbp-60h]
  unsigned __int64 v40; // [rsp+30h] [rbp-58h]
  __int64 v41; // [rsp+90h] [rbp+8h]
  int v42; // [rsp+98h] [rbp+10h]
  __int64 v43; // [rsp+98h] [rbp+10h]
  __int64 v44; // [rsp+A0h] [rbp+18h]
  __int64 v45; // [rsp+A0h] [rbp+18h]
  __int64 v46; // [rsp+A8h] [rbp+20h]

  v2 = *((_DWORD *)a1 + 22);
  v3 = 0LL;
  v5 = *((_DWORD *)a2 + 11);
  v42 = v5;
  if ( *((_DWORD *)a2 + 38) )
  {
    v6 = *((int *)a2 + 45);
    v7 = *((_QWORD *)a2 + 11);
    v8 = *((_QWORD *)a2 + 12);
    v9 = *((_QWORD *)a2 + 13);
    v10 = *((_QWORD *)a2 + 6);
    v11 = *((_QWORD *)a2 + 7);
    v12 = *((_QWORD *)a2 + 8);
    v13 = *((_QWORD *)a2 + 9);
    v14 = *((_QWORD *)a2 + 10);
    v41 = *((_QWORD *)a2 + 11);
    v43 = v8;
    v44 = v9;
    if ( (int)v6 > 0 )
    {
      v10 += v14 * v6;
      v11 += v7 * v6;
      v12 += v8 * v6;
      v13 += v9 * v6;
    }
    v15 = *((_QWORD *)a1 + 10) + 4 * *((_DWORD *)a2 + 8) + (__int64)(v2 * *((_DWORD *)a2 + 9));
    if ( v5 )
    {
      v46 = *((int *)a1 + 22);
      while ( 1 )
      {
        --v5;
        v16 = (void *)v15;
        v17 = BYTE6(v12) | ((BYTE6(v11) | ((BYTE6(v10) | (BYTE6(v13) << 8)) << 8)) << 8);
        v18 = (unsigned __int64)(4 * *((_DWORD *)a2 + 10)) >> 2;
        if ( v18 )
        {
          if ( (v15 & 4) == 0 )
            goto LABEL_8;
          *(_DWORD *)v15 = v17;
          if ( --v18 )
            break;
        }
LABEL_10:
        v11 += v41;
        v10 += v14;
        v12 += v43;
        v13 += v44;
        v15 += v46;
        if ( !v5 )
          return;
      }
      v16 = (void *)(v15 + 4);
LABEL_8:
      memset64(v16, v17 | ((unsigned __int64)v17 << 32), v18 >> 1);
      if ( (v18 & 1) != 0 )
        *((_DWORD *)v16 + v18 - 1) = v17;
      goto LABEL_10;
    }
  }
  else
  {
    v19 = *((_QWORD *)a1 + 10) + v2 * *((_DWORD *)a2 + 9);
    v20 = *((_DWORD *)a2 + 10);
    if ( (unsigned int)(v20 - 1) <= 0x9C3FFF )
    {
      v40 = AllocFreeTmpBuffer((unsigned int)(4 * v20));
      v21 = (const void *)v40;
      if ( v40 )
      {
        v22 = *((_QWORD *)a2 + 6);
        v23 = *((_QWORD *)a2 + 7);
        v24 = *((_QWORD *)a2 + 8);
        v25 = *((_QWORD *)a2 + 9);
        v45 = *((_QWORD *)a2 + 17);
        v26 = *((int *)a2 + 44);
        v39 = *((_QWORD *)a2 + 16);
        if ( (int)v26 > 0 )
        {
          v22 += *((_QWORD *)a2 + 14) * v26;
          v23 += *((_QWORD *)a2 + 15) * v26;
          v24 += *((_QWORD *)a2 + 16) * v26;
          v25 += v45 * v26;
        }
        v27 = (int *)v40;
        v28 = 4LL * *((int *)a2 + 10);
        v29 = v28 + v40;
        v30 = v28 >> 2;
        if ( v40 > v29 )
          v30 = 0LL;
        if ( v30 )
        {
          v38 = *((_QWORD *)a2 + 15);
          v31 = *((_QWORD *)a2 + 14);
          do
          {
            ++v3;
            v32 = HIWORD(v25);
            v25 += v45;
            v33 = (unsigned __int8)v32;
            v34 = HIWORD(v22);
            v22 += v31;
            BYTE6(v34) = BYTE6(v23);
            v23 += v38;
            v35 = BYTE6(v34);
            BYTE6(v34) = BYTE6(v24);
            v24 += v39;
            *v27++ = BYTE6(v34) | ((v35 | (((unsigned __int8)v34 | (v33 << 8)) << 8)) << 8);
          }
          while ( v3 != v30 );
          v21 = (const void *)v40;
          v5 = v42;
        }
        v36 = (char *)(v19 + 4LL * *((int *)a2 + 8));
        for ( i = &v36[v2 * v5]; v36 != i; v36 += v2 )
          memmove(v36, v21, 4 * *((_DWORD *)a2 + 10));
        FreeTmpBuffer(v21);
      }
    }
  }
}
