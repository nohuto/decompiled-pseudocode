/*
 * XREFs of LdrpResolveForwarder @ 0x1800332E8
 * Callers:
 *     LdrpSnapModule @ 0x1800323F0 (LdrpSnapModule.c)
 * Callees:
 *     LdrpLoadDependentModule @ 0x180017BE0 (LdrpLoadDependentModule.c)
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     LdrpGetProcedureAddress @ 0x1800321C0 (LdrpGetProcedureAddress.c)
 *     RtlpxLookupFunctionTable @ 0x180032F40 (RtlpxLookupFunctionTable.c)
 *     LdrControlFlowGuardEnforced @ 0x180033520 (LdrControlFlowGuardEnforced.c)
 *     RtlCharToInteger @ 0x180076B90 (RtlCharToInteger.c)
 *     strrchr @ 0x180091A40 (strrchr.c)
 *     LdrpCheckRedirection @ 0x1800D5040 (LdrpCheckRedirection.c)
 */

__int64 __fastcall LdrpResolveForwarder(char *Str, _QWORD *a2, __int64 a3, char **a4)
{
  __int64 v4; // rax
  int v5; // r15d
  char *v10; // rax
  __int16 v11; // r14
  const char *v12; // rdi
  int v13; // eax
  unsigned int v14; // ebx
  __int64 v15; // rax
  int ProcedureAddress; // eax
  char *v18; // rdi
  int v19; // eax
  char *v20; // r8
  char *v21; // r9
  __int64 v22; // [rsp+30h] [rbp-30h] BYREF
  PVOID BaseAddress; // [rsp+38h] [rbp-28h] BYREF
  __int64 v24; // [rsp+40h] [rbp-20h]
  ANSI_STRING SourceString; // [rsp+48h] [rbp-18h] BYREF
  ULONG Value; // [rsp+A0h] [rbp+40h] BYREF

  v4 = *(_QWORD *)(a3 + 176);
  v5 = 0;
  v22 = 0LL;
  BaseAddress = 0LL;
  v24 = v4;
  while ( 1 )
  {
    v10 = strrchr(Str, 46);
    if ( !v10 || (v11 = (_WORD)v10 - (_WORD)Str, (unsigned __int64)(v10 - Str) > 0xFFFF) )
    {
LABEL_29:
      v14 = -1073741701;
      goto LABEL_30;
    }
    v12 = v10 + 1;
    SourceString.Buffer = Str;
    SourceString.Length = (_WORD)v10 - (_WORD)Str;
    SourceString.MaximumLength = (_WORD)v10 - (_WORD)Str;
    if ( v10[1] == 35 )
    {
      if ( RtlCharToInteger(v10 + 2, 0, &Value) < 0 )
        goto LABEL_29;
      v12 = 0LL;
    }
    if ( v11 == 5 && (*(_DWORD *)Str | 0x20202020) == 0x6C64746E && ((unsigned __int8)Str[4] | 0x20) == 0x6C )
    {
      a2 = LdrpNtDllDataTableEntry;
      v22 = (__int64)LdrpNtDllDataTableEntry;
    }
    else
    {
      v13 = LdrpLoadDependentModule(&SourceString, v24, (__int64)a2, 1, (PVOID *)&v22, (__int64)&BaseAddress);
      v14 = v13;
      if ( v13 < 0 || v13 == 259 )
        goto LABEL_30;
      a2 = (_QWORD *)v22;
    }
    if ( (*(_DWORD *)(*(_QWORD *)(a3 + 176) + 32LL) & 0x2000000) != 0 )
    {
      if ( v12 )
      {
        v15 = LdrpCheckRedirection(a3, a2, v12);
        *a4 = (char *)v15;
        if ( v15 != -4530927 )
          return 0LL;
      }
    }
    ProcedureAddress = LdrpGetProcedureAddress(a2[6], v12, Value, a4);
    v14 = ProcedureAddress;
    if ( ProcedureAddress != -1073741267 )
      break;
    if ( ++v5 == 32 )
      goto LABEL_29;
    Str = *a4;
  }
  if ( ProcedureAddress >= 0 )
  {
    v18 = (char *)a2[6];
    LOBYTE(v19) = LdrControlFlowGuardEnforced();
    if ( v19 )
    {
      if ( (unsigned __int64)v18 < *((_QWORD *)&xmmword_180181510 + 1)
        || (unsigned __int64)v18 >= *((_QWORD *)&xmmword_180181510 + 1)
                                  + (unsigned __int64)(unsigned int)qword_180181520 )
      {
        RtlpxLookupFunctionTable((unsigned __int64)v18, (signed __int64)&SourceString, v20, v21);
      }
      else
      {
        SourceString = (ANSI_STRING)xmmword_180181510;
      }
      if ( SourceString.Buffer != v18 )
        __fastfail(0x18u);
    }
  }
LABEL_30:
  if ( BaseAddress )
    RtlFreeHeap(LdrpHeap, 0, BaseAddress);
  return v14;
}
