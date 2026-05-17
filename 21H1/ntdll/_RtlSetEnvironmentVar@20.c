/*
 * XREFs of _RtlSetEnvironmentVar@20 @ 0x4B2DB1B0
 * Callers:
 *     _RtlSetEnvironmentVariable@12 @ 0x4B2DB170 (_RtlSetEnvironmentVariable@12.c)
 * Callees:
 *     _RtlLeaveCriticalSection@4 @ 0x4B2BE700 (_RtlLeaveCriticalSection@4.c)
 *     _RtlEnterCriticalSection@4 @ 0x4B2BFE90 (_RtlEnterCriticalSection@4.c)
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlIsCriticalSectionLockedByThread@4 @ 0x4B2D2150 (_RtlIsCriticalSectionLockedByThread@4.c)
 *     _RtlSetEnvironmentVar@20 @ 0x4B2DB1B0 (_RtlSetEnvironmentVar@20.c)
 *     _RtlSizeHeap@12 @ 0x4B2DB840 (_RtlSizeHeap@12.c)
 *     _RtlpAllocateEnvBlock@4 @ 0x4B2DB9CA (_RtlpAllocateEnvBlock@4.c)
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 *     _memmove @ 0x4B2F8BF0 (_memmove.c)
 *     _memset @ 0x4B2F8F30 (_memset.c)
 */

