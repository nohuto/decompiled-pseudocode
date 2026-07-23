/*
 * XREFs of MiDeleteEmptyPageTableCommit @ 0x1403F4B14
 * Callers:
 *     MiDeleteEmptyPageTableTail @ 0x1403F4E40 (MiDeleteEmptyPageTableTail.c)
 * Callees:
 *     MiUnlockWorkingSetExclusive @ 0x1402C13E0 (MiUnlockWorkingSetExclusive.c)
 *     MiCaptureDeleteHierarchy @ 0x140309140 (MiCaptureDeleteHierarchy.c)
 *     MiGetLeafVa @ 0x140337BB0 (MiGetLeafVa.c)
 *     memset @ 0x140414300 (memset.c)
 *     MiLockWorkingSetExclusive @ 0x14054F9F0 (MiLockWorkingSetExclusive.c)
 *     MiReturnPageTablePageCommitment @ 0x140705D70 (MiReturnPageTablePageCommitment.c)
 */

unsigned __int64 __fastcall MiDeleteEmptyPageTableCommit(__int64 *a1)
{
  unsigned __int64 *v2; // r9
  __int64 v3; // rdi
  __int64 v4; // r9
  unsigned __int64 LeafVa; // r13
  unsigned __int64 v6; // r12
  char *v7; // r14
  char *v8; // rax
  __int64 i; // rax
  __int64 j; // r14
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int64 v14; // rax
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  _QWORD *v21; // rsi
  _QWORD *v22; // rax
  _QWORD *v23; // rcx
  __int64 k; // rsi
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  __int64 v28; // rax
  __int128 v29; // xmm0
  __int128 v30; // xmm1
  __int128 v31; // xmm0
  __int128 v32; // xmm1
  __int128 v33; // xmm0
  __int128 v34; // xmm1
  _KPROCESS *Process; // r15
  __int64 v36; // r8
  unsigned __int8 v37; // bl
  unsigned __int64 *v38; // rdx
  unsigned __int64 result; // rax
  __int64 v40; // rcx
  _OWORD v41[21]; // [rsp+40h] [rbp-C0h] BYREF
  int v43; // [rsp+1A8h] [rbp+A8h] BYREF
  unsigned __int64 *v44; // [rsp+1B0h] [rbp+B0h]

  memset(v41, 0, 0x88uLL);
  memset(&v41[9], 0, 0x88uLL);
  v2 = (unsigned __int64 *)a1[21];
  v43 = 0;
  v44 = v2;
  v3 = v2[12];
  LeafVa = MiGetLeafVa(*v2);
  if ( LeafVa < a1[4] )
    LeafVa = a1[4];
  v6 = MiGetLeafVa(*(_QWORD *)(v4 + 8) + 8LL) - 1;
  if ( v6 > a1[5] )
    v6 = a1[5];
  if ( LeafVa == (*(unsigned int *)(v3 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v3 + 32) << 32)) << 12 )
  {
    v7 = *(char **)v3;
    v8 = (char *)v3;
    if ( *(_QWORD *)v3 )
    {
      for ( i = *((_QWORD *)v7 + 1); i; i = *(_QWORD *)(i + 8) )
        LODWORD(v7) = i;
    }
    else
    {
      for ( j = *(_QWORD *)(v3 + 16); ; j = *((_QWORD *)v7 + 2) )
      {
        v7 = (char *)(j & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !v7 || *((char **)v7 + 1) == v8 )
          break;
        v8 = v7;
      }
    }
  }
  else
  {
    v11 = *(_OWORD *)(v3 + 16);
    if ( (*(_DWORD *)(v3 + 48) & 0x100000) != 0 )
    {
      v41[0] = *(_OWORD *)v3;
      v12 = *(_OWORD *)(v3 + 32);
      v41[1] = v11;
      v13 = *(_OWORD *)(v3 + 48);
      v41[2] = v12;
      v41[3] = v13;
    }
    else
    {
      v14 = *(_QWORD *)(v3 + 128);
      v41[0] = *(_OWORD *)v3;
      v15 = *(_OWORD *)(v3 + 32);
      v41[1] = v11;
      v16 = *(_OWORD *)(v3 + 48);
      v41[2] = v15;
      v17 = *(_OWORD *)(v3 + 64);
      v41[3] = v16;
      v18 = *(_OWORD *)(v3 + 80);
      v41[4] = v17;
      v19 = *(_OWORD *)(v3 + 96);
      v41[5] = v18;
      v20 = *(_OWORD *)(v3 + 112);
      v41[6] = v19;
      v41[7] = v20;
      *(_QWORD *)&v41[8] = v14;
    }
    HIDWORD(v41[1]) = (LeafVa >> 12) - 1;
    BYTE1(v41[2]) = ((LeafVa >> 12) - 1) >> 32;
    v7 = (char *)v41 + 1;
  }
  if ( v6 == (((*(unsigned int *)(v3 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v3 + 33) << 32)) << 12) | 0xFFF) )
  {
    v21 = *(_QWORD **)(v3 + 8);
    v22 = (_QWORD *)v3;
    if ( v21 )
    {
      v23 = (_QWORD *)*v21;
      if ( *v21 )
      {
        do
        {
          v21 = v23;
          v23 = (_QWORD *)*v23;
        }
        while ( v23 );
      }
    }
    else
    {
      for ( k = *(_QWORD *)(v3 + 16); ; k = v21[2] )
      {
        v21 = (_QWORD *)(k & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !v21 || (_QWORD *)*v21 == v22 )
          break;
        v22 = v21;
      }
    }
  }
  else
  {
    v25 = *(_OWORD *)(v3 + 16);
    if ( (*(_DWORD *)(v3 + 48) & 0x100000) != 0 )
    {
      v41[9] = *(_OWORD *)v3;
      v26 = *(_OWORD *)(v3 + 32);
      v41[10] = v25;
      v27 = *(_OWORD *)(v3 + 48);
      v41[11] = v26;
      v41[12] = v27;
    }
    else
    {
      v28 = *(_QWORD *)(v3 + 128);
      v41[9] = *(_OWORD *)v3;
      v29 = *(_OWORD *)(v3 + 32);
      v41[10] = v25;
      v30 = *(_OWORD *)(v3 + 48);
      v41[11] = v29;
      v31 = *(_OWORD *)(v3 + 64);
      v41[12] = v30;
      v32 = *(_OWORD *)(v3 + 80);
      v41[13] = v31;
      v33 = *(_OWORD *)(v3 + 96);
      v41[14] = v32;
      v34 = *(_OWORD *)(v3 + 112);
      v41[15] = v33;
      v41[16] = v34;
      *(_QWORD *)&v41[17] = v28;
    }
    DWORD2(v41[10]) = (v6 >> 12) + 1;
    LOBYTE(v41[11]) = ((v6 >> 12) + 1) >> 32;
    v21 = (_QWORD *)((char *)&v41[9] + 1);
  }
  Process = KeGetCurrentThread()->ApcState.Process;
  LOBYTE(v36) = MiLockWorkingSetExclusive(a1[3]);
  v37 = v36;
  MiCaptureDeleteHierarchy(LeafVa, v6, v36, &v43);
  MiUnlockWorkingSetExclusive(a1[3], v37);
  MiReturnPageTablePageCommitment(LeafVa, v6, (_DWORD)Process, (_DWORD)v7, (__int64)v21, v3, (__int64)&v43);
  v38 = v44;
  result = v44[2];
  v40 = *(_QWORD *)(result + 24);
  if ( v40 )
  {
    _InterlockedExchangeAdd64((volatile signed __int64 *)&Process[1].Affinity.Bitmap[13], -v40);
    result = v38[2];
    *(_QWORD *)(result + 24) = 0LL;
  }
  return result;
}
