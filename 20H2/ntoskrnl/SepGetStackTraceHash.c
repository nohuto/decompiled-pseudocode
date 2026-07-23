/*
 * XREFs of SepGetStackTraceHash @ 0x1405946E0
 * Callers:
 *     SepLogLpacAccessFailure @ 0x1405947F8 (SepLogLpacAccessFailure.c)
 *     NtQueryInformationToken @ 0x14061D520 (NtQueryInformationToken.c)
 * Callees:
 *     RtlWalkFrameChain @ 0x140228EA0 (RtlWalkFrameChain.c)
 *     RtlCaptureStackBackTrace @ 0x140228FF0 (RtlCaptureStackBackTrace.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     ZwQueryVirtualMemory @ 0x1403F85D0 (ZwQueryVirtualMemory.c)
 *     memset @ 0x140411300 (memset.c)
 */

ULONG __fastcall SepGetStackTraceHash(ULONG *a1)
{
  ULONG result; // eax
  unsigned int v3; // esi
  unsigned __int16 v4; // di
  int v5; // ecx
  ULONG v6; // ecx
  ULONG BackTraceHash; // [rsp+30h] [rbp-79h] BYREF
  __int128 MemoryInformation; // [rsp+38h] [rbp-71h] BYREF
  __int64 v9; // [rsp+48h] [rbp-61h]
  PVOID BackTrace[16]; // [rsp+50h] [rbp-59h] BYREF

  BackTraceHash = 0;
  memset(BackTrace, 0, sizeof(BackTrace));
  v9 = 0LL;
  MemoryInformation = 0LL;
  RtlCaptureStackBackTrace(2u, 0x10u, BackTrace, &BackTraceHash);
  result = RtlWalkFrameChain(BackTrace, 0x10u, 1u);
  v3 = result;
  v4 = 0;
  if ( result > 0x10 )
    v3 = 16;
  if ( v3 )
  {
    do
    {
      if ( ZwQueryVirtualMemory(
             (HANDLE)0xFFFFFFFFFFFFFFFFLL,
             BackTrace[v4],
             MemoryImageInformation,
             &MemoryInformation,
             0x18uLL,
             0LL) < 0
        || (unsigned __int64)BackTrace[v4] < (unsigned __int64)MemoryInformation )
      {
        v5 = (int)BackTrace[v4];
      }
      else
      {
        v5 = LODWORD(BackTrace[v4]) - MemoryInformation;
      }
      v6 = BackTraceHash + v5;
      result = ++v4;
      BackTraceHash = v6;
    }
    while ( v4 < v3 );
  }
  else
  {
    v6 = BackTraceHash;
  }
  *a1 = v6;
  return result;
}
