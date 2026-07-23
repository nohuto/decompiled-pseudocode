/*
 * XREFs of RtlpAddDebugInfoToCriticalSection @ 0x180011840
 * Callers:
 *     RtlInitializeResource @ 0x1800112E0 (RtlInitializeResource.c)
 *     RtlInitializeCriticalSectionEx @ 0x180020BC0 (RtlInitializeCriticalSectionEx.c)
 *     RtlInitializeCriticalSection @ 0x180061460 (RtlInitializeCriticalSection.c)
 *     RtlpWaitOnCriticalSection @ 0x180063370 (RtlpWaitOnCriticalSection.c)
 *     RtlInitializeCriticalSectionAndSpinCount @ 0x180064830 (RtlInitializeCriticalSectionAndSpinCount.c)
 * Callees:
 *     RtlpFreeDebugInfo @ 0x180013E00 (RtlpFreeDebugInfo.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 *     RtlAllocateHeap @ 0x18002A9A0 (RtlAllocateHeap.c)
 *     RtlCaptureStackBackTrace @ 0x1800515A0 (RtlCaptureStackBackTrace.c)
 *     ZwAllocateVirtualMemory @ 0x18009D110 (ZwAllocateVirtualMemory.c)
 *     ZwAlertThreadByThreadId @ 0x18009DC00 (ZwAlertThreadByThreadId.c)
 *     RtlpInterlockedPopEntrySList @ 0x1800A09A0 (RtlpInterlockedPopEntrySList.c)
 *     RtlCompareMemory @ 0x1800A1770 (RtlCompareMemory.c)
 *     memmove @ 0x1800A3C00 (memmove.c)
 *     RtlStdReleaseStackTrace @ 0x1801010B0 (RtlStdReleaseStackTrace.c)
 */

