/*
 * XREFs of RtlSetEnvironmentVar @ 0x18004E160
 * Callers:
 *     RtlSetEnvironmentVariable @ 0x18004DF00 (RtlSetEnvironmentVariable.c)
 * Callees:
 *     RtlIsCriticalSectionLockedByThread @ 0x180014890 (RtlIsCriticalSectionLockedByThread.c)
 *     RtlSizeHeap @ 0x180024160 (RtlSizeHeap.c)
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlLeaveCriticalSection @ 0x18002F230 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18002FAA0 (RtlEnterCriticalSection.c)
 *     RtlpAllocateEnvBlock @ 0x18004EAEC (RtlpAllocateEnvBlock.c)
 *     memmove @ 0x1800A3EC0 (memmove.c)
 *     memset @ 0x1800A4180 (memset.c)
 */

NTSTATUS __cdecl RtlSetEnvironmentVar(
        PVOID *Environment,
        PCWSTR Name,
        SIZE_T NameLength,
        PCWSTR Value,
        SIZE_T ValueLength)
{
  PCWSTR v5; // r13
  SIZE_T v6; // rbx
  PCWSTR v7; // r8
  unsigned __int64 i; // rax
  WCHAR v10; // cx
  SIZE_T j; // rax
  _PEB *ProcessEnvironmentBlock; // rcx
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // rdi
  char *v14; // rdx
  PVOID v15; // r15
  char *v16; // rsi
  char *v17; // r14
  SIZE_T v18; // rdi
  char *v19; // r13
  unsigned __int64 v20; // r15
  char *v21; // rax
  const WCHAR *v22; // r10
  char *v23; // r11
  SIZE_T v24; // rax
  const WCHAR *v25; // rbx
  unsigned __int64 v26; // r8
  unsigned __int64 v27; // r9
  int v28; // ecx
  __int16 v29; // ax
  SIZE_T v30; // rax
  SIZE_T v31; // rdi
  SIZE_T v32; // r12
  char *v33; // rax
  char *v34; // r15
  __int64 v35; // rbx
  char *v36; // rdi
  char *v37; // rdi
  SIZE_T v38; // rbx
  char v39; // bl
  _RTL_USER_PROCESS_PARAMETERS *v40; // rax
  char *v41; // r14
  __int16 v42; // ax
  SIZE_T v43; // r15
  char *EnvBlock; // rsi
  char *v45; // rdi
  char *v46; // rdi
  size_t v47; // rbx
  char *v48; // rsi
  _RTL_CRITICAL_SECTION *FastPebLock; // rcx
  LOGICAL IsCriticalSectionLockedByThread; // eax
  char v52; // [rsp+20h] [rbp-98h]
  char v53; // [rsp+21h] [rbp-97h]
  char *v54; // [rsp+28h] [rbp-90h]
  char *v55; // [rsp+28h] [rbp-90h]
  char *v56; // [rsp+30h] [rbp-88h]
  PVOID BaseAddress; // [rsp+38h] [rbp-80h]
  NTSTATUS v58; // [rsp+40h] [rbp-78h]
  _RTL_USER_PROCESS_PARAMETERS *v59; // [rsp+48h] [rbp-70h]
  char *v60; // [rsp+58h] [rbp-60h]
  SIZE_T v61; // [rsp+60h] [rbp-58h]

  v5 = Value;
  v6 = NameLength;
  v7 = Name;
  v60 = 0LL;
  v61 = 0LL;
  v52 = 0;
  v53 = 0;
  if ( !v6 || !*Name )
    return -1073741811;
  for ( i = 1LL; i < v6; ++i )
  {
    v10 = Name[i];
    if ( !v10 || v10 == 61 )
      return -1073741811;
  }
  if ( v5 )
  {
    for ( j = 0LL; j < ValueLength; ++j )
    {
      if ( !v5[j] )
        return -1073741811;
    }
  }
  ProcessEnvironmentBlock = NtCurrentTeb()->ProcessEnvironmentBlock;
  ProcessParameters = ProcessEnvironmentBlock->ProcessParameters;
  v59 = ProcessParameters;
  v58 = 0;
  v14 = 0LL;
  v56 = 0LL;
  if ( Environment )
  {
    v15 = *Environment;
    BaseAddress = *Environment;
    if ( ProcessParameters->Environment == *Environment )
    {
      FastPebLock = ProcessEnvironmentBlock->FastPebLock;
      if ( !FastPebLock
        || (IsCriticalSectionLockedByThread = RtlIsCriticalSectionLockedByThread(FastPebLock),
            v14 = 0LL,
            v7 = Name,
            IsCriticalSectionLockedByThread) )
      {
        v52 = 1;
      }
    }
  }
  else
  {
    v53 = 1;
    v52 = 1;
    RtlEnterCriticalSection(NtCurrentPeb()->FastPebLock);
    v15 = ProcessParameters->Environment;
    BaseAddress = v15;
    v14 = 0LL;
    v7 = Name;
  }
  v16 = (char *)v15;
  v17 = 0LL;
  if ( v15 )
  {
    v18 = 0LL;
    while ( 1 )
    {
      if ( !*(_WORD *)v16 )
        goto LABEL_50;
      v19 = v16;
      v20 = 0LL;
      while ( 1 )
      {
        v16 += 2;
        if ( !*(_WORD *)v16 )
          break;
        if ( *(_WORD *)v16 == 61 )
        {
          v20 = (v16 - v19) >> 1;
          v16 += 2;
          v21 = v16;
          v60 = v16;
          while ( *(_WORD *)v16 )
            v16 += 2;
          v18 = (v16 - v21) >> 1;
          v61 = v18;
          break;
        }
      }
      v16 += 2;
      v54 = v16;
      v22 = v7;
      v23 = v19;
      v24 = v6;
      if ( v6 > v20 )
        v24 = v20;
      v25 = &v7[v24];
      while ( v22 < v25 )
      {
        v26 = *v22;
        v27 = *(unsigned __int16 *)v23;
        if ( (_WORD)v26 != (_WORD)v27 )
        {
          if ( (unsigned int)v26 >= 0x61 )
          {
            if ( (unsigned int)v26 > 0x7A )
            {
              if ( Nls844UnicodeUpcaseTable && (unsigned __int16)v26 >= 0xC0u )
                LOWORD(v26) = *(_WORD *)(Nls844UnicodeUpcaseTable
                                       + 2
                                       * ((v26 & 0xF)
                                        + *(unsigned __int16 *)(Nls844UnicodeUpcaseTable
                                                              + 2LL
                                                              * (((unsigned __int8)v26 >> 4)
                                                               + (unsigned int)*(unsigned __int16 *)(Nls844UnicodeUpcaseTable + 2 * (v26 >> 8))))))
                            + v26;
            }
            else
            {
              LOWORD(v26) = v26 - 32;
            }
          }
          if ( (unsigned int)v27 >= 0x61 )
          {
            if ( (unsigned int)v27 > 0x7A )
            {
              if ( Nls844UnicodeUpcaseTable && (unsigned __int16)v27 >= 0xC0u )
                LOWORD(v27) = *(_WORD *)(Nls844UnicodeUpcaseTable
                                       + 2
                                       * ((v27 & 0xF)
                                        + *(unsigned __int16 *)(Nls844UnicodeUpcaseTable
                                                              + 2LL
                                                              * (((unsigned __int8)v27 >> 4)
                                                               + (unsigned int)*(unsigned __int16 *)(Nls844UnicodeUpcaseTable + 2 * (v27 >> 8))))))
                            + v27;
            }
            else
            {
              LOWORD(v27) = v27 - 32;
            }
          }
          if ( (_WORD)v26 != (_WORD)v27 )
          {
            v28 = (unsigned __int16)v26 - (unsigned __int16)v27;
            goto LABEL_34;
          }
        }
        ++v22;
        v23 += 2;
      }
      v28 = NameLength - v20;
LABEL_34:
      if ( !v28 )
        break;
      v14 = v56;
      if ( v28 < 0 && !v56 )
      {
        v14 = v19;
        v56 = v19;
      }
      v5 = Value;
      v6 = NameLength;
      v7 = Name;
      v15 = BaseAddress;
    }
    v41 = v16;
    while ( 1 )
    {
      v42 = *(_WORD *)v41;
      if ( !*(_WORD *)v41 )
        break;
      while ( 1 )
      {
        v41 += 2;
        if ( !v42 )
          break;
        v42 = *(_WORD *)v41;
      }
    }
    v17 = v41 + 2;
    if ( !Value )
    {
      memmove(v19, v16, 2 * (unsigned int)((v17 - v16) >> 1));
      if ( v52 )
        memset(&RtlpEnvironLookupTable, 0, 0x468uLL);
      v5 = 0LL;
      goto LABEL_49;
    }
    if ( ValueLength <= v18 )
    {
      v5 = Value;
      memmove(v60, Value, 2 * ValueLength);
      *(_WORD *)&v60[2 * ValueLength] = 0;
      if ( ValueLength != v18 )
        memmove(&v60[2 * ValueLength + 2], v16, 2 * (unsigned int)((v17 - v16) >> 1));
      if ( !v52 )
        goto LABEL_49;
      goto LABEL_92;
    }
    v43 = 2 * (ValueLength + ((v17 - (_BYTE *)BaseAddress) >> 1) - v61);
    if ( v43 < RtlSizeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress) )
    {
      v46 = &v60[2 * ValueLength];
      memmove(v46 + 2, v16, 2 * (unsigned int)((v17 - v16) >> 1));
      *(_WORD *)v46 = 0;
      v5 = Value;
      memmove(v60, Value, 2 * ValueLength);
      if ( !Environment )
      {
        v59->Environment = BaseAddress;
        v59->EnvironmentSize = v43;
        ++v59->EnvironmentVersion;
      }
      if ( !v52 )
        goto LABEL_49;
LABEL_92:
      memset(&RtlpEnvironLookupTable, 0, 0x468uLL);
LABEL_49:
      v14 = v56;
      v6 = NameLength;
      v15 = BaseAddress;
      goto LABEL_50;
    }
    EnvBlock = (char *)RtlpAllocateEnvBlock(2 * (ValueLength + ((v17 - (_BYTE *)BaseAddress) >> 1) - v61));
    if ( !EnvBlock )
    {
LABEL_111:
      v58 = -1073741670;
      goto LABEL_112;
    }
    memmove(EnvBlock, BaseAddress, 2LL * (unsigned int)((v60 - (_BYTE *)BaseAddress) >> 1));
    v45 = &EnvBlock[2 * (unsigned int)((v60 - (_BYTE *)BaseAddress) >> 1)];
    v5 = Value;
    memmove(v45, Value, 2 * ValueLength);
    *(_WORD *)&v45[2 * ValueLength] = 0;
    memmove(&v45[2 * ValueLength + 2], v54, 2 * (unsigned int)((v17 - v54) >> 1));
    if ( Environment )
    {
      *Environment = EnvBlock;
    }
    else
    {
      v59->Environment = EnvBlock;
      v59->EnvironmentSize = v43;
      ++v59->EnvironmentVersion;
    }
    if ( v52 )
      memset(&RtlpEnvironLookupTable, 0, 0x468uLL);
    if ( v53 )
    {
      RtlLeaveCriticalSection(NtCurrentPeb()->FastPebLock);
      v53 = 0;
    }
    v15 = BaseAddress;
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
    v16 = v54;
    v14 = v56;
    v6 = NameLength;
  }
