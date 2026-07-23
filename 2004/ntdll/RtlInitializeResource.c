/*
 * XREFs of RtlInitializeResource @ 0x1800112E0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpAddDebugInfoToCriticalSection @ 0x180011840 (RtlpAddDebugInfoToCriticalSection.c)
 *     RtlpFreeDebugInfo @ 0x180013E00 (RtlpFreeDebugInfo.c)
 *     RtlInitializeCriticalSectionEx @ 0x180020BC0 (RtlInitializeCriticalSectionEx.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 *     RtlAllocateHeap @ 0x18002A9A0 (RtlAllocateHeap.c)
 *     RtlCaptureStackBackTrace @ 0x1800515A0 (RtlCaptureStackBackTrace.c)
 *     NtClose @ 0x18009CFF0 (NtClose.c)
 *     ZwAllocateVirtualMemory @ 0x18009D110 (ZwAllocateVirtualMemory.c)
 *     ZwAlertThreadByThreadId @ 0x18009DC00 (ZwAlertThreadByThreadId.c)
 *     NtCreateSemaphore @ 0x18009E5E0 (NtCreateSemaphore.c)
 *     RtlpInterlockedPopEntrySList @ 0x1800A09A0 (RtlpInterlockedPopEntrySList.c)
 *     RtlCompareMemory @ 0x1800A1770 (RtlCompareMemory.c)
 *     memmove @ 0x1800A3C00 (memmove.c)
 *     RtlStdReleaseStackTrace @ 0x1801010B0 (RtlStdReleaseStackTrace.c)
 *     RtlRaiseStatus @ 0x180102310 (RtlRaiseStatus.c)
 */

