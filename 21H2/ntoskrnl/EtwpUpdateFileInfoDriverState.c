/*
 * XREFs of EtwpUpdateFileInfoDriverState @ 0x1406D5860
 * Callers:
 *     EtwpEnableKernelTrace @ 0x1406D5424 (EtwpEnableKernelTrace.c)
 *     EtwpDisableKernelTrace @ 0x1406D56D0 (EtwpDisableKernelTrace.c)
 *     EtwpInitialize @ 0x140B0433C (EtwpInitialize.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     WmiQueryTraceProviderCount @ 0x1403D6930 (WmiQueryTraceProviderCount.c)
 *     ZwLoadDriver @ 0x14041D8C0 (ZwLoadDriver.c)
 *     ZwUnloadDriver @ 0x14041F1A0 (ZwUnloadDriver.c)
 *     WmiTraceRundownNotify @ 0x14081AA90 (WmiTraceRundownNotify.c)
 *     EtwpUpdateFileInfoDriverRegistration @ 0x14085D06C (EtwpUpdateFileInfoDriverRegistration.c)
 */

__int64 __fastcall EtwpUpdateFileInfoDriverState(_DWORD *a1, _DWORD *a2, int a3, _QWORD *a4, unsigned int a5)
{
  int v5; // edi
  int updated; // ebx
  NTSTATUS v8; // eax
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  v5 = 0;
  DestinationString = 0LL;
  if ( !a3 )
  {
    if ( !a1 || (*a1 & 0x6000200) == 0 )
    {
      if ( dword_140D01194 )
      {
        WmiTraceRundownNotify(*a4, a5);
        EtwpUpdateFileInfoDriverRegistration(0LL);
        RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Services\\FileInfo");
        ZwUnloadDriver(&DestinationString);
        dword_140D01194 = 0;
      }
    }
    return 0;
  }
  if ( !a2 || (*a2 & 0x6000200) == 0 )
    return 0;
  if ( !(unsigned int)WmiQueryTraceProviderCount() )
  {
    RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Services\\FileInfo");
    v8 = ZwLoadDriver(&DestinationString);
    if ( (int)(v8 + 0x80000000) >= 0 && v8 != -1073741554 )
      return (unsigned int)-1073741204;
    dword_140D01194 = 1;
    v5 = 1;
  }
  updated = EtwpUpdateFileInfoDriverRegistration(1LL);
  if ( updated >= 0 )
    return 0;
  if ( v5 )
  {
    RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Services\\FileInfo");
    ZwUnloadDriver(&DestinationString);
    dword_140D01194 = 0;
  }
  return (unsigned int)updated;
}
