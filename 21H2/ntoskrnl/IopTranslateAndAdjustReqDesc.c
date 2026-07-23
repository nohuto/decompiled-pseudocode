/*
 * XREFs of IopTranslateAndAdjustReqDesc @ 0x1407C2E24
 * Callers:
 *     IopSetupArbiterAndTranslators @ 0x140751FDC (IopSetupArbiterAndTranslators.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     memset @ 0x140414300 (memset.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall IopTranslateAndAdjustReqDesc(__int64 a1, __int64 a2, _QWORD *a3)
{
  _DWORD *v3; // r14
  int v4; // ebx
  unsigned int v5; // eax
  unsigned int v6; // r12d
  __int64 v7; // rsi
  int v8; // edi
  char *PoolWithTag; // rax
  char *v10; // r15
  _DWORD *v11; // rax
  _DWORD *v12; // rbp
  __int64 v13; // r13
  __int64 v14; // rax
  int v15; // eax
  _OWORD *v16; // rbx
  _OWORD *v17; // rax
  _OWORD *v18; // rbp
  _OWORD *v19; // rcx
  __int64 v20; // rax
  __int128 v21; // xmm1
  __int64 v22; // rax
  __int64 v23; // rsi
  _OWORD *v24; // r13
  unsigned int v25; // eax
  __int64 v26; // rax
  __int64 j; // rbx
  _DWORD *P; // [rsp+30h] [rbp-78h]
  int *v30; // [rsp+38h] [rbp-70h]
  __int64 v31; // [rsp+40h] [rbp-68h]
  char *v32; // [rsp+48h] [rbp-60h]
  _OWORD **v33; // [rsp+50h] [rbp-58h]
  char v34; // [rsp+B0h] [rbp+8h]
  _OWORD *v35; // [rsp+B0h] [rbp+8h]
  int i; // [rsp+C8h] [rbp+20h]

  v3 = (_DWORD *)(a1 + 56);
  v4 = 0;
  v31 = *(_QWORD *)(a2 + 24);
  v5 = *(_DWORD *)(a1 + 56);
  v6 = 0;
  v34 = 0;
  v7 = a1;
  v8 = -1073741823;
  if ( !v5 )
    return 3221225485LL;
  *a3 = 0LL;
  PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 8LL * v5, 0x20207050u);
  v10 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memset(PoolWithTag, 0, 8LL * (unsigned int)*v3);
  v11 = ExAllocatePoolWithTag(PagedPool, 4LL * (unsigned int)*v3, 0x20207050u);
  P = v11;
  v12 = v11;
  if ( !v11 )
  {
    ExFreePoolWithTag(v10, 0);
    return 3221225626LL;
  }
  memset(v11, 0, 4LL * (unsigned int)*v3);
  v13 = *(_QWORD *)(v7 + 64);
  v33 = (_OWORD **)(v7 + 64);
  v14 = 0LL;
  for ( i = 0; (unsigned int)v14 < *v3; i = v14 )
  {
    v32 = &v10[8 * v14];
    v30 = &v12[v14];
    v8 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, int *, char *))(v31 + 40))(
           *(_QWORD *)(v31 + 8),
           v13,
           *(_QWORD *)(v7 + 72),
           v30,
           v32);
    if ( v8 >= 0 && (v15 = *v30) != 0 )
    {
      v34 = 1;
    }
    else
    {
      *(_QWORD *)v32 = v13;
      v15 = 1;
      *v30 = 0;
    }
    v6 += v15;
    v13 += 32LL;
    if ( v8 >= 0 && v4 != 288 )
      v4 = v8;
    v14 = (unsigned int)(i + 1);
  }
  if ( v34 )
    v8 = v4;
  v16 = ExAllocatePoolWithTag(PagedPool, 32LL * v6, 0x20207050u);
  if ( v16 )
  {
    v17 = ExAllocatePoolWithTag(PagedPool, 0x128uLL, 0x20207050u);
    v35 = v17;
    v18 = v17;
    if ( v17 )
    {
      v19 = v17;
      v20 = 2LL;
      do
      {
        *v19 = *(_OWORD *)v7;
        v19[1] = *(_OWORD *)(v7 + 16);
        v19[2] = *(_OWORD *)(v7 + 32);
        v19[3] = *(_OWORD *)(v7 + 48);
        v19[4] = *(_OWORD *)(v7 + 64);
        v19[5] = *(_OWORD *)(v7 + 80);
        v19[6] = *(_OWORD *)(v7 + 96);
        v19 += 8;
        v21 = *(_OWORD *)(v7 + 112);
        v7 += 128LL;
        *(v19 - 1) = v21;
        --v20;
      }
      while ( v20 );
      *v19 = *(_OWORD *)v7;
      v19[1] = *(_OWORD *)(v7 + 16);
      v22 = *(_QWORD *)(v7 + 32);
      v23 = 0LL;
      *((_QWORD *)v19 + 4) = v22;
      *((_QWORD *)v18 + 2) = 0LL;
      *((_QWORD *)v18 + 4) = 0LL;
      *((_QWORD *)v18 + 36) = a2;
      *((_QWORD *)v18 + 14) = (char *)v18 + 136;
      *((_QWORD *)v18 + 6) = (char *)v18 + 40;
      *((_QWORD *)v18 + 5) = (char *)v18 + 40;
      *((_DWORD *)v18 + 14) = v6;
      *((_QWORD *)v18 + 8) = v16;
      v24 = *v33;
      if ( *v3 )
      {
        while ( 1 )
        {
          v25 = P[v23];
          if ( !v25 )
            break;
          memmove(v16, *(const void **)&v10[8 * v23], 32LL * v25);
          v26 = 32LL * (unsigned int)P[v23];
LABEL_21:
          v24 += 2;
          v23 = (unsigned int)(v23 + 1);
          v16 = (_OWORD *)((char *)v16 + v26);
          if ( (unsigned int)v23 >= *v3 )
          {
            v18 = v35;
            goto LABEL_23;
          }
        }
        *v16 = *v24;
        v16[1] = v24[1];
        if ( *((_BYTE *)v16 + 1) == 1 )
          goto LABEL_42;
        if ( *((_BYTE *)v16 + 1) != 2 )
        {
          if ( *((_BYTE *)v16 + 1) == 3 )
            goto LABEL_42;
          if ( *((_BYTE *)v16 + 1) != 4 )
          {
            if ( *((_BYTE *)v16 + 1) == 6 )
            {
              *((_DWORD *)v16 + 3) = 2;
              *((_DWORD *)v16 + 4) = 1;
              goto LABEL_43;
            }
            if ( *((_BYTE *)v16 + 1) != 7 )
            {
LABEL_43:
              v26 = 32LL;
              goto LABEL_21;
            }
LABEL_42:
            *((_DWORD *)v16 + 5) = 0;
            *((_DWORD *)v16 + 7) = 0;
            *((_DWORD *)v16 + 4) = 2;
            *((_DWORD *)v16 + 6) = 1;
            goto LABEL_43;
          }
        }
        *((_DWORD *)v16 + 2) = 2;
        *((_DWORD *)v16 + 3) = 1;
        goto LABEL_43;
      }
LABEL_23:
      *a3 = v18;
    }
    else
    {
      ExFreePoolWithTag(v16, 0);
      v8 = -1073741670;
    }
    v12 = P;
  }
  else
  {
    v8 = -1073741670;
  }
  for ( j = 0LL; (unsigned int)j < *v3; j = (unsigned int)(j + 1) )
  {
    if ( v12[j] )
      ExFreePoolWithTag(*(PVOID *)&v10[8 * j], 0);
  }
  ExFreePoolWithTag(v10, 0);
  ExFreePoolWithTag(v12, 0);
  return (unsigned int)v8;
}
