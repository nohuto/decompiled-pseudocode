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

NTSTATUS __cdecl RtlQueryEnvironmentVariable(
        PVOID Environment,
        PCWSTR Name,
        SIZE_T NameLength,
        PWSTR Value,
        SIZE_T ValueLength,
        PSIZE_T ReturnLength)
{
  void *v6; // ecx
  NTSTATUS PseudoEnvironmentVariable; // edi
  int i; // esi
  void *v9; // esi
  char *v10; // esi
  int v11; // ecx
  unsigned __int16 **v12; // edx
  unsigned __int16 **v13; // eax
  unsigned __int16 *v14; // edi
  PCWSTR v15; // ebx
  unsigned int v16; // eax
  int v17; // ecx
  int v18; // ecx
  int v19; // ebx
  unsigned __int16 *v20; // ecx
  int v21; // eax
  unsigned int v22; // edi
  int v23; // edi
  int v24; // eax
  PCWSTR v26; // eax
  const WCHAR *v27; // ecx
  const WCHAR *j; // edi
  bool v29; // zf
  unsigned int v30; // eax
  int v31; // ecx
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
  int v44; // esi
  int v45; // eax
  _PEB *ProcessEnvironmentBlock; // edx
  int v47; // eax
  LOGICAL IsCriticalSectionLockedByThread; // eax
  char v49; // dl
  size_t v50; // [esp-4h] [ebp-64h]
  struct _TEB *v51; // [esp+30h] [ebp-30h]
  unsigned __int16 v52; // [esp+30h] [ebp-30h]
  const WCHAR *v53; // [esp+30h] [ebp-30h]
  unsigned int v54; // [esp+34h] [ebp-2Ch]
  char *v55; // [esp+34h] [ebp-2Ch]
  unsigned __int16 **v56; // [esp+38h] [ebp-28h]
  int v57; // [esp+40h] [ebp-20h] BYREF
  int v58; // [esp+44h] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+48h] [ebp-18h]

  v51 = NtCurrentTeb();
  *(_DWORD *)ValueLength = 0;
  v6 = (void *)NameLength;
  if ( !(_DWORD)NameLength )
    return -1073741568;
  ms_exc.registration.TryLevel = 0;
  PseudoEnvironmentVariable = -1073741568;
  for ( i = 4; ; --i )
  {
    if ( !i || v6 > *(&__initiallocalestructinfo + 3 * i) )
    {
      v9 = (void *)HIDWORD(NameLength);
      goto LABEL_8;
    }
    if ( v6 == *(&__initiallocalestructinfo + 3 * i) )
      break;
LABEL_6:
    ;
  }
  LODWORD(v50) = v6;
  if ( _wcsnicmp((const wchar_t *)Name, (&dword_4B2816D8)[3 * i], v50) )
  {
    v6 = (void *)NameLength;
    goto LABEL_6;
  }
  v9 = (void *)HIDWORD(NameLength);
  PseudoEnvironmentVariable = RtlpQueryPseudoEnvironmentVariable(Value, ValueLength);
  v6 = (void *)NameLength;
LABEL_8:
  v58 = PseudoEnvironmentVariable;
  if ( PseudoEnvironmentVariable != -1073741568 )
    goto LABEL_29;
  if ( Environment )
  {
    v57 = (int)Environment;
    if ( *(_WORD *)Environment )
    {
      ProcessEnvironmentBlock = v51->ProcessEnvironmentBlock;
      if ( ProcessEnvironmentBlock->ProcessParameters->Environment == Environment
        && (!ProcessEnvironmentBlock->FastPebLock
         || (IsCriticalSectionLockedByThread = RtlIsCriticalSectionLockedByThread(ProcessEnvironmentBlock->FastPebLock),
             v6 = (void *)NameLength,
             IsCriticalSectionLockedByThread)) )
      {
        PseudoEnvironmentVariable = RtlpQueryEnvironmentCache(&v57, Name, v6, v9, Value, ValueLength);
        v58 = PseudoEnvironmentVariable;
        if ( PseudoEnvironmentVariable != -1073741568 )
          goto LABEL_29;
        v47 = 1;
        v6 = (void *)NameLength;
      }
      else
      {
        v47 = 0;
      }
      PseudoEnvironmentVariable = RtlpScanEnvironment((int)v6, v9, (int)Value, ValueLength, v47);
    }
    else
    {
      PseudoEnvironmentVariable = -1073741568;
    }
    v58 = PseudoEnvironmentVariable;
    goto LABEL_29;
  }
  RtlEnterCriticalSection(NtCurrentPeb()->FastPebLock);
  ms_exc.registration.TryLevel = 1;
  v10 = (char *)v51->ProcessEnvironmentBlock->ProcessParameters->Environment;
  v57 = (int)v10;
  v11 = NameLength;
  if ( (unsigned int)(NameLength - 1) > 0x13 )
  {
LABEL_26:
    v24 = -1073741568;
    v19 = v11;
    goto LABEL_27;
  }
  v12 = (unsigned __int16 **)(&CsrServerApiRoutine + 7 * NameLength);
  v56 = v12;
  v13 = &v12[2 * LdrpCurrentDllInitializer[7 * (_DWORD)NameLength]];
  v57 = (int)v13;
LABEL_12:
  if ( v12 >= v13 )
  {
    if ( LdrpCurrentDllInitializer[7 * (_DWORD)NameLength] == 3 )
    {
      v10 = (char *)dword_4B3A639C[7 * (_DWORD)NameLength];
    }
    else
    {
      v10 = (char *)dword_4B3A65D0;
      if ( !dword_4B3A65D0 )
        v10 = (char *)NtCurrentPeb()->ProcessParameters->Environment;
    }
    v57 = (int)v10;
    goto LABEL_26;
  }
  v14 = *v12;
  v15 = Name;
  v16 = (unsigned int)&(*v12)[v11];
  v54 = v16;
  while ( (unsigned int)v14 < v16 )
  {
    v17 = *v14;
    if ( (_WORD)v17 != *v15 )
    {
      v52 = NLS_UPCASE(v17);
      v18 = (unsigned __int16)NLS_UPCASE(*(unsigned __int16 *)v15);
      v12 = v56;
      if ( v52 != (_WORD)v18 )
      {
        if ( v52 != v18 )
        {
          v12 = v56 + 2;
          v56 += 2;
          v11 = NameLength;
          v13 = (unsigned __int16 **)v57;
          goto LABEL_12;
        }
        break;
      }
    }
    ++v14;
    ++v15;
    v16 = v54;
  }
  v19 = NameLength;
  v20 = &(*v12)[NameLength + 1];
  v21 = v12[1] - v20;
  v22 = v21 - 1;
  if ( HIDWORD(NameLength) )
  {
    if ( v22 < (unsigned int)Value )
    {
      *(_DWORD *)ValueLength = v22;
      v23 = 2 * v22;
      LODWORD(v50) = v23;
      memcpy((void *)HIDWORD(NameLength), v20, v50);
      *(_WORD *)(v23 + HIDWORD(NameLength)) = 0;
      v24 = 0;
      goto LABEL_27;
    }
    if ( Value )
      *(_WORD *)HIDWORD(NameLength) = 0;
  }
  *(_DWORD *)ValueLength = v21;
  v24 = -1073741789;
LABEL_27:
  v58 = v24;
  if ( v24 != -1073741568 )
    goto LABEL_28;
  v26 = Name;
  v27 = &Name[v19];
  v53 = &Name[v19];
  while ( 2 )
  {
    if ( !*(_WORD *)v10 )
    {
      dword_4B3A65D0 = (int)v10;
      v58 = -1073741568;
      goto LABEL_28;
    }
    v55 = v10;
    for ( j = v26; ; ++j )
    {
      v29 = j == v27;
      if ( j >= v27 )
        break;
      v30 = *(unsigned __int16 *)v10;
      if ( !(_WORD)v30 )
        goto LABEL_38;
      v31 = *(unsigned __int16 *)v10;
      v57 = v31;
      if ( v30 >= 0x61 )
      {
        if ( v30 > 0x7A )
        {
          if ( Nls844UnicodeUpcaseTable && (unsigned __int16)v31 >= 0xC0u )
          {
            v49 = v31;
            v31 = ((unsigned __int8)v31 >> 4) + *(unsigned __int16 *)(Nls844UnicodeUpcaseTable + 2 * BYTE1(v31));
            LOWORD(v31) = v57
                        + *(_WORD *)(Nls844UnicodeUpcaseTable
                                   + 2 * ((v49 & 0xF) + *(unsigned __int16 *)(Nls844UnicodeUpcaseTable + 2 * v31)));
          }
        }
        else
        {
          v31 = v30 - 32;
        }
        v57 = v31;
      }
      v32 = *(unsigned __int16 *)j;
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
            LOWORD(v31) = v57;
          }
        }
        else
        {
          LOWORD(v32) = v32 - 32;
        }
      }
      v29 = (_WORD)v31 == (unsigned __int16)v32;
      v27 = v53;
      if ( !v29 )
      {
LABEL_38:
        v29 = j == v27;
        break;
      }
      v10 += 2;
    }
    if ( !v29 || *(_WORD *)v10 != 61 )
    {
      v57 = 0;
      v33 = v55;
      while ( 1 )
      {
        v34 = *(unsigned __int16 *)v10;
        if ( !(_WORD)v34 )
          goto LABEL_51;
        if ( v34 == 61 && v10 != v55 )
          goto LABEL_45;
        v10 += 2;
      }
    }
    v57 = 1;
    v33 = v55;