int __fastcall RtlpAddDebugInfoToCriticalSection(__int64 a1)
{
  signed __int64 v2; // rdx
  PSLIST_ENTRY v3; // rbx
  signed __int64 Heap; // rax
  void *v5; // rcx
  PRTL_SRWLOCK v6; // rbp
  __int64 v7; // rsi
  volatile signed __int64 v8; // rbx
  signed __int64 *v9; // rax
  signed __int64 v10; // rbx
  __int64 v11; // rdx
  signed __int64 v12; // rcx
  signed __int64 v13; // rdx
  signed __int64 v14; // rtt
  _QWORD *v15; // r9
  __int64 v16; // rcx
  __int64 v17; // rax
  bool v18; // zf
  signed __int64 v19; // rax
  __int64 v20; // rbx
  _QWORD *v21; // rax
  USHORT v22; // ax
  __int64 v23; // r15
  _RTL_SRWLOCK *v24; // r12
  PSLIST_ENTRY Value; // r14
  signed __int64 v26; // rax
  __int64 v27; // rdx
  signed __int64 v28; // rcx
  signed __int64 v29; // rtt
  signed __int64 v30; // rax
  _QWORD *v31; // r9
  __int64 v32; // rcx
  _QWORD *v33; // rax
  __int64 v34; // rax
  unsigned int v35; // esi
  PSLIST_ENTRY v36; // rax
  unsigned __int64 v37; // r13
  unsigned __int64 v38; // r15
  void *Ptr; // rcx
  unsigned __int64 v40; // rsi
  signed __int64 v41; // rax
  __int64 v42; // rdx
  signed __int64 v43; // rcx
  signed __int64 v44; // rtt
  signed __int64 v45; // rax
  _QWORD *v46; // r9
  __int64 v47; // rcx
  _QWORD *v48; // rax
  __int64 v49; // rax
  signed __int64 v50; // rax
  __int64 v51; // rsi
  void *v52; // rax
  unsigned int v53; // eax
  __int16 v54; // cx
  signed __int64 v55; // rax
  __int64 v56; // rsi
  void *v57; // rax
  unsigned int v58; // eax
  _SLIST_ENTRY *v59; // rcx
  __int64 v60; // r8
  _RTL_SRWLOCK *v61; // r15
  _QWORD *v62; // r12
  char *v63; // rcx
  unsigned __int64 v64; // rsi
  signed __int64 v65; // rax
  __int64 v66; // rdx
  signed __int64 v67; // rcx
  signed __int64 v68; // rtt
  signed __int64 v69; // rax
  _QWORD *v70; // r9
  __int64 v71; // rcx
  _QWORD *v72; // rax
  __int64 v73; // rax
  signed __int64 v74; // rax
  __int64 v75; // rsi
  void *v76; // rax
  signed __int64 v77; // rax
  __int64 v78; // rdx
  signed __int64 v79; // rcx
  signed __int64 v80; // rtt
  signed __int64 v81; // rax
  _QWORD *v82; // r9
  __int64 v83; // rcx
  _QWORD *v84; // rax
  __int64 v85; // rax
  signed __int64 v86; // rax
  __int64 v87; // r15
  void *v88; // rax
  ULONG_PTR RegionSize; // [rsp+30h] [rbp-168h] BYREF
  size_t Size; // [rsp+38h] [rbp-160h]
  ULONG_PTR v92[3]; // [rsp+40h] [rbp-158h] BYREF
  USHORT v93; // [rsp+5Eh] [rbp-13Ah]
  PVOID BackTrace[32]; // [rsp+60h] [rbp-138h] BYREF
  ULONG BackTraceHash; // [rsp+1A8h] [rbp+10h] BYREF
  PVOID v96; // [rsp+1B0h] [rbp+18h] BYREF
  PVOID BaseAddress; // [rsp+1B8h] [rbp+20h] BYREF

  v3 = RtlpInterlockedPopEntrySList(&RtlCriticalSectionDebugSList);
  if ( !v3 )
  {
    Heap = (signed __int64)NtCurrentPeb();
    v5 = *(void **)(Heap + 48);
    if ( !v5 || (Heap = (signed __int64)RtlAllocateHeap(v5, 0, 0x30uLL), (v3 = (PSLIST_ENTRY)Heap) == 0LL) )
    {
      _InterlockedIncrement(&RtlFailedCriticalDebugAllocations);
      return Heap;
    }
  }
  LOWORD(v3->Next) = 0;
  if ( (*(_DWORD *)(a1 + 32) & 0x8000000) != 0 )
    LOWORD(v3->Next) = 1;
  v3[2].Next = 0LL;
  *((_QWORD *)&v3->Next + 1) = a1;
  *((_DWORD *)&v3[2].Next + 2) = 0;
  v6 = RtlpStackTraceDatabase;
  if ( !RtlpStackTraceDatabase )
  {
    LODWORD(v7) = 0;
    goto LABEL_8;
  }
  v22 = RtlCaptureStackBackTrace(3u, 0x20u, BackTrace, &BackTraceHash);
  v93 = v22;
  if ( !v22 )
    goto LABEL_171;
  v2 = BackTraceHash % *(_DWORD *)&v6[90].0;
  v23 = 8LL * v22;
  v24 = &v6[2 * (unsigned int)v2 + 91];
  Size = v23;
  _InterlockedIncrement((volatile signed __int32 *)&v6[22]);
  if ( !byte_18016A508 )
    RtlAcquireSRWLockExclusive(v24 + 1);
  Value = (PSLIST_ENTRY)v24->Value;
  if ( v24->Value )
  {
    while ( *((_WORD *)&Value->Next + 7) != v93 || RtlCompareMemory(&Value[1], BackTrace, v23) != v23 )
    {
      Value = Value->Next;
      if ( !Value )
        goto LABEL_42;
    }
    goto LABEL_101;
  }
LABEL_42:
  if ( !v93 )
  {
    Value = 0LL;
LABEL_44:
    _InterlockedIncrement((volatile signed __int32 *)&v6[25]);
    goto LABEL_45;
  }
  v35 = v93 - 1;
  if ( v35 >= 0x20 )
  {
LABEL_64:
    v37 = (8LL * v93 + 31) & 0xFFFFFFFFFFFFFFF0uLL;
    Value = 0LL;
    if ( !byte_18016A508 )
      RtlAcquireSRWLockExclusive(v6);
    v38 = v6[20].Value;
    Ptr = v6[18].Ptr;
    BaseAddress = Ptr;
    v40 = v38 + v37;
    if ( v6[16].0 )
    {
      if ( v40 <= v6[21].Value )
      {
LABEL_68:
        ++*(_DWORD *)&v6[24].0;
        Value = (PSLIST_ENTRY)v38;
        v6[20].Value = v40;
      }
    }
    else
    {
      if ( v40 <= (unsigned __int64)Ptr )
        goto LABEL_68;
      RegionSize = (v37 + 4095) & 0xFFFFFFFFFFFFF000uLL;
      if ( (unsigned __int64)Ptr + RegionSize < v6[19].Value
        && ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x1000u, 4u) >= 0 )
      {
        v6[18].Value = (unsigned __int64)BaseAddress + RegionSize;
        goto LABEL_68;
      }
    }
    if ( !byte_18016A508 )
    {
      v41 = _InterlockedCompareExchange64((volatile signed __int64 *)v6, 0LL, 1LL);
      if ( v41 != 1 )
      {
        do
        {
          v42 = 3LL;
          v43 = v41 & 6;
          if ( v43 != 2 )
            v42 = -1LL;
          v2 = v41 + v42;
          v44 = v41;
          v41 = _InterlockedCompareExchange64((volatile signed __int64 *)v6, v2, v41);
        }
        while ( v44 != v41 );
        if ( v43 == 2 )
        {
          while ( (v2 & 1) == 0 )
          {
LABEL_78:
            v46 = (_QWORD *)(v2 & 0xFFFFFFFFFFFFFFF0uLL);
            v47 = *(_QWORD *)((v2 & 0xFFFFFFFFFFFFFFF0uLL) + 8);
            if ( !v47 )
            {
              do
              {
                v48 = v46;
                v46 = (_QWORD *)*v46;
                v46[2] = v48;
                v47 = v46[1];
              }
              while ( !v47 );
              if ( v46 != (_QWORD *)(v2 & 0xFFFFFFFFFFFFFFF0uLL) )
                *(_QWORD *)((v2 & 0xFFFFFFFFFFFFFFF0uLL) + 8) = v47;
            }
            if ( (*(_DWORD *)(v47 + 36) & 1) != 0 )
            {
              v49 = *(_QWORD *)(v47 + 16);
              if ( v49 )
              {
                *(_QWORD *)((v2 & 0xFFFFFFFFFFFFFFF0uLL) + 8) = v49;
                *(_QWORD *)(v47 + 16) = 0LL;
                _InterlockedAnd64((volatile signed __int64 *)v6, 0xFFFFFFFFFFFFFFFBuLL);
                do
                {
LABEL_92:
                  v51 = *(_QWORD *)(v47 + 16);
                  v52 = *(void **)(v47 + 24);
                  _interlockedbittestandset((volatile signed __int32 *)(v47 + 36), 2u);
                  if ( !_interlockedbittestandreset((volatile signed __int32 *)(v47 + 36), 1u) )
                    ZwAlertThreadByThreadId(v52);
                  v47 = v51;
                }
                while ( v51 );
                goto LABEL_95;
              }
            }
            v50 = _InterlockedCompareExchange64((volatile signed __int64 *)v6, 0LL, v2);
            v18 = v2 == v50;
            v2 = v50;
            if ( v18 )
              goto LABEL_92;
          }
          while ( 1 )
          {
            v45 = _InterlockedCompareExchange64((volatile signed __int64 *)v6, v2 - 4, v2);
            v18 = v2 == v45;
            v2 = v45;
            if ( v18 )
              break;
            if ( (v45 & 1) == 0 )
              goto LABEL_78;
          }
        }
      }
    }
LABEL_95:
    v23 = Size;
    if ( Value )
    {
      v53 = ((unsigned int)(v37 - 16) >> 3) - 1;
      if ( v53 > 0x1F )
        LOWORD(v53) = 31;
      *((_WORD *)&Value->Next + 4) &= 0x7FFu;
      *((_WORD *)&Value->Next + 4) |= (_WORD)v53 << 11;
    }
    goto LABEL_99;
  }
  while ( 1 )
  {
    v36 = RtlpInterlockedPopEntrySList((PSLIST_HEADER)&v6[2 * v35 + 26]);
    if ( v36 )
      break;
    if ( ++v35 >= 0x20 )
      goto LABEL_64;
  }
  _InterlockedDecrement((volatile signed __int32 *)&v6[24].Ptr + 1);
  Value = v36 - 1;
