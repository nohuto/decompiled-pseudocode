/*
 * XREFs of LdrpBuildImportRedirection @ 0x1800D4F84
 * Callers:
 *     LdrpInitializeImportRedirection @ 0x180082514 (LdrpInitializeImportRedirection.c)
 * Callees:
 *     LdrpGetProcedureAddress @ 0x1800321C0 (LdrpGetProcedureAddress.c)
 *     LdrpAddRedirectedFunction @ 0x1800D4C54 (LdrpAddRedirectedFunction.c)
 */

__int64 __fastcall LdrpBuildImportRedirection(__int64 a1, char *a2)
{
  int ProcedureAddress; // edi
  char *v4; // rsi
  __int64 v5; // rbx
  char *v7; // [rsp+38h] [rbp+10h] BYREF

  v7 = a2;
  ProcedureAddress = LdrpGetProcedureAddress(*(_QWORD *)(a1 + 48), "__RedirectionInformation__", 0, &v7);
  if ( ProcedureAddress >= 0 )
  {
    LdrpGetProcedureAddress(*(_QWORD *)(a1 + 48), "__ShouldApplyRedirection__", 0, (char **)&LdrpRedirectionCalloutFunc);
    LdrpGetProcedureAddress(
      *(_QWORD *)(a1 + 48),
      "__ShouldApplyRedirectionToFunction__",
      0,
      (char **)&LdrpRedirectionByFunctionCalloutFunc);
    v4 = v7;
    if ( *(_DWORD *)v7 == 1 )
    {
      v5 = 0LL;
      if ( *((_DWORD *)v7 + 1) )
      {
        do
        {
          ProcedureAddress = LdrpAddRedirectedFunction(*((_QWORD *)v4 + 1) + 24 * v5, v5);
          if ( ProcedureAddress < 0 )
            break;
          v5 = (unsigned int)(v5 + 1);
        }
        while ( (unsigned int)v5 < *((_DWORD *)v4 + 1) );
      }
    }
    else
    {
      return (unsigned int)-1073739509;
    }
  }
  return (unsigned int)ProcedureAddress;
}
