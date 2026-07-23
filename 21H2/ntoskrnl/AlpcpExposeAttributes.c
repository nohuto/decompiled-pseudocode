/*
 * XREFs of AlpcpExposeAttributes @ 0x1406D7AE0
 * Callers:
 *     AlpcpProcessConnectionRequest @ 0x1406CE428 (AlpcpProcessConnectionRequest.c)
 *     AlpcpCompleteDispatchMessage @ 0x1406D4D10 (AlpcpCompleteDispatchMessage.c)
 *     AlpcpProcessSynchronousRequest @ 0x1406D6640 (AlpcpProcessSynchronousRequest.c)
 *     AlpcpReceiveMessage @ 0x1406D73D0 (AlpcpReceiveMessage.c)
 * Callees:
 *     AlpcpExposeViewAttribute32 @ 0x1405F6A90 (AlpcpExposeViewAttribute32.c)
 *     AlpcpExposeContextAttribute32 @ 0x1405FA054 (AlpcpExposeContextAttribute32.c)
 *     AlpcpExposeHandleAttribute32 @ 0x1405FC09C (AlpcpExposeHandleAttribute32.c)
 *     AlpcpReferenceBlob @ 0x140655834 (AlpcpReferenceBlob.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x1406D0224 (AlpcpLockForCachedReferenceBlob.c)
 *     AlpcpUnlockBlob @ 0x1406D6FE0 (AlpcpUnlockBlob.c)
 *     AlpcpExposeWorkOnBehalfAttribute @ 0x1406D7F30 (AlpcpExposeWorkOnBehalfAttribute.c)
 *     AlpcpExposeTokenAttribute @ 0x1406D7FB0 (AlpcpExposeTokenAttribute.c)
 *     AlpcpExposeHandleAttribute @ 0x1406D8150 (AlpcpExposeHandleAttribute.c)
 *     AlpcpDereferenceBlobEx @ 0x1406D9720 (AlpcpDereferenceBlobEx.c)
 */

