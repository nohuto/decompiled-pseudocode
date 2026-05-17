/*
 * XREFs of RtlGuardCheckLongJumpTarget @ 0x18006DDB0
 * Callers:
 *     RtlGuardRestoreContext @ 0x18006DCA0 (RtlGuardRestoreContext.c)
 * Callees:
 *     RtlpxLookupFunctionTable @ 0x180032F40 (RtlpxLookupFunctionTable.c)
 *     LdrControlFlowGuardEnforced @ 0x180033520 (LdrControlFlowGuardEnforced.c)
 *     LdrImageDirectoryEntryToLoadConfig @ 0x180035C00 (LdrImageDirectoryEntryToLoadConfig.c)
 *     RtlQueryProtectedPolicy @ 0x1800818D0 (RtlQueryProtectedPolicy.c)
 *     bsearch_s @ 0x18008EDC0 (bsearch_s.c)
 *     RtlFailFast2 @ 0x1800A2120 (RtlFailFast2.c)
 */

__int64 __fastcall RtlGuardCheckLongJumpTarget(unsigned __int64 a1, char a2, char *a3)
{
  unsigned __int64 v6; // r8
  unsigned __int64 v7; // r9
  char v9; // bl
  _DWORD *Config; // rax
  rsize_t v11; // r8
  __int64 v12; // [rsp+30h] [rbp-28h]
  __int128 v13; // [rsp+38h] [rbp-20h] BYREF
  int Key; // [rsp+78h] [rbp+20h] BYREF

  if ( (unsigned int)LdrControlFlowGuardEnforced() )
  {
    v9 = 0;
    if ( a1 < *((_QWORD *)&xmmword_18017F510 + 1)
      || a1 >= *((_QWORD *)&xmmword_18017F510 + 1) + (unsigned __int64)(unsigned int)qword_18017F520 )
    {
      RtlpxLookupFunctionTable(a1, (signed __int64)&v13, v6, v7);
    }
    else
    {
      v13 = xmmword_18017F510;
    }
    if ( *((_QWORD *)&v13 + 1) )
    {
      Config = LdrImageDirectoryEntryToLoadConfig(*((unsigned __int64 *)&v13 + 1));
      if ( !Config
        || *Config < 0xC0u
        || (Config[36] & 0x10000) == 0
        || (Key = a1 - DWORD2(v13), (v11 = *((_QWORD *)Config + 23)) != 0)
        && bsearch_s(
             &Key,
             *((const void **)Config + 22),
             v11,
             (unsigned int)((Config[36] >> 28) + 4),
             RtlpTargetCompare,
             0LL) )
      {
LABEL_12:
        v9 = 1;
        goto LABEL_13;
      }
    }
    else if ( (int)RtlQueryProtectedPolicy(&unk_18013D408) >= 0 && v12 )
    {
      goto LABEL_12;
    }
    if ( !a2 )
      RtlFailFast2(38LL, a1);
LABEL_13:
    if ( !a3 )
      return 0LL;
LABEL_14:
    *a3 = v9;
    return 0LL;
  }
  if ( a3 )
  {
    v9 = 1;
    goto LABEL_14;
  }
  return 0LL;
}
