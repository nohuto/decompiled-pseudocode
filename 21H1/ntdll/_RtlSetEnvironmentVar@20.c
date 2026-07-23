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

NTSTATUS __cdecl RtlSetEnvironmentVar(
        PVOID *Environment,
        PCWSTR Name,
        SIZE_T NameLength,
        PCWSTR Value,
        SIZE_T ValueLength)
{
  PCWSTR v5; // ecx
  unsigned int i; // eax
  int v7; // ecx
  unsigned int j; // eax
  _PEB *ProcessEnvironmentBlock; // eax
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // ebx
  char *v11; // esi
  PVOID v12; // ecx
  char *v13; // edi
  char *v14; // ebx
  char *v15; // edx
  unsigned int v16; // esi
  int v17; // eax
  char *v18; // eax
  PCWSTR v19; // eax
  int v20; // ecx
  const WCHAR *v21; // ecx
  unsigned __int16 v22; // cx
  unsigned __int16 v23; // si
  int v24; // ecx
  char *v25; // ebx
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
  int v37; // esi
  unsigned int v38; // eax
  PCWSTR v39; // ecx
  char *v40; // ecx
  int v41; // esi
  char *v42; // eax
  _WORD *v43; // eax
  int v44; // esi
  char *v45; // edi
  _RTL_CRITICAL_SECTION *FastPebLock; // eax
  LOGICAL IsCriticalSectionLockedByThread; // eax
  size_t v48; // [esp-4h] [ebp-78h]
  size_t v49; // [esp-4h] [ebp-78h]
  size_t v50; // [esp-4h] [ebp-78h]
  size_t v51; // [esp-4h] [ebp-78h]
  size_t v52; // [esp-4h] [ebp-78h]
  size_t v53; // [esp-4h] [ebp-78h]
  size_t v54; // [esp-4h] [ebp-78h]
  size_t v55; // [esp-4h] [ebp-78h]
  size_t v56; // [esp-4h] [ebp-78h]
  const WCHAR *v57; // [esp+18h] [ebp-5Ch]
  char *v58; // [esp+1Ch] [ebp-58h]
  unsigned int v59; // [esp+20h] [ebp-54h]
  void *v60; // [esp+20h] [ebp-54h]
  unsigned int v61; // [esp+24h] [ebp-50h]
  unsigned int v62; // [esp+28h] [ebp-4Ch]
  unsigned int v63; // [esp+28h] [ebp-4Ch]
  char *v64; // [esp+28h] [ebp-4Ch]
  _WORD *v65; // [esp+28h] [ebp-4Ch]
  char *v66; // [esp+2Ch] [ebp-48h]
  PCWSTR v67; // [esp+30h] [ebp-44h]
  NTSTATUS v68; // [esp+34h] [ebp-40h]
  unsigned __int16 v69; // [esp+38h] [ebp-3Ch]
  char *v70; // [esp+38h] [ebp-3Ch]
  WCHAR v71; // [esp+3Ch] [ebp-38h]
  unsigned int v72; // [esp+3Ch] [ebp-38h]
  char *v73; // [esp+40h] [ebp-34h]
  _RTL_USER_PROCESS_PARAMETERS *v74; // [esp+48h] [ebp-2Ch]
  char *v75; // [esp+4Ch] [ebp-28h]
  char *Src; // [esp+50h] [ebp-24h]
  PVOID BaseAddress; // [esp+54h] [ebp-20h]
  WCHAR v78; // [esp+58h] [ebp-1Ch]
  char v79; // [esp+5Ah] [ebp-1Ah]
  char v80; // [esp+5Bh] [ebp-19h]

  v73 = 0;
  v61 = 0;
  v80 = 0;
  v79 = 0;
  if ( !(_DWORD)NameLength )
    return -1073741811;
  v5 = Name;
  if ( !*Name )
    return -1073741811;
  for ( i = 1; i < (unsigned int)NameLength; ++i )
  {
    v7 = (unsigned __int16)v5[i];
    if ( !(_WORD)v7 || v7 == 61 )
      return -1073741811;
    v5 = Name;
  }
  if ( HIDWORD(NameLength) )
  {
    for ( j = 0; j < (unsigned int)Value; ++j )
    {
      if ( !*(_WORD *)(HIDWORD(NameLength) + 2 * j) )
        return -1073741811;
    }
  }
  ProcessEnvironmentBlock = NtCurrentTeb()->ProcessEnvironmentBlock;
  ProcessParameters = ProcessEnvironmentBlock->ProcessParameters;
  v74 = ProcessParameters;
  v68 = 0;
  v11 = 0;
  v75 = 0;
  if ( Environment )
  {
    v12 = *Environment;
    BaseAddress = *Environment;
    if ( ProcessParameters->Environment == *Environment )
    {
      FastPebLock = ProcessEnvironmentBlock->FastPebLock;
      if ( !FastPebLock
        || (IsCriticalSectionLockedByThread = RtlIsCriticalSectionLockedByThread(FastPebLock),
            v12 = BaseAddress,
            IsCriticalSectionLockedByThread) )
      {
        v80 = 1;
      }
    }
  }
  else
  {
    v79 = 1;
    v80 = 1;
    RtlEnterCriticalSection(NtCurrentPeb()->FastPebLock);
    v12 = ProcessParameters->Environment;
    BaseAddress = v12;
    v11 = 0;
  }
  v13 = (char *)v12;
  Src = (char *)v12;
  v14 = 0;
  if ( !v12 )
    goto LABEL_61;
  v62 = 0;
  while ( 2 )
  {
    if ( !*(_WORD *)v13 )
      goto LABEL_60;
    v15 = v13;
    v58 = v13;
    v16 = 0;
    v59 = 0;
    while ( 1 )
    {
      v13 += 2;
      v17 = *(unsigned __int16 *)v13;
      if ( !(_WORD)v17 )
        break;
      if ( v17 == 61 )
      {
        v16 = (v13 - v15) >> 1;
        v59 = v16;
        v13 += 2;
        v18 = v13;
        v73 = v13;
        while ( *(_WORD *)v13 )
          v13 += 2;
        v62 = (v13 - v18) >> 1;
        v61 = v62;
        break;
      }
    }
    v13 += 2;
    Src = v13;
    v19 = Name;
    v67 = Name;
    v66 = v15;
    v20 = NameLength;
    if ( (unsigned int)NameLength > v16 )
      v20 = v16;
    v21 = &Name[v20];
    v57 = v21;
    while ( v19 < v21 )
    {
      v71 = *v19;
      v69 = *(_WORD *)v15;
      v22 = *v19;
      v78 = *v19;
      v23 = *(_WORD *)v15;
      if ( *v19 == *(_WORD *)v15 )
        goto LABEL_38;
      if ( (unsigned __int16)v71 >= 0x61u )
      {
        if ( (unsigned __int16)v71 <= 0x7Au )
        {
          v22 = v71 - 32;
LABEL_43:
          v78 = v22;
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
              + v78;
          v19 = v67;
          v15 = v66;
          goto LABEL_43;
        }
      }
LABEL_31:
      if ( v69 >= 0x61u )
      {
        if ( v69 > 0x7Au )
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
            v22 = v78;
            v19 = v67;
            v15 = v66;
          }
        }
        else
        {
          v23 = v69 - 32;
        }
      }
      if ( v22 != v23 )
      {
        v24 = v22 - v23;
        goto LABEL_34;
      }
LABEL_38:
      v67 = ++v19;
      v15 += 2;
      v66 = v15;
      v21 = v57;
    }
    v24 = NameLength - v59;
