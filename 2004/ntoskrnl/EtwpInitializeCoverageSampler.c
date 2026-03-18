/*
 * XREFs of EtwpInitializeCoverageSampler @ 0x140A62024
 * Callers:
 *     EtwpInitialize @ 0x140A61950 (EtwpInitialize.c)
 * Callees:
 *     ExInitializePushLock @ 0x140267800 (ExInitializePushLock.c)
 *     ExRundownCompleted @ 0x14027BE20 (ExRundownCompleted.c)
 *     RtlInitUnicodeString @ 0x140298F60 (RtlInitUnicodeString.c)
 *     ExWaitForRundownProtectionRelease @ 0x1402FA0C0 (ExWaitForRundownProtectionRelease.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 *     memset @ 0x14040A280 (memset.c)
 *     ObCreateObjectType @ 0x14077DE10 (ObCreateObjectType.c)
 */

__int64 EtwpInitializeCoverageSampler()
{
  __int64 result; // rax
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-39h] BYREF
  _QWORD v2[16]; // [rsp+40h] [rbp-29h] BYREF

  EtwpCovSampGlobals = 0LL;
  DestinationString = 0LL;
  ExInitializePushLock(&stru_140C196E0);
  ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)&stru_140C196E0);
  ExRundownCompleted((PEX_RUNDOWN_REF)&stru_140C196E0);
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
  result = ObCreateObjectType(&DestinationString, (__int64)v2, 0LL, (__int64)&qword_140C196D0);
  if ( (int)result < 0 )
    KeBugCheckEx(0x5Eu, 0xC0uLL, 0LL, 0LL, 0LL);
  return result;
}
