/*
 * XREFs of ObpAllocateObject @ 0x140716610
 * Callers:
 *     CmpCreateKeyBody @ 0x140713A70 (CmpCreateKeyBody.c)
 *     IopAllocRealFileObject @ 0x14071A4C0 (IopAllocRealFileObject.c)
 *     ObCreateObjectEx @ 0x14071BBF0 (ObCreateObjectEx.c)
 *     ObCreateObjectTypeEx @ 0x140795AF0 (ObCreateObjectTypeEx.c)
 * Callees:
 *     SeAuditHeaderRequired @ 0x14035CF20 (SeAuditHeaderRequired.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall ObpAllocateObject(int *a1, char a2, __int64 a3, __int128 *a4, int a5, char **a6, _BYTE *a7)
{
  char v9; // dl
  _WORD *v10; // r10
  int v11; // r9d
  char v12; // r8
  int v13; // edx
  char v14; // r15
  char v15; // cl
  char v16; // r14
  char v18; // bl
  char v19; // al
  int v20; // ecx
  unsigned __int8 v21; // r13
  char v22; // r15
  int v23; // r12d
  int v24; // ebp
  unsigned int v25; // ebp
  unsigned int v26; // ecx
  char *PoolWithTag; // rax
  char *v28; // r8
  unsigned __int8 v29; // cl
  char *v30; // rdx
  __int64 v31; // rcx
  __int128 v32; // xmm0
  char v33; // cl
  int v34; // eax
  unsigned __int32 v35; // edx
  int v36; // [rsp+20h] [rbp-58h]
  int v37; // [rsp+28h] [rbp-50h]
  bool v38; // [rsp+80h] [rbp+8h]
  int v40; // [rsp+90h] [rbp+18h]

  v37 = *a1 & 0x20;
  v38 = SeAuditHeaderRequired((POBJECT_TYPE *)a3);
  v11 = 32;
  v12 = v9 | 0x20;
  v36 = 32;
  if ( !v38 )
    v12 = v9;
  if ( KeGetCurrentThread()->ApcState.Process == PsInitialSystemProcess
    || KeGetCurrentThread()->ApcState.Process == PsIdleProcess
    || !PsInitialSystemProcess )
  {
    v13 = 0;
  }
  else
  {
    v13 = 32;
    v12 |= 8u;
  }
  v14 = *(_BYTE *)(a3 + 66);
  v40 = v13;
  v15 = v12 | 4;
  v16 = v14 & 0x10;
  if ( (v14 & 0x10) == 0 )
    v15 = v12;
  if ( *v10 )
  {
    if ( (v14 & 2) != 0 )
      return 3221225523LL;
    v15 |= 2u;
  }
  else
  {
    v11 = 0;
    v36 = 0;
  }
  v18 = v15 | 1;
  v19 = v15;
  v20 = 48;
  v21 = (v14 >> 7) & 0x30;
  v22 = v14 & 0x20;
  if ( !v22 )
    v18 = v19;
  if ( a7 && (*a7 || a7[1]) )
  {
    v18 |= 0x40u;
    v23 = 16;
  }
  else
  {
    v23 = 0;
    v20 = 0;
  }
  v24 = 64;
  if ( !v38 )
    v24 = 48;
  v25 = v23 + v11 + v13 + (v16 != 0 ? 0x10 : 0) + (v22 != 0 ? 0x20 : 0) + (v37 != 0 ? 0x10 : 0) + v24;
  v26 = v25 + v21 + v20;
  if ( v26 + a5 < v26 )
    return 3221225485LL;
  PoolWithTag = (char *)ExAllocatePoolWithTag(
                          (POOL_TYPE)(*(_DWORD *)(a3 + 100) | 0x400),
                          v26 + a5,
                          *(_DWORD *)(a3 + 192));
  v28 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  if ( v21 )
  {
    v29 = -(char)((_BYTE)PoolWithTag + v25) & 0x3F;
    if ( v29 )
    {
      v28 = &PoolWithTag[v29];
      v18 |= 0x80u;
      *((_DWORD *)v28 - 1) = v29;
    }
  }
  if ( v23 )
  {
    v30 = &v28[v25 + a5];
    *(_QWORD *)v28 = v30;
    *(_OWORD *)v30 = 0LL;
    *((_OWORD *)v30 + 1) = 0LL;
    *((_OWORD *)v30 + 2) = 0LL;
    v31 = *(_QWORD *)v28;
    v28 += 16;
    *(_BYTE *)(v31 + 24) = *a7;
  }
  if ( v38 )
  {
    *(_QWORD *)v28 = 0LL;
    *((_QWORD *)v28 + 1) = 0LL;
    v28 += 16;
  }
  if ( v37 )
  {
    *(_QWORD *)v28 = 0LL;
    v28 += 16;
  }
  if ( v40 )
  {
    *(_DWORD *)v28 = a1[5];
    *((_DWORD *)v28 + 1) = a1[6];
    *((_DWORD *)v28 + 2) = a1[7];
    *((_QWORD *)v28 + 2) = 0LL;
    v28 += 32;
  }
  if ( v16 )
  {
    *((_DWORD *)v28 + 2) &= 0xFF000000;
    v28[11] = 0;
    *(_QWORD *)v28 = 0LL;
    v28 += 16;
  }
  if ( v36 )
  {
    v32 = *a4;
    *(_QWORD *)v28 = 0LL;
    *((_DWORD *)v28 + 6) = 0;
    *(_OWORD *)(v28 + 8) = v32;
    v28 += 32;
  }
  if ( v22 )
  {
    *((_WORD *)v28 + 12) = 0;
    *((_QWORD *)v28 + 2) = KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Flink;
    *((_QWORD *)v28 + 1) = v28;
    *(_QWORD *)v28 = v28;
    v28 += 32;
  }
  v28[26] = v18;
  v33 = 1;
  v28[25] = 0;
  v28[27] = 1;
  if ( v16 )
  {
    v28[27] = 65;
    v33 = 65;
  }
  *((_QWORD *)v28 + 1) = 0LL;
  *(_QWORD *)v28 = 1LL;
  *((_QWORD *)v28 + 2) = 0LL;
  v28[24] = ObHeaderCookie ^ *(_BYTE *)(a3 + 40) ^ BYTE1(v28);
  if ( !a2 )
  {
    v33 |= 2u;
    v28[27] = v33;
    if ( (*a1 & 0x10000) != 0 )
    {
      v33 |= 4u;
      v28[27] = v33;
    }
  }
  v34 = *a1;
  if ( (*a1 & 0x10) != 0 )
  {
    v33 |= 0x10u;
    v28[27] = v33;
    v34 = *a1;
  }
  if ( (v34 & 0x20) != 0 )
    v28[27] = v33 | 8;
  *((_QWORD *)v28 + 4) = a1;
  *((_QWORD *)v28 + 5) = 0LL;
  v35 = _InterlockedIncrement((volatile signed __int32 *)(a3 + 44));
  if ( v35 > *(_DWORD *)(a3 + 52) )
    *(_DWORD *)(a3 + 52) = v35;
  *a6 = v28;
  return 0LL;
}