void __cdecl RtlInitializeResource(PRTL_RESOURCE Resource)
{
  _RTL_CRITICAL_SECTION_DEBUG *Heap; // rdi
  void *ProcessHeap; // rcx
  volatile signed __int32 *v4; // r12
  PRTL_SRWLOCK v5; // r14
  __int64 v6; // rsi
  __int64 v7; // rdx
  int v8; // esi
  int v9; // esi
  USHORT v10; // ax
  SIZE_T v11; // r12
  _RTL_SRWLOCK *v12; // r13
  PSLIST_ENTRY Value; // r15
  unsigned int v14; // esi
  PSLIST_ENTRY v15; // rax
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // r12
  void *Ptr; // rcx
  unsigned __int64 v19; // rsi
  __int64 v20; // rcx
  __int16 v21; // cx
  signed __int64 v22; // rax
  __int64 v23; // rdx
  signed __int64 v24; // rcx
  signed __int64 v25; // rdx
  signed __int64 v26; // rtt
  bool v27; // zf
  signed __int64 v28; // rax
  _QWORD *v29; // r9
  __int64 v30; // rcx
  _QWORD *v31; // rax
  __int64 v32; // rax
  bool v33; // sf
  signed __int64 v34; // rax
  __int64 v35; // rdx
  signed __int64 v36; // rcx
  signed __int64 v37; // rdx
  signed __int64 v38; // rtt
  signed __int64 v39; // rax
  _QWORD *v40; // r9
  __int64 v41; // rcx
  _QWORD *v42; // rax
  __int64 v43; // rax
  signed __int64 v44; // rax
  __int64 v45; // rsi
  void *v46; // rax
  unsigned int v47; // eax
  signed __int64 v48; // rax
  __int64 v49; // rsi
  void *v50; // rax
  unsigned int v51; // eax
  _SLIST_ENTRY *v52; // rcx
  __int64 v53; // r8
  _RTL_SRWLOCK *v54; // r13
  char *v55; // rcx
  unsigned __int64 v56; // rsi
  signed __int64 v57; // rax
  __int64 v58; // rdx
  signed __int64 v59; // rcx
  signed __int64 v60; // rdx
  signed __int64 v61; // rtt
  signed __int64 v62; // rax
  _QWORD *v63; // r9
  __int64 v64; // rcx
  _QWORD *v65; // rax
  __int64 v66; // rax
  signed __int64 v67; // rax
  __int64 v68; // rsi
  void *v69; // rax
  signed __int64 v70; // rax
  __int64 v71; // rdx
  signed __int64 v72; // rcx
  signed __int64 v73; // rdx
  signed __int64 v74; // rtt
  signed __int64 v75; // rax
  _QWORD *v76; // r9
  volatile signed __int32 *v77; // rcx
  _QWORD *v78; // rax
  __int64 v79; // rax
  signed __int64 v80; // rax
  void *v81; // rax
  __int64 v82; // rdx
  PVOID BaseAddress; // [rsp+30h] [rbp-D0h] BYREF
  ULONG_PTR RegionSize; // [rsp+38h] [rbp-C8h] BYREF
  SIZE_T v85; // [rsp+40h] [rbp-C0h]
  HANDLE SemaphoreHandle; // [rsp+48h] [rbp-B8h] BYREF
  ULONG_PTR v87; // [rsp+50h] [rbp-B0h] BYREF
  HANDLE v88; // [rsp+58h] [rbp-A8h] BYREF
  USHORT v89; // [rsp+6Eh] [rbp-92h]
  PVOID BackTrace[32]; // [rsp+70h] [rbp-90h] BYREF
  ULONG BackTraceHash; // [rsp+1B8h] [rbp+B8h] BYREF
  unsigned __int64 v92; // [rsp+1C0h] [rbp+C0h]
  PVOID v93; // [rsp+1C8h] [rbp+C8h] BYREF

  Heap = (_RTL_CRITICAL_SECTION_DEBUG *)RtlpInterlockedPopEntrySList(&RtlCriticalSectionDebugSList);
  if ( !Heap )
  {
    ProcessHeap = NtCurrentPeb()->ProcessHeap;
    if ( !ProcessHeap || (Heap = (_RTL_CRITICAL_SECTION_DEBUG *)RtlAllocateHeap(ProcessHeap, 0, 0x30uLL)) == 0LL )
      RtlRaiseStatus(-1073741801);
  }
  v4 = 0LL;
  Heap->ContentionCount = 0;
  v5 = RtlpStackTraceDatabase;
  if ( !RtlpStackTraceDatabase )
  {
    LODWORD(v6) = 0;
    goto LABEL_6;
  }
  v10 = RtlCaptureStackBackTrace(2u, 0x20u, BackTrace, &BackTraceHash);
  v89 = v10;
  if ( !v10 )
    goto LABEL_152;
  v11 = 8LL * v10;
  v12 = &v5[2 * (BackTraceHash % *(_DWORD *)&v5[90].0) + 91];
  v85 = v11;
  _InterlockedIncrement((volatile signed __int32 *)&v5[22]);
  if ( !byte_18016A508 )
    RtlAcquireSRWLockExclusive(v12 + 1);
  Value = (PSLIST_ENTRY)v12->Value;
  if ( v12->Value )
  {
    while ( *((_WORD *)&Value->Next + 7) != v89 || RtlCompareMemory(&Value[1], BackTrace, v11) != v11 )
    {
      Value = Value->Next;
      if ( !Value )
        goto LABEL_19;
    }
    goto LABEL_32;
  }
LABEL_19:
  if ( !v89 )
  {
    v4 = 0LL;
    Value = 0LL;
LABEL_83:
    _InterlockedIncrement((volatile signed __int32 *)&v5[25]);
    goto LABEL_35;
  }
  v14 = v89 - 1;
  if ( v14 >= 0x20 )
  {
LABEL_24:
    v16 = (8LL * v89 + 31) & 0xFFFFFFFFFFFFFFF0uLL;
    Value = 0LL;
    v92 = v16;
    if ( !byte_18016A508 )
    {
      RtlAcquireSRWLockExclusive(v5);
      v16 = v92;
    }
    v17 = v5[20].Value;
    Ptr = v5[18].Ptr;
    BaseAddress = Ptr;
    v19 = v16 + v17;
    if ( v5[16].0 )
    {
      if ( v19 > v5[21].Value )
      {
LABEL_57:
        if ( !byte_18016A508 )
        {
          v34 = _InterlockedCompareExchange64((volatile signed __int64 *)v5, 0LL, 1LL);
          if ( v34 != 1 )
          {
            do
            {
              v35 = 3LL;
              v36 = v34 & 6;
              if ( v36 != 2 )
                v35 = -1LL;
              v37 = v34 + v35;
              v38 = v34;
              v34 = _InterlockedCompareExchange64((volatile signed __int64 *)v5, v37, v34);
            }
            while ( v38 != v34 );
            if ( v36 == 2 )
            {
              while ( (v37 & 1) == 0 )
              {
LABEL_66:
                v40 = (_QWORD *)(v37 & 0xFFFFFFFFFFFFFFF0uLL);
                v41 = *(_QWORD *)((v37 & 0xFFFFFFFFFFFFFFF0uLL) + 8);
                if ( !v41 )
                {
                  do
                  {
                    v42 = v40;
                    v40 = (_QWORD *)*v40;
                    v40[2] = v42;
                    v41 = v40[1];
                  }
                  while ( !v41 );
                  if ( v40 != (_QWORD *)(v37 & 0xFFFFFFFFFFFFFFF0uLL) )
                    *(_QWORD *)((v37 & 0xFFFFFFFFFFFFFFF0uLL) + 8) = v41;
                }
                if ( (*(_DWORD *)(v41 + 36) & 1) != 0 )
                {
                  v43 = *(_QWORD *)(v41 + 16);
                  if ( v43 )
                  {
                    *(_QWORD *)((v37 & 0xFFFFFFFFFFFFFFF0uLL) + 8) = v43;
                    *(_QWORD *)(v41 + 16) = 0LL;
                    _InterlockedAnd64((volatile signed __int64 *)v5, 0xFFFFFFFFFFFFFFFBuLL);
                    do
                    {
LABEL_74:
                      v45 = *(_QWORD *)(v41 + 16);
                      v46 = *(void **)(v41 + 24);
                      _interlockedbittestandset((volatile signed __int32 *)(v41 + 36), 2u);
                      if ( !_interlockedbittestandreset((volatile signed __int32 *)(v41 + 36), 1u) )
                        ZwAlertThreadByThreadId(v46);
                      v41 = v45;
                    }
                    while ( v45 );
                    goto LABEL_77;
                  }
                }
                v44 = _InterlockedCompareExchange64((volatile signed __int64 *)v5, 0LL, v37);
                v27 = v37 == v44;
                v37 = v44;
                if ( v27 )
                  goto LABEL_74;
              }
              while ( 1 )
              {
                v39 = _InterlockedCompareExchange64((volatile signed __int64 *)v5, v37 - 4, v37);
                v27 = v37 == v39;
                v37 = v39;
                if ( v27 )
                  break;
                if ( (v39 & 1) == 0 )
                  goto LABEL_66;
              }
            }
          }
LABEL_77:
          LODWORD(v16) = v92;
        }
        v11 = v85;
        if ( Value )
        {
          v47 = ((unsigned int)(v16 - 16) >> 3) - 1;
          if ( v47 > 0x1F )
            LOWORD(v47) = 31;
          *((_WORD *)&Value->Next + 4) &= 0x7FFu;
          *((_WORD *)&Value->Next + 4) |= (_WORD)v47 << 11;
        }
        goto LABEL_30;
      }
    }
    else if ( v19 > (unsigned __int64)Ptr )
    {
      RegionSize = (v16 + 4095) & 0xFFFFFFFFFFFFF000uLL;
      if ( (unsigned __int64)Ptr + RegionSize >= v5[19].Value )
      {
        LODWORD(v16) = v92;
        goto LABEL_57;
      }
      v33 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x1000u, 4u) < 0;
      LODWORD(v16) = v92;
      if ( v33 )
        goto LABEL_57;
      v5[18].Value = (unsigned __int64)BaseAddress + RegionSize;
    }
    ++*(_DWORD *)&v5[24].0;
    Value = (PSLIST_ENTRY)v17;
    v5[20].Value = v19;
    goto LABEL_57;
  }
  while ( 1 )
  {
    v15 = RtlpInterlockedPopEntrySList((PSLIST_HEADER)&v5[2 * v14 + 26]);
    if ( v15 )
      break;
    if ( ++v14 >= 0x20 )
      goto LABEL_24;
  }
  _InterlockedDecrement((volatile signed __int32 *)&v5[24].Ptr + 1);
  Value = v15 - 1;
