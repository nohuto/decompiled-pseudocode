/*
 * XREFs of RtlSetEnvironmentVar @ 0x18004E110
 * Callers:
 *     RtlSetEnvironmentVariable @ 0x18004DEB0 (RtlSetEnvironmentVariable.c)
 * Callees:
 *     RtlIsCriticalSectionLockedByThread @ 0x180014890 (RtlIsCriticalSectionLockedByThread.c)
 *     RtlSizeHeap @ 0x180024160 (RtlSizeHeap.c)
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlLeaveCriticalSection @ 0x18002F230 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18002FAA0 (RtlEnterCriticalSection.c)
 *     RtlpAllocateEnvBlock @ 0x18004EA9C (RtlpAllocateEnvBlock.c)
 *     memmove @ 0x1800A3C00 (memmove.c)
 *     memset @ 0x1800A3EC0 (memset.c)
 */

__int64 __fastcall RtlSetEnvironmentVar(unsigned __int64 *a1, _WORD *a2, size_t a3, _WORD *a4, unsigned __int64 a5)
{
  _WORD *v5; // r13
  size_t v6; // rbx
  __int64 v7; // r8
  unsigned __int64 i; // rax
  __int16 v10; // cx
  unsigned __int64 j; // rax
  _PEB *ProcessEnvironmentBlock; // rcx
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // rdi
  __int64 v14; // rdx
  unsigned __int64 Environment; // r15
  char *v16; // rsi
  char *v17; // r14
  unsigned __int64 v18; // rdi
  char *v19; // r13
  unsigned __int64 v20; // r15
  char *v21; // rax
  unsigned __int16 *v22; // r10
  char *v23; // r11
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rbx
  unsigned __int64 v26; // r8
  unsigned __int64 v27; // r9
  int v28; // ecx
  __int16 v29; // ax
  unsigned __int64 v30; // rax
  unsigned __int64 v31; // rdi
  unsigned __int64 v32; // r12
  char *v33; // rax
  char *v34; // r15
  __int64 v35; // rbx
  char *v36; // rdi
  char *v37; // rdi
  __int64 v38; // rbx
  __int64 v39; // rdx
  __int64 v40; // r8
  char v41; // bl
  _RTL_USER_PROCESS_PARAMETERS *v42; // rax
  char *v43; // r14
  __int16 v44; // ax
  unsigned __int64 v45; // r15
  char *EnvBlock; // rsi
  char *v47; // rdi
  __int64 v48; // rdx
  __int64 v49; // r8
  char *v50; // rdi
  size_t v51; // rbx
  char *v52; // rsi
  __int64 FastPebLock; // rcx
  BOOL IsCriticalSectionLockedByThread; // eax
  char v56; // [rsp+20h] [rbp-98h]
  char v57; // [rsp+21h] [rbp-97h]
  char *v58; // [rsp+28h] [rbp-90h]
  char *v59; // [rsp+28h] [rbp-90h]
  __int64 v60; // [rsp+30h] [rbp-88h]
  _BYTE *v61; // [rsp+38h] [rbp-80h]
  int v62; // [rsp+40h] [rbp-78h]
  _RTL_USER_PROCESS_PARAMETERS *v63; // [rsp+48h] [rbp-70h]
  char *v64; // [rsp+58h] [rbp-60h]
  unsigned __int64 v65; // [rsp+60h] [rbp-58h]

  v5 = a4;
  v6 = a3;
  v7 = (__int64)a2;
  v64 = 0LL;
  v65 = 0LL;
  v56 = 0;
  v57 = 0;
  if ( !v6 || !*a2 )
    return 3221225485LL;
  for ( i = 1LL; i < v6; ++i )
  {
    v10 = a2[i];
    if ( !v10 || v10 == 61 )
      return 3221225485LL;
  }
  if ( v5 )
  {
    for ( j = 0LL; j < a5; ++j )
    {
      if ( !v5[j] )
        return 3221225485LL;
    }
  }
  ProcessEnvironmentBlock = NtCurrentTeb()->ProcessEnvironmentBlock;
  ProcessParameters = ProcessEnvironmentBlock->ProcessParameters;
  v63 = ProcessParameters;
  v62 = 0;
  v14 = 0LL;
  v60 = 0LL;
  if ( a1 )
  {
    Environment = *a1;
    v61 = (_BYTE *)*a1;
    if ( ProcessParameters->Environment == (void *)*a1 )
    {
      FastPebLock = (__int64)ProcessEnvironmentBlock->FastPebLock;
      if ( !FastPebLock
        || (IsCriticalSectionLockedByThread = RtlIsCriticalSectionLockedByThread(FastPebLock),
            v14 = 0LL,
            v7 = (__int64)a2,
            IsCriticalSectionLockedByThread) )
      {
        v56 = 1;
      }
    }
  }
  else
  {
    v57 = 1;
    v56 = 1;
    RtlEnterCriticalSection((__int64)NtCurrentPeb()->FastPebLock);
    Environment = (unsigned __int64)ProcessParameters->Environment;
    v61 = (_BYTE *)Environment;
    v14 = 0LL;
    v7 = (__int64)a2;
  }
  v16 = (char *)Environment;
  v17 = 0LL;
  if ( Environment )
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
          v64 = v16;
          while ( *(_WORD *)v16 )
            v16 += 2;
          v18 = (v16 - v21) >> 1;
          v65 = v18;
          break;
        }
      }
      v16 += 2;
      v58 = v16;
      v22 = (unsigned __int16 *)v7;
      v23 = v19;
      v24 = v6;
      if ( v6 > v20 )
        v24 = v20;
      v25 = v7 + 2 * v24;
      while ( (unsigned __int64)v22 < v25 )
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
      v28 = a3 - v20;