LABEL_45:
    v35 = v10;
    while ( *(_WORD *)v10 )
      v10 += 2;
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
          if ( *k == v55 )
          {
            v41 = k == (char **)v40;
            break;
          }
        }
        if ( v41 )
        {
          *k = v55;
          k[1] = v10 + 2;
          ++*v37;
          dword_4B3A65D0 = (int)(v10 + 2);
        }
      }
    }
    if ( !v57 )
    {
LABEL_51:
      v10 += 2;
      v27 = v53;
      v26 = Name;
      continue;
    }
    break;
  }
  v42 = v35 + 2;
  v43 = (v10 - v42) >> 1;
  if ( HIDWORD(NameLength) )
  {
    if ( v43 < (unsigned int)Value )
    {
      *(_DWORD *)ValueLength = v43;
      v44 = 2 * v43;
      LODWORD(v50) = v44;
      memcpy((void *)HIDWORD(NameLength), v42, v50);
      v45 = 0;
      *(_WORD *)(v44 + HIDWORD(NameLength)) = 0;
      goto LABEL_73;
    }
    if ( Value )
      *(_WORD *)HIDWORD(NameLength) = 0;
  }
  *(_DWORD *)ValueLength = v43 + 1;
  v45 = -1073741789;
LABEL_73:
  v58 = v45;
LABEL_28:
  ms_exc.registration.TryLevel = 0;
  RtlLeaveCriticalSection(NtCurrentPeb()->FastPebLock);
  PseudoEnvironmentVariable = v58;
LABEL_29:
  ms_exc.registration.TryLevel = -2;
  return PseudoEnvironmentVariable;
}