LABEL_30:
  if ( !Value )
  {
    v4 = 0LL;
    goto LABEL_83;
  }
  memmove(&Value[1], BackTrace, v11);
  *((_WORD *)&Value->Next + 7) = v89;
  *((_WORD *)&Value->Next + 4) &= 0xF800u;
  v20 = 2LL * (BackTraceHash % *(_DWORD *)&v5[90].0);
  Value->Next = (_SLIST_ENTRY *)v5[2 * (BackTraceHash % *(_DWORD *)&v5[90].0) + 91];
  v5[v20 + 91].Value = (unsigned __int64)Value;
LABEL_32:
  v21 = *((_WORD *)&Value->Next + 4);
  if ( (v21 & 0x7FF) != 0x7FF )
    *((_WORD *)&Value->Next + 4) = v21 ^ (v21 ^ (v21 + 1)) & 0x7FF;
  v4 = 0LL;
LABEL_35:
  if ( !byte_18016A508 )
  {
    v22 = _InterlockedCompareExchange64((volatile signed __int64 *)&v12[1], 0LL, 1LL);
    if ( v22 != 1 )
    {
      do
      {
        v23 = 3LL;
        v24 = v22 & 6;
        if ( v24 != 2 )
          v23 = -1LL;
        v25 = v22 + v23;
        v26 = v22;
        v22 = _InterlockedCompareExchange64((volatile signed __int64 *)&v12[1], v25, v22);
      }
      while ( v26 != v22 );
      if ( v24 == 2 )
      {
        while ( (v25 & 1) == 0 )
        {
LABEL_44:
          v29 = (_QWORD *)(v25 & 0xFFFFFFFFFFFFFFF0uLL);
          v30 = *(_QWORD *)((v25 & 0xFFFFFFFFFFFFFFF0uLL) + 8);
          if ( !v30 )
          {
            do
            {
              v31 = v29;
              v29 = (_QWORD *)*v29;
              v29[2] = v31;
              v30 = v29[1];
            }
            while ( !v30 );
            if ( v29 != (_QWORD *)(v25 & 0xFFFFFFFFFFFFFFF0uLL) )
              *(_QWORD *)((v25 & 0xFFFFFFFFFFFFFFF0uLL) + 8) = v30;
          }
          if ( (*(_DWORD *)(v30 + 36) & 1) != 0 )
          {
            v32 = *(_QWORD *)(v30 + 16);
            if ( v32 )
            {
              *(_QWORD *)((v25 & 0xFFFFFFFFFFFFFFF0uLL) + 8) = v32;
              *(_QWORD *)(v30 + 16) = 0LL;
              _InterlockedAnd64((volatile signed __int64 *)&v12[1], 0xFFFFFFFFFFFFFFFBuLL);
              do
              {
LABEL_85:
                v49 = *(_QWORD *)(v30 + 16);
                v50 = *(void **)(v30 + 24);
                _interlockedbittestandset((volatile signed __int32 *)(v30 + 36), 2u);
                if ( !_interlockedbittestandreset((volatile signed __int32 *)(v30 + 36), 1u) )
                  ZwAlertThreadByThreadId(v50);
                v30 = v49;
              }
              while ( v49 );
              goto LABEL_88;
            }
          }
          v48 = _InterlockedCompareExchange64((volatile signed __int64 *)&v12[1], 0LL, v25);
          v27 = v25 == v48;
          v25 = v48;
          if ( v27 )
            goto LABEL_85;
        }
        while ( 1 )
        {
          v28 = _InterlockedCompareExchange64((volatile signed __int64 *)&v12[1], v25 - 4, v25);
          v27 = v25 == v28;
          v25 = v28;
          if ( v27 )
            break;
          if ( (v28 & 1) == 0 )
            goto LABEL_44;
        }
      }
    }
  }
