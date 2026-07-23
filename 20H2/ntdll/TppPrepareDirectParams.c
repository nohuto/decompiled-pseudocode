/*
 * XREFs of TppPrepareDirectParams @ 0x180053C60
 * Callers:
 *     TppWorkerThread @ 0x180052B20 (TppWorkerThread.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180012C70 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 *     TppUpdatePoolNodeStatus @ 0x180054A08 (TppUpdatePoolNodeStatus.c)
 *     NtReleaseWorkerFactoryWorker @ 0x18009FE80 (NtReleaseWorkerFactoryWorker.c)
 *     memmove @ 0x1800A3EC0 (memmove.c)
 */

char __fastcall TppPrepareDirectParams(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4, __int64 a5, char *a6)
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
  _RTL_SRWLOCK *v16; // rax
  bool v17; // r14
  bool v18; // r12
  signed __int64 v19; // rax
  char v20; // di
  char v21; // bl
  int v22; // r9d
  char v23; // r10
  unsigned int v24; // r8d
  signed __int64 v25; // rtt
  char result; // al
  _RTL_SRWLOCK **v27; // rbx
  _RTL_SRWLOCK *v28; // rcx
  _RTL_SRWLOCK **v29; // rbx
  _RTL_SRWLOCK *v30; // rax
  _RTL_SRWLOCK **Value; // rdx
  _RTL_SRWLOCK *v32; // rcx
  unsigned __int64 **v33; // rcx
  unsigned __int64 *v34; // rax
  int v35; // r11d
  __int64 v36; // rax
  __int64 v37; // rdx
  unsigned int v38; // r8d
  unsigned int v39; // r14d
  __int64 v40; // rax
  __int64 v41; // rbx
  unsigned int i; // r14d
  __int64 *v43; // rax
  __int64 *v44; // rcx
  __int64 **v45; // rdx
  __int64 *v46; // rdx
  __int64 v47; // r8
  __int64 **v48; // rax
  unsigned int j; // edi
  __int64 v50; // rax
  __int64 v51; // rbx
  unsigned int v52; // edi
  unsigned int v53; // ebx
  unsigned int v54; // ebx
  int v55; // [rsp+20h] [rbp-50h]
  __int64 v56; // [rsp+28h] [rbp-48h] BYREF
  unsigned int v57; // [rsp+30h] [rbp-40h]
  __int64 *v58; // [rsp+38h] [rbp-38h] BYREF
  unsigned __int64 *v59; // [rsp+40h] [rbp-30h]
  PRTL_SRWLOCK SRWLock; // [rsp+48h] [rbp-28h]
  _RTL_SRWLOCK *v61; // [rsp+50h] [rbp-20h]
  unsigned __int64 v62; // [rsp+58h] [rbp-18h]
  _RTL_SRWLOCK *v63; // [rsp+60h] [rbp-10h]
  char v64; // [rsp+B0h] [rbp+40h]
  signed __int64 v65; // [rsp+B0h] [rbp+40h]
  char v66; // [rsp+B8h] [rbp+48h]

  v6 = a1 + 304;
  v8 = a4;
  v9 = 0;
  v10 = 0;
  LODWORD(v56) = 0;
  v11 = 0;
  v64 = 0;
  v12 = 0LL;
  v55 = 0;
  v66 = 0;
  if ( a2 == a1 + 304 )
  {
    v18 = *(_QWORD *)v6 != 0LL;
    v17 = *(_QWORD *)v6 == 0LL;
  }
  else
  {
    *(_QWORD *)v6 = 0LL;
    v59 = (unsigned __int64 *)&v58;
    v13 = a3;
    v14 = a2 + 56 * v8;
    v58 = (__int64 *)&v58;
    *(_DWORD *)(v14 + 8) += a3 - 1;
    do
    {
      v15 = (_OWORD *)(a2 + 32LL * --v13);
      v16 = *(_RTL_SRWLOCK **)v15;
      v61 = v16;
      if ( v16 )
      {
        if ( v10 )
        {
          v27 = (_RTL_SRWLOCK **)(a2 + 56LL * v13);
          SRWLock = v16 + 4;
          memmove(v27, v15, 0x20uLL);
          v28 = SRWLock;
          v27[6] = (_RTL_SRWLOCK *)v14;
          RtlAcquireSRWLockExclusive(v28);
          v29 = v27 + 4;
          v30 = v61 + 5;
          v63 = v61 + 5;
          Value = (_RTL_SRWLOCK **)v61[6].Value;
          v62 = v61[5].Value;
          if ( *Value != &v61[5] )
            goto LABEL_65;
          v32 = SRWLock;
          *v29 = v30;
          v29[1] = (_RTL_SRWLOCK *)Value;
          *Value = (_RTL_SRWLOCK *)v29;
          v30[1].Value = (unsigned __int64)v29;
          RtlReleaseSRWLockExclusive(v32);
          v9 = v56 + 1;
          LODWORD(v56) = v56 + 1;
          if ( (_RTL_SRWLOCK *)v62 == v63 )
          {
            v33 = (unsigned __int64 **)v59;
            v34 = (unsigned __int64 *)&v61[2];
            if ( (__int64 **)*v59 != &v58 )
LABEL_65:
              __fastfail(3u);
            v35 = v55;
            *v34 = (unsigned __int64)&v58;
            v11 = v35 + 1;
            v34[1] = (unsigned __int64)v33;
            *v33 = v34;
            v59 = v34;
            v55 = v11;
          }
          else
          {
            v11 = v55;
          }
          v10 = v64;
        }
        else
        {
          v10 = 1;
          v64 = 1;
          *(_OWORD *)v6 = *v15;
          *(_OWORD *)(v6 + 16) = v15[1];
        }
      }
      else
      {
        v66 = 1;
      }
    }
    while ( v13 );
    if ( v9 != a3 - 1 && _InterlockedExchangeAdd((volatile signed __int32 *)(v14 + 8), 0xFFFFFFFF) == 1 )
    {
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag + 3145728, *(PVOID *)v14);
      v11 = v55;
    }
    if ( v11 )
    {
      v36 = (__int64)(v58 - 2);
      v37 = 4294967294LL;
      while ( (__int64 *)v36 != &v56 )
      {
        v38 = *(_DWORD *)(v36 + 8);
        v12 |= 1LL << v38;
        if ( (_DWORD)v37 != -1 )
        {
          if ( (_DWORD)v37 == -2 )
          {
            v37 = v38;
          }
          else if ( (_DWORD)v37 != v38 )
          {
            v37 = 0xFFFFFFFFLL;
          }
        }
        v36 = *(_QWORD *)(v36 + 16) - 16LL;
      }
      TppUpdatePoolNodeStatus(a5, v37);
      v56 = v12;
      if ( (_DWORD)v12 )
      {
        v39 = v12;
        do
        {
          v40 = *(_QWORD *)(a5 + 24);
          _BitScanForward((unsigned int *)&v41, v39);
          v57 = v41;
          RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(v40 + 8 * (v41 + 2 * (v41 + 1))));
          v39 &= ~(1 << v41);
        }
        while ( v39 );
      }
      for ( i = HIDWORD(v56); i; i &= ~(1 << v53) )
      {
        _BitScanForward(&v53, i);
        v57 = v53;
        RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(*(_QWORD *)(a5 + 24) + 8 * (v53 + 32 + 2 * (v53 + 32 + 1LL))));
      }
      while ( 1 )
      {
        v43 = v58;
        if ( v58 == (__int64 *)&v58 )
          break;
        v44 = (__int64 *)*v58;
        if ( *(__int64 **)(*v58 + 8) != v58 )
          goto LABEL_65;
        v45 = (__int64 **)v58[1];
        if ( *v45 != v58 )
          goto LABEL_65;
        *v45 = v44;
        v44[1] = (__int64)v45;
        v46 = v43;
        v47 = *(_QWORD *)(a5 + 24) + 24LL * *((unsigned int *)v43 - 2);
        v48 = *(__int64 ***)(v47 + 8);
        if ( *v48 != (__int64 *)v47 )
          goto LABEL_65;
        *v46 = v47;
        v46[1] = (__int64)v48;
        *v48 = v46;
        *(_QWORD *)(v47 + 8) = v46;
      }
      v56 = v12;
      if ( HIDWORD(v12) )
      {
        v52 = HIDWORD(v56);
        do
        {
          _BitScanReverse(&v54, v52);
          v57 = v54;
          RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(*(_QWORD *)(a5 + 24) + 8 * (v54 + 32 + 2 * (v54 + 32 + 1LL))));
          v52 &= ~(1 << v54);
        }
        while ( v52 );
      }
      for ( j = v56; j; j &= ~(1 << v51) )
      {
        v50 = *(_QWORD *)(a5 + 24);
        _BitScanReverse((unsigned int *)&v51, j);
        v57 = v51;
        RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(v50 + 8 * (v51 + 2 * (v51 + 1))));
      }
      v11 = v55;
    }
    v17 = v66;
    v18 = v64;
  }
  _m_prefetchw((const void *)(a5 + 8));
  v19 = *(_QWORD *)(a5 + 8);
  LODWORD(v65) = v19;
  do
  {
    v20 = *(_BYTE *)(a5 + 376);
    v21 = 0;
    v22 = v11 + HIDWORD(v19);
    v23 = 0;
    HIDWORD(v65) = v11 + HIDWORD(v19);
    if ( !v20 )
    {
      v24 = v65 ^ (unsigned __int16)(v65 ^ (v65 - 1));
      LODWORD(v65) = v24;
      if ( v17 )
      {
        v24 = (unsigned __int16)v24 | ((HIWORD(v24) - 1) << 16);
        LODWORD(v65) = v24;
      }
      if ( !v18 )
      {
        if ( v22 )
        {
          HIDWORD(v65) = --v22;
        }
        else
        {
          v21 = 1;
          v24 ^= (unsigned __int16)(v24 ^ (v24 + 1));
          LODWORD(v65) = v24;
        }
      }
      if ( (v11 || v17) && v22 && (v24 & 0xFFFF0000) == 0 )
      {
        v23 = 1;
        LODWORD(v65) = v24 + 0x10000;
      }
    }
    v25 = v19;
    v19 = _InterlockedCompareExchange64((volatile signed __int64 *)(a5 + 8), v65, v19);
    LODWORD(v65) = v19;
  }
  while ( v25 != v19 );
  if ( v23 )
    NtReleaseWorkerFactoryWorker(*(HANDLE *)(a5 + 56));
  result = v20;
  *a6 = v21;
  return result;
}
