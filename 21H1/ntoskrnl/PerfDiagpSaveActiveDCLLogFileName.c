/*
 * XREFs of PerfDiagpSaveActiveDCLLogFileName @ 0x14092B318
 * Callers:
 *     PerfDiagpProxyWorker @ 0x1407A1250 (PerfDiagpProxyWorker.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140206450 (RtlInitUnicodeString.c)
 *     memset @ 0x140408F80 (memset.c)
 *     NtTraceControl @ 0x1405F56E0 (NtTraceControl.c)
 *     RtlWriteRegistryValue @ 0x1406E0B60 (RtlWriteRegistryValue.c)
 *     RtlDeleteRegistryValue @ 0x14076CCF0 (RtlDeleteRegistryValue.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 */

void PerfDiagpSaveActiveDCLLogFileName()
{
  _WORD *ValueData; // rbx
  unsigned __int16 v1; // cx
  unsigned int v2; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0;
  ValueData = ExAllocatePoolWithTag(PagedPool, 0x20AuLL, 0x64465250u);
  if ( ValueData )
  {
    memset(dword_140C1A1F0, 0, 0xB0uLL);
    wcscpy(&xmmword_140C1A1CC, L"WdiContextLog");
    dword_140C1A21C = 0x20000;
    RtlInitUnicodeString(&DestinationString, &xmmword_140C1A1CC);
    qword_140C1A278 = (__int64)ValueData;
    word_140C1A272 = 520;
    dword_140C1A1F0[0] = 176;
    if ( (int)NtTraceControl(3u, dword_140C1A1F0, 0xB0u, dword_140C1A1F0, 0xB0u, &v2) < 0
      || (unsigned __int16)word_140C1A270 < 2u )
    {
      RtlDeleteRegistryValue(2u, L"Diagnostics\\Performance", L"ActiveShutdownDCL");
    }
    else
    {
      v1 = (unsigned __int16)word_140C1A270 >> 1;
      ValueData[v1] = 0;
      RtlWriteRegistryValue(
        2u,
        L"Diagnostics\\Performance",
        L"ActiveShutdownDCL",
        1u,
        ValueData,
        2 * (unsigned __int16)(v1 + 1));
    }
    ExFreePoolWithTag(ValueData, 0);
  }
  else
  {
    RtlDeleteRegistryValue(2u, L"Diagnostics\\Performance", L"ActiveShutdownDCL");
  }
}