LABEL_88:
  if ( !Value )
  {
LABEL_152:
    LODWORD(v6) = 0;
    goto LABEL_6;
  }
  v51 = 0;
  if ( *((_WORD *)&Value->Next + 7) )
  {
    v52 = Value + 1;
    v53 = *((unsigned __int16 *)&Value->Next + 7);
    do
    {
      v51 += LODWORD(v52->Next);
      v52 = (_SLIST_ENTRY *)((char *)v52 + 8);
      --v53;
    }
    while ( v53 );
  }
  v54 = &v5[2 * (v51 % *(_DWORD *)&v5[90].0)];
  if ( !byte_18016A508 )
    RtlAcquireSRWLockExclusive(v54 + 92);
  if ( !*(_DWORD *)((char *)&Value->Next + 10) )
  {
    if ( !byte_18016A508 )
      RtlAcquireSRWLockExclusive(v5);
    v55 = (char *)v5[19].Value;
    v56 = v5[21].Value - 8;
    v27 = v5[16].0 == 0;
    v93 = v55;
    if ( v27 )
    {
      if ( v56 < (unsigned __int64)v55 )
      {
        v87 = 4096LL;
        if ( (unsigned __int64)(v55 - 4096) <= v5[18].Value
          || (v93 = v55 - 4096, ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &v93, 0LL, &v87, 0x1000u, 4u) < 0) )
        {
LABEL_105:
          if ( !byte_18016A508 )
          {
            v57 = _InterlockedCompareExchange64((volatile signed __int64 *)v5, 0LL, 1LL);
            if ( v57 != 1 )
            {
              do
              {
                v58 = 3LL;
                v59 = v57 & 6;
                if ( v59 != 2 )
                  v58 = -1LL;
                v60 = v57 + v58;
                v61 = v57;
                v57 = _InterlockedCompareExchange64((volatile signed __int64 *)v5, v60, v57);
              }
              while ( v61 != v57 );
              if ( v59 == 2 )
              {
                while ( (v60 & 1) == 0 )
                {
LABEL_114:
                  v63 = (_QWORD *)(v60 & 0xFFFFFFFFFFFFFFF0uLL);
                  v64 = *(_QWORD *)((v60 & 0xFFFFFFFFFFFFFFF0uLL) + 8);
                  if ( !v64 )
                  {
                    do
                    {
                      v65 = v63;
                      v63 = (_QWORD *)*v63;
                      v63[2] = v65;
                      v64 = v63[1];
                    }
                    while ( !v64 );
                    if ( v63 != (_QWORD *)(v60 & 0xFFFFFFFFFFFFFFF0uLL) )
                      *(_QWORD *)((v60 & 0xFFFFFFFFFFFFFFF0uLL) + 8) = v64;
                  }
                  if ( (*(_DWORD *)(v64 + 36) & 1) != 0 )
                  {
                    v66 = *(_QWORD *)(v64 + 16);
                    if ( v66 )
                    {
                      *(_QWORD *)((v60 & 0xFFFFFFFFFFFFFFF0uLL) + 8) = v66;
                      *(_QWORD *)(v64 + 16) = 0LL;
                      _InterlockedAnd64((volatile signed __int64 *)v5, 0xFFFFFFFFFFFFFFFBuLL);
                      do
                      {
LABEL_122:
                        v68 = *(_QWORD *)(v64 + 16);
                        v69 = *(void **)(v64 + 24);
                        _interlockedbittestandset((volatile signed __int32 *)(v64 + 36), 2u);
                        if ( !_interlockedbittestandreset((volatile signed __int32 *)(v64 + 36), 1u) )
                          ZwAlertThreadByThreadId(v69);
                        v64 = v68;
                      }
                      while ( v68 );
                      goto LABEL_125;
                    }
                  }
                  v67 = _InterlockedCompareExchange64((volatile signed __int64 *)v5, 0LL, v60);
                  v27 = v60 == v67;
                  v60 = v67;
                  if ( v27 )
                    goto LABEL_122;
                }
                while ( 1 )
                {
                  v62 = _InterlockedCompareExchange64((volatile signed __int64 *)v5, v60 - 4, v60);
                  v27 = v60 == v62;
                  v60 = v62;
                  if ( v27 )
                    break;
                  if ( (v62 & 1) == 0 )
                    goto LABEL_114;
                }
              }
            }
          }
LABEL_125:
          if ( v4 )
          {
            *(_QWORD *)v4 = Value;
            v6 = (__int64)(v5[23].Value - (_QWORD)v4) >> 3;
            *((_WORD *)&Value->Next + 6) = v6;
            *((_WORD *)&Value->Next + 5) = WORD1(v6);
            v4 = 0LL;
          }
          else
          {
            LODWORD(v6) = 0;
          }
          goto LABEL_129;
        }
        v5[19].Value = (unsigned __int64)v93;
      }
    }
    else if ( v56 < v5[20].Value )
    {
      goto LABEL_105;
    }
    ++HIDWORD(v5[22].Ptr);
    v4 = (volatile signed __int32 *)v56;
    v5[21].Value = v56;
    goto LABEL_105;
  }
  LODWORD(v6) = *((unsigned __int16 *)&Value->Next + 6) + (*((unsigned __int16 *)&Value->Next + 5) << 16);