LABEL_34:
      if ( !v28 )
        break;
      v14 = v60;
      if ( v28 < 0 && !v60 )
      {
        v14 = (__int64)v19;
        v60 = (__int64)v19;
      }
      v5 = a4;
      v6 = a3;
      v7 = (__int64)a2;
      Environment = (unsigned __int64)v61;
    }
    v43 = v16;
    while ( 1 )
    {
      v44 = *(_WORD *)v43;
      if ( !*(_WORD *)v43 )
        break;
      while ( 1 )
      {
        v43 += 2;
        if ( !v44 )
          break;
        v44 = *(_WORD *)v43;
      }
    }
    v17 = v43 + 2;
    if ( !a4 )
    {
      memmove(v19, v16, 2 * (unsigned int)((v17 - v16) >> 1));
      if ( v56 )
        memset(&RtlpEnvironLookupTable, 0, 0x468uLL);
      v5 = 0LL;
      goto LABEL_49;
    }
    if ( a5 <= v18 )
    {
      v5 = a4;
      memmove(v64, a4, 2 * a5);
      *(_WORD *)&v64[2 * a5] = 0;
      if ( a5 != v18 )
        memmove(&v64[2 * a5 + 2], v16, 2 * (unsigned int)((v17 - v16) >> 1));
      if ( !v56 )
        goto LABEL_49;
      goto LABEL_92;
    }
    v45 = 2 * (a5 + ((v17 - v61) >> 1) - v65);
    if ( v45 < RtlSizeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)v61) )
    {
      v50 = &v64[2 * a5];
      memmove(v50 + 2, v16, 2 * (unsigned int)((v17 - v16) >> 1));
      *(_WORD *)v50 = 0;
      v5 = a4;
      memmove(v64, a4, 2 * a5);
      if ( !a1 )
      {
        v7 = (__int64)v61;
        v63->Environment = v61;
        v63->EnvironmentSize = v45;
        ++v63->EnvironmentVersion;
      }
      if ( !v56 )
        goto LABEL_49;
LABEL_92:
      memset(&RtlpEnvironLookupTable, 0, 0x468uLL);
LABEL_49:
      v14 = v60;
      v6 = a3;
      Environment = (unsigned __int64)v61;
      goto LABEL_50;
    }
    EnvBlock = (char *)RtlpAllocateEnvBlock(2 * (a5 + ((v17 - v61) >> 1) - v65));
    if ( !EnvBlock )
    {
LABEL_111:
      v62 = -1073741670;
      goto LABEL_112;
    }
    memmove(EnvBlock, v61, 2LL * (unsigned int)((v64 - v61) >> 1));
    v47 = &EnvBlock[2 * (unsigned int)((v64 - v61) >> 1)];
    v5 = a4;
    memmove(v47, a4, 2 * a5);
    *(_WORD *)&v47[2 * a5] = 0;
    memmove(&v47[2 * a5 + 2], v58, 2 * (unsigned int)((v17 - v58) >> 1));
    if ( a1 )
    {
      *a1 = (unsigned __int64)EnvBlock;
    }
    else
    {
      v63->Environment = EnvBlock;
      v63->EnvironmentSize = v45;
      ++v63->EnvironmentVersion;
    }
    if ( v56 )
      memset(&RtlpEnvironLookupTable, 0, 0x468uLL);
    if ( v57 )
    {
      RtlLeaveCriticalSection((__int64)NtCurrentPeb()->FastPebLock, v48, v49);
      v57 = 0;
    }
    Environment = (unsigned __int64)v61;
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)v61);
    v16 = v58;
    v14 = v60;
    v6 = a3;
  }
