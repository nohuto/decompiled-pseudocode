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

_WORD *__fastcall RtlInitializeResource(__int64 a1)
{
  PSLIST_ENTRY Heap; // rdi
  void *ProcessHeap; // rcx
  volatile signed __int32 *v4; // r12
  __int64 v5; // r14
  __int64 v6; // rsi
  __int64 v7; // rdx
  int v8; // esi
  int v9; // esi
  _WORD *result; // rax
  USHORT v11; // ax
  SIZE_T v12; // r12
  __int64 v13; // r13
  PSLIST_ENTRY v14; // r15
  unsigned int v15; // esi
  PSLIST_ENTRY v16; // rax
  unsigned __int64 v17; // rax
  struct _SLIST_ENTRY *v18; // r12
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // rsi
  __int64 v21; // rcx
  __int16 v22; // cx
  signed __int64 v23; // rax
  __int64 v24; // rdx
  signed __int64 v25; // rcx
  signed __int64 v26; // rdx
  signed __int64 v27; // rtt
  bool v28; // zf
  signed __int64 v29; // rax
  _QWORD *v30; // r9
  __int64 v31; // rcx
  _QWORD *v32; // rax
  __int64 v33; // rax
  bool v34; // sf
  signed __int64 v35; // rax
  __int64 v36; // rdx
  signed __int64 v37; // rcx
  signed __int64 v38; // rdx
  signed __int64 v39; // rtt
  signed __int64 v40; // rax
  _QWORD *v41; // r9
  __int64 v42; // rcx
  _QWORD *v43; // rax
  __int64 v44; // rax
  signed __int64 v45; // rax
  __int64 v46; // rsi
  __int64 v47; // rax
  unsigned int v48; // eax
  signed __int64 v49; // rax
  __int64 v50; // rsi
  __int64 v51; // rax
  unsigned int v52; // eax
  struct _SLIST_ENTRY *v53; // rcx
  __int64 v54; // r8
  __int64 v55; // r13
  unsigned __int64 v56; // rcx
  unsigned __int64 v57; // rsi
  signed __int64 v58; // rax
  __int64 v59; // rdx
  signed __int64 v60; // rcx
  signed __int64 v61; // rdx
  signed __int64 v62; // rtt
  signed __int64 v63; // rax
  _QWORD *v64; // r9
  __int64 v65; // rcx
  _QWORD *v66; // rax
  __int64 v67; // rax
  signed __int64 v68; // rax
  __int64 v69; // rsi
  __int64 v70; // rax
  signed __int64 v71; // rax
  __int64 v72; // rdx
  signed __int64 v73; // rcx
  signed __int64 v74; // rdx
  signed __int64 v75; // rtt
  signed __int64 v76; // rax
  _QWORD *v77; // r9
  volatile signed __int32 *v78; // rcx
  _QWORD *v79; // rax
  __int64 v80; // rax
  signed __int64 v81; // rax
  __int64 v82; // rax
  __int64 v83; // rdx
  unsigned __int64 v84; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int64 v85; // [rsp+38h] [rbp-C8h] BYREF
  SIZE_T v86; // [rsp+40h] [rbp-C0h]
  HANDLE Handle; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v88; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v89; // [rsp+58h] [rbp-A8h] BYREF
  USHORT v90; // [rsp+6Eh] [rbp-92h]
  PVOID BackTrace[32]; // [rsp+70h] [rbp-90h] BYREF
  ULONG BackTraceHash; // [rsp+1B8h] [rbp+B8h] BYREF
  unsigned __int64 v93; // [rsp+1C0h] [rbp+C0h]
  unsigned __int64 v94; // [rsp+1C8h] [rbp+C8h] BYREF

  Heap = RtlpInterlockedPopEntrySList(&RtlCriticalSectionDebugSList);
  if ( !Heap )
  {
    ProcessHeap = NtCurrentPeb()->ProcessHeap;
    if ( !ProcessHeap || (Heap = (PSLIST_ENTRY)RtlAllocateHeap(ProcessHeap, 0LL, 48LL)) == 0LL )
      RtlRaiseStatus(3221225495LL);
  }
  v4 = 0LL;
  HIDWORD(Heap[2].Next) = 0;
  v5 = RtlpStackTraceDatabase;
  if ( !RtlpStackTraceDatabase )
  {
    LODWORD(v6) = 0;
    goto LABEL_6;
  }
  v11 = RtlCaptureStackBackTrace(2u, 0x20u, BackTrace, &BackTraceHash);
  v90 = v11;
  if ( !v11 )
    goto LABEL_152;
  v12 = 8LL * v11;
  v13 = 16LL * (BackTraceHash % *(_DWORD *)(v5 + 720)) + v5 + 728;
  v86 = v12;
  _InterlockedIncrement((volatile signed __int32 *)(v5 + 176));
  if ( !byte_18016A508 )
    RtlAcquireSRWLockExclusive(v13 + 8);
  v14 = *(PSLIST_ENTRY *)v13;
  if ( *(_QWORD *)v13 )
  {
    while ( *((_WORD *)&v14->Next + 7) != v90 || RtlCompareMemory(&v14[1], BackTrace, v12) != v12 )
    {
      v14 = v14->Next;
      if ( !v14 )
        goto LABEL_19;
    }
    goto LABEL_32;
  }
LABEL_19:
  if ( !v90 )
  {
    v4 = 0LL;
    v14 = 0LL;
LABEL_83:
    _InterlockedIncrement((volatile signed __int32 *)(v5 + 200));
    goto LABEL_35;
  }
  v15 = v90 - 1;
  if ( v15 >= 0x20 )
  {
LABEL_24:
    v17 = (8LL * v90 + 31) & 0xFFFFFFFFFFFFFFF0uLL;
    v14 = 0LL;
    v93 = v17;
    if ( !byte_18016A508 )
    {
      RtlAcquireSRWLockExclusive(v5);
      v17 = v93;
    }
    v18 = *(struct _SLIST_ENTRY **)(v5 + 160);
    v19 = *(_QWORD *)(v5 + 144);
    v84 = v19;
    v20 = (unsigned __int64)v18 + v17;
    if ( *(_BYTE *)(v5 + 128) )
    {
      if ( v20 > *(_QWORD *)(v5 + 168) )
      {
LABEL_57:
        if ( !byte_18016A508 )
        {
          v35 = _InterlockedCompareExchange64((volatile signed __int64 *)v5, 0LL, 1LL);
          if ( v35 != 1 )
          {
            do
            {
              v36 = 3LL;
              v37 = v35 & 6;
              if ( v37 != 2 )
                v36 = -1LL;
              v38 = v35 + v36;
              v39 = v35;
              v35 = _InterlockedCompareExchange64((volatile signed __int64 *)v5, v38, v35);
            }
            while ( v39 != v35 );
            if ( v37 == 2 )
            {
              while ( (v38 & 1) == 0 )
              {
LABEL_66:
                v41 = (_QWORD *)(v38 & 0xFFFFFFFFFFFFFFF0uLL);
                v42 = *(_QWORD *)((v38 & 0xFFFFFFFFFFFFFFF0uLL) + 8);
                if ( !v42 )
                {
                  do
                  {
                    v43 = v41;
                    v41 = (_QWORD *)*v41;
                    v41[2] = v43;
                    v42 = v41[1];
                  }
                  while ( !v42 );
                  if ( v41 != (_QWORD *)(v38 & 0xFFFFFFFFFFFFFFF0uLL) )
                    *(_QWORD *)((v38 & 0xFFFFFFFFFFFFFFF0uLL) + 8) = v42;
                }
                if ( (*(_DWORD *)(v42 + 36) & 1) != 0 )
                {
                  v44 = *(_QWORD *)(v42 + 16);
                  if ( v44 )
                  {
                    *(_QWORD *)((v38 & 0xFFFFFFFFFFFFFFF0uLL) + 8) = v44;
                    *(_QWORD *)(v42 + 16) = 0LL;
                    _InterlockedAnd64((volatile signed __int64 *)v5, 0xFFFFFFFFFFFFFFFBuLL);
                    do
                    {
LABEL_74:
                      v46 = *(_QWORD *)(v42 + 16);
                      v47 = *(_QWORD *)(v42 + 24);
                      _interlockedbittestandset((volatile signed __int32 *)(v42 + 36), 2u);
                      if ( !_interlockedbittestandreset((volatile signed __int32 *)(v42 + 36), 1u) )
                        ZwAlertThreadByThreadId(v47, v38);
                      v42 = v46;
                    }
                    while ( v46 );
                    goto LABEL_77;
                  }
                }
                v45 = _InterlockedCompareExchange64((volatile signed __int64 *)v5, 0LL, v38);
                v28 = v38 == v45;
                v38 = v45;
                if ( v28 )
                  goto LABEL_74;
              }
              while ( 1 )
              {
                v40 = _InterlockedCompareExchange64((volatile signed __int64 *)v5, v38 - 4, v38);
                v28 = v38 == v40;
                v38 = v40;
                if ( v28 )
                  break;
                if ( (v40 & 1) == 0 )
                  goto LABEL_66;
              }
            }
          }
LABEL_77:
          LODWORD(v17) = v93;
        }
        v12 = v86;
        if ( v14 )
        {
          v48 = ((unsigned int)(v17 - 16) >> 3) - 1;
          if ( v48 > 0x1F )
            LOWORD(v48) = 31;
          *((_WORD *)&v14->Next + 4) &= 0x7FFu;
          *((_WORD *)&v14->Next + 4) |= (_WORD)v48 << 11;
        }
        goto LABEL_30;
      }
    }
    else if ( v20 > v19 )
    {
      v85 = (v17 + 4095) & 0xFFFFFFFFFFFFF000uLL;
      if ( v19 + v85 >= *(_QWORD *)(v5 + 152) )
      {
        LODWORD(v17) = v93;
        goto LABEL_57;
      }
      v34 = (int)ZwAllocateVirtualMemory(-1LL, &v84, 0LL, &v85, 4096, 4) < 0;
      LODWORD(v17) = v93;
      if ( v34 )
        goto LABEL_57;
      *(_QWORD *)(v5 + 144) = v85 + v84;
    }
    ++*(_DWORD *)(v5 + 192);
    v14 = v18;
    *(_QWORD *)(v5 + 160) = v20;
    goto LABEL_57;
  }
  while ( 1 )
  {
    v16 = RtlpInterlockedPopEntrySList((PSLIST_HEADER)(v5 + 16 * (v15 + 13LL)));
    if ( v16 )
      break;
    if ( ++v15 >= 0x20 )
      goto LABEL_24;
  }
  _InterlockedDecrement((volatile signed __int32 *)(v5 + 196));
  v14 = v16 - 1;
LABEL_30:
  if ( !v14 )
  {
    v4 = 0LL;
    goto LABEL_83;
  }
  memmove(&v14[1], BackTrace, v12);
  *((_WORD *)&v14->Next + 7) = v90;
  *((_WORD *)&v14->Next + 4) &= 0xF800u;
  v21 = 2LL * (BackTraceHash % *(_DWORD *)(v5 + 720));
  v14->Next = *(_SLIST_ENTRY **)(v5 + 16LL * (BackTraceHash % *(_DWORD *)(v5 + 720)) + 728);
  *(_QWORD *)(v5 + 8 * v21 + 728) = v14;
LABEL_32:
  v22 = *((_WORD *)&v14->Next + 4);
  if ( (v22 & 0x7FF) != 0x7FF )
    *((_WORD *)&v14->Next + 4) = v22 ^ (v22 ^ (v22 + 1)) & 0x7FF;
  v4 = 0LL;
LABEL_35:
  if ( !byte_18016A508 )
  {
    v23 = _InterlockedCompareExchange64((volatile signed __int64 *)(v13 + 8), 0LL, 1LL);
    if ( v23 != 1 )
    {
      do
      {
        v24 = 3LL;
        v25 = v23 & 6;
        if ( v25 != 2 )
          v24 = -1LL;
        v26 = v23 + v24;
        v27 = v23;
        v23 = _InterlockedCompareExchange64((volatile signed __int64 *)(v13 + 8), v26, v23);
      }
      while ( v27 != v23 );
      if ( v25 == 2 )
      {
        while ( (v26 & 1) == 0 )
        {
LABEL_44:
          v30 = (_QWORD *)(v26 & 0xFFFFFFFFFFFFFFF0uLL);
          v31 = *(_QWORD *)((v26 & 0xFFFFFFFFFFFFFFF0uLL) + 8);
          if ( !v31 )
          {
            do
            {
              v32 = v30;
              v30 = (_QWORD *)*v30;
              v30[2] = v32;
              v31 = v30[1];
            }
            while ( !v31 );
            if ( v30 != (_QWORD *)(v26 & 0xFFFFFFFFFFFFFFF0uLL) )
              *(_QWORD *)((v26 & 0xFFFFFFFFFFFFFFF0uLL) + 8) = v31;
          }
          if ( (*(_DWORD *)(v31 + 36) & 1) != 0 )
          {
            v33 = *(_QWORD *)(v31 + 16);
            if ( v33 )
            {
              *(_QWORD *)((v26 & 0xFFFFFFFFFFFFFFF0uLL) + 8) = v33;
              *(_QWORD *)(v31 + 16) = 0LL;
              _InterlockedAnd64((volatile signed __int64 *)(v13 + 8), 0xFFFFFFFFFFFFFFFBuLL);
              do
              {
LABEL_85:
                v50 = *(_QWORD *)(v31 + 16);
                v51 = *(_QWORD *)(v31 + 24);
                _interlockedbittestandset((volatile signed __int32 *)(v31 + 36), 2u);
                if ( !_interlockedbittestandreset((volatile signed __int32 *)(v31 + 36), 1u) )
                  ZwAlertThreadByThreadId(v51, v26);
                v31 = v50;
              }
              while ( v50 );
              goto LABEL_88;
            }
          }
          v49 = _InterlockedCompareExchange64((volatile signed __int64 *)(v13 + 8), 0LL, v26);
          v28 = v26 == v49;
          v26 = v49;
          if ( v28 )
            goto LABEL_85;
        }
        while ( 1 )
        {
          v29 = _InterlockedCompareExchange64((volatile signed __int64 *)(v13 + 8), v26 - 4, v26);
          v28 = v26 == v29;
          v26 = v29;
          if ( v28 )
            break;
          if ( (v29 & 1) == 0 )
            goto LABEL_44;
        }
      }
    }
  }
LABEL_88:
  if ( !v14 )
  {
LABEL_152:
    LODWORD(v6) = 0;
    goto LABEL_6;
  }
  v52 = 0;
  if ( *((_WORD *)&v14->Next + 7) )
  {
    v53 = v14 + 1;
    v54 = *((unsigned __int16 *)&v14->Next + 7);
    do
    {
      v52 += LODWORD(v53->Next);
      v53 = (struct _SLIST_ENTRY *)((char *)v53 + 8);
      --v54;
    }
    while ( v54 );
  }
  v55 = v5 + 16LL * (v52 % *(_DWORD *)(v5 + 720));
  if ( !byte_18016A508 )
    RtlAcquireSRWLockExclusive(v55 + 736);
  if ( !*(_DWORD *)((char *)&v14->Next + 10) )
  {
    if ( !byte_18016A508 )
      RtlAcquireSRWLockExclusive(v5);
    v56 = *(_QWORD *)(v5 + 152);
    v57 = *(_QWORD *)(v5 + 168) - 8LL;
    v28 = *(_BYTE *)(v5 + 128) == 0;
    v94 = v56;
    if ( v28 )
    {
      if ( v57 < v56 )
      {
        v88 = 4096LL;
        if ( v56 - 4096 <= *(_QWORD *)(v5 + 144)
          || (v94 = v56 - 4096, (int)ZwAllocateVirtualMemory(-1LL, &v94, 0LL, &v88, 4096, 4) < 0) )
        {
LABEL_105:
          if ( !byte_18016A508 )
          {
            v58 = _InterlockedCompareExchange64((volatile signed __int64 *)v5, 0LL, 1LL);
            if ( v58 != 1 )
            {
              do
              {
                v59 = 3LL;
                v60 = v58 & 6;
                if ( v60 != 2 )
                  v59 = -1LL;
                v61 = v58 + v59;
                v62 = v58;
                v58 = _InterlockedCompareExchange64((volatile signed __int64 *)v5, v61, v58);
              }
              while ( v62 != v58 );
              if ( v60 == 2 )
              {
                while ( (v61 & 1) == 0 )
                {
LABEL_114:
                  v64 = (_QWORD *)(v61 & 0xFFFFFFFFFFFFFFF0uLL);
                  v65 = *(_QWORD *)((v61 & 0xFFFFFFFFFFFFFFF0uLL) + 8);
                  if ( !v65 )
                  {
                    do
                    {
                      v66 = v64;
                      v64 = (_QWORD *)*v64;
                      v64[2] = v66;
                      v65 = v64[1];
                    }
                    while ( !v65 );
                    if ( v64 != (_QWORD *)(v61 & 0xFFFFFFFFFFFFFFF0uLL) )
                      *(_QWORD *)((v61 & 0xFFFFFFFFFFFFFFF0uLL) + 8) = v65;
                  }
                  if ( (*(_DWORD *)(v65 + 36) & 1) != 0 )
                  {
                    v67 = *(_QWORD *)(v65 + 16);
                    if ( v67 )
                    {
                      *(_QWORD *)((v61 & 0xFFFFFFFFFFFFFFF0uLL) + 8) = v67;
                      *(_QWORD *)(v65 + 16) = 0LL;
                      _InterlockedAnd64((volatile signed __int64 *)v5, 0xFFFFFFFFFFFFFFFBuLL);
                      do
                      {
LABEL_122:
                        v69 = *(_QWORD *)(v65 + 16);
                        v70 = *(_QWORD *)(v65 + 24);
                        _interlockedbittestandset((volatile signed __int32 *)(v65 + 36), 2u);
                        if ( !_interlockedbittestandreset((volatile signed __int32 *)(v65 + 36), 1u) )
                          ZwAlertThreadByThreadId(v70, v61);
                        v65 = v69;
                      }
                      while ( v69 );
                      goto LABEL_125;
                    }
                  }
                  v68 = _InterlockedCompareExchange64((volatile signed __int64 *)v5, 0LL, v61);
                  v28 = v61 == v68;
                  v61 = v68;
                  if ( v28 )
                    goto LABEL_122;
                }
                while ( 1 )
                {
                  v63 = _InterlockedCompareExchange64((volatile signed __int64 *)v5, v61 - 4, v61);
                  v28 = v61 == v63;
                  v61 = v63;
                  if ( v28 )
                    break;
                  if ( (v63 & 1) == 0 )
                    goto LABEL_114;
                }
              }
            }
          }
LABEL_125:
          if ( v4 )
          {
            *(_QWORD *)v4 = v14;
            v6 = (__int64)(*(_QWORD *)(v5 + 184) - (_QWORD)v4) >> 3;
            *((_WORD *)&v14->Next + 6) = v6;
            *((_WORD *)&v14->Next + 5) = WORD1(v6);
            v4 = 0LL;
          }
          else
          {
            LODWORD(v6) = 0;
          }
          goto LABEL_129;
        }
        *(_QWORD *)(v5 + 152) = v94;
      }
    }
    else if ( v57 < *(_QWORD *)(v5 + 160) )
    {
      goto LABEL_105;
    }
    ++*(_DWORD *)(v5 + 180);
    v4 = (volatile signed __int32 *)v57;
    *(_QWORD *)(v5 + 168) = v57;
    goto LABEL_105;
  }
  LODWORD(v6) = *((unsigned __int16 *)&v14->Next + 6) + (*((unsigned __int16 *)&v14->Next + 5) << 16);
LABEL_129:
  if ( !byte_18016A508 )
  {
    v71 = _InterlockedCompareExchange64((volatile signed __int64 *)(v55 + 736), 0LL, 1LL);
    if ( v71 != 1 )
    {
      do
      {
        v72 = 3LL;
        v73 = v71 & 6;
        if ( v73 != 2 )
          v72 = -1LL;
        v74 = v71 + v72;
        v75 = v71;
        v71 = _InterlockedCompareExchange64((volatile signed __int64 *)(v55 + 736), v74, v71);
      }
      while ( v75 != v71 );
      if ( v73 == 2 )
      {
        while ( (v74 & 1) == 0 )
        {
LABEL_138:
          v77 = (_QWORD *)(v74 & 0xFFFFFFFFFFFFFFF0uLL);
          v78 = *(volatile signed __int32 **)((v74 & 0xFFFFFFFFFFFFFFF0uLL) + 8);
          if ( !v78 )
          {
            do
            {
              v79 = v77;
              v77 = (_QWORD *)*v77;
              v77[2] = v79;
              v78 = (volatile signed __int32 *)v77[1];
            }
            while ( !v78 );
            if ( v77 != (_QWORD *)(v74 & 0xFFFFFFFFFFFFFFF0uLL) )
              *(_QWORD *)((v74 & 0xFFFFFFFFFFFFFFF0uLL) + 8) = v78;
          }
          if ( (v78[9] & 1) != 0 )
          {
            v80 = *((_QWORD *)v78 + 2);
            if ( v80 )
            {
              *(_QWORD *)((v74 & 0xFFFFFFFFFFFFFFF0uLL) + 8) = v80;
              *((_QWORD *)v78 + 2) = 0LL;
              _InterlockedAnd64((volatile signed __int64 *)(v55 + 736), 0xFFFFFFFFFFFFFFFBuLL);
              do
              {
LABEL_146:
                v4 = (volatile signed __int32 *)*((_QWORD *)v78 + 2);
                v82 = *((_QWORD *)v78 + 3);
                _interlockedbittestandset(v78 + 9, 2u);
                if ( !_interlockedbittestandreset(v78 + 9, 1u) )
                  ZwAlertThreadByThreadId(v82, v74);
                v78 = v4;
              }
              while ( v4 );
              goto LABEL_149;
            }
          }
          v81 = _InterlockedCompareExchange64((volatile signed __int64 *)(v55 + 736), 0LL, v74);
          v28 = v74 == v81;
          v74 = v81;
          if ( v28 )
            goto LABEL_146;
        }
        while ( 1 )
        {
          v76 = _InterlockedCompareExchange64((volatile signed __int64 *)(v55 + 736), v74 - 4, v74);
          v28 = v74 == v76;
          v74 = v76;
          if ( v28 )
            break;
          if ( (v76 & 1) == 0 )
            goto LABEL_138;
        }
      }
    }
  }
LABEL_149:
  if ( !(_DWORD)v6 )
    RtlStdReleaseStackTrace(v5, v14);
LABEL_6:
  WORD1(Heap->Next) = v6;
  *((_WORD *)&Heap[2].Next + 6) = WORD1(v6);
  v8 = NtCreateSemaphore(&Handle, 1048579LL, 0LL, 0LL, 0x7FFFFFFF);
  if ( v8 < 0 )
  {
    RtlpFreeDebugInfo(Heap, v7);
    RtlRaiseStatus((unsigned int)v8);
  }
  v9 = NtCreateSemaphore(&v89, 1048579LL, 0LL, 0LL, 0x7FFFFFFF);
  if ( v9 < 0 )
  {
    NtClose(Handle);
    RtlpFreeDebugInfo(Heap, v83);
    RtlRaiseStatus((unsigned int)v9);
  }
  *(_QWORD *)(a1 + 40) = Handle;
  *(_QWORD *)(a1 + 56) = v89;
  *(_DWORD *)(a1 + 48) = (_DWORD)v4;
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_QWORD *)(a1 + 72) = v4;
  *(_DWORD *)(a1 + 80) = (_DWORD)v4;
  *(_QWORD *)(a1 + 88) = Heap;
  RtlInitializeCriticalSectionEx(a1, 0LL, 0x8000000LL);
  RtlpAddDebugInfoToCriticalSection(a1);
  result = *(_WORD **)a1;
  if ( *(_QWORD *)a1 != -1LL )
    *result = 1;
  return result;
}
