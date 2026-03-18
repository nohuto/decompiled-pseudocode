/*
 * XREFs of PopDirectedDripsDiagInitialize @ 0x140A3CE5C
 * Callers:
 *     PopDirectedDripsInitializePhase0 @ 0x140A3CD84 (PopDirectedDripsInitializePhase0.c)
 *     PopDirectedDripsInitializePhase3 @ 0x140A6A3BC (PopDirectedDripsInitializePhase3.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140298F60 (RtlInitUnicodeString.c)
 *     memset @ 0x14040A280 (memset.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x14077ACB4 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 */

void __fastcall PopDirectedDripsDiagInitialize(int a1)
{
  if ( a1 )
  {
    if ( a1 == 3 )
    {
      PopDirectedDripsDiagTraceHandleRegistered = 0;
      if ( (int)TraceLoggingRegisterEx_EtwRegister_EtwSetInformation((ULONGLONG *)&dword_140D2D920, 0LL, 0LL) >= 0 )
        PopDirectedDripsDiagTraceHandleRegistered = 1;
    }
  }
  else
  {
    RtlInitUnicodeString(&PopDirectedDripsDiagEmptyString, &word_140A73040);
    PopDirectedDripsDiagLock = 0LL;
    memset(&PopDirectedDripsDiagSessionContext, 0, 0x210uLL);
    qword_140C1E930 = 0LL;
    qword_140C1E918 = (__int64)&qword_140C1E910;
    qword_140C1E910 = &qword_140C1E910;
    qword_140C1E908 = (__int64)&PopDirectedDripsDiagSessionContext;
    PopDirectedDripsDiagSessionContext = &PopDirectedDripsDiagSessionContext;
    dword_140C1EB00 = 1;
    dword_140C1EB04 = 1;
  }
}