int __stdcall RtlSetEnvironmentVar(void **a1, char *a2, unsigned int a3, _WORD *a4, unsigned int a5)
{
  char *v5; // ecx
  unsigned int i; // eax
  int v7; // ecx
  unsigned int j; // eax
  _PEB *ProcessEnvironmentBlock; // eax
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // ebx
  _WORD *v11; // esi
  void *Environment; // ecx
  _WORD *v13; // edi
  char *v14; // ebx
  _WORD *v15; // edx
  unsigned int v16; // esi
  int v17; // eax
  _WORD *v18; // eax
  char *v19; // eax
  unsigned int v20; // ecx
  char *v21; // ecx
  unsigned __int16 v22; // cx
  unsigned __int16 v23; // si
  int v24; // ecx
  _WORD *v25; // ebx
  __int16 v26; // ax
  unsigned int v27; // eax
  unsigned int v28; // ecx
  char *EnvBlock; // edi
  char *v30; // edi
  char *v31; // edi
  char v32; // bl
  _RTL_USER_PROCESS_PARAMETERS *v33; // ecx
  __int16 v35; // ax
  unsigned int v36; // edx
  unsigned int v37; // esi
  unsigned int v38; // eax
  unsigned int v39; // ecx
  char *v40; // ecx
  int v41; // esi
  char *v42; // eax
  _WORD *v43; // eax
  size_t v44; // esi
  _WORD *v45; // edi
  int FastPebLock; // eax
  BOOL IsCriticalSectionLockedByThread; // eax
  char *v48; // [esp+18h] [ebp-5Ch]
  _WORD *v49; // [esp+1Ch] [ebp-58h]
  unsigned int v50; // [esp+20h] [ebp-54h]
  char *v51; // [esp+20h] [ebp-54h]
  unsigned int v52; // [esp+24h] [ebp-50h]
  unsigned int v53; // [esp+28h] [ebp-4Ch]
  unsigned int v54; // [esp+28h] [ebp-4Ch]
  char *v55; // [esp+28h] [ebp-4Ch]
  _WORD *v56; // [esp+28h] [ebp-4Ch]
  _WORD *v57; // [esp+2Ch] [ebp-48h]
  char *v58; // [esp+30h] [ebp-44h]
  int v59; // [esp+34h] [ebp-40h]
  unsigned __int16 v60; // [esp+38h] [ebp-3Ch]
  char *v61; // [esp+38h] [ebp-3Ch]
  unsigned __int16 v62; // [esp+3Ch] [ebp-38h]
  unsigned int v63; // [esp+3Ch] [ebp-38h]
  char *v64; // [esp+40h] [ebp-34h]
  _RTL_USER_PROCESS_PARAMETERS *v65; // [esp+48h] [ebp-2Ch]
  _WORD *v66; // [esp+4Ch] [ebp-28h]
  _WORD *v67; // [esp+50h] [ebp-24h]
  void *Src; // [esp+54h] [ebp-20h]
  unsigned __int16 v69; // [esp+58h] [ebp-1Ch]
  char v70; // [esp+5Ah] [ebp-1Ah]
  char v71; // [esp+5Bh] [ebp-19h]

  v64 = 0;
  v52 = 0;
  v71 = 0;
  v70 = 0;
  if ( !a3 )
    return -1073741811;
  v5 = a2;
  if ( !*(_WORD *)a2 )
    return -1073741811;
  for ( i = 1; i < a3; ++i )
  {
    v7 = *(unsigned __int16 *)&v5[2 * i];
    if ( !(_WORD)v7 || v7 == 61 )
      return -1073741811;
    v5 = a2;
  }
  if ( a4 )
  {
    for ( j = 0; j < a5; ++j )
    {
      if ( !a4[j] )
        return -1073741811;
    }
  }
  ProcessEnvironmentBlock = NtCurrentTeb()->ProcessEnvironmentBlock;
  ProcessParameters = ProcessEnvironmentBlock->ProcessParameters;
  v65 = ProcessParameters;
  v59 = 0;
  v11 = 0;
  v66 = 0;
  if ( a1 )
  {
    Environment = *a1;
    Src = *a1;
    if ( ProcessParameters->Environment == *a1 )
    {
      FastPebLock = (int)ProcessEnvironmentBlock->FastPebLock;
      if ( !FastPebLock
        || (IsCriticalSectionLockedByThread = RtlIsCriticalSectionLockedByThread(FastPebLock),
            Environment = Src,
            IsCriticalSectionLockedByThread) )
      {
        v71 = 1;
      }
    }
  }
  else
  {
    v70 = 1;
    v71 = 1;
    RtlEnterCriticalSection((int)NtCurrentPeb()->FastPebLock);
    Environment = ProcessParameters->Environment;
    Src = Environment;
    v11 = 0;
  }
  v13 = Environment;
  v67 = Environment;
  v14 = 0;
  if ( !Environment )
    goto LABEL_61;
  v53 = 0;
  while ( 2 )
  {
    if ( !*v13 )
      goto LABEL_60;
    v15 = v13;
    v49 = v13;
    v16 = 0;
    v50 = 0;
    while ( 1 )
    {
      v17 = (unsigned __int16)*++v13;
      if ( !(_WORD)v17 )
        break;
      if ( v17 == 61 )
      {
        v16 = v13 - v15;
        v50 = v16;
        v18 = ++v13;
        v64 = (char *)v13;
        while ( *v13 )
          ++v13;
        v53 = v13 - v18;
        v52 = v53;
        break;
      }
    }
    v67 = ++v13;
    v19 = a2;
    v58 = a2;
    v57 = v15;
    v20 = a3;
    if ( a3 > v16 )
      v20 = v16;
    v21 = &a2[2 * v20];
    v48 = v21;
    while ( v19 < v21 )
    {
      v62 = *(_WORD *)v19;
      v60 = *v15;
      v22 = *(_WORD *)v19;
      v69 = *(_WORD *)v19;
      v23 = *v15;
      if ( *(_WORD *)v19 == *v15 )
        goto LABEL_38;
      if ( v62 >= 0x61u )
      {
        if ( v62 <= 0x7Au )
        {
          v22 = v62 - 32;
LABEL_43:
          v69 = v22;
          goto LABEL_31;
        }
        if ( Nls844UnicodeUpcaseTable && v22 >= 0xC0u )
        {
          v22 = *(_WORD *)(Nls844UnicodeUpcaseTable
                         + 2
                         * ((v22 & 0xF)
                          + *(unsigned __int16 *)(Nls844UnicodeUpcaseTable
                                                + 2
                                                * (((unsigned __int8)v22 >> 4)
                                                 + *(unsigned __int16 *)(Nls844UnicodeUpcaseTable + 2 * HIBYTE(v22))))))
              + v69;
          v19 = v58;
          v15 = v57;
          goto LABEL_43;
        }
      }
LABEL_31:
      if ( v60 >= 0x61u )
      {
        if ( v60 > 0x7Au )
        {
          if ( Nls844UnicodeUpcaseTable && v23 >= 0xC0u )
          {
            v23 += *(_WORD *)(Nls844UnicodeUpcaseTable
                            + 2
                            * ((v23 & 0xF)
                             + *(unsigned __int16 *)(Nls844UnicodeUpcaseTable
                                                   + 2
                                                   * (((v23 >> 4) & 0xF)
                                                    + *(unsigned __int16 *)(Nls844UnicodeUpcaseTable + 2 * HIBYTE(v23))))));
            v22 = v69;
            v19 = v58;
            v15 = v57;
          }
        }
        else
        {
          v23 = v60 - 32;
        }
      }
      if ( v22 != v23 )
      {
        v24 = v22 - v23;
        goto LABEL_34;
      }
LABEL_38:
      v19 += 2;
      v58 = v19;
      v57 = ++v15;
      v21 = v48;
    }
    v24 = a3 - v50;
LABEL_34:
    if ( v24 )
    {
      if ( v24 < 0 && !v66 )
        v66 = v49;
      continue;
    }
    break;
  }
  v25 = v13;
  while ( 1 )
  {
    v26 = *v25;
    if ( !*v25 )
      break;
    while ( 1 )
    {
      ++v25;
      if ( !v26 )
        break;
      v26 = *v25;
    }
  }
  v14 = (char *)(v25 + 1);
  if ( !a4 )
  {
    memmove(v49, v13, (v14 - (char *)v13) & 0xFFFFFFFE);
LABEL_87:
    if ( v71 )
      memset(&RtlpEnvironLookupTable, 0, 0x234u);
    goto LABEL_60;
  }
  if ( a5 <= v53 )
  {
    memcpy(v64, a4, 2 * a5);
    *(_WORD *)&v64[2 * a5] = 0;
    if ( a5 != v53 )
      memmove(&v64[2 * a5 + 2], v13, (v14 - (char *)v13) & 0xFFFFFFFE);
    goto LABEL_87;
  }
  v27 = RtlSizeHeap(NtCurrentPeb()->ProcessHeap, 0, Src);
  v28 = 2 * (a5 + ((v14 - (_BYTE *)Src) >> 1) - v52);
  v54 = v28;
  if ( v28 < v27 )
  {
    memmove(&v64[2 * a5 + 2], v13, (v14 - (char *)v13) & 0xFFFFFFFE);
    *(_WORD *)&v64[2 * a5] = 0;
    memcpy(v64, a4, 2 * a5);
    if ( !a1 )
    {
      v65->Environment = Src;
      v65->EnvironmentSize = v54;
      ++v65->EnvironmentVersion;
    }
    if ( v71 )
      memset(&RtlpEnvironLookupTable, 0, 0x234u);
  }
  else
  {
    EnvBlock = (char *)RtlpAllocateEnvBlock(v28);
    v51 = EnvBlock;
    if ( !EnvBlock )
      goto LABEL_112;
    memcpy(EnvBlock, Src, 2 * ((v64 - (_BYTE *)Src) >> 1));
    v30 = &EnvBlock[2 * ((v64 - (_BYTE *)Src) >> 1)];
    memcpy(v30, a4, 2 * a5);
    v31 = &v30[2 * a5];
    *(_WORD *)v31 = 0;
    memcpy(v31 + 2, v67, (v14 - (char *)v67) & 0xFFFFFFFE);
    if ( a1 )
    {
      *a1 = v51;
    }
    else
    {
      v65->Environment = v51;
      v65->EnvironmentSize = v54;
      ++v65->EnvironmentVersion;
    }
    if ( v71 )
      memset(&RtlpEnvironLookupTable, 0, 0x234u);
    if ( v70 )
    {
      RtlLeaveCriticalSection((int)NtCurrentPeb()->FastPebLock);
      v70 = 0;
    }
    RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, 0, (int)Src);
    v13 = v67;
  }