LABEL_129:
  if ( !byte_18016A508 )
  {
    v70 = _InterlockedCompareExchange64((volatile signed __int64 *)&v54[92], 0LL, 1LL);
    if ( v70 != 1 )
    {
      do
      {
        v71 = 3LL;
        v72 = v70 & 6;
        if ( v72 != 2 )
          v71 = -1LL;
        v73 = v70 + v71;
        v74 = v70;
        v70 = _InterlockedCompareExchange64((volatile signed __int64 *)&v54[92], v73, v70);
      }
      while ( v74 != v70 );
      if ( v72 == 2 )
      {
        while ( (v73 & 1) == 0 )
        {
LABEL_138:
          v76 = (_QWORD *)(v73 & 0xFFFFFFFFFFFFFFF0uLL);
          v77 = *(volatile signed __int32 **)((v73 & 0xFFFFFFFFFFFFFFF0uLL) + 8);
          if ( !v77 )
          {
            do
            {
              v78 = v76;
              v76 = (_QWORD *)*v76;
              v76[2] = v78;
              v77 = (volatile signed __int32 *)v76[1];
            }
            while ( !v77 );
            if ( v76 != (_QWORD *)(v73 & 0xFFFFFFFFFFFFFFF0uLL) )
              *(_QWORD *)((v73 & 0xFFFFFFFFFFFFFFF0uLL) + 8) = v77;
          }
          if ( (v77[9] & 1) != 0 )
          {
            v79 = *((_QWORD *)v77 + 2);
            if ( v79 )
            {
              *(_QWORD *)((v73 & 0xFFFFFFFFFFFFFFF0uLL) + 8) = v79;
              *((_QWORD *)v77 + 2) = 0LL;
              _InterlockedAnd64((volatile signed __int64 *)&v54[92], 0xFFFFFFFFFFFFFFFBuLL);
              do
              {
LABEL_146:
                v4 = (volatile signed __int32 *)*((_QWORD *)v77 + 2);
                v81 = (void *)*((_QWORD *)v77 + 3);
                _interlockedbittestandset(v77 + 9, 2u);
                if ( !_interlockedbittestandreset(v77 + 9, 1u) )
                  ZwAlertThreadByThreadId(v81);
                v77 = v4;
              }
              while ( v4 );
              goto LABEL_149;
            }
          }
          v80 = _InterlockedCompareExchange64((volatile signed __int64 *)&v54[92], 0LL, v73);
          v27 = v73 == v80;
          v73 = v80;
          if ( v27 )
            goto LABEL_146;
        }
        while ( 1 )
        {
          v75 = _InterlockedCompareExchange64((volatile signed __int64 *)&v54[92], v73 - 4, v73);
          v27 = v73 == v75;
          v73 = v75;
          if ( v27 )
            break;
          if ( (v75 & 1) == 0 )
            goto LABEL_138;
        }
      }
    }
  }
