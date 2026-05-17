/*
 * XREFs of RtlQueryEnvironmentVariable @ 0x1800157E0
 * Callers:
 *     RtlExpandEnvironmentStrings @ 0x180015630 (RtlExpandEnvironmentStrings.c)
 *     RtlQueryEnvironmentVariable_U @ 0x18004B140 (RtlQueryEnvironmentVariable_U.c)
 *     RtlpComputePath @ 0x18006D800 (RtlpComputePath.c)
 *     RtlGetExePath @ 0x180082AC0 (RtlGetExePath.c)
 *     LdrpCorInitialize @ 0x1800832C4 (LdrpCorInitialize.c)
 * Callees:
 *     RtlIsCriticalSectionLockedByThread @ 0x180014890 (RtlIsCriticalSectionLockedByThread.c)
 *     RtlpQueryEnvironmentCache @ 0x180015DC0 (RtlpQueryEnvironmentCache.c)
 *     RtlpScanEnvironment @ 0x1800161D0 (RtlpScanEnvironment.c)
 *     RtlLeaveCriticalSection @ 0x18002F230 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18002FAA0 (RtlEnterCriticalSection.c)
 *     RtlpQueryPseudoEnvironmentVariable @ 0x18008974C (RtlpQueryPseudoEnvironmentVariable.c)
 *     _wcsnicmp @ 0x18008E4B0 (_wcsnicmp.c)
 *     memmove @ 0x1800A44C0 (memmove.c)
 */

