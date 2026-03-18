/*
 * XREFs of ?vDirectStretch32@@YAXPEAU_STR_BLT@@@Z @ 0x1C00E4050
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vDirectStretch32(struct _STR_BLT *a1)
{
  __int64 v1; // r8
  int v3; // r12d
  int v4; // r9d
  __int64 v5; // rdi
  int v6; // r11d
  __int64 v7; // rbp
  int v8; // esi
  unsigned int v9; // r14d
  _DWORD *v10; // rax
  int v11; // r8d
  int v12; // edx
  int v13; // r10d
  unsigned __int64 v14; // rbx
  __int64 v15; // rcx
  __int64 v16; // rdx
  unsigned __int64 v17; // r8
  __int64 v18; // r10
  bool v19; // cc
  unsigned int v20; // r15d
  unsigned int v21; // r11d
  unsigned __int64 v22; // rbx
  _DWORD *v23; // r9
  bool v24; // cf
  unsigned __int64 v25; // [rsp+8h] [rbp-50h]
  unsigned int v26; // [rsp+60h] [rbp+8h]
  int v27; // [rsp+68h] [rbp+10h]
  __int64 v28; // [rsp+70h] [rbp+18h]
  unsigned __int64 v29; // [rsp+78h] [rbp+20h]

  v1 = *((int *)a1 + 7);
  v3 = *((_DWORD *)a1 + 9);
  v4 = *((_DWORD *)a1 + 8) - v1;
  v5 = *((unsigned int *)a1 + 10);
  v6 = *((_DWORD *)a1 + 13);
  v7 = *(_QWORD *)a1 + 4LL * *((int *)a1 + 3);
  v8 = *((_DWORD *)a1 + 11);
  v9 = *((_DWORD *)a1 + 15);
  v10 = (_DWORD *)(*((_QWORD *)a1 + 2) + 4 * v1);
  v26 = *((_DWORD *)a1 + 10);
  v11 = *((_DWORD *)a1 + 12);
  v12 = 0;
  v27 = v6;
  v13 = *((_DWORD *)a1 + 6) - 4 * v4;
  if ( v3 > 0 )
  {
    if ( v11 )
      v12 = v11 * *((_DWORD *)a1 + 2);
    v14 = 4LL * v4;
    v15 = v12;
    v16 = v13;
    v17 = v14 >> 2;
    v29 = v14 >> 2;
    v25 = v14;
    v28 = v13;
    do
    {
      v18 = 0LL;
      v19 = v10 <= (_DWORD *)((char *)v10 + v14);
      v20 = v6 + v9;
      v21 = *((_DWORD *)a1 + 14);
      v22 = v17;
      v23 = (_DWORD *)v7;
      if ( !v19 )
        v22 = 0LL;
      if ( v22 )
      {
        do
        {
          v24 = v8 + v21 < v21;
          *v10 = *v23;
          v21 += v8;
          ++v10;
          ++v18;
          v23 += v24 + v5;
        }
        while ( v18 != v22 );
        v16 = v28;
        v17 = v29;
        v5 = v26;
      }
      v7 += v15;
      if ( v20 < v9 )
        v7 += *((int *)a1 + 2);
      v14 = v25;
      v10 = (_DWORD *)((char *)v10 + v16);
      v6 = v27;
      v9 = v20;
      --v3;
    }
    while ( v3 );
  }
}
