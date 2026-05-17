/*
 * XREFs of _RtlQueryEnvironmentVariable@24 @ 0x4B2BF830
 * Callers:
 *     _LdrpCorInitialize@4 @ 0x4B2A6100 (_LdrpCorInitialize@4.c)
 *     _RtlpNeedCurrentDirectoryForExePath@4 @ 0x4B2ABE9C (_RtlpNeedCurrentDirectoryForExePath@4.c)
 *     _RtlpComputePath@16 @ 0x4B2B2EA8 (_RtlpComputePath@16.c)
 *     _RtlQueryEnvironmentVariable_U@12 @ 0x4B2DB100 (_RtlQueryEnvironmentVariable_U@12.c)
 *     _RtlExpandEnvironmentStrings@24 @ 0x4B2DC3A0 (_RtlExpandEnvironmentStrings@24.c)
 * Callees:
 *     _RtlLeaveCriticalSection@4 @ 0x4B2BE700 (_RtlLeaveCriticalSection@4.c)
 *     _RtlQueryEnvironmentVariable@24 @ 0x4B2BF830 (_RtlQueryEnvironmentVariable@24.c)
 *     _NLS_UPCASE@4 @ 0x4B2BFDC8 (_NLS_UPCASE@4.c)
 *     _RtlEnterCriticalSection@4 @ 0x4B2BFE90 (_RtlEnterCriticalSection@4.c)
 *     _RtlIsCriticalSectionLockedByThread@4 @ 0x4B2D2150 (_RtlIsCriticalSectionLockedByThread@4.c)
 *     _RtlpScanEnvironment@28 @ 0x4B2E2428 (_RtlpScanEnvironment@28.c)
 *     __wcsnicmp @ 0x4B2F7AC0 (__wcsnicmp.c)
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 *     _RtlpQueryEnvironmentCache@24 @ 0x4B32E179 (_RtlpQueryEnvironmentCache@24.c)
 *     _RtlpQueryPseudoEnvironmentVariable@16 @ 0x4B32E262 (_RtlpQueryPseudoEnvironmentVariable@16.c)
 */