__int64 __fastcall RtlQueryEnvironmentVariable(
        _WORD *a1,
        const wchar_t *a2,
        size_t a3,
        void *a4,
        unsigned __int64 a5,
        unsigned __int64 *a6)
{
  const wchar_t *v7; // r9
  struct _TEB *v9; // r13
  int v10; // r12d
  unsigned int PseudoEnvironmentVariable; // edi
  __int64 v12; // rbx
  __int64 v13; // r15
  unsigned __int64 v14; // rbx
  unsigned __int64 *v15; // r14
  _WORD *v16; // r13
  unsigned __int16 *v17; // rbx
  char *v18; // rax
  unsigned __int16 *v19; // rsi
  char *v20; // rdi
  unsigned __int16 *i; // r9
  bool v22; // zf
  unsigned __int64 v23; // r10
  unsigned __int64 v24; // r11
  int v25; // ebx
  char *v26; // r11
  __int64 v27; // rdx
  _DWORD *v28; // rdx
  __int64 v29; // r8
  char **j; // r9
  char **v31; // r10
  bool v32; // zf
  _BYTE *v33; // r11
  unsigned __int64 v34; // rax
  __int64 v35; // rbx
  _PEB *ProcessEnvironmentBlock; // rcx
  int v37; // r15d
  const wchar_t *v38; // rbx
  __int64 FastPebLock; // rcx
  unsigned __int64 v41; // [rsp+20h] [rbp-88h]
  unsigned __int64 v42; // [rsp+20h] [rbp-88h]
  unsigned int v43; // [rsp+40h] [rbp-68h]
  _WORD *Environment; // [rsp+C0h] [rbp+18h] BYREF
  void *v46; // [rsp+C8h] [rbp+20h]

  v46 = a4;
  v7 = a2;
  v9 = NtCurrentTeb();
  v10 = 0;
  *a6 = 0LL;
  if ( !a3 )
    return 3221225728LL;
  PseudoEnvironmentVariable = -1073741568;
  LODWORD(v12) = 4;
  while ( 1 )
  {
    do
    {
      if ( (_DWORD)v12 )
      {
        v12 = (unsigned int)(v12 - 1);
        v13 = 0x180000000LL + 24 * v12 + 1170064;
        if ( a3 <= *(_QWORD *)v13 )
          continue;
      }
      v14 = a5;
      goto LABEL_8;
    }
    while ( a3 != *(_QWORD *)v13 );
    if ( !wcsnicmp(v7, *(const wchar_t **)(0x180000008LL + 24 * v12 + 1170064), a3) )
      break;
    v7 = a2;
  }
  v14 = a5;
  PseudoEnvironmentVariable = RtlpQueryPseudoEnvironmentVariable(*(unsigned int *)(v13 + 16), v46, a5, a6);
LABEL_8:
  if ( PseudoEnvironmentVariable != -1073741568 )
    return PseudoEnvironmentVariable;
  if ( a1 )
  {
    Environment = a1;
    if ( !*a1 )
      return (unsigned int)-1073741568;
    ProcessEnvironmentBlock = v9->ProcessEnvironmentBlock;
    if ( ProcessEnvironmentBlock->ProcessParameters->Environment == a1
      && ((FastPebLock = (__int64)ProcessEnvironmentBlock->FastPebLock) == 0
       || RtlIsCriticalSectionLockedByThread(FastPebLock)) )
    {
      v42 = v14;
      v38 = a2;
      PseudoEnvironmentVariable = RtlpQueryEnvironmentCache(&Environment, a2, a3, v46, v42, a6);
      if ( PseudoEnvironmentVariable != -1073741568 )
        return PseudoEnvironmentVariable;
      v37 = 1;
      a1 = Environment;
    }
    else
    {
      v37 = 0;
      v38 = a2;
    }
    return (unsigned int)RtlpScanEnvironment(a1, v38, a3, v46, a5, a6, v37);
  }
  RtlEnterCriticalSection(NtCurrentPeb()->FastPebLock);
  Environment = v9->ProcessEnvironmentBlock->ProcessParameters->Environment;
  v15 = a6;
  v41 = v14;
  v16 = v46;
  v17 = (unsigned __int16 *)a2;
  v43 = RtlpQueryEnvironmentCache(&Environment, a2, a3, v46, v41, a6);
  if ( v43 != -1073741568 )
    goto LABEL_61;
  v18 = (char *)Environment;
  v19 = (unsigned __int16 *)&a2[a3];
  while ( 1 )
  {
    if ( !*(_WORD *)v18 )
    {
      qword_18016D160 = (__int64)v18;
      v43 = -1073741568;
      goto LABEL_61;
    }
    v20 = v18;
    for ( i = v17; ; ++i )
    {
      v22 = i == v19;
      if ( i >= v19 )
        break;
      v23 = *(unsigned __int16 *)v18;
      if ( !(_WORD)v23 )
        goto LABEL_19;
      if ( (unsigned int)v23 >= 0x61 )
      {
        if ( (unsigned int)v23 > 0x7A )
        {
          if ( Nls844UnicodeUpcaseTable && (unsigned __int16)v23 >= 0xC0u )
            LOWORD(v23) = *(_WORD *)(Nls844UnicodeUpcaseTable
                                   + 2
                                   * ((v23 & 0xF)
                                    + *(unsigned __int16 *)(Nls844UnicodeUpcaseTable
                                                          + 2LL
                                                          * (((unsigned __int8)v23 >> 4)
                                                           + (unsigned int)*(unsigned __int16 *)(Nls844UnicodeUpcaseTable
                                                                                               + 2 * (v23 >> 8))))))
                        + v23;
        }
        else
        {
          LOWORD(v23) = v23 - 32;
        }
      }
      v24 = *i;
      if ( (unsigned int)v24 >= 0x61 )
      {
        if ( (unsigned int)v24 > 0x7A )
        {
          if ( Nls844UnicodeUpcaseTable && (unsigned __int16)v24 >= 0xC0u )
            LOWORD(v24) = *(_WORD *)(Nls844UnicodeUpcaseTable
                                   + 2
                                   * ((v24 & 0xF)
                                    + *(unsigned __int16 *)(Nls844UnicodeUpcaseTable
                                                          + 2LL
                                                          * (((unsigned __int8)v24 >> 4)
                                                           + (unsigned int)*(unsigned __int16 *)(Nls844UnicodeUpcaseTable
                                                                                               + 2 * (v24 >> 8))))))
                        + v24;
        }
        else
        {
          LOWORD(v24) = v24 - 32;
        }
      }
      if ( (_WORD)v23 != (_WORD)v24 )
      {
LABEL_19:
        v22 = i == v19;
        break;
      }
      v18 += 2;
    }
    if ( v22 && *(_WORD *)v18 == 61 )
      break;
    v25 = 0;
    while ( *(_WORD *)v18 )
    {
      if ( *(_WORD *)v18 == 61 && v18 != v20 )
        goto LABEL_26;
      v18 += 2;
    }
LABEL_32:
    v18 += 2;
    v17 = (unsigned __int16 *)a2;
  }
  v25 = 1;
LABEL_26:
  v26 = v18;
  while ( *(_WORD *)v18 )
    v18 += 2;
  v27 = (v26 - v20) >> 1;
  if ( (unsigned __int64)(v27 - 1) <= 0x13 )
  {
    v28 = (_DWORD *)((char *)&HotPatchSpareGlobal5 + 56 * v27);
    v29 = (unsigned int)*v28;
    if ( (unsigned int)v29 < 3 )
    {
      for ( j = (char **)(v28 + 2); ; j += 2 )
      {
        v31 = (char **)&v28[4 * v29 + 2];
        v32 = j == v31;
        if ( j >= v31 )
          break;
        if ( *j == v20 )
        {
          v32 = j == v31;
          break;
        }
      }
      if ( v32 )
      {
        *j = v20;
        j[1] = v18 + 2;
        ++*v28;
        qword_18016D160 = (__int64)(v18 + 2);
      }
    }
  }
  if ( !v25 )
    goto LABEL_32;
  v33 = v26 + 2;
  v34 = (v18 - v33) >> 1;
  if ( v16 )
  {
    if ( v34 < a5 )
    {
      *v15 = v34;
      v35 = v34;
      memmove(v16, v33, 2 * v34);
      v16[v35] = 0;
      goto LABEL_51;
    }
    if ( a5 )
      *v16 = 0;
  }
  *v15 = v34 + 1;
  v10 = -1073741789;
LABEL_51:
  v43 = v10;
LABEL_61:
  RtlLeaveCriticalSection(NtCurrentPeb()->FastPebLock);
  return v43;
}