LABEL_99:
  if ( !Value )
    goto LABEL_44;
  memmove(&Value[1], BackTrace, v23);
  HIDWORD(v2) = 0;
  *((_WORD *)&Value->Next + 7) = v93;
  *((_WORD *)&Value->Next + 4) &= 0xF800u;
  LODWORD(v2) = BackTraceHash % *(_DWORD *)&v6[90].0;
  Value->Next = (_SLIST_ENTRY *)v6[2 * (unsigned int)v2 + 91];
  v6[2 * (unsigned int)v2 + 91].Value = (unsigned __int64)Value;
LABEL_101:
  v54 = *((_WORD *)&Value->Next + 4);
  if ( (v54 & 0x7FF) != 0x7FF )
    *((_WORD *)&Value->Next + 4) = v54 ^ (v54 ^ (v54 + 1)) & 0x7FF;
LABEL_45:
  if ( !byte_18016A508 )
  {
    v26 = _InterlockedCompareExchange64((volatile signed __int64 *)&v24[1], 0LL, 1LL);
    if ( v26 != 1 )
    {
      do
      {
        v27 = 3LL;
        v28 = v26 & 6;
        if ( v28 != 2 )
          v27 = -1LL;
        v2 = v26 + v27;
        v29 = v26;
        v26 = _InterlockedCompareExchange64((volatile signed __int64 *)&v24[1], v2, v26);
      }
      while ( v29 != v26 );
      if ( v28 == 2 )
      {
        while ( (v2 & 1) == 0 )
        {
LABEL_54:
          v31 = (_QWORD *)(v2 & 0xFFFFFFFFFFFFFFF0uLL);
          v32 = *(_QWORD *)((v2 & 0xFFFFFFFFFFFFFFF0uLL) + 8);
          if ( !v32 )
          {
            do
            {
              v33 = v31;
              v31 = (_QWORD *)*v31;
              v31[2] = v33;
              v32 = v31[1];
            }
            while ( !v32 );
            if ( v31 != (_QWORD *)(v2 & 0xFFFFFFFFFFFFFFF0uLL) )
              *(_QWORD *)((v2 & 0xFFFFFFFFFFFFFFF0uLL) + 8) = v32;
          }
          if ( (*(_DWORD *)(v32 + 36) & 1) != 0 )
          {
            v34 = *(_QWORD *)(v32 + 16);
            if ( v34 )
            {
              *(_QWORD *)((v2 & 0xFFFFFFFFFFFFFFF0uLL) + 8) = v34;
              *(_QWORD *)(v32 + 16) = 0LL;
              _InterlockedAnd64((volatile signed __int64 *)&v24[1], 0xFFFFFFFFFFFFFFFBuLL);
              do
              {
LABEL_104:
                v56 = *(_QWORD *)(v32 + 16);
                v57 = *(void **)(v32 + 24);
                _interlockedbittestandset((volatile signed __int32 *)(v32 + 36), 2u);
                if ( !_interlockedbittestandreset((volatile signed __int32 *)(v32 + 36), 1u) )
                  ZwAlertThreadByThreadId(v57);
                v32 = v56;
              }
              while ( v56 );
              goto LABEL_107;
            }
          }
          v55 = _InterlockedCompareExchange64((volatile signed __int64 *)&v24[1], 0LL, v2);
          v18 = v2 == v55;
          v2 = v55;
          if ( v18 )
            goto LABEL_104;
        }
        while ( 1 )
        {
          v30 = _InterlockedCompareExchange64((volatile signed __int64 *)&v24[1], v2 - 4, v2);
          v18 = v2 == v30;
          v2 = v30;
          if ( v18 )
            break;
          if ( (v30 & 1) == 0 )
            goto LABEL_54;
        }
      }
    }
  }
