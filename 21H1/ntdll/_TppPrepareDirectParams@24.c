/*
 * XREFs of _TppPrepareDirectParams@24 @ 0x4B2B64B0
 * Callers:
 *     _TppWorkerThread@4 @ 0x4B2B58A0 (_TppWorkerThread@4.c)
 * Callees:
 *     _TppUpdatePoolNodeStatus@8 @ 0x4B2ABCFD (_TppUpdatePoolNodeStatus@8.c)
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _ZwReleaseWorkerFactoryWorker@4 @ 0x4B2F4070 (_ZwReleaseWorkerFactoryWorker@4.c)
 *     __allshl @ 0x4B2F65F0 (__allshl.c)
 *     _memmove @ 0x4B2F8BF0 (_memmove.c)
 */

char __fastcall TppPrepareDirectParams(int a1, int a2, int a3, int a4, int a5, char *a6)
{
  int v6; // ebx
  int *v7; // eax
  int v8; // edi
  _DWORD *v9; // esi
  int v10; // ecx
  _RTL_SRWLOCK *v11; // eax
  int v12; // edx
  unsigned int v13; // ecx
  signed __int64 v14; // rax
  unsigned int v15; // edi
  unsigned int v16; // edx
  unsigned __int16 v17; // ax
  _RTL_SRWLOCK **v19; // ecx
  unsigned int **v20; // edx
  _DWORD *v21; // ecx
  int ***v22; // eax
  int v23; // edi
  signed __int32 v24; // ecx
  unsigned int v25; // esi
  unsigned int v26; // ebx
  __int64 v27; // rax
  unsigned int v28; // eax
  unsigned int v29; // ebx
  unsigned int v30; // esi
  int *v31; // eax
  int *v32; // edx
  int **v33; // ecx
  int *v34; // edx
  int v35; // eax
  int **v36; // ecx
  unsigned int v37; // ebx
  unsigned int v38; // esi
  unsigned int v39; // ebx
  int v40; // eax
  unsigned int v41; // ebx
  unsigned int v42; // esi
  unsigned int v43; // esi
  size_t v44; // [esp-4h] [ebp-4Ch]
  bool v45; // [esp+Fh] [ebp-39h]
  bool v46; // [esp+10h] [ebp-38h]
  char v47; // [esp+11h] [ebp-37h]
  char v48; // [esp+12h] [ebp-36h]
  char v49; // [esp+13h] [ebp-35h]
  int v50; // [esp+14h] [ebp-34h]
  unsigned int v51; // [esp+18h] [ebp-30h]
  int v52; // [esp+1Ch] [ebp-2Ch]
  unsigned int *v53; // [esp+20h] [ebp-28h]
  int v54; // [esp+20h] [ebp-28h]
  unsigned int v55; // [esp+24h] [ebp-24h]
  _RTL_SRWLOCK *SRWLock; // [esp+28h] [ebp-20h]
  unsigned int *v57; // [esp+2Ch] [ebp-1Ch]
  unsigned int v58; // [esp+2Ch] [ebp-1Ch]
  unsigned int v59; // [esp+30h] [ebp-18h]
  unsigned int v60; // [esp+30h] [ebp-18h]
  _RTL_SRWLOCK **v61; // [esp+34h] [ebp-14h] BYREF
  _RTL_SRWLOCK ***v62; // [esp+38h] [ebp-10h]
  _RTL_SRWLOCK ***v63; // [esp+3Ch] [ebp-Ch]
  int *v64; // [esp+40h] [ebp-8h] BYREF
  int **v65; // [esp+44h] [ebp-4h]

  v6 = 0;
  v45 = 0;
  v7 = (int *)(a1 + 180);
  v55 = 0;
  v51 = 0;
  v52 = 0;
  v50 = 0;
  v46 = 0;
  v61 = (_RTL_SRWLOCK **)(a1 + 180);
  if ( a2 == a1 + 180 )
  {
    v40 = *v7;
    v45 = v40 != 0;
    v46 = v40 == 0;
    goto LABEL_8;
  }
  *v7 = 0;
  v65 = &v64;
  v64 = (int *)&v64;
  v59 = a2 + 28 * a4;
  v8 = a3;
  *(_DWORD *)(v59 + 4) = a3 + *(_DWORD *)(v59 + 4) - 1;
  v9 = (_DWORD *)(a2 + 16 * a3);
  v10 = a2 + 16 + 28 * a3;
  do
  {
    v11 = (_RTL_SRWLOCK *)*(v9 - 4);
    v9 -= 4;
    v10 -= 28;
    v57 = (unsigned int *)v11;
    --v8;
    v53 = (unsigned int *)v10;
    if ( !v11 )
    {
      v12 = v52;
      v46 = 1;
      continue;
    }
    if ( v45 )
    {
      LODWORD(v44) = 16;
      SRWLock = v11 + 5;
      memmove((void *)(v10 - 16), v9, v44);
      v53[2] = v59;
      RtlAcquireSRWLockExclusive(SRWLock);
      v63 = (_RTL_SRWLOCK ***)(v57 + 6);
      v20 = (unsigned int **)v57[7];
      v62 = (_RTL_SRWLOCK ***)v57[6];
      if ( *v20 != v57 + 6 )
        goto LABEL_59;
      *v53 = (unsigned int)(v57 + 6);
      v53[1] = (unsigned int)v20;
      *v20 = v53;
      v57[7] = (unsigned int)v53;
      RtlReleaseSRWLockExclusive(SRWLock);
      v12 = ++v52;
      if ( v62 != v63 )
        goto LABEL_25;
      v21 = v65;
      v22 = (int ***)(v57 + 3);
      if ( *v65 != (int *)&v64 )
LABEL_59:
        __fastfail(3u);
      v57[4] = (unsigned int)v65;
      *v22 = &v64;
      v6 = v50 + 1;
      *v21 = v22;
      v65 = (int **)(v57 + 3);
      ++v50;
    }
    else
    {
      v19 = v61;
      v45 = 1;
      *v61 = v11;
      v19[1] = (_RTL_SRWLOCK *)v9[1];
      v19[2] = (_RTL_SRWLOCK *)v9[2];
      v19[3] = (_RTL_SRWLOCK *)v9[3];
    }
    v12 = v52;
LABEL_25:
    v10 = (int)v53;
  }
  while ( v8 );
  if ( v12 != a3 - 1 && !_InterlockedExchangeAdd((volatile signed __int32 *)(v59 + 4), 0xFFFFFFFF) )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag + 3145728, *(PVOID *)v59);
  if ( !v6 )
    goto LABEL_8;
  v23 = (int)(v64 - 3);
  v24 = -2;
  v63 = &v61;
  v25 = 0;
  v54 = -2;
  if ( v64 - 3 != (int *)&v61 )
  {
    v26 = 0;
    while ( 1 )
    {
      v27 = 1LL << *(_DWORD *)(v23 + 4);
      v24 = v54;
      v25 |= v27;
      v26 |= HIDWORD(v27);
      if ( v54 != -1 )
      {
        if ( v54 == -2 )
        {
          v24 = *(_DWORD *)(v23 + 4);
        }
        else
        {
          if ( v54 == *(_DWORD *)(v23 + 4) )
            goto LABEL_41;
          v24 = -1;
        }
        v54 = v24;
      }
LABEL_41:
      v23 = *(_DWORD *)(v23 + 12) - 12;
      if ( (_RTL_SRWLOCK ***)v23 == v63 )
      {
        v51 = v26;
        v6 = v50;
        v55 = v25;
        break;
      }
    }
  }
  TppUpdatePoolNodeStatus(a5, v24);
  v28 = v51;
  v63 = (_RTL_SRWLOCK ***)v25;
  if ( v25 )
  {
    v29 = v25;
    do
    {
      _BitScanForward(&v30, v29);
      RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(*(_DWORD *)(a5 + 20) + 12 * v30 + 8));
      v29 &= ~(1 << v30);
    }
    while ( v29 );
    v6 = v50;
    v25 = v55;
    v28 = v51;
  }
  if ( v28 )
  {
    v41 = v51;
    do
    {
      _BitScanForward(&v42, v41);
      RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(*(_DWORD *)(a5 + 20) + 12 * v42 + 392));
      v41 &= ~(1 << v42);
    }
    while ( v41 );
    v6 = v50;
    v25 = v55;
  }
  while ( 1 )
  {
    v31 = v64;
    if ( v64 == (int *)&v64 )
      break;
    v32 = (int *)*v64;
    if ( *(int **)(*v64 + 4) != v64 )
      goto LABEL_59;
    v33 = (int **)v64[1];
    if ( *v33 != v64 )
      goto LABEL_59;
    *v33 = v32;
    v32[1] = (int)v33;
    v34 = v31;
    v35 = *(_DWORD *)(a5 + 20) + 12 * *(v31 - 2);
    v36 = *(int ***)(v35 + 4);
    if ( *v36 != (int *)v35 )
      goto LABEL_59;
    *v34 = v35;
    v34[1] = (int)v36;
    *v36 = v34;
    *(_DWORD *)(v35 + 4) = v34;
  }
  if ( v51 )
  {
    v39 = v51;
    do
    {
      _BitScanReverse(&v43, v39);
      RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(*(_DWORD *)(a5 + 20) + 12 * v43 + 392));
      v39 &= ~(1 << v43);
    }
    while ( v39 );
    v6 = v50;
    v25 = v55;
  }
  if ( v25 )
  {
    v37 = v55;
    do
    {
      _BitScanReverse(&v38, v37);
      RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(*(_DWORD *)(a5 + 20) + 12 * v38 + 8));
      v37 &= ~(1 << v38);
    }
    while ( v37 );
    v6 = v50;
  }