int __stdcall RtlQueryEnvironmentVariable(
        _WORD *a1,
        wchar_t *String1,
        size_t MaxCount,
        char *a4,
        unsigned int a5,
        _DWORD *a6)
{
  void *v6; // ecx
  int PseudoEnvironmentVariable; // edi
  int i; // esi
  void *v9; // esi
  char *Environment; // esi
  size_t v11; // ecx
  unsigned __int16 **v12; // edx
  unsigned __int16 **v13; // eax
  unsigned __int16 *v14; // edi
  wchar_t *v15; // ebx
  unsigned int v16; // eax
  int v17; // ecx
  int v18; // ecx
  size_t v19; // ebx
  unsigned __int16 *v20; // ecx
  int v21; // eax
  unsigned int v22; // edi
  size_t v23; // edi
  int v24; // eax
  wchar_t *v26; // eax
  wchar_t *v27; // ecx
  wchar_t *j; // edi
  bool v29; // zf
  unsigned int v30; // eax
  unsigned __int16 v31; // cx
  unsigned int v32; // ebx
  char *v33; // edx
  int v34; // eax
  char *v35; // ebx
  int v36; // ecx
  int *v37; // ecx
  int v38; // eax
  char **k; // edx
  int *v40; // edi
  bool v41; // zf
  _BYTE *v42; // ebx
  unsigned int v43; // esi
  size_t v44; // esi
  int v45; // eax
  _PEB *ProcessEnvironmentBlock; // edx
  int v47; // eax
  int IsCriticalSectionLockedByThread; // eax
  struct _TEB *v49; // [esp+30h] [ebp-30h]
  unsigned __int16 v50; // [esp+30h] [ebp-30h]
  wchar_t *v51; // [esp+30h] [ebp-30h]
  unsigned int v52; // [esp+34h] [ebp-2Ch]
  char *v53; // [esp+34h] [ebp-2Ch]
  unsigned __int16 **v54; // [esp+38h] [ebp-28h]
  unsigned __int16 **v55; // [esp+40h] [ebp-20h]
  unsigned __int16 v56; // [esp+40h] [ebp-20h]
  int v57; // [esp+40h] [ebp-20h]
  int v58; // [esp+44h] [ebp-1Ch]

  v49 = NtCurrentTeb();
  *a6 = 0;
  v6 = (void *)MaxCount;
  if ( !MaxCount )
    return -1073741568;
  PseudoEnvironmentVariable = -1073741568;
  for ( i = 4; ; --i )
  {
    if ( !i || v6 > *(&__initiallocalestructinfo + 3 * i) )
    {
      v9 = a4;
      goto LABEL_8;
    }
    if ( v6 == *(&__initiallocalestructinfo + 3 * i) )
      break;
LABEL_6:
    ;
  }
  if ( _wcsnicmp(String1, (&dword_4B2816D8)[3 * i], (size_t)v6) )
  {
    v6 = (void *)MaxCount;
    goto LABEL_6;
  }
  v9 = a4;
  PseudoEnvironmentVariable = RtlpQueryPseudoEnvironmentVariable(a5, a6);
  v6 = (void *)MaxCount;
LABEL_8:
  if ( PseudoEnvironmentVariable != -1073741568 )
    return PseudoEnvironmentVariable;
  if ( a1 )
  {
    if ( !*a1 )
      return -1073741568;
    ProcessEnvironmentBlock = v49->ProcessEnvironmentBlock;
    if ( ProcessEnvironmentBlock->ProcessParameters->Environment == a1
      && (!ProcessEnvironmentBlock->FastPebLock
       || (IsCriticalSectionLockedByThread = RtlIsCriticalSectionLockedByThread(ProcessEnvironmentBlock->FastPebLock),
           v6 = (void *)MaxCount,
           IsCriticalSectionLockedByThread)) )
    {
      PseudoEnvironmentVariable = RtlpQueryEnvironmentCache((int)v6, v9, a5, (int)a6);
      if ( PseudoEnvironmentVariable != -1073741568 )
        return PseudoEnvironmentVariable;
      v47 = 1;
      v6 = (void *)MaxCount;
    }
    else
    {
      v47 = 0;
    }
    return RtlpScanEnvironment((int)v6, v9, a5, (int)a6, v47);
  }
  RtlEnterCriticalSection(NtCurrentPeb()->FastPebLock);
  Environment = (char *)v49->ProcessEnvironmentBlock->ProcessParameters->Environment;
  v11 = MaxCount;
  if ( MaxCount - 1 > 0x13 )
  {
LABEL_25:
    v24 = -1073741568;
    v19 = v11;
    goto LABEL_26;
  }
  v12 = (unsigned __int16 **)(&CsrServerApiRoutine + 7 * MaxCount);
  v54 = v12;
  v13 = &v12[2 * LdrpCurrentDllInitializer[7 * MaxCount]];
  v55 = v13;
LABEL_12:
  if ( v12 >= v13 )
  {
    if ( LdrpCurrentDllInitializer[7 * MaxCount] == 3 )
    {
      Environment = (char *)dword_4B3A639C[7 * MaxCount];
    }
    else
    {
      Environment = (char *)dword_4B3A65D0;
      if ( !dword_4B3A65D0 )
        Environment = (char *)NtCurrentPeb()->ProcessParameters->Environment;
    }
    goto LABEL_25;
  }
  v14 = *v12;
  v15 = String1;
  v16 = (unsigned int)&(*v12)[v11];
  v52 = v16;
  while ( (unsigned int)v14 < v16 )
  {
    v17 = *v14;
    if ( (_WORD)v17 != *v15 )
    {
      v50 = NLS_UPCASE(v17);
      v18 = (unsigned __int16)NLS_UPCASE(*v15);
      v12 = v54;
      if ( v50 != (_WORD)v18 )
      {
        if ( v50 != v18 )
        {
          v12 = v54 + 2;
          v54 += 2;
          v11 = MaxCount;
          v13 = v55;
          goto LABEL_12;
        }
        break;
      }
    }
    ++v14;
    ++v15;
    v16 = v52;
  }
  v19 = MaxCount;
  v20 = &(*v12)[MaxCount + 1];
  v21 = v12[1] - v20;
  v22 = v21 - 1;
  if ( a4 )
  {
    if ( v22 < a5 )
    {
      *a6 = v22;
      v23 = 2 * v22;
      memcpy(a4, v20, v23);
      *(_WORD *)&a4[v23] = 0;
      v24 = 0;
      goto LABEL_26;
    }
    if ( a5 )
      *(_WORD *)a4 = 0;
  }
  *a6 = v21;
  v24 = -1073741789;
LABEL_26:
  v58 = v24;
  if ( v24 != -1073741568 )
    goto LABEL_27;
  v26 = String1;
  v27 = &String1[v19];
  v51 = &String1[v19];
  while ( 2 )
  {
    if ( !*(_WORD *)Environment )
    {
      dword_4B3A65D0 = (int)Environment;
      v58 = -1073741568;
      goto LABEL_27;
    }
    v53 = Environment;
    for ( j = v26; ; ++j )
    {
      v29 = j == v27;
      if ( j >= v27 )
        break;
      v30 = *(unsigned __int16 *)Environment;
      if ( !(_WORD)v30 )
        goto LABEL_37;
      v31 = *(_WORD *)Environment;
      v56 = *(_WORD *)Environment;
      if ( v30 >= 0x61 )
      {
        if ( v30 > 0x7A )
        {
          if ( Nls844UnicodeUpcaseTable && v31 >= 0xC0u )
            v31 = v56
                + *(_WORD *)(Nls844UnicodeUpcaseTable
                           + 2
                           * ((*(_WORD *)Environment & 0xF)
                            + *(unsigned __int16 *)(Nls844UnicodeUpcaseTable
                                                  + 2
                                                  * (((unsigned __int8)v31 >> 4)
                                                   + *(unsigned __int16 *)(Nls844UnicodeUpcaseTable + 2 * HIBYTE(v31))))));
        }
        else
        {
          v31 = v30 - 32;
        }
        v56 = v31;
      }
      v32 = *j;
      if ( v32 >= 0x61 )
      {
        if ( v32 > 0x7A )
        {
          if ( Nls844UnicodeUpcaseTable && (unsigned __int16)v32 >= 0xC0u )
          {
            LOWORD(v32) = *(_WORD *)(Nls844UnicodeUpcaseTable
                                   + 2
                                   * ((v32 & 0xF)
                                    + *(unsigned __int16 *)(Nls844UnicodeUpcaseTable
                                                          + 2
                                                          * (((unsigned __int8)v32 >> 4)
                                                           + *(unsigned __int16 *)(Nls844UnicodeUpcaseTable
                                                                                 + 2 * (v32 >> 8))))))
                        + v32;
            v31 = v56;
          }
        }
        else
        {
          LOWORD(v32) = v32 - 32;
        }
      }
      v29 = v31 == (unsigned __int16)v32;
      v27 = v51;
      if ( !v29 )
      {
LABEL_37:
        v29 = j == v27;
        break;
      }
      Environment += 2;
    }
    if ( !v29 || *(_WORD *)Environment != 61 )
    {
      v57 = 0;
      v33 = v53;
      while ( 1 )
      {
        v34 = *(unsigned __int16 *)Environment;
        if ( !(_WORD)v34 )
          goto LABEL_50;
        if ( v34 == 61 && Environment != v53 )
          goto LABEL_44;
        Environment += 2;
      }
    }
    v57 = 1;
    v33 = v53;
LABEL_44:
    v35 = Environment;
    while ( *(_WORD *)Environment )
      Environment += 2;
    v36 = (v35 - v33) >> 1;
    if ( (unsigned int)(v36 - 1) <= 0x13 )
    {
      v37 = &LdrpCurrentDllInitializer[7 * v36];
      v38 = *v37;
      if ( (unsigned int)*v37 < 3 )
      {
        for ( k = (char **)(v37 + 1); ; k += 2 )
        {
          v40 = &v37[2 * v38 + 1];
          v41 = k == (char **)v40;
          if ( k >= (char **)v40 )
            break;
          v38 = *v37;
          if ( *k == v53 )
          {
            v41 = k == (char **)v40;
            break;
          }
        }
        if ( v41 )
        {
          *k = v53;
          k[1] = Environment + 2;
          ++*v37;
          dword_4B3A65D0 = (int)(Environment + 2);
        }
      }
    }
    if ( !v57 )
    {
LABEL_50:
      Environment += 2;
      v27 = v51;
      v26 = String1;
      continue;
    }
    break;
  }
  v42 = v35 + 2;
  v43 = (Environment - v42) >> 1;
  if ( a4 )
  {
    if ( v43 < a5 )
    {
      *a6 = v43;
      v44 = 2 * v43;
      memcpy(a4, v42, v44);
      v45 = 0;
      *(_WORD *)&a4[v44] = 0;
      goto LABEL_72;
    }
    if ( a5 )
      *(_WORD *)a4 = 0;
  }
  *a6 = v43 + 1;
  v45 = -1073741789;
LABEL_72:
  v58 = v45;
LABEL_27:
  RtlLeaveCriticalSection((int)NtCurrentPeb()->FastPebLock);
  return v58;
}