LABEL_107:
  if ( Value )
  {
    v58 = 0;
    if ( *((_WORD *)&Value->Next + 7) )
    {
      v59 = Value + 1;
      v60 = *((unsigned __int16 *)&Value->Next + 7);
      do
      {
        v58 += LODWORD(v59->Next);
        v59 = (_SLIST_ENTRY *)((char *)v59 + 8);
        --v60;
      }
      while ( v60 );
    }
    v2 = v58 % *(_DWORD *)&v6[90].0;
    v61 = &v6[2 * (unsigned int)v2];
    if ( !byte_18016A508 )
      RtlAcquireSRWLockExclusive(v61 + 92);
    if ( *(_DWORD *)((char *)&Value->Next + 10) )
    {
      LODWORD(v7) = *((unsigned __int16 *)&Value->Next + 6) + (*((unsigned __int16 *)&Value->Next + 5) << 16);
LABEL_148:
      if ( !byte_18016A508 )
      {
        v77 = _InterlockedCompareExchange64((volatile signed __int64 *)&v61[92], 0LL, 1LL);
        if ( v77 != 1 )
        {
          do
          {
            v78 = 3LL;
            v79 = v77 & 6;
            if ( v79 != 2 )
              v78 = -1LL;
            v2 = v77 + v78;
            v80 = v77;
            v77 = _InterlockedCompareExchange64((volatile signed __int64 *)&v61[92], v2, v77);
          }
          while ( v80 != v77 );
          if ( v79 == 2 )
          {
            while ( (v2 & 1) == 0 )
            {
LABEL_157:
              v82 = (_QWORD *)(v2 & 0xFFFFFFFFFFFFFFF0uLL);
              v83 = *(_QWORD *)((v2 & 0xFFFFFFFFFFFFFFF0uLL) + 8);
              if ( !v83 )
              {
                do
                {
                  v84 = v82;
                  v82 = (_QWORD *)*v82;
                  v82[2] = v84;
                  v83 = v82[1];
                }
                while ( !v83 );
                if ( v82 != (_QWORD *)(v2 & 0xFFFFFFFFFFFFFFF0uLL) )
                  *(_QWORD *)((v2 & 0xFFFFFFFFFFFFFFF0uLL) + 8) = v83;
              }
              if ( (*(_DWORD *)(v83 + 36) & 1) != 0 )
              {
                v85 = *(_QWORD *)(v83 + 16);
                if ( v85 )
                {
                  *(_QWORD *)((v2 & 0xFFFFFFFFFFFFFFF0uLL) + 8) = v85;
                  *(_QWORD *)(v83 + 16) = 0LL;
                  _InterlockedAnd64((volatile signed __int64 *)&v61[92], 0xFFFFFFFFFFFFFFFBuLL);
                  do
                  {
LABEL_165:
                    v87 = *(_QWORD *)(v83 + 16);
                    v88 = *(void **)(v83 + 24);
                    _interlockedbittestandset((volatile signed __int32 *)(v83 + 36), 2u);
                    if ( !_interlockedbittestandreset((volatile signed __int32 *)(v83 + 36), 1u) )
                      ZwAlertThreadByThreadId(v88);
                    v83 = v87;
                  }
                  while ( v87 );
                  goto LABEL_168;
                }
              }
              v86 = _InterlockedCompareExchange64((volatile signed __int64 *)&v61[92], 0LL, v2);
              v18 = v2 == v86;
              v2 = v86;
              if ( v18 )
                goto LABEL_165;
            }
            while ( 1 )
            {
              v81 = _InterlockedCompareExchange64((volatile signed __int64 *)&v61[92], v2 - 4, v2);
              v18 = v2 == v81;
              v2 = v81;
              if ( v18 )
                break;
              if ( (v81 & 1) == 0 )
                goto LABEL_157;
            }
          }
        }
      }
LABEL_168:
      if ( !(_DWORD)v7 )
        RtlStdReleaseStackTrace(v6, Value);
      goto LABEL_8;
    }
    v62 = 0LL;
    if ( !byte_18016A508 )
      RtlAcquireSRWLockExclusive(v6);
    v63 = (char *)v6[19].Value;
    v64 = v6[21].Value - 8;
    v18 = v6[16].0 == 0;
    v96 = v63;
    if ( v18 )
    {
      if ( v64 < (unsigned __int64)v63 )
      {
        v92[0] = 4096LL;
        if ( (unsigned __int64)(v63 - 4096) <= v6[18].Value
          || (v96 = v63 - 4096, ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &v96, 0LL, v92, 0x1000u, 4u) < 0) )
        {
LABEL_124:
          if ( !byte_18016A508 )
          {
            v65 = _InterlockedCompareExchange64((volatile signed __int64 *)v6, 0LL, 1LL);
            if ( v65 != 1 )
            {
              do
              {
                v66 = 3LL;
                v67 = v65 & 6;
                if ( v67 != 2 )
                  v66 = -1LL;
                v2 = v65 + v66;
                v68 = v65;
                v65 = _InterlockedCompareExchange64((volatile signed __int64 *)v6, v2, v65);
              }
              while ( v68 != v65 );
              if ( v67 == 2 )
              {
                while ( (v2 & 1) == 0 )
                {
LABEL_133:
                  v70 = (_QWORD *)(v2 & 0xFFFFFFFFFFFFFFF0uLL);
                  v71 = *(_QWORD *)((v2 & 0xFFFFFFFFFFFFFFF0uLL) + 8);
                  if ( !v71 )
                  {
                    do
                    {
                      v72 = v70;
                      v70 = (_QWORD *)*v70;
                      v70[2] = v72;
                      v71 = v70[1];
                    }
                    while ( !v71 );
                    if ( v70 != (_QWORD *)(v2 & 0xFFFFFFFFFFFFFFF0uLL) )
                      *(_QWORD *)((v2 & 0xFFFFFFFFFFFFFFF0uLL) + 8) = v71;
                  }
                  if ( (*(_DWORD *)(v71 + 36) & 1) != 0 )
                  {
                    v73 = *(_QWORD *)(v71 + 16);
                    if ( v73 )
                    {
                      *(_QWORD *)((v2 & 0xFFFFFFFFFFFFFFF0uLL) + 8) = v73;
                      *(_QWORD *)(v71 + 16) = 0LL;
                      _InterlockedAnd64((volatile signed __int64 *)v6, 0xFFFFFFFFFFFFFFFBuLL);
                      do
                      {
LABEL_141:
                        v75 = *(_QWORD *)(v71 + 16);
                        v76 = *(void **)(v71 + 24);
                        _interlockedbittestandset((volatile signed __int32 *)(v71 + 36), 2u);
                        if ( !_interlockedbittestandreset((volatile signed __int32 *)(v71 + 36), 1u) )
                          ZwAlertThreadByThreadId(v76);
                        v71 = v75;
                      }
                      while ( v75 );
                      goto LABEL_144;
                    }
                  }
                  v74 = _InterlockedCompareExchange64((volatile signed __int64 *)v6, 0LL, v2);
                  v18 = v2 == v74;
                  v2 = v74;
                  if ( v18 )
                    goto LABEL_141;
                }
                while ( 1 )
                {
                  v69 = _InterlockedCompareExchange64((volatile signed __int64 *)v6, v2 - 4, v2);
                  v18 = v2 == v69;
                  v2 = v69;
                  if ( v18 )
                    break;
                  if ( (v69 & 1) == 0 )
                    goto LABEL_133;
                }
              }
            }
          }
LABEL_144:
          if ( v62 )
          {
            *v62 = Value;
            v7 = (__int64)(v6[23].Value - (_QWORD)v62) >> 3;
            *((_WORD *)&Value->Next + 6) = v7;
            *((_WORD *)&Value->Next + 5) = WORD1(v7);
          }
          else
          {
            LODWORD(v7) = 0;
          }
          goto LABEL_148;
        }
        v6[19].Value = (unsigned __int64)v96;
      }
    }
    else if ( v64 < v6[20].Value )
    {
      goto LABEL_124;
    }
    ++HIDWORD(v6[22].Ptr);
    v62 = (_QWORD *)v64;
    v6[21].Value = v64;
    goto LABEL_124;
  }