LABEL_8:
  LODWORD(v14) = a5;
  v13 = *(_DWORD *)(a5 + 8);
  HIDWORD(v14) = *(_DWORD *)(a5 + 12);
  do
  {
    v15 = HIDWORD(v14);
    v58 = v13;
    v48 = 0;
    v47 = 0;
    v49 = *(_BYTE *)(v14 + 228);
    v16 = HIDWORD(v14) + v6;
    v60 = v16;
    if ( !v49 )
    {
      v17 = v13 - 1;
      v13 ^= (unsigned __int16)(v13 ^ (v13 - 1));
      if ( v46 )
        v13 = v17 | ((HIWORD(v13) - 1) << 16);
      if ( !v45 )
      {
        if ( v16 )
        {
          v60 = --v16;
        }
        else
        {
          v48 = 1;
          v13 ^= (unsigned __int16)(v13 ^ (v13 + 1));
        }
      }
      if ( (v6 || v46) && v16 && (v13 & 0xFFFF0000) == 0 )
      {
        v13 += 0x10000;
        v47 = 1;
      }
    }
    v14 = _InterlockedCompareExchange64(
            (volatile signed __int64 *)(a5 + 8),
            __SPAIR64__(v60, v13),
            __SPAIR64__(v15, v58));
    v6 = v50;
    v13 = v14;
    LODWORD(v14) = a5;
  }
  while ( __PAIR64__(v13, HIDWORD(v14)) != __PAIR64__(v58, v15) );
  if ( v47 )
    ZwReleaseWorkerFactoryWorker(*(HANDLE *)(a5 + 36));
  *a6 = v48;
  return v49;
}
