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
  _DWORD *v11; // eax
  int v12; // edx
  unsigned int v13; // ecx
  signed __int64 v14; // rax
  unsigned int v15; // edi
  unsigned int v16; // edx
  unsigned __int16 v17; // ax
  _DWORD *v19; // ecx
  _DWORD *v20; // edx
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
  bool v44; // [esp+Fh] [ebp-39h]
  bool v45; // [esp+10h] [ebp-38h]
  char v46; // [esp+11h] [ebp-37h]
  char v47; // [esp+12h] [ebp-36h]
  char v48; // [esp+13h] [ebp-35h]
  int v49; // [esp+14h] [ebp-34h]
  unsigned int v50; // [esp+18h] [ebp-30h]
  int v51; // [esp+1Ch] [ebp-2Ch]
  _DWORD *v52; // [esp+20h] [ebp-28h]
  int v53; // [esp+20h] [ebp-28h]
  unsigned int v54; // [esp+24h] [ebp-24h]
  _DWORD *v55; // [esp+28h] [ebp-20h]
  _DWORD *v56; // [esp+2Ch] [ebp-1Ch]
  unsigned int v57; // [esp+2Ch] [ebp-1Ch]
  int v58; // [esp+30h] [ebp-18h]
  unsigned int v59; // [esp+30h] [ebp-18h]
  _DWORD *v60; // [esp+34h] [ebp-14h] BYREF
  _DWORD **v61; // [esp+38h] [ebp-10h]
  _DWORD **v62; // [esp+3Ch] [ebp-Ch]
  int *v63; // [esp+40h] [ebp-8h] BYREF
  int **v64; // [esp+44h] [ebp-4h]

  v6 = 0;
  v44 = 0;
  v7 = (int *)(a1 + 180);
  v54 = 0;
  v50 = 0;
  v51 = 0;
  v49 = 0;
  v45 = 0;
  v60 = (_DWORD *)(a1 + 180);
  if ( a2 == a1 + 180 )
  {
    v40 = *v7;
    v44 = v40 != 0;
    v45 = v40 == 0;
    goto LABEL_8;
  }
  *v7 = 0;
  v64 = &v63;
  v63 = (int *)&v63;
  v58 = a2 + 28 * a4;
  v8 = a3;
  *(_DWORD *)(v58 + 4) = a3 + *(_DWORD *)(v58 + 4) - 1;
  v9 = (_DWORD *)(a2 + 16 * a3);
  v10 = a2 + 16 + 28 * a3;
  do
  {
    v11 = (_DWORD *)*(v9 - 4);
    v9 -= 4;
    v10 -= 28;
    v56 = v11;
    --v8;
    v52 = (_DWORD *)v10;
    if ( !v11 )
    {
      v12 = v51;
      v45 = 1;
      continue;
    }
    if ( v44 )
    {
      v55 = v11 + 5;
      memmove((void *)(v10 - 16), v9, 0x10u);
      v52[2] = v58;
      RtlAcquireSRWLockExclusive(v55);
      v62 = (_DWORD **)(v56 + 6);
      v20 = (_DWORD *)v56[7];
      v61 = (_DWORD **)v56[6];
      if ( (_DWORD *)*v20 != v56 + 6 )
        goto LABEL_59;
      *v52 = v56 + 6;
      v52[1] = v20;
      *v20 = v52;
      v56[7] = v52;
      RtlReleaseSRWLockExclusive(v55);
      v12 = ++v51;
      if ( v61 != v62 )
        goto LABEL_25;
      v21 = v64;
      v22 = (int ***)(v56 + 3);
      if ( *v64 != (int *)&v63 )
LABEL_59:
        __fastfail(3u);
      v56[4] = v64;
      *v22 = &v63;
      v6 = v49 + 1;
      *v21 = v22;
      v64 = (int **)(v56 + 3);
      ++v49;
    }
    else
    {
      v19 = v60;
      v44 = 1;
      *v60 = v11;
      v19[1] = v9[1];
      v19[2] = v9[2];
      v19[3] = v9[3];
    }
    v12 = v51;
LABEL_25:
    v10 = (int)v52;
  }
  while ( v8 );
  if ( v12 != a3 - 1 && !_InterlockedExchangeAdd((volatile signed __int32 *)(v58 + 4), 0xFFFFFFFF) )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag + 3145728, *(_DWORD *)v58);
  if ( !v6 )
    goto LABEL_8;
  v23 = (int)(v63 - 3);
  v24 = -2;
  v62 = &v60;
  v25 = 0;
  v53 = -2;
  if ( v63 - 3 != (int *)&v60 )
  {
    v26 = 0;
    while ( 1 )
    {
      v27 = 1LL << *(_DWORD *)(v23 + 4);
      v24 = v53;
      v25 |= v27;
      v26 |= HIDWORD(v27);
      if ( v53 != -1 )
      {
        if ( v53 == -2 )
        {
          v24 = *(_DWORD *)(v23 + 4);
        }
        else
        {
          if ( v53 == *(_DWORD *)(v23 + 4) )
            goto LABEL_41;
          v24 = -1;
        }
        v53 = v24;
      }
LABEL_41:
      v23 = *(_DWORD *)(v23 + 12) - 12;
      if ( (_DWORD **)v23 == v62 )
      {
        v50 = v26;
        v6 = v49;
        v54 = v25;
        break;
      }
    }
  }
  TppUpdatePoolNodeStatus(a5, v24);
  v28 = v50;
  v62 = (_DWORD **)v25;
  if ( v25 )
  {
    v29 = v25;
    do
    {
      _BitScanForward(&v30, v29);
      RtlAcquireSRWLockExclusive(*(_DWORD *)(a5 + 20) + 12 * v30 + 8);
      v29 &= ~(1 << v30);
    }
    while ( v29 );
    v6 = v49;
    v25 = v54;
    v28 = v50;
  }
  if ( v28 )
  {
    v41 = v50;
    do
    {
      _BitScanForward(&v42, v41);
      RtlAcquireSRWLockExclusive(*(_DWORD *)(a5 + 20) + 12 * v42 + 392);
      v41 &= ~(1 << v42);
    }
    while ( v41 );
    v6 = v49;
    v25 = v54;
  }
  while ( 1 )
  {
    v31 = v63;
    if ( v63 == (int *)&v63 )
      break;
    v32 = (int *)*v63;
    if ( *(int **)(*v63 + 4) != v63 )
      goto LABEL_59;
    v33 = (int **)v63[1];
    if ( *v33 != v63 )
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
  if ( v50 )
  {
    v39 = v50;
    do
    {
      _BitScanReverse(&v43, v39);
      RtlReleaseSRWLockExclusive(*(_DWORD *)(a5 + 20) + 12 * v43 + 392);
      v39 &= ~(1 << v43);
    }
    while ( v39 );
    v6 = v49;
    v25 = v54;
  }
  if ( v25 )
  {
    v37 = v54;
    do
    {
      _BitScanReverse(&v38, v37);
      RtlReleaseSRWLockExclusive(*(_DWORD *)(a5 + 20) + 12 * v38 + 8);
      v37 &= ~(1 << v38);
    }
    while ( v37 );
    v6 = v49;
  }
LABEL_8:
  LODWORD(v14) = a5;
  v13 = *(_DWORD *)(a5 + 8);
  HIDWORD(v14) = *(_DWORD *)(a5 + 12);
  do
  {
    v15 = HIDWORD(v14);
    v57 = v13;
    v47 = 0;
    v46 = 0;
    v48 = *(_BYTE *)(v14 + 228);
    v16 = HIDWORD(v14) + v6;
    v59 = v16;
    if ( !v48 )
    {
      v17 = v13 - 1;
      v13 ^= (unsigned __int16)(v13 ^ (v13 - 1));
      if ( v45 )
        v13 = v17 | ((HIWORD(v13) - 1) << 16);
      if ( !v44 )
      {
        if ( v16 )
        {
          v59 = --v16;
        }
        else
        {
          v47 = 1;
          v13 ^= (unsigned __int16)(v13 ^ (v13 + 1));
        }
      }
      if ( (v6 || v45) && v16 && (v13 & 0xFFFF0000) == 0 )
      {
        v13 += 0x10000;
        v46 = 1;
      }
    }
    v14 = _InterlockedCompareExchange64(
            (volatile signed __int64 *)(a5 + 8),
            __SPAIR64__(v59, v13),
            __SPAIR64__(v15, v57));
    v6 = v49;
    v13 = v14;
    LODWORD(v14) = a5;
  }
  while ( __PAIR64__(v13, HIDWORD(v14)) != __PAIR64__(v57, v15) );
  if ( v46 )
    ZwReleaseWorkerFactoryWorker(*(_DWORD *)(a5 + 36));
  *a6 = v47;
  return v48;
}