LABEL_171:
  LODWORD(v7) = 0;
LABEL_8:
  WORD1(v3->Next) = v7;
  *((_WORD *)&v3[2].Next + 6) = WORD1(v7);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)a1, (signed __int64)v3, -1LL) == -1 )
  {
    v8 = *(_QWORD *)a1;
    RtlAcquireSRWLockExclusive(&RtlCriticalSectionLock);
    v9 = (signed __int64 *)off_180164578[0];
    v10 = v8 + 16;
    if ( *(_UNKNOWN ***)off_180164578[0] != &RtlCriticalSectionList )
      __fastfail(3u);
    *(_UNKNOWN ***)(v10 + 8) = off_180164578[0];
    *(_QWORD *)v10 = &RtlCriticalSectionList;
    *v9 = v10;
    off_180164578[0] = (_UNKNOWN **)v10;
    Heap = _InterlockedCompareExchange64((volatile signed __int64 *)&RtlCriticalSectionLock, 0LL, 1LL);
    if ( Heap != 1 )
    {
      do
      {
        v11 = 3LL;
        v12 = Heap & 6;
        if ( v12 != 2 )
          v11 = -1LL;
        v13 = Heap + v11;
        v14 = Heap;
        Heap = _InterlockedCompareExchange64((volatile signed __int64 *)&RtlCriticalSectionLock, v13, Heap);
      }
      while ( v14 != Heap );
      if ( v12 == 2 )
      {
        while ( (v13 & 1) == 0 )
        {
LABEL_18:
          v15 = (_QWORD *)(v13 & 0xFFFFFFFFFFFFFFF0uLL);
          v16 = *(_QWORD *)((v13 & 0xFFFFFFFFFFFFFFF0uLL) + 8);
          if ( !v16 )
          {
            do
            {
              v21 = v15;
              v15 = (_QWORD *)*v15;
              v15[2] = v21;
              v16 = v15[1];
            }
            while ( !v16 );
            if ( v15 != (_QWORD *)(v13 & 0xFFFFFFFFFFFFFFF0uLL) )
              *(_QWORD *)((v13 & 0xFFFFFFFFFFFFFFF0uLL) + 8) = v16;
          }
          if ( (*(_DWORD *)(v16 + 36) & 1) != 0 )
          {
            v17 = *(_QWORD *)(v16 + 16);
            if ( v17 )
            {
              *(_QWORD *)((v13 & 0xFFFFFFFFFFFFFFF0uLL) + 8) = v17;
              *(_QWORD *)(v16 + 16) = 0LL;
              _InterlockedAnd64((volatile signed __int64 *)&RtlCriticalSectionLock, 0xFFFFFFFFFFFFFFFBuLL);
              do
              {
LABEL_22:
                v20 = *(_QWORD *)(v16 + 16);
                Heap = *(_QWORD *)(v16 + 24);
                _interlockedbittestandset((volatile signed __int32 *)(v16 + 36), 2u);
                if ( !_interlockedbittestandreset((volatile signed __int32 *)(v16 + 36), 1u) )
                  LODWORD(Heap) = ZwAlertThreadByThreadId((HANDLE)Heap);
                v16 = v20;
              }
              while ( v20 );
              return Heap;
            }
          }
          v19 = _InterlockedCompareExchange64((volatile signed __int64 *)&RtlCriticalSectionLock, 0LL, v13);
          v18 = v13 == v19;
          v13 = v19;
          if ( v18 )
            goto LABEL_22;
        }
        while ( 1 )
        {
          Heap = _InterlockedCompareExchange64((volatile signed __int64 *)&RtlCriticalSectionLock, v13 - 4, v13);
          v18 = v13 == Heap;
          v13 = Heap;
          if ( v18 )
            break;
          if ( (Heap & 1) == 0 )
            goto LABEL_18;
        }
      }
    }
  }
  else
  {
    LODWORD(Heap) = RtlpFreeDebugInfo(v3, v2);
  }
  return Heap;
}