LABEL_34:
    if ( v24 )
    {
      if ( v24 < 0 && !v75 )
        v75 = v58;
      continue;
    }
    break;
  }
  v25 = v13;
  while ( 1 )
  {
    v26 = *(_WORD *)v25;
    if ( !*(_WORD *)v25 )
      break;
    while ( 1 )
    {
      v25 += 2;
      if ( !v26 )
        break;
      v26 = *(_WORD *)v25;
    }
  }
  v14 = v25 + 2;
  if ( !HIDWORD(NameLength) )
  {
    LODWORD(v48) = (v14 - v13) & 0xFFFFFFFE;
    memmove(v58, v13, v48);
LABEL_87:
    if ( v80 )
    {
      LODWORD(v48) = 564;
      memset(&RtlpEnvironLookupTable, 0, v48);
    }
    goto LABEL_60;
  }
  if ( (unsigned int)Value <= v62 )
  {
    LODWORD(v48) = 2 * (_DWORD)Value;
    memcpy(v73, (const void *)HIDWORD(NameLength), v48);
    *(_WORD *)&v73[2 * (_DWORD)Value] = 0;
    if ( Value != (PCWSTR)v62 )
    {
      LODWORD(v48) = (v14 - v13) & 0xFFFFFFFE;
      memmove(&v73[2 * (_DWORD)Value + 2], v13, v48);
    }
    goto LABEL_87;
  }
  v27 = RtlSizeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
  v28 = 2 * ((_DWORD)Value + ((v14 - (_BYTE *)BaseAddress) >> 1) - v61);
  v63 = v28;
  if ( v28 < v27 )
  {
    LODWORD(v48) = (v14 - v13) & 0xFFFFFFFE;
    memmove(&v73[2 * (_DWORD)Value + 2], v13, v48);
    *(_WORD *)&v73[2 * (_DWORD)Value] = 0;
    LODWORD(v56) = 2 * (_DWORD)Value;
    memcpy(v73, (const void *)HIDWORD(NameLength), v56);
    if ( !Environment )
    {
      v74->Environment = BaseAddress;
      v74->EnvironmentSize = v63;
      ++v74->EnvironmentVersion;
    }
    if ( v80 )
    {
      LODWORD(v48) = 564;
      memset(&RtlpEnvironLookupTable, 0, v48);
    }
  }
  else
  {
    EnvBlock = (char *)RtlpAllocateEnvBlock(v28);
    v60 = EnvBlock;
    if ( !EnvBlock )
      goto LABEL_112;
    LODWORD(v48) = 2 * ((v73 - (_BYTE *)BaseAddress) >> 1);
    memcpy(EnvBlock, BaseAddress, v48);
    v30 = &EnvBlock[2 * ((v73 - (_BYTE *)BaseAddress) >> 1)];
    LODWORD(v49) = 2 * (_DWORD)Value;
    memcpy(v30, (const void *)HIDWORD(NameLength), v49);
    v31 = &v30[2 * (_DWORD)Value];
    *(_WORD *)v31 = 0;
    LODWORD(v50) = (v14 - Src) & 0xFFFFFFFE;
    memcpy(v31 + 2, Src, v50);
    if ( Environment )
    {
      *Environment = v60;
    }
    else
    {
      v74->Environment = v60;
      v74->EnvironmentSize = v63;
      ++v74->EnvironmentVersion;
    }
    if ( v80 )
    {
      LODWORD(v48) = 564;
      memset(&RtlpEnvironLookupTable, 0, v48);
    }
    if ( v79 )
    {
      RtlLeaveCriticalSection(NtCurrentPeb()->FastPebLock);
      v79 = 0;
    }
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
    v13 = Src;
  }
