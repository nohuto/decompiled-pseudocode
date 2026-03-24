/*
 * XREFs of PerfDiagpSaveActiveDCLLogFileName @ 0x14092FBC8
 * Callers:
 *     PerfDiagpProxyWorker @ 0x14079C220 (PerfDiagpProxyWorker.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14027C520 (RtlInitUnicodeString.c)
 *     memset @ 0x140414200 (memset.c)
 *     NtTraceControl @ 0x1405EAF60 (NtTraceControl.c)
 *     RtlWriteRegistryValue @ 0x1406B4930 (RtlWriteRegistryValue.c)
 *     RtlDeleteRegistryValue @ 0x140781820 (RtlDeleteRegistryValue.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

void PerfDiagpSaveActiveDCLLogFileName()
{
  _WORD *ValueData; // rbx
  unsigned __int16 v1; // cx
  int v2; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0;
  ValueData = ExAllocatePoolWithTag(PagedPool, 0x20AuLL, 0x64465250u);
  if ( ValueData )
  {
    memset(dword_140C1A250, 0, 0xB0uLL);
    wcscpy(&xmmword_140C1A22C, L"WdiContextLog");
    dword_140C1A27C = 0x20000;
    RtlInitUnicodeString(&DestinationString, &xmmword_140C1A22C);
    qword_140C1A2D8 = (__int64)ValueData;
    word_140C1A2D2 = 520;
    dword_140C1A250[0] = 176;
    if ( (int)NtTraceControl(3LL, dword_140C1A250, 0xB0u, dword_140C1A250, 0xB0u, &v2) < 0
      || (unsigned __int16)word_140C1A2D0 < 2u )
    {
      RtlDeleteRegistryValue(2u, L"Diagnostics\\Performance", L"ActiveShutdownDCL");
    }
    else
    {
      v1 = (unsigned __int16)word_140C1A2D0 >> 1;
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