LABEL_50:
  if ( v14 )
    v16 = v14;
  v55 = v16;
  if ( v17 )
  {
    v40 = v59;
    v39 = v52;
  }
  else
  {
    if ( !v5 )
    {
LABEL_112:
      v39 = v52;
LABEL_72:
      v40 = v59;
      goto LABEL_113;
    }
    if ( v16 )
    {
      while ( 1 )
      {
        v29 = *(_WORD *)v16;
        if ( !*(_WORD *)v16 )
          break;
        while ( 1 )
        {
          v16 += 2;
          if ( !v29 )
            break;
          v29 = *(_WORD *)v16;
        }
      }
      v30 = RtlSizeHeap(NtCurrentPeb()->ProcessHeap, 0, v15);
      v17 = v16 + 2;
      v31 = ValueLength;
      v32 = 2 * (ValueLength + v6 + ((v16 + 2 - (_BYTE *)v15) >> 1)) + 4;
      v16 = v55;
    }
    else
    {
      v31 = ValueLength;
      v32 = 2 * (v6 + ValueLength) + 6;
      v30 = 0LL;
    }
    if ( v32 >= v30 )
    {
      v33 = (char *)RtlpAllocateEnvBlock(v32);
      v34 = v33;
      if ( v33 )
      {
        if ( v16 )
        {
          v35 = (unsigned int)((v16 - (_BYTE *)BaseAddress) >> 1);
          memmove(v33, BaseAddress, 2 * v35);
        }
        else
        {
          v35 = 0LL;
        }
        v36 = &v34[2 * v35];
        memmove(v36, Name, 2 * NameLength);
        v37 = &v36[2 * NameLength];
        *(_WORD *)v37 = 61;
        v38 = 2 * ValueLength;
        memmove(v37 + 2, v5, 2 * ValueLength);
        *(_WORD *)&v37[2 * ValueLength + 2] = 0;
        if ( v16 )
        {
          memmove(&v37[v38 + 4], v16, 2 * (unsigned int)((v17 - v16) >> 1));
          v39 = v52;
          if ( v52 )
            memset(&RtlpEnvironLookupTable, 0, 0x468uLL);
        }
        else
        {
          *(_WORD *)&v37[v38 + 4] = 0;
          v39 = v52;
        }
        if ( Environment )
        {
          *Environment = v34;
        }
        else
        {
          v59->Environment = v34;
          v59->EnvironmentSize = v32;
          ++v59->EnvironmentVersion;
        }
        if ( v53 )
        {
          RtlLeaveCriticalSection(NtCurrentPeb()->FastPebLock);
          v53 = 0;
        }
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
        goto LABEL_72;
      }
      goto LABEL_111;
    }
    memmove(&v16[2 * v6 + 4 + 2 * v31], v16, 2 * (unsigned int)((v17 - v16) >> 1));
    v47 = 2 * v6;
    memmove(v16, Name, v47);
    if ( v52 )
      memset(&RtlpEnvironLookupTable, 0, 0x468uLL);
    v48 = &v16[v47];
    *(_WORD *)v48 = 61;
    v48 += 2;
    memmove(v48, v5, 2 * v31);
    *(_WORD *)&v48[2 * v31] = 0;
    if ( Environment )
      goto LABEL_112;
    v40 = v59;
    v59->Environment = v15;
    v59->EnvironmentSize = v32;
    ++v59->EnvironmentVersion;
    v39 = v52;
  }
LABEL_113:
  if ( v58 >= 0 && v39 )
    ++v40->EnvironmentVersion;
  if ( v53 )
    RtlLeaveCriticalSection(NtCurrentPeb()->FastPebLock);
  return v58;
}