__int64 __fastcall AlpcpExposeAttributes(__int64 a1, int a2, __int64 a3, int a4, __int64 a5)
{
  __int64 v5; // rsi
  __int64 result; // rax
  _DWORD *v7; // r12
  __int64 v8; // r14
  __int64 v10; // r15
  int v11; // r13d
  int v12; // ebp
  __int64 v13; // rcx
  __int64 v14; // rax
  int v15; // eax
  __int64 v16; // rax
  int v17; // edx
  __int64 v18; // rcx
  int v19; // r8d
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rdi
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rax
  ULONG_PTR v26; // rsi
  ULONG_PTR v27; // rdi
  int v28; // ebp
  __int64 v29; // rcx
  int v30; // r13d
  int v31; // ebp
  __int64 v32; // r8
  __int64 v33; // rdi
  int v34; // edx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // rdi
  int v38; // r8d
  __int64 v39; // rax
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // rax
  __int64 v43; // rcx
  __int64 v44; // rdx
  __int64 v45; // [rsp+20h] [rbp-38h]

  v5 = a5;
  result = 0LL;
  *(_DWORD *)(a5 + 4) = 0;
  v7 = (_DWORD *)(a5 + 4);
  v8 = a4;
  v10 = a1;
  if ( a2 < 0 )
  {
    if ( a4 < 0 && *(_QWORD *)(a3 + 136) )
    {
      *(_DWORD *)(a5 + 8) = 0;
      result = *(_QWORD *)(a3 + 136);
      a1 = *(unsigned int *)(result + 8);
      *(_DWORD *)(a5 + 16) = a1;
      *v7 |= 0x80000000;
    }
    v30 = a4 & 0x40000000;
    if ( (a4 & 0x40000000) != 0 )
      result = AlpcpExposeViewAttribute32(a1, a3, (_DWORD *)(a5 + (((__int64)a4 >> 63) & 0xC) + 8), (_DWORD *)(a5 + 4));
    v31 = v8 & 0x20000000;
    if ( (v8 & 0x20000000) != 0 )
    {
      v32 = ((v8 >> 63) & 0xC) + 24;
      if ( !v30 )
        v32 = ((v8 >> 63) & 0xC) + 8;
      result = AlpcpExposeContextAttribute32(v10, a3, (_DWORD *)(a5 + v32), (_DWORD *)(a5 + 4));
    }
    v33 = (v8 >> 63) & 0xC;
    v34 = v8 & 0x10000000;
    if ( (v8 & 0x10000000) != 0 )
    {
      v35 = v33 + 24;
      if ( !v30 )
        v35 = v33 + 8;
      v36 = v35 + 20;
      if ( !v31 )
        v36 = v35;
      result = AlpcpExposeHandleAttribute32(v10, a3, (_DWORD *)(a5 + v36), (_DWORD *)(a5 + 4));
      v34 = v8 & 0x10000000;
    }
    v37 = v33 + 8;
    v38 = v8 & 0x8000000;
    if ( (v8 & 0x8000000) != 0 )
    {
      v39 = v37 + 16;
      if ( !v30 )
        v39 = v37;
      v40 = v39 + 20;
      if ( !v31 )
        v40 = v39;
      v41 = v40 + 16;
      if ( !v34 )
        v41 = v40;
      result = AlpcpExposeTokenAttribute(v10, a3, a5 + v41, a5 + 4);
      v38 = v8 & 0x8000000;
    }
    if ( (v8 & 0x2000000) != 0 )
    {
      v42 = v37 + 16;
      if ( !v30 )
        v42 = v37;
      v43 = v42 + 20;
      if ( !v31 )
        v43 = v42;
      v44 = v43 + 16;
      if ( (v8 & 0x10000000) == 0 )
        v44 = v43;
      v25 = v44 + 24;
      if ( !v38 )
        v25 = v44;
      return AlpcpExposeWorkOnBehalfAttribute(v10, a3, v25 + v5, v7);
    }
  }
  else
  {
    if ( a4 < 0 && *(_QWORD *)(a3 + 136) )
    {
      *(_DWORD *)(a5 + 8) = 0;
      result = *(_QWORD *)(a3 + 136);
      *(_QWORD *)(a5 + 24) = *(_QWORD *)(result + 8);
      *v7 |= 0x80000000;
    }
    v11 = a4 & 0x40000000;
    if ( (a4 & 0x40000000) != 0 )
    {
      v45 = a5 + (((__int64)a4 >> 63) & 0x18) + 8;
      result = *(_QWORD *)(a3 + 144);
      if ( result )
      {
        v26 = *(_QWORD *)(result + 16);
        AlpcpReferenceBlob(v26);
        v27 = *(_QWORD *)(*(_QWORD *)(a3 + 144) + 16LL);
        AlpcpLockForCachedReferenceBlob(v27);
        v28 = *(_DWORD *)(v27 + 48);
        AlpcpUnlockBlob(v27);
        AlpcpDereferenceBlobEx(v26);
        v29 = *(_QWORD *)(a3 + 144);
        *(_OWORD *)v45 = 0LL;
        *(_OWORD *)(v45 + 16) = 0LL;
        *(_QWORD *)(v45 + 16) = *(_QWORD *)(v29 + 40);
        result = *(_QWORD *)(v29 + 48);
        *(_QWORD *)(v45 + 24) = result;
        if ( (v28 & 1) != 0 )
          *(_DWORD *)v45 = 0x40000;
        *v7 |= 0x40000000u;
        v5 = a5;
      }
    }
    v12 = v8 & 0x20000000;
    if ( (v8 & 0x20000000) != 0 )
    {
      v13 = ((v8 >> 63) & 0x18) + 40;
      if ( !v11 )
        v13 = ((v8 >> 63) & 0x18) + 8;
      if ( *(_QWORD *)(a3 + 56) == v10 || *(_QWORD *)(a3 + 64) == v10 )
        v14 = *(_QWORD *)(a3 + 128);
      else
        v14 = *(_QWORD *)(a3 + 120);
      *(_QWORD *)(v13 + v5) = v14;
      if ( *(_QWORD *)(a3 + 56) == v10 || *(_QWORD *)(a3 + 64) == v10 )
        v15 = *(_DWORD *)(a3 + 72);
      else
        v15 = *(_DWORD *)(a3 + 44);
      *(_DWORD *)(v13 + v5 + 16) = v15;
      if ( (*(_DWORD *)(v10 + 416) & 6) == 4 )
        v16 = *(_QWORD *)(a3 + 104);
      else
        v16 = *(_QWORD *)(a3 + 112);
      *(_QWORD *)(v13 + v5 + 8) = v16;
      *(_DWORD *)(v13 + v5 + 20) = *(_DWORD *)(a3 + 264);
      result = *(unsigned int *)(a3 + 272);
      *(_DWORD *)(v13 + v5 + 24) = result;
      if ( a5 != -4 && *(_QWORD *)(v13 + v5) )
        *v7 |= 0x20000000u;
    }
    v17 = v8 & 0x10000000;
    if ( (v8 & 0x10000000) != 0 )
    {
      v18 = ((v8 >> 63) & 0x18) + 40;
      if ( !v11 )
        v18 = ((v8 >> 63) & 0x18) + 8;
      if ( v12 )
        v18 += 32LL;
      result = AlpcpExposeHandleAttribute(v10, a3, v18 + v5);
      v17 = v8 & 0x10000000;
    }
    v19 = v8 & 0x8000000;
    if ( (v8 & 0x8000000) != 0 )
    {
      v20 = ((v8 >> 63) & 0x18) + 40;
      if ( !v11 )
        v20 = ((v8 >> 63) & 0x18) + 8;
      if ( v12 )
        v20 += 32LL;
      v21 = v20 + 24;
      if ( !v17 )
        v21 = v20;
      result = AlpcpExposeTokenAttribute(v10, a3, v5 + v21, v7);
      v19 = v8 & 0x8000000;
    }
    if ( (v8 & 0x2000000) != 0 )
    {
      v22 = (v8 >> 63) & 0x18;
      v23 = v22 + 40;
      if ( !v11 )
        v23 = v22 + 8;
      if ( v12 )
        v23 += 32LL;
      v24 = v23 + 24;
      if ( (v8 & 0x10000000) == 0 )
        v24 = v23;
      v25 = v24 + 24;
      if ( !v19 )
        v25 = v24;
      return AlpcpExposeWorkOnBehalfAttribute(v10, a3, v25 + v5, v7);
    }
  }
  return result;
}
