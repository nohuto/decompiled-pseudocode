/*
 * XREFs of ObpAllocateObject @ 0x140610D30
 * Callers:
 *     IopAllocRealFileObject @ 0x140600550 (IopAllocRealFileObject.c)
 *     ObCreateObjectEx @ 0x140601B80 (ObCreateObjectEx.c)
 *     CmpCreateKeyBody @ 0x14060E320 (CmpCreateKeyBody.c)
 *     ObCreateObjectTypeEx @ 0x14078B3D0 (ObCreateObjectTypeEx.c)
 * Callees:
 *     SeAuditHeaderRequired @ 0x1402147A0 (SeAuditHeaderRequired.c)
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall ObpAllocateObject(int *a1, char a2, __int64 a3, _WORD *a4, int a5, _QWORD *a6, _BYTE *a7)
{
  int v8; // ebp
  char v11; // r8
  int v12; // r10d
  int v13; // r11d
  int v14; // r15d
  int v15; // r9d
  char v16; // r14
  char v17; // cl
  char v18; // si
  char v19; // dl
  unsigned __int8 v20; // r12
  char v21; // al
  char v22; // r14
  int v23; // ecx
  int v24; // r13d
  int v25; // r13d
  unsigned int v26; // ecx
  char *PoolWithTag; // rax
  char v28; // r9
  char *v29; // r8
  __int64 v30; // rdx
  char v31; // r8
  int v32; // ecx
  unsigned __int32 v33; // edx
  __int128 v35; // xmm0
  unsigned __int8 v36; // dl
  int v37; // [rsp+20h] [rbp-58h]
  int v38; // [rsp+24h] [rbp-54h]
  char v39; // [rsp+80h] [rbp+8h]
  int v41; // [rsp+90h] [rbp+18h]

  v8 = *a1 & 0x20;
  v41 = 16;
  if ( SeAuditHeaderRequired((POBJECT_TYPE *)a3) )
  {
    v13 = 16;
    v11 |= 0x20u;
  }
  else
  {
    v13 = 0;
  }
  v14 = 32;
  v37 = v13;
  if ( KeGetCurrentThread()->ApcState.Process == PsInitialSystemProcess
    || KeGetCurrentThread()->ApcState.Process == PsIdleProcess
    || !PsInitialSystemProcess )
  {
    v15 = 0;
  }
  else
  {
    v15 = 32;
    v11 |= 8u;
  }
  v16 = *(_BYTE *)(a3 + 66);
  v38 = v15;
  v17 = v11 | 4;
  v18 = v16 & 0x10;
  if ( (v16 & 0x10) == 0 )
    v17 = v11;
  if ( *a4 )
  {
    if ( (v16 & 2) != 0 )
      return 3221225523LL;
    v17 |= 2u;
  }
  else
  {
    v14 = 0;
  }
  v19 = v17 | 1;
  v20 = (v16 >> 7) & 0x30;
  v21 = v17;
  v22 = v16 & 0x20;
  v23 = 48;
  if ( !v22 )
    v19 = v21;
  v39 = v19;
  if ( !a7 )
  {
    v39 = v19;
LABEL_47:
    v23 = 0;
    v41 = 0;
    goto LABEL_16;
  }
  if ( !*a7 && !a7[1] )
    goto LABEL_47;
  v39 = v19 | 0x40;
LABEL_16:
  v24 = 80;
  if ( !v22 )
    v24 = 48;
  v25 = v41 + v14 + v15 + v13 + v12 + (v18 != 0 ? 0x10 : 0) + v24;
  v26 = v25 + v20 + v23;
  if ( v26 + a5 < v26 )
    return 3221225485LL;
  PoolWithTag = (char *)ExAllocatePoolWithTag((POOL_TYPE)*(_DWORD *)(a3 + 100), v26 + a5, *(_DWORD *)(a3 + 192));
  if ( !PoolWithTag )
    return 3221225626LL;
  v28 = v39;
  if ( v20 )
  {
    v36 = -(char)((_BYTE)PoolWithTag + v25) & 0x3F;
    if ( v36 )
    {
      PoolWithTag += v36;
      v28 = v39 | 0x80;
      *((_DWORD *)PoolWithTag - 1) = v36;
    }
  }
  if ( v41 )
  {
    v29 = &PoolWithTag[v25 + a5];
    *(_QWORD *)PoolWithTag = v29;
    *(_OWORD *)v29 = 0LL;
    *((_OWORD *)v29 + 1) = 0LL;
    *((_OWORD *)v29 + 2) = 0LL;
    v30 = *(_QWORD *)PoolWithTag;
    PoolWithTag += 16;
    *(_BYTE *)(v30 + 24) = *a7;
  }
  if ( v37 )
  {
    *(_QWORD *)PoolWithTag = 0LL;
    *((_QWORD *)PoolWithTag + 1) = 0LL;
    PoolWithTag += 16;
  }
  if ( v8 )
  {
    *(_QWORD *)PoolWithTag = 0LL;
    PoolWithTag += 16;
  }
  if ( v38 )
  {
    *(_DWORD *)PoolWithTag = a1[5];
    *((_DWORD *)PoolWithTag + 1) = a1[6];
    *((_DWORD *)PoolWithTag + 2) = a1[7];
    *((_QWORD *)PoolWithTag + 2) = 0LL;
    PoolWithTag += 32;
  }
  if ( v18 )
  {
    *((_DWORD *)PoolWithTag + 2) &= 0xFF000000;
    PoolWithTag[11] = 0;
    *(_QWORD *)PoolWithTag = 0LL;
    PoolWithTag += 16;
  }
  if ( v14 )
  {
    v35 = *(_OWORD *)a4;
    *(_QWORD *)PoolWithTag = 0LL;
    *((_DWORD *)PoolWithTag + 6) = 0;
    *(_OWORD *)(PoolWithTag + 8) = v35;
    PoolWithTag += 32;
  }
  if ( v22 )
  {
    *((_WORD *)PoolWithTag + 12) = 0;
    *((_QWORD *)PoolWithTag + 2) = KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Flink;
    *((_QWORD *)PoolWithTag + 1) = PoolWithTag;
    *(_QWORD *)PoolWithTag = PoolWithTag;
    PoolWithTag += 32;
  }
  PoolWithTag[26] = v28;
  v31 = 1;
  PoolWithTag[25] = 0;
  PoolWithTag[27] = 1;
  if ( v18 )
  {
    PoolWithTag[27] = 65;
    v31 = 65;
  }
  *((_QWORD *)PoolWithTag + 1) = 0LL;
  *(_QWORD *)PoolWithTag = 1LL;
  *((_QWORD *)PoolWithTag + 2) = 0LL;
  PoolWithTag[24] = ObHeaderCookie ^ *(_BYTE *)(a3 + 40) ^ BYTE1(PoolWithTag);
  if ( !a2 )
  {
    v31 |= 2u;
    PoolWithTag[27] = v31;
    if ( (*a1 & 0x10000) != 0 )
    {
      v31 |= 4u;
      PoolWithTag[27] = v31;
    }
  }
  v32 = *a1;
  if ( (*a1 & 0x10) != 0 )
  {
    v31 |= 0x10u;
    PoolWithTag[27] = v31;
    v32 = *a1;
  }
  if ( (v32 & 0x20) != 0 )
    PoolWithTag[27] = v31 | 8;
  *((_QWORD *)PoolWithTag + 4) = a1;
  *((_QWORD *)PoolWithTag + 5) = 0LL;
  v33 = _InterlockedIncrement((volatile signed __int32 *)(a3 + 44));
  if ( v33 > *(_DWORD *)(a3 + 52) )
    *(_DWORD *)(a3 + 52) = v33;
  *a6 = PoolWithTag;
  return 0LL;
}
