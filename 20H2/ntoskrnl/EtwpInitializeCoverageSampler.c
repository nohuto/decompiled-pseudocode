/*
 * XREFs of EtwpInitializeCoverageSampler @ 0x140A693E4
 * Callers:
 *     EtwpInitialize @ 0x140A68D10 (EtwpInitialize.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140210D50 (RtlInitUnicodeString.c)
 *     ExRundownCompleted @ 0x14023D900 (ExRundownCompleted.c)
 *     ExWaitForRundownProtectionRelease @ 0x1402D5F70 (ExWaitForRundownProtectionRelease.c)
 *     ExInitializePushLock @ 0x1402D6A50 (ExInitializePushLock.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 *     memset @ 0x140411300 (memset.c)
 *     ObCreateObjectType @ 0x14078B3B0 (ObCreateObjectType.c)
 */

__int64 EtwpInitializeCoverageSampler()
{
  __int64 result; // rax
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-39h] BYREF
  _QWORD v2[16]; // [rsp+40h] [rbp-29h] BYREF

  EtwpCovSampGlobals = 0LL;
  DestinationString = 0LL;
  ExInitializePushLock(&stru_140C19740);
  ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)&stru_140C19740);
  ExRundownCompleted((PEX_RUNDOWN_REF)&stru_140C19740);
  RtlInitUnicodeString(&DestinationString, L"CoverageSampler");
  memset(v2, 0, 0x78uLL);
  BYTE2(v2[0]) |= 4u;
  v2[8] = EtwpCoverageSamplerClose;
  LOWORD(v2[0]) = 120;
  v2[9] = EtwpCoverageSamplerDelete;
  HIDWORD(v2[4]) = 1;
  LODWORD(v2[5]) = 1224;
  LODWORD(v2[1]) = 402;
  HIDWORD(v2[3]) = 2031617;
  result = ObCreateObjectType(&DestinationString, (__int64)v2, 0LL, (__int64)&qword_140C19730);
  if ( (int)result < 0 )
    KeBugCheckEx(0x5Eu, 0xC0uLL, 0LL, 0LL, 0LL);
  return result;
}
