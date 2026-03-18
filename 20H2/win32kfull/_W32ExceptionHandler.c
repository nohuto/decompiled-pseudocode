/*
 * XREFs of _W32ExceptionHandler @ 0x1C025CF44
 * Callers:
 *     xxxCreateWindowEx @ 0x1C00B5990 (xxxCreateWindowEx.c)
 *     NtUserUnregisterClass @ 0x1C00D5B40 (NtUserUnregisterClass.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00D8A90 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     SfnDWORDOPTINLPMSG @ 0x1C012FCB0 (SfnDWORDOPTINLPMSG.c)
 * Callees:
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 */

__int64 __fastcall W32ExceptionHandler(NTSTATUS a1)
{
  ULONG v1; // eax
  __int64 v2; // rdx
  __int64 v3; // r8

  v1 = RtlNtStatusToDosError(a1);
  UserSetLastError(v1, v2, v3);
  return 1LL;
}
