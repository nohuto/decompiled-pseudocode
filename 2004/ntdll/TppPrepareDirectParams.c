/*
 * XREFs of TppPrepareDirectParams @ 0x180053C10
 * Callers:
 *     TppWorkerThread @ 0x180052AD0 (TppWorkerThread.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180012C70 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 *     TppUpdatePoolNodeStatus @ 0x1800549B8 (TppUpdatePoolNodeStatus.c)
 *     NtReleaseWorkerFactoryWorker @ 0x18009FBE0 (NtReleaseWorkerFactoryWorker.c)
 *     memmove @ 0x1800A3C00 (memmove.c)
 */

char __fastcall TppPrepareDirectParams(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned int a4,
        __int64 a5,
        char *a6)
{
  __int64 v6; // r15
  __int64 v8; // rax
  int v9; // r9d
  char v10; // r10
  int v11; // r11d
  __int64 v12; // rdi
  unsigned int v13; // r12d
  __int64 v14; // r14
  _OWORD *v15; // rdx
  __int64 v16; // rax
  bool v17; // r14
  bool v18; // r12
  signed __int64 v19; // rax
  char v20; // di
  char v21; // bl
  __int64 v22; // r9
  char v23; // r10
  signed __int64 v24; // rdx
  signed __int64 v25; // rtt
  char result; // al
  _QWORD *v27; // rbx
  unsigned __int64 v28; // rcx
  unsigned __int64 v29; // rdx
  unsigned __int64 v30; // r8
  unsigned __int64 v31; // r9
  _QWORD *v32; // rbx
  _QWORD *v33; // rax
  _QWORD *v34; // rdx
  volatile signed __int64 *v35; // rcx
  unsigned __int64 **v36; // rcx
  unsigned __int64 **v37; // rax
  int v38; // r11d
  __int64 v39; // rax
  __int64 v40; // rdx
  unsigned int v41; // r8d
  unsigned __int64 v42; // rdx
  unsigned __int64 v43; // r9
  unsigned int v44; // r14d
  __int64 v45; // rax
  __int64 v46; // rbx
  unsigned int i; // r14d
  unsigned __int64 *v48; // rax
  unsigned __int64 v49; // rcx
  unsigned __int64 **v50; // rdx
  unsigned __int64 *v51; // rdx
  unsigned __int64 **v52; // rax
  unsigned int j; // edi
  __int64 v54; // rax
  __int64 v55; // rbx
  unsigned int v56; // edi
  unsigned int v57; // ebx
  unsigned __int64 v58; // rdx
  unsigned int v59; // ebx
  int v60; // [rsp+20h] [rbp-50h]
  __int64 v61; // [rsp+28h] [rbp-48h] BYREF
  unsigned int v62; // [rsp+30h] [rbp-40h]
  unsigned __int64 *v63; // [rsp+38h] [rbp-38h] BYREF
  unsigned __int64 **v64; // [rsp+40h] [rbp-30h]
  volatile signed __int64 *v65; // [rsp+48h] [rbp-28h]
  _QWORD *v66; // [rsp+50h] [rbp-20h]
  _QWORD *v67; // [rsp+58h] [rbp-18h]
  _QWORD *v68; // [rsp+60h] [rbp-10h]
  char v69; // [rsp+B0h] [rbp+40h]
  signed __int64 v70; // [rsp+B0h] [rbp+40h]
  char v71; // [rsp+B8h] [rbp+48h]
  int v72; // [rsp+C0h] [rbp+50h]

  v72 = a3;
  v6 = a1 + 304;
  v8 = a4;
  v9 = 0;
  v10 = 0;
  LODWORD(v61) = 0;
  v11 = 0;
  v69 = 0;
  v12 = 0LL;
  v60 = 0;
  v71 = 0;
  if ( a2 == a1 + 304 )
  {
    v18 = *(_QWORD *)v6 != 0LL;
    v17 = *(_QWORD *)v6 == 0LL;
  }
  else
  {
    *(_QWORD *)v6 = 0LL;
    v64 = &v63;
    v13 = a3;
    v14 = a2 + 56 * v8;
    v63 = (unsigned __int64 *)&v63;
    *(_DWORD *)(v14 + 8) += a3 - 1;
    do
    {
      v15 = (_OWORD *)(a2 + 32LL * --v13);
      v16 = *(_QWORD *)v15;
      v66 = (_QWORD *)v16;
      if ( v16 )
      {
        if ( v10 )
        {
          v27 = (_QWORD *)(a2 + 56LL * v13);
          v65 = (volatile signed __int64 *)(v16 + 32);
          memmove(v27, v15, 0x20uLL);
          v28 = (unsigned __int64)v65;
          v27[6] = v14;
          RtlAcquireSRWLockExclusive(v28, v29, v30, v31);
          v32 = v27 + 4;
          v33 = v66 + 5;
          v68 = v66 + 5;
          v34 = (_QWORD *)v66[6];
          v67 = (_QWORD *)v66[5];
          if ( (_QWORD *)*v34 != v66 + 5 )
            goto LABEL_65;
          v35 = v65;
          *v32 = v33;
          v32[1] = v34;
          *v34 = v32;
          v33[1] = v32;
          RtlReleaseSRWLockExclusive(v35);
          v9 = v61 + 1;
          LODWORD(v61) = v61 + 1;
          if ( v67 == v68 )
          {
            v36 = v64;
            v37 = (unsigned __int64 **)(v66 + 2);
            if ( *v64 != (unsigned __int64 *)&v63 )
LABEL_65:
              __fastfail(3u);
            v38 = v60;
            *v37 = (unsigned __int64 *)&v63;
            v11 = v38 + 1;
            v37[1] = (unsigned __int64 *)v36;
            *v36 = (unsigned __int64 *)v37;
            v64 = v37;
            v60 = v11;
          }
          else
          {
            v11 = v60;
          }
          v10 = v69;
        }
        else
        {
          v10 = 1;
          v69 = 1;
          *(_OWORD *)v6 = *v15;
          *(_OWORD *)(v6 + 16) = v15[1];
        }
      }
      else
      {
        v71 = 1;
      }
    }
    while ( v13 );
    if ( v9 != v72 - 1 && _InterlockedExchangeAdd((volatile signed __int32 *)(v14 + 8), 0xFFFFFFFF) == 1 )
    {
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, TppHeapTag + 3145728, *(_QWORD *)v14);
      v11 = v60;
    }
    if ( v11 )
    {
      v39 = (__int64)(v63 - 2);
      v40 = 4294967294LL;
      while ( (__int64 *)v39 != &v61 )
      {
        v41 = *(_DWORD *)(v39 + 8);
        v12 |= 1LL << v41;
        if ( (_DWORD)v40 != -1 )
        {
          if ( (_DWORD)v40 == -2 )
          {
            v40 = v41;
          }
          else if ( (_DWORD)v40 != v41 )
          {
            v40 = 0xFFFFFFFFLL;
          }
        }
        v39 = *(_QWORD *)(v39 + 16) - 16LL;
      }
      TppUpdatePoolNodeStatus(a5, v40);
      v61 = v12;
      if ( (_DWORD)v12 )
      {
        v44 = v12;
        do
        {
          v45 = *(_QWORD *)(a5 + 24);
          _BitScanForward((unsigned int *)&v46, v44);
          v62 = v46;
          RtlAcquireSRWLockExclusive(v45 + 8 * (v46 + 2 * (v46 + 1)), v42, a3, v43);
          v44 &= ~(1 << v46);
        }
        while ( v44 );
      }
      for ( i = HIDWORD(v61); i; i &= ~(1 << v57) )
      {
        _BitScanForward(&v57, i);
        v62 = v57;
        v58 = v57 + 32 + 2 * (v57 + 32 + 1LL);
        RtlAcquireSRWLockExclusive(*(_QWORD *)(a5 + 24) + 8 * v58, v58, a3, v43);
      }
      while ( 1 )
      {
        v48 = v63;
        if ( v63 == (unsigned __int64 *)&v63 )
          break;
        v49 = *v63;
        if ( *(unsigned __int64 **)(*v63 + 8) != v63 )
          goto LABEL_65;
        v50 = (unsigned __int64 **)v63[1];
        if ( *v50 != v63 )
          goto LABEL_65;
        *v50 = (unsigned __int64 *)v49;
        *(_QWORD *)(v49 + 8) = v50;
        v51 = v48;
        a3 = *(_QWORD *)(a5 + 24) + 24LL * *((unsigned int *)v48 - 2);
        v52 = *(unsigned __int64 ***)(a3 + 8);
        if ( *v52 != (unsigned __int64 *)a3 )
          goto LABEL_65;
        *v51 = a3;
        v51[1] = (unsigned __int64)v52;
        *v52 = v51;
        *(_QWORD *)(a3 + 8) = v51;
      }
      v61 = v12;
      if ( HIDWORD(v12) )
      {
        v56 = HIDWORD(v61);
        do
        {
          _BitScanReverse(&v59, v56);
          v62 = v59;
          RtlReleaseSRWLockExclusive((volatile signed __int64 *)(*(_QWORD *)(a5 + 24)
                                                               + 8 * (v59 + 32 + 2 * (v59 + 32 + 1LL))));
          v56 &= ~(1 << v59);
        }
        while ( v56 );
      }
      for ( j = v61; j; j &= ~(1 << v55) )
      {
        v54 = *(_QWORD *)(a5 + 24);
        _BitScanReverse((unsigned int *)&v55, j);
        v62 = v55;
        RtlReleaseSRWLockExclusive((volatile signed __int64 *)(v54 + 8 * (v55 + 2 * (v55 + 1))));
      }
      v11 = v60;
    }
    v17 = v71;
    v18 = v69;
  }
  _m_prefetchw((const void *)(a5 + 8));
  v19 = *(_QWORD *)(a5 + 8);
  LODWORD(v70) = v19;
  do
  {
    v20 = *(_BYTE *)(a5 + 376);
    v21 = 0;
    v22 = (unsigned int)(v11 + HIDWORD(v19));
    v23 = 0;
    HIDWORD(v70) = v11 + HIDWORD(v19);
    if ( !v20 )
    {
      a3 = (unsigned int)v70 ^ (unsigned __int16)(v70 ^ (v70 - 1));
      LODWORD(v70) = v70 ^ (unsigned __int16)(v70 ^ (v70 - 1));
      if ( v17 )
      {
        a3 = (unsigned __int16)a3 | ((WORD1(a3) - 1) << 16);
        LODWORD(v70) = a3;
      }
      if ( !v18 )
      {
        if ( (_DWORD)v22 )
        {
          v22 = (unsigned int)(v22 - 1);
          HIDWORD(v70) = v22;
        }
        else
        {
          v21 = 1;
          a3 = (unsigned __int16)(a3 ^ (a3 + 1)) ^ (unsigned int)a3;
          LODWORD(v70) = a3;
        }
      }
      if ( (v11 || v17) && (_DWORD)v22 && (a3 & 0xFFFF0000) == 0 )
      {
        a3 = (unsigned int)(a3 + 0x10000);
        v23 = 1;
        LODWORD(v70) = a3;
      }
    }
    v24 = v70;
    v25 = v19;
    v19 = _InterlockedCompareExchange64((volatile signed __int64 *)(a5 + 8), v70, v19);
    LODWORD(v70) = v19;
  }
  while ( v25 != v19 );
  if ( v23 )
    NtReleaseWorkerFactoryWorker(*(_QWORD *)(a5 + 56), v24, a3, v22);
  result = v20;
  *a6 = v21;
  return result;
}
