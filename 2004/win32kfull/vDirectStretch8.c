/*
 * XREFs of vDirectStretch8 @ 0x1C02DAA50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall vDirectStretch8(__int64 a1)
{
  int v2; // r13d
  int *v3; // r11
  int v4; // edx
  int v5; // eax
  int v6; // r10d
  unsigned __int8 *v7; // r14
  int v8; // r8d
  __int64 v9; // rdi
  __int64 v10; // r9
  int v11; // r15d
  unsigned int v12; // r12d
  int v13; // ecx
  __int64 v14; // rax
  int v15; // edx
  __int64 v16; // r13
  __int64 v17; // rbp
  __int64 v18; // r8
  unsigned int v19; // edi
  unsigned int v20; // edx
  unsigned __int8 *v21; // rbx
  bool v22; // cf
  int *v23; // r13
  int v24; // r10d
  unsigned int v25; // eax
  unsigned int v26; // edx
  unsigned __int8 *v27; // rbx
  int v28; // r9d
  unsigned __int8 *v29; // rbx
  int v30; // r8d
  unsigned __int8 *v31; // rbx
  int v32; // ecx
  bool v33; // zf
  int v35; // [rsp+0h] [rbp-68h]
  __int64 v36; // [rsp+8h] [rbp-60h]
  __int64 v37; // [rsp+10h] [rbp-58h]
  __int64 v38; // [rsp+18h] [rbp-50h]
  int v39; // [rsp+70h] [rbp+8h]
  int v40; // [rsp+78h] [rbp+10h]
  int v41; // [rsp+80h] [rbp+18h]

  v2 = *(_DWORD *)(a1 + 36);
  v3 = (int *)(*(_QWORD *)(a1 + 16) + *(int *)(a1 + 28));
  v4 = *(_DWORD *)(a1 + 32) - *(_DWORD *)(a1 + 28);
  v5 = *(_DWORD *)(a1 + 52);
  v6 = (*(_BYTE *)(a1 + 16) + (unsigned __int8)*(_DWORD *)(a1 + 28)) & 3;
  v7 = (unsigned __int8 *)(*(_QWORD *)a1 + *(int *)(a1 + 12));
  v8 = *(_DWORD *)(a1 + 48);
  v9 = *(unsigned int *)(a1 + 40);
  LODWORD(v10) = *(_DWORD *)(a1 + 24) - v4;
  v11 = *(_DWORD *)(a1 + 44);
  v12 = *(_DWORD *)(a1 + 60);
  v13 = 0;
  v40 = v5;
  v39 = v2;
  LODWORD(v14) = -v6 & 3;
  v41 = v6;
  v35 = ((_BYTE)v3 + (_BYTE)v4) & 3;
  v15 = v4 - v14 - v35;
  if ( v2 > 0 )
  {
    if ( v8 )
      v13 = v8 * *(_DWORD *)(a1 + 8);
    v16 = v15;
    v17 = v9;
    v18 = v13;
    v10 = (int)v10;
    v38 = v15;
    v36 = v13;
    v37 = (int)v10;
    while ( 1 )
    {
      v19 = *(_DWORD *)(a1 + 56);
      v20 = v12 + v40;
      v21 = v7;
      if ( v6 == 1 )
        break;
      if ( v6 == 2 )
        goto LABEL_10;
      if ( v6 == 3 )
        goto LABEL_11;
LABEL_12:
      v23 = (int *)((char *)v3 + v16);
      if ( v3 != v23 )
      {
        do
        {
          v24 = *v21;
          v25 = v11 + v19;
          v26 = v11 + v11 + v19 + v11;
          v27 = &v21[(v11 + v19 < v19) + v17];
          v19 = v26 + v11;
          v28 = *v27;
          v29 = &v27[(v25 + v11 < v25) + v17];
          v30 = *v29;
          v31 = &v29[(v26 < v25 + v11) + v17];
          v32 = *v31;
          v21 = &v31[(v26 + v11 < v26) + v17];
          *v3++ = v24 | ((v28 | ((v30 | (v32 << 8)) << 8)) << 8);
        }
        while ( v3 != v23 );
        v6 = v41;
        v20 = v12 + v40;
        v18 = v36;
        v10 = v37;
      }
      if ( v35 == 1 )
        goto LABEL_20;
      LOBYTE(v14) = v35 - 2;
      if ( v35 == 2 )
        goto LABEL_19;
      if ( v35 == 3 )
      {
        v22 = v11 + v19 < v19;
        *(_BYTE *)v3 = *v21;
        v19 += v11;
        v21 += v17 + v22;
        v3 = (int *)((char *)v3 + 1);
LABEL_19:
        *(_BYTE *)v3 = *v21;
        v21 += v17 + (v11 + v19 < v19);
        v3 = (int *)((char *)v3 + 1);
LABEL_20:
        LOBYTE(v14) = *v21;
        *(_BYTE *)v3 = *v21;
        v3 = (int *)((char *)v3 + 1);
      }
      v7 += v18;
      if ( v20 < v12 )
      {
        v14 = *(int *)(a1 + 8);
        v7 += v14;
      }
      v16 = v38;
      v3 = (int *)((char *)v3 + v10);
      v33 = v39-- == 1;
      v12 = v20;
      if ( v33 )
        return v14;
    }
    v22 = v11 + v19 < v19;
    *(_BYTE *)v3 = *v7;
    v19 += v11;
    v21 = &v7[v22 + v17];
    v3 = (int *)((char *)v3 + 1);
LABEL_10:
    v22 = v11 + v19 < v19;
    *(_BYTE *)v3 = *v21;
    v19 += v11;
    v21 += v17 + v22;
    v3 = (int *)((char *)v3 + 1);
LABEL_11:
    v22 = v11 + v19 < v19;
    *(_BYTE *)v3 = *v21;
    v19 += v11;
    v21 += v17 + v22;
    v3 = (int *)((char *)v3 + 1);
    goto LABEL_12;
  }
  return v14;
}
