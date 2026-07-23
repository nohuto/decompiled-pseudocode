/*
 * XREFs of _RtlAssert@16 @ 0x4B34FBC0
 * Callers:
 *     _RtlDosApplyFileIsolationRedirection_Ustr@36 @ 0x4B2C9830 (_RtlDosApplyFileIsolationRedirection_Ustr@36.c)
 *     sxsisol_SearchActCtxForDllName @ 0x4B2C9D90 (sxsisol_SearchActCtxForDllName.c)
 *     sxsisol_FreeUnicodeStringBufferAroundUnicodeStrings_Success @ 0x4B2EBA54 (sxsisol_FreeUnicodeStringBufferAroundUnicodeStrings_Success.c)
 * Callees:
 *     _ZwTerminateProcess@8 @ 0x4B2F2C40 (_ZwTerminateProcess@8.c)
 *     _ZwTerminateThread@8 @ 0x4B2F2EB0 (_ZwTerminateThread@8.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _RtlCaptureContext@4 @ 0x4B308820 (_RtlCaptureContext@4.c)
 *     _DbgPrintEx @ 0x4B33EE00 (_DbgPrintEx.c)
 *     _DbgPrompt@12 @ 0x4B33EE60 (_DbgPrompt@12.c)
 *     _RtlIsAnyDebuggerPresent@0 @ 0x4B3668D0 (_RtlIsAnyDebuggerPresent@0.c)
 */

void __cdecl __noreturn RtlAssert(PVOID VoidFailedAssertion, PVOID VoidFileName, ULONG LineNumber, PSTR MutableMessage)
{
  PSTR v4; // eax
  bool v5; // zf
  int v6; // eax
  int v7; // eax
  int v8; // eax
  CHAR Response[4]; // [esp+Ch] [ebp-2DCh] BYREF
  _CONTEXT ContextRecord; // [esp+10h] [ebp-2D8h] BYREF

  RtlCaptureContext(&ContextRecord);
  while ( 1 )
  {
    v4 = MutableMessage;
    if ( !MutableMessage )
      v4 = (PSTR)&dword_4B2850A4;
    DbgPrintEx(0x65u, 0, (int)"\n*** Assertion failed: %s%s\n***   Source File: %s, line %ld\n\n", (int)v4);
    if ( !RtlIsAnyDebuggerPresent() )
      break;
    if ( !DbgPrompt(
            "Break repeatedly, break Once, Ignore, terminate Process, or terminate Thread (boipt)? ",
            Response,
            2u) )
    {
      __debugbreak();
LABEL_20:
      ZwTerminateProcess((HANDLE)0xFFFFFFFF, -1073741823);
      return;
    }
    if ( Response[0] > 98 )
    {
      v6 = Response[0] - 105;
      v5 = Response[0] == 105;
LABEL_11:
      if ( v5 )
        return;
      v7 = v6 - 6;
      if ( !v7 )
        goto LABEL_16;
      v8 = v7 - 1;
      if ( !v8 )
        goto LABEL_20;
      if ( v8 == 4 )
        ZwTerminateThread((HANDLE)0xFFFFFFFE, -1073741823);
    }
    else
    {
      if ( Response[0] != 98 && Response[0] != 66 )
      {
        v6 = Response[0] - 73;
        v5 = Response[0] == 73;
        goto LABEL_11;
      }
LABEL_16:
      DbgPrintEx(0x65u, 0, (int)"Execute '.cxr %p' to dump context\n", (int)&ContextRecord);
      __debugbreak();
      if ( Response[0] == 111 || Response[0] == 79 )
        return;
    }
  }
}
