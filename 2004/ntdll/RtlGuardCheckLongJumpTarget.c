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

NTSTATUS __cdecl RtlGuardCheckLongJumpTarget(PVOID PcValue, BOOL IsFastFail, PBOOL IsLongJumpTarget)
{
  bool v4; // bp
  int v6; // eax
  char *v7; // r8
  char *v8; // r9
  char v10; // bl
  _DWORD *Config; // rax
  rsize_t v12; // r8
  unsigned __int64 PolicyValue; // [rsp+30h] [rbp-28h] BYREF
  PVOID BaseOfImage[2]; // [rsp+38h] [rbp-20h] BYREF
  int Key; // [rsp+78h] [rbp+20h] BYREF

  v4 = IsFastFail;
  LOBYTE(v6) = LdrControlFlowGuardEnforced();
  if ( v6 )
  {
    v10 = 0;
    if ( (unsigned __int64)PcValue < *((_QWORD *)&xmmword_18017F510 + 1)
      || (unsigned __int64)PcValue >= *((_QWORD *)&xmmword_18017F510 + 1)
                                    + (unsigned __int64)(unsigned int)qword_18017F520 )
    {
      RtlpxLookupFunctionTable((unsigned __int64)PcValue, (signed __int64)BaseOfImage, v7, v8);
    }
    else
    {
      *(_OWORD *)BaseOfImage = xmmword_18017F510;
    }
    if ( BaseOfImage[1] )
    {
      Config = LdrImageDirectoryEntryToLoadConfig(BaseOfImage[1]);
      if ( !Config
        || *Config < 0xC0u
        || (Config[36] & 0x10000) == 0
        || (Key = (_DWORD)PcValue - LODWORD(BaseOfImage[1]), (v12 = *((_QWORD *)Config + 23)) != 0)
        && bsearch_s(
             &Key,
             *((const void **)Config + 22),
             v12,
             (unsigned int)((Config[36] >> 28) + 4),
             RtlpTargetCompare,
             0LL) )
      {
LABEL_12:
        v10 = 1;
        goto LABEL_13;
      }
    }
    else if ( RtlQueryProtectedPolicy((PGUID)&stru_18013D408, &PolicyValue) >= 0 && PolicyValue )
    {
      goto LABEL_12;
    }
    if ( !v4 )
      RtlFailFast2(38LL, PcValue);
LABEL_13:
    if ( !IsLongJumpTarget )
      return 0;
LABEL_14:
    *(_BYTE *)IsLongJumpTarget = v10;
    return 0;
  }
  if ( IsLongJumpTarget )
  {
    v10 = 1;
    goto LABEL_14;
  }
  return 0;
}