LABEL_60:
  v12 = BaseAddress;
  v11 = v75;
LABEL_61:
  if ( v11 )
  {
    v13 = v11;
    Src = v11;
  }
  if ( v14 || !HIDWORD(NameLength) )
    goto LABEL_64;
  if ( v13 )
  {
    while ( 1 )
    {
      v35 = *(_WORD *)v13;
      if ( !*(_WORD *)v13 )
        break;
      while ( 1 )
      {
        v13 += 2;
        if ( !v35 )
          break;
        v35 = *(_WORD *)v13;
      }
    }
    v36 = RtlSizeHeap(NtCurrentPeb()->ProcessHeap, 0, v12);
    v14 = v13 + 2;
    v37 = NameLength;
    v38 = 2 * ((_DWORD)Value + NameLength + ((v13 + 2 - (_BYTE *)BaseAddress) >> 1)) + 4;
    v13 = Src;
    v39 = Value;
  }
  else
  {
    v37 = NameLength;
    v39 = Value;
    v38 = 2 * ((_DWORD)Value + NameLength) + 6;
    v36 = 0;
  }
  v72 = v38;
  if ( v38 >= v36 )
  {
    v40 = (char *)RtlpAllocateEnvBlock(v38);
    v70 = v40;
    if ( v40 )
    {
      if ( v13 )
      {
        v41 = (v13 - (_BYTE *)BaseAddress) >> 1;
        LODWORD(v48) = 2 * v41;
        memcpy(v40, BaseAddress, v48);
        v40 = v70;
      }
      else
      {
        v41 = 0;
      }
      v64 = &v40[2 * v41];
      LODWORD(v48) = 2 * NameLength;
      memcpy(v64, Name, v48);
      v42 = &v64[2 * NameLength];
      *(_WORD *)v42 = 61;
      v65 = v42 + 2;
      LODWORD(v51) = 2 * (_DWORD)Value;
      memcpy(v42 + 2, (const void *)HIDWORD(NameLength), v51);
      v65[(_DWORD)Value] = 0;
      v43 = &v65[(_DWORD)Value + 1];
      if ( v13 )
      {
        LODWORD(v52) = (v14 - v13) & 0xFFFFFFFE;
        memcpy(v43, v13, v52);
        v32 = v80;
        if ( v80 )
        {
          LODWORD(v53) = 564;
          memset(&RtlpEnvironLookupTable, 0, v53);
        }
      }
      else
      {
        *v43 = 0;
        v32 = v80;
      }
      if ( Environment )
      {
        *Environment = v70;
      }
      else
      {
        v74->Environment = v70;
        v74->EnvironmentSize = v72;
        ++v74->EnvironmentVersion;
      }
      if ( v79 )
      {
        RtlLeaveCriticalSection(NtCurrentPeb()->FastPebLock);
        v79 = 0;
      }
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
      goto LABEL_65;
    }
LABEL_112:
    v68 = -1073741670;
LABEL_64:
    v32 = v80;
    goto LABEL_65;
  }
  LODWORD(v48) = (v14 - v13) & 0xFFFFFFFE;
  memmove(&v13[2 * ((_DWORD)v39 + v37 + 2)], v13, v48);
  v44 = 2 * v37;
  LODWORD(v54) = v44;
  memcpy(v13, Name, v54);
  v32 = v80;
  if ( v80 )
  {
    LODWORD(v55) = 564;
    memset(&RtlpEnvironLookupTable, 0, v55);
  }
  v45 = &v13[v44];
  *(_WORD *)v45 = 61;
  v45 += 2;
  LODWORD(v55) = 2 * (_DWORD)Value;
  memcpy(v45, (const void *)HIDWORD(NameLength), v55);
  *(_WORD *)&v45[2 * (_DWORD)Value] = 0;
  if ( Environment )
  {
LABEL_65:
    v33 = v74;
  }
  else
  {
    v33 = v74;
    v74->Environment = BaseAddress;
    v74->EnvironmentSize = v72;
    ++v74->EnvironmentVersion;
  }
  if ( v68 >= 0 && v32 )
    ++v33->EnvironmentVersion;
  if ( v79 )
    RtlLeaveCriticalSection(NtCurrentPeb()->FastPebLock);
  return v68;
}
