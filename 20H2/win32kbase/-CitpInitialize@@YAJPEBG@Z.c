/*
 * XREFs of ?CitpInitialize@@YAJPEBG@Z @ 0x1C009CB88
 * Callers:
 *     CitProcessCallout @ 0x1C0062720 (CitProcessCallout.c)
 * Callees:
 *     ?CitpStart@@YAJXZ @ 0x1C009CD0C (-CitpStart@@YAJXZ.c)
 *     ?CitpEnsureDataKey@@YAJPEAPEAX@Z @ 0x1C009D690 (-CitpEnsureDataKey@@YAJPEAPEAX@Z.c)
 *     ?CitpParametersLoad@@YAXPEAU_CIT_PARAMETERS@@PEBG@Z @ 0x1C009D970 (-CitpParametersLoad@@YAXPEAU_CIT_PARAMETERS@@PEBG@Z.c)
 *     ?CitpParametersCompute@@YAXPEAU_CIT_PARAMETERS@@@Z @ 0x1C009DBFC (-CitpParametersCompute@@YAXPEAU_CIT_PARAMETERS@@@Z.c)
 *     ?CitpLogFailureWorker@@YAXJPEBDI@Z @ 0x1C01F823C (-CitpLogFailureWorker@@YAXJPEBDI@Z.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x1C02788F8 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 */

__int64 __fastcall CitpInitialize(PCWSTR SourceString)
{
  __int64 result; // rax
  int v3; // eax
  const char *v4; // rdx
  HANDLE Handle; // [rsp+38h] [rbp+10h] BYREF

  qword_1C024E494 = 0x100000040080022LL;
  xmmword_1C024E484 = 0LL;
  dword_1C024E49C = 0;
  *(_QWORD *)&xmmword_1C024E474 = 0xEA6000000040LL;
  *((_QWORD *)&xmmword_1C024E474 + 1) = 92771293597200000LL;
  *(_QWORD *)&xmmword_1C024E484 = 0xEA6000000001LL;
  DWORD2(xmmword_1C024E484) = 1000;
  CitpParametersCompute((struct _CIT_PARAMETERS *)&xmmword_1C024E474);
  *(_OWORD *)&xmmword_1C024E4A0 = 0LL;
  xmmword_1C024E4C0 = 0LL;
  *(_QWORD *)&xmmword_1C024E4B0 = MEMORY[0xFFFFF78000000008];
  *((_QWORD *)&xmmword_1C024E4B0 + 1) = MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0];
  *(_QWORD *)&xmmword_1C024E4C0 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                                 * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
  LOBYTE(g_CompatImpact) = 1;
  DWORD2(xmmword_1C024E4C0) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  *((_DWORD *)&xmmword_1C024E4A0 + 2) = DWORD2(xmmword_1C024E4C0);
  TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&dword_1C0243418);
  if ( gSessionId == gServiceSessionId )
  {
    Handle = 0LL;
    v3 = CitpEnsureDataKey(&Handle);
    if ( v3 < 0 )
      CitpLogFailureWorker(v3, v4, 0x83u);
    else
      ZwClose(Handle);
  }
  CitpParametersLoad((struct _CIT_PARAMETERS *)&xmmword_1C024E474, SourceString);
  if ( !BYTE4(qword_1C024E494) )
    return 0LL;
  result = CitpStart();
  if ( (int)result >= 0 )
    return 0LL;
  return result;
}
