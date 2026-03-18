/*
 * XREFs of Debugger @ 0x1C0066AA8
 * Callers:
 *     AMLIDebugger @ 0x1C0065AF0 (AMLIDebugger.c)
 * Callees:
 *     RtlStringCchCopyA @ 0x1C0022CF0 (RtlStringCchCopyA.c)
 *     __security_check_cookie @ 0x1C0031A20 (__security_check_cookie.c)
 *     _stricmp_0 @ 0x1C0031B47 (_stricmp_0.c)
 *     memset @ 0x1C0032180 (memset.c)
 *     RtlStringCchCatA @ 0x1C005E164 (RtlStringCchCatA.c)
 *     ConPrompt @ 0x1C0065C48 (ConPrompt.c)
 *     DbgExecuteCmd @ 0x1C006697C (DbgExecuteCmd.c)
 */

__int64 __fastcall Debugger(__int64 a1)
{
  char *v1; // rsi
  unsigned int v2; // ebx
  const char **v3; // rdi
  __int64 v4; // rcx
  __int64 result; // rax
  char *Context; // [rsp+28h] [rbp-E0h] BYREF
  CHAR Name[8]; // [rsp+30h] [rbp-D8h] BYREF
  CHAR Command[272]; // [rsp+38h] [rbp-D0h] BYREF
  char pszSrc[256]; // [rsp+148h] [rbp+40h] BYREF
  char pszDest[256]; // [rsp+248h] [rbp+140h] BYREF

  Context = 0LL;
  do
  {
    do
    {
LABEL_2:
      ConPrompt(a1, pszSrc);
      RtlStringCchCopyA(pszDest, 0x100uLL, pszSrc);
      v1 = strtok_s(pszSrc, " \t\n", &Context);
    }
    while ( !v1 );
    v2 = 0;
    v3 = (const char **)off_1C006F1D0;
    do
    {
      if ( !stricmp_0(*v3, v1) )
      {
        memset(Command, 0, 0x109uLL);
        strcpy(Name, "ACPI");
        RtlStringCchCopyA(Command, 0x109uLL, "!AMLI ");
        RtlStringCchCatA(Command, 0x109uLL, pszDest);
        RtlStringCchCatA(Command, 0x109uLL, " ; g");
        DbgCommandString(Name, Command);
        goto LABEL_2;
      }
      ++v2;
      ++v3;
    }
    while ( v2 < 0x11 );
    result = DbgExecuteCmd(v4, (unsigned __int8 *)v1, &Context);
  }
  while ( (_DWORD)result != -1 );
  return result;
}
