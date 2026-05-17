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

int __stdcall RtlAssert(const char *a1, const char *a2, int a3, const char *a4)
{
  const char *v4; // eax
  int result; // eax
  bool v6; // zf
  int v7; // eax
  int v8; // eax
  char v9[4]; // [esp+Ch] [ebp-2DCh] BYREF
  CONTEXT ContextRecord; // [esp+10h] [ebp-2D8h] BYREF

  RtlCaptureContext(&ContextRecord);
  while ( 1 )
  {
    v4 = a4;
    if ( !a4 )
      v4 = (const char *)&dword_4B2850A4;
    DbgPrintEx(101, 0, "\n*** Assertion failed: %s%s\n***   Source File: %s, line %ld\n\n", v4, a1, a2, a3);
    result = RtlIsAnyDebuggerPresent();
    if ( !(_BYTE)result )
      return result;
    if ( !DbgPrompt(
            "Break repeatedly, break Once, Ignore, terminate Process, or terminate Thread (boipt)? ",
            (int)v9,
            2u) )
    {
      __debugbreak();
      return ZwTerminateProcess(-1, -1073741823);
    }
    if ( v9[0] > 98 )
    {
      result = v9[0] - 105;
      v6 = v9[0] == 105;
LABEL_11:
      if ( v6 )
        return result;
      v7 = result - 6;
      if ( !v7 )
        goto LABEL_16;
      v8 = v7 - 1;
      if ( !v8 )
        return ZwTerminateProcess(-1, -1073741823);
      if ( v8 == 4 )
        ZwTerminateThread(-2, -1073741823);
    }
    else
    {
      if ( v9[0] != 98 && v9[0] != 66 )
      {
        result = v9[0] - 73;
        v6 = v9[0] == 73;
        goto LABEL_11;
      }
LABEL_16:
      result = DbgPrintEx(101, 0, "Execute '.cxr %p' to dump context\n", &ContextRecord);
      __debugbreak();
      if ( v9[0] == 111 || v9[0] == 79 )
        return result;
    }
  }
}
