/*
 * XREFs of ?CitpInitialize@@YAJPEBG@Z @ 0x1C0023E80
 * Callers:
 *     CitProcessCallout @ 0x1C006AF60 (CitProcessCallout.c)
 * Callees:
 *     ?CitpStart@@YAJXZ @ 0x1C0024004 (-CitpStart@@YAJXZ.c)
 *     ?CitpEnsureDataKey@@YAJPEAPEAX@Z @ 0x1C0024988 (-CitpEnsureDataKey@@YAJPEAPEAX@Z.c)
 *     ?CitpParametersLoad@@YAXPEAU_CIT_PARAMETERS@@PEBG@Z @ 0x1C0024C68 (-CitpParametersLoad@@YAXPEAU_CIT_PARAMETERS@@PEBG@Z.c)
 *     ?CitpParametersCompute@@YAXPEAU_CIT_PARAMETERS@@@Z @ 0x1C0024EF4 (-CitpParametersCompute@@YAXPEAU_CIT_PARAMETERS@@@Z.c)
 *     ?CitpLogFailureWorker@@YAXJPEBDI@Z @ 0x1C01FF578 (-CitpLogFailureWorker@@YAXJPEBDI@Z.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x1C0280744 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 */

__int64 __fastcall CitpInitialize(PCWSTR SourceString)
{
  __int64 result; // rax
  int v3; // eax
  const char *v4; // rdx
  HANDLE Handle; // [rsp+38h] [rbp+10h] BYREF

  qword_1C0256424 = 0x100000040080022LL;
  xmmword_1C0256414 = 0LL;
  dword_1C025642C = 0;
  *(_QWORD *)&xmmword_1C0256404 = 0xEA6000000040LL;
  *((_QWORD *)&xmmword_1C0256404 + 1) = 92771293597200000LL;
  *(_QWORD *)&xmmword_1C0256414 = 0xEA6000000001LL;
  DWORD2(xmmword_1C0256414) = 1000;
  CitpParametersCompute((struct _CIT_PARAMETERS *)&xmmword_1C0256404);
  *(_OWORD *)&xmmword_1C0256430 = 0LL;
  xmmword_1C0256450 = 0LL;
  *(_QWORD *)&xmmword_1C0256440 = MEMORY[0xFFFFF78000000008];
  *((_QWORD *)&xmmword_1C0256440 + 1) = MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0];
  *(_QWORD *)&xmmword_1C0256450 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                                 * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
  LOBYTE(g_CompatImpact) = 1;
  DWORD2(xmmword_1C0256450) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  *((_DWORD *)&xmmword_1C0256430 + 2) = DWORD2(xmmword_1C0256450);
  TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&dword_1C024B418);
  if ( gSessionId == gServiceSessionId )
  {
    Handle = 0LL;
    v3 = CitpEnsureDataKey(&Handle);
    if ( v3 < 0 )
      CitpLogFailureWorker(v3, v4, 0x83u);
    else
      ZwClose(Handle);
  }
  CitpParametersLoad((struct _CIT_PARAMETERS *)&xmmword_1C0256404, SourceString);
  if ( !BYTE4(qword_1C0256424) )
    return 0LL;
  result = CitpStart();
  if ( (int)result >= 0 )
    return 0LL;
  return result;
}
