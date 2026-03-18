/*
 * XREFs of PopDirectedDripsDiagInitialize @ 0x140A430FC
 * Callers:
 *     PopDirectedDripsInitializePhase0 @ 0x140A43024 (PopDirectedDripsInitializePhase0.c)
 *     PopDirectedDripsInitializePhase3 @ 0x140A70CC8 (PopDirectedDripsInitializePhase3.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140210D50 (RtlInitUnicodeString.c)
 *     memset @ 0x140411300 (memset.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x1407892B4 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
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
    RtlInitUnicodeString(&PopDirectedDripsDiagEmptyString, &word_140A791F0);
    PopDirectedDripsDiagLock = 0LL;
    memset(&PopDirectedDripsDiagSessionContext, 0, 0x210uLL);
    qword_140C1E8B0 = 0LL;
    qword_140C1E898 = (__int64)&qword_140C1E890;
    qword_140C1E890 = &qword_140C1E890;
    qword_140C1E888 = (__int64)&PopDirectedDripsDiagSessionContext;
    PopDirectedDripsDiagSessionContext = &PopDirectedDripsDiagSessionContext;
    dword_140C1EA80 = 1;
    dword_140C1EA84 = 1;
  }
}
