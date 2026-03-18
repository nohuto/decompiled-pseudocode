/*
 * XREFs of PopDirectedDripsDiagInitialize @ 0x140A3D204
 * Callers:
 *     PopDirectedDripsInitializePhase0 @ 0x140A3D12C (PopDirectedDripsInitializePhase0.c)
 *     PopDirectedDripsInitializePhase3 @ 0x140A6A15C (PopDirectedDripsInitializePhase3.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140206450 (RtlInitUnicodeString.c)
 *     memset @ 0x140408F80 (memset.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x1407788A4 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 */

void __fastcall PopDirectedDripsDiagInitialize(int a1)
{
  if ( a1 )
  {
    if ( a1 == 3 )
    {
      PopDirectedDripsDiagTraceHandleRegistered = 0;
      if ( (int)TraceLoggingRegisterEx_EtwRegister_EtwSetInformation((ULONGLONG *)&dword_140D2C920, 0LL, 0LL) >= 0 )
        PopDirectedDripsDiagTraceHandleRegistered = 1;
    }
  }
  else
  {
    RtlInitUnicodeString(&PopDirectedDripsDiagEmptyString, &word_140A72170);
    PopDirectedDripsDiagLock = 0LL;
    memset(&PopDirectedDripsDiagSessionContext, 0, 0x210uLL);
    qword_140C1E9D0 = 0LL;
    qword_140C1E9B8 = (__int64)&qword_140C1E9B0;
    qword_140C1E9B0 = &qword_140C1E9B0;
    qword_140C1E9A8 = (__int64)&PopDirectedDripsDiagSessionContext;
    PopDirectedDripsDiagSessionContext = &PopDirectedDripsDiagSessionContext;
    dword_140C1EBA0 = 1;
    dword_140C1EBA4 = 1;
  }
}