LABEL_60:
  Environment = Src;
  v11 = v66;
LABEL_61:
  if ( v11 )
  {
    v13 = v11;
    v67 = v11;
  }
  if ( v14 || !a4 )
    goto LABEL_64;
  if ( v13 )
  {
    while ( 1 )
    {
      v35 = *v13;
      if ( !*v13 )
        break;
      while ( 1 )
      {
        ++v13;
        if ( !v35 )
          break;
        v35 = *v13;
      }
    }
    v36 = RtlSizeHeap(NtCurrentPeb()->ProcessHeap, 0, Environment);
    v14 = (char *)(v13 + 1);
    v37 = a3;
    v38 = 2 * (a5 + a3 + (((char *)(v13 + 1) - (_BYTE *)Src) >> 1)) + 4;
    v13 = v67;
    v39 = a5;
  }
  else
  {
    v37 = a3;
    v39 = a5;
    v38 = 2 * (a3 + a5) + 6;
    v36 = 0;
  }
  v63 = v38;
  if ( v38 >= v36 )
  {
    v40 = (char *)RtlpAllocateEnvBlock(v38);
    v61 = v40;
    if ( v40 )
    {
      if ( v13 )
      {
        v41 = ((char *)v13 - (_BYTE *)Src) >> 1;
        memcpy(v40, Src, 2 * v41);
        v40 = v61;
      }
      else
      {
        v41 = 0;
      }
      v55 = &v40[2 * v41];
      memcpy(v55, a2, 2 * a3);
      v42 = &v55[2 * a3];
      *(_WORD *)v42 = 61;
      v56 = v42 + 2;
      memcpy(v42 + 2, a4, 2 * a5);
      v56[a5] = 0;
      v43 = &v56[a5 + 1];
      if ( v13 )
      {
        memcpy(v43, v13, (v14 - (char *)v13) & 0xFFFFFFFE);
        v32 = v71;
        if ( v71 )
          memset(&RtlpEnvironLookupTable, 0, 0x234u);
      }
      else
      {
        *v43 = 0;
        v32 = v71;
      }
      if ( a1 )
      {
        *a1 = v61;
      }
      else
      {
        v65->Environment = v61;
        v65->EnvironmentSize = v63;
        ++v65->EnvironmentVersion;
      }
      if ( v70 )
      {
        RtlLeaveCriticalSection((int)NtCurrentPeb()->FastPebLock);
        v70 = 0;
      }
      RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, 0, (int)Src);
      goto LABEL_65;
    }
LABEL_112:
    v59 = -1073741670;
LABEL_64:
    v32 = v71;
    goto LABEL_65;
  }
  memmove(&v13[v37 + 2 + v39], v13, (v14 - (char *)v13) & 0xFFFFFFFE);
  v44 = v37;
  memcpy(v13, a2, v44 * 2);
  v32 = v71;
  if ( v71 )
    memset(&RtlpEnvironLookupTable, 0, 0x234u);
  v45 = &v13[v44];
  *v45++ = 61;
  memcpy(v45, a4, 2 * a5);
  v45[a5] = 0;
  if ( a1 )
  {
LABEL_65:
    v33 = v65;
  }
  else
  {
    v33 = v65;
    v65->Environment = Src;
    v65->EnvironmentSize = v63;
    ++v65->EnvironmentVersion;
  }
  if ( v59 >= 0 && v32 )
    ++v33->EnvironmentVersion;
  if ( v70 )
    RtlLeaveCriticalSection((int)NtCurrentPeb()->FastPebLock);
  return v59;
}
