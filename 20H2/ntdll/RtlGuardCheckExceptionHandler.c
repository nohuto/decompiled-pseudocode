/*
 * XREFs of RtlGuardCheckExceptionHandler @ 0x18006DFF0
 * Callers:
 *     RtlGuardRestoreContext @ 0x18006DDB0 (RtlGuardRestoreContext.c)
 *     RcFrameConsolidation @ 0x1800A17A0 (RcFrameConsolidation.c)
 * Callees:
 *     RtlpxLookupFunctionTable @ 0x180032F40 (RtlpxLookupFunctionTable.c)
 *     LdrControlFlowGuardEnforced @ 0x180033520 (LdrControlFlowGuardEnforced.c)
 *     LdrImageDirectoryEntryToLoadConfig @ 0x180035C00 (LdrImageDirectoryEntryToLoadConfig.c)
 *     bsearch_s @ 0x18008EEC0 (bsearch_s.c)
 *     RtlFailFast2 @ 0x1800A23C0 (RtlFailFast2.c)
 */

__int64 __fastcall RtlGuardCheckExceptionHandler(unsigned __int64 BaseAddress, char a2, char *a3)
{
  int v6; // eax
  char *v7; // r8
  char *v8; // r9
  char v9; // bl
  PVOID v10; // rbp
  _DWORD *Config; // rax
  const void **v12; // rdx
  rsize_t v13; // r8
  unsigned int v14; // eax
  PVOID BaseOfImage[2]; // [rsp+30h] [rbp-38h] BYREF
  int Key; // [rsp+88h] [rbp+20h] BYREF

  LOBYTE(v6) = LdrControlFlowGuardEnforced();
  if ( v6 )
  {
    v9 = 0;
    if ( BaseAddress < *((_QWORD *)&xmmword_180181510 + 1)
      || BaseAddress >= *((_QWORD *)&xmmword_180181510 + 1) + (unsigned __int64)(unsigned int)qword_180181520 )
    {
      RtlpxLookupFunctionTable(BaseAddress, (signed __int64)BaseOfImage, v7, v8);
    }
    else
    {
      *(_OWORD *)BaseOfImage = xmmword_180181510;
    }
    v10 = BaseOfImage[1];
    if ( BaseOfImage[1]
      && (Config = LdrImageDirectoryEntryToLoadConfig(BaseOfImage[1]), (v12 = (const void **)Config) != 0LL)
      && *Config >= 0x118u
      && (Config[36] & 0x400000) != 0
      && *((_QWORD *)Config + 33) > (unsigned __int64)v10
      && ((Key = BaseAddress - (_DWORD)v10, v13 = *((_QWORD *)Config + 34), v14 = (Config[36] >> 28) + 4, !v13)
       || !bsearch_s(&Key, v12[33], v13, v14, RtlpTargetCompare, 0LL)) )
    {
      if ( !a2 )
        RtlFailFast2(38LL, BaseAddress);
    }
    else
    {
      v9 = 1;
    }
    if ( a3 )
      goto LABEL_19;
  }
  else if ( a3 )
  {
    v9 = 1;
LABEL_19:
    *a3 = v9;
  }
  return 0LL;
}
