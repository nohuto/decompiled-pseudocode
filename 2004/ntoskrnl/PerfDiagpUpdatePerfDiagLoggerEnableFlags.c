/*
 * XREFs of PerfDiagpUpdatePerfDiagLoggerEnableFlags @ 0x14079D9D8
 * Callers:
 *     PerfDiagpProxyWorker @ 0x14079D790 (PerfDiagpProxyWorker.c)
 * Callees:
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     memmove @ 0x140409FC0 (memmove.c)
 *     memset @ 0x14040A280 (memset.c)
 *     RtlpQueryRegistryValues @ 0x1405DFA64 (RtlpQueryRegistryValues.c)
 *     NtTraceControl @ 0x14068D910 (NtTraceControl.c)
 *     PerfDiagpInitializeLoggerInfo @ 0x14079DAEC (PerfDiagpInitializeLoggerInfo.c)
 */

__int64 __fastcall PerfDiagpUpdatePerfDiagLoggerEnableFlags(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  unsigned int v4; // ebx
  unsigned int v5[4]; // [rsp+30h] [rbp-69h] BYREF
  _QWORD v6[14]; // [rsp+40h] [rbp-59h] BYREF
  _OWORD Src[3]; // [rsp+B0h] [rbp+17h] BYREF

  v5[0] = 0;
  memset(Src, 0, sizeof(Src));
  memset(v6, 0, sizeof(v6));
  LODWORD(v6[1]) = 32;
  v6[2] = a2;
  v6[3] = Src;
  LODWORD(v6[4]) = 3;
  LODWORD(Src[0]) = 48;
  result = RtlpQueryRegistryValues(2LL, L"Diagnostics\\Performance\\BootCKCLSettings", (__int64)v6, 0LL);
  if ( (int)result >= 0 )
  {
    if ( DWORD1(Src[0]) == 3 )
    {
      v4 = Src[0];
      if ( LODWORD(Src[0]) > 0x28 )
      {
        return 3221225507LL;
      }
      else
      {
        memmove(&unk_140C1A108, (char *)Src + 8, LODWORD(Src[0]));
        PerfDiagpInitializeLoggerInfo(1LL, v4 >> 2);
        return NtTraceControl(4u, dword_140C1A050, dword_140C1A050[0], dword_140C1A050, dword_140C1A050[0], v5);
      }
    }
    else
    {
      return 3221225485LL;
    }
  }
  return result;
}
