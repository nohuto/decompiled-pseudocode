/*
 * XREFs of PopDirectedDripsDiagInitialize @ 0x140B272B0
 * Callers:
 *     PopDirectedDripsInitializePhase3 @ 0x140B270C4 (PopDirectedDripsInitializePhase3.c)
 *     PopDirectedDripsInitializePhase0 @ 0x140B271D8 (PopDirectedDripsInitializePhase0.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     memset @ 0x140435E00 (memset.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x1406D2264 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 */

void __fastcall PopDirectedDripsDiagInitialize(int a1)
{
  if ( a1 )
  {
    if ( a1 == 3 )
    {
      PopDirectedDripsDiagTraceHandleRegistered = 0;
      if ( (int)TraceLoggingRegisterEx_EtwRegister_EtwSetInformation((char *)&dword_140D3B940, 0LL, 0LL) >= 0 )
        PopDirectedDripsDiagTraceHandleRegistered = 1;
    }
  }
  else
  {
    RtlInitUnicodeString(&PopDirectedDripsDiagEmptyString, &word_140B33460);
    PopDirectedDripsDiagLock = 0LL;
    memset(&PopDirectedDripsDiagSessionContext, 0, 0x230uLL);
    qword_140C1CB90 = 0LL;
    qword_140C1CB78 = (__int64)&qword_140C1CB70;
    qword_140C1CB70 = &qword_140C1CB70;
    qword_140C1CB68 = (__int64)&PopDirectedDripsDiagSessionContext;
    PopDirectedDripsDiagSessionContext = &PopDirectedDripsDiagSessionContext;
    dword_140C1CD80 = 1;
    dword_140C1CD84 = 1;
  }
}