LABEL_149:
  if ( !(_DWORD)v6 )
    RtlStdReleaseStackTrace(v5, Value);
LABEL_6:
  Heap->CreatorBackTraceIndex = v6;
  Heap->CreatorBackTraceIndexHigh = WORD1(v6);
  v8 = NtCreateSemaphore(&SemaphoreHandle, 0x100003u, 0LL, 0, 0x7FFFFFFF);
  if ( v8 < 0 )
  {
    RtlpFreeDebugInfo(Heap, v7);
    RtlRaiseStatus(v8);
  }
  v9 = NtCreateSemaphore(&v88, 0x100003u, 0LL, 0, 0x7FFFFFFF);
  if ( v9 < 0 )
  {
    NtClose(SemaphoreHandle);
    RtlpFreeDebugInfo(Heap, v82);
    RtlRaiseStatus(v9);
  }
  Resource->SharedSemaphore = SemaphoreHandle;
  Resource->ExclusiveSemaphore = v88;
  Resource->NumberOfWaitingShared = (unsigned int)v4;
  *(_QWORD *)&Resource->NumberOfWaitingExclusive = 0LL;
  Resource->ExclusiveOwnerThread = (HANDLE)v4;
  Resource->Flags = (unsigned int)v4;
  Resource->DebugInfo = Heap;
  RtlInitializeCriticalSectionEx(&Resource->CriticalSection, 0, 0x8000000u);
  RtlpAddDebugInfoToCriticalSection(Resource);
  if ( Resource->CriticalSection.DebugInfo != (_RTL_CRITICAL_SECTION_DEBUG *)-1LL )
    Resource->CriticalSection.DebugInfo->Type = 1;
}
