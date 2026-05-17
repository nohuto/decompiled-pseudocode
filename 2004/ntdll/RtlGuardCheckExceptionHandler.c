/*
 * XREFs of RtlGuardCheckExceptionHandler @ 0x18006DEE0
 * Callers:
 *     RtlGuardRestoreContext @ 0x18006DCA0 (RtlGuardRestoreContext.c)
 *     RcFrameConsolidation @ 0x1800A1500 (RcFrameConsolidation.c)
 * Callees:
 *     RtlpxLookupFunctionTable @ 0x180032F40 (RtlpxLookupFunctionTable.c)
 *     LdrControlFlowGuardEnforced @ 0x180033520 (LdrControlFlowGuardEnforced.c)
 *     LdrImageDirectoryEntryToLoadConfig @ 0x180035C00 (LdrImageDirectoryEntryToLoadConfig.c)
 *     bsearch_s @ 0x18008EDC0 (bsearch_s.c)
 *     Feature_Servicing_EHCONT_Checks_28208890__private_IsEnabled @ 0x18009C6C0 (Feature_Servicing_EHCONT_Checks_28208890__private_IsEnabled.c)
 *     RtlFailFast2 @ 0x1800A2120 (RtlFailFast2.c)
 */

__int64 __fastcall RtlGuardCheckExceptionHandler(unsigned __int64 a1, char a2, char *a3)
{
  char v6; // bl
  unsigned __int64 v7; // r8
  unsigned __int64 v8; // r9
  unsigned __int64 v9; // rbp
  _DWORD *Config; // rax
  const void **v11; // rdx
  rsize_t v12; // r8
  unsigned int v13; // eax
  __int128 v15; // [rsp+30h] [rbp-38h] BYREF
  int Key; // [rsp+88h] [rbp+20h] BYREF

  if ( (unsigned int)Feature_Servicing_EHCONT_Checks_28208890__private_IsEnabled()
    && (unsigned int)LdrControlFlowGuardEnforced() )
  {
    v6 = 0;
    if ( a1 < *((_QWORD *)&xmmword_18017F510 + 1)
      || a1 >= *((_QWORD *)&xmmword_18017F510 + 1) + (unsigned __int64)(unsigned int)qword_18017F520 )
    {
      RtlpxLookupFunctionTable(a1, (signed __int64)&v15, v7, v8);
    }
    else
    {
      v15 = xmmword_18017F510;
    }
    v9 = *((_QWORD *)&v15 + 1);
    if ( *((_QWORD *)&v15 + 1)
      && (Config = LdrImageDirectoryEntryToLoadConfig(*((unsigned __int64 *)&v15 + 1)),
          (v11 = (const void **)Config) != 0LL)
      && *Config >= 0x118u
      && (Config[36] & 0x400000) != 0
      && *((_QWORD *)Config + 33) > v9
      && ((Key = a1 - v9, v12 = *((_QWORD *)Config + 34), v13 = (Config[36] >> 28) + 4, !v12)
       || !bsearch_s(&Key, v11[33], v12, v13, RtlpTargetCompare, 0LL)) )
    {
      if ( !a2 )
        RtlFailFast2(38LL, a1);
    }
    else
    {
      v6 = 1;
    }
    if ( a3 )
      goto LABEL_20;
  }
  else if ( a3 )
  {
    v6 = 1;
LABEL_20:
    *a3 = v6;
  }
  return 0LL;
}