LABEL_50:
  if ( v14 )
    v16 = (char *)v14;
  v59 = v16;
  if ( v17 )
  {
    v42 = v63;
    v41 = v56;
  }
  else
  {
    if ( !v5 )
    {
LABEL_112:
      v41 = v56;
LABEL_72:
      v42 = v63;
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
      v30 = RtlSizeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, Environment);
      v17 = v16 + 2;
      v31 = a5;
      v32 = 2 * (a5 + v6 + ((__int64)&v16[-Environment + 2] >> 1)) + 4;
      v16 = v59;
    }
    else
    {
      v31 = a5;
      v32 = 2 * (v6 + a5) + 6;
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
          v35 = (unsigned int)((v16 - v61) >> 1);
          memmove(v33, v61, 2 * v35);
        }
        else
        {
          v35 = 0LL;
        }
        v36 = &v34[2 * v35];
        memmove(v36, a2, 2 * a3);
        v37 = &v36[2 * a3];
        *(_WORD *)v37 = 61;
        v38 = 2 * a5;
        memmove(v37 + 2, v5, 2 * a5);
        *(_WORD *)&v37[2 * a5 + 2] = 0;
        if ( v16 )
        {
          memmove(&v37[v38 + 4], v16, 2 * (unsigned int)((v17 - v16) >> 1));
          v41 = v56;
          if ( v56 )
            memset(&RtlpEnvironLookupTable, 0, 0x468uLL);
        }
        else
        {
          *(_WORD *)&v37[v38 + 4] = 0;
          v41 = v56;
        }
        if ( a1 )
        {
          *a1 = (unsigned __int64)v34;
        }
        else
        {
          v63->Environment = v34;
          v63->EnvironmentSize = v32;
          ++v63->EnvironmentVersion;
        }
        if ( v57 )
        {
          RtlLeaveCriticalSection((__int64)NtCurrentPeb()->FastPebLock, v39, v40);
          v57 = 0;
        }
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)v61);
        goto LABEL_72;
      }
      goto LABEL_111;
    }
    memmove(&v16[2 * v6 + 4 + 2 * v31], v16, 2 * (unsigned int)((v17 - v16) >> 1));
    v51 = 2 * v6;
    memmove(v16, a2, v51);
    if ( v56 )
      memset(&RtlpEnvironLookupTable, 0, 0x468uLL);
    v52 = &v16[v51];
    *(_WORD *)v52 = 61;
    v52 += 2;
    memmove(v52, v5, 2 * v31);
    *(_WORD *)&v52[2 * v31] = 0;
    if ( a1 )
      goto LABEL_112;
    v42 = v63;
    v63->Environment = (void *)Environment;
    v63->EnvironmentSize = v32;
    ++v63->EnvironmentVersion;
    v41 = v56;
  }
LABEL_113:
  if ( v62 >= 0 && v41 )
    ++v42->EnvironmentVersion;
  if ( v57 )
    RtlLeaveCriticalSection((__int64)NtCurrentPeb()->FastPebLock, v14, v7);
  return (unsigned int)v62;
}
