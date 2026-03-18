/*
 * XREFs of EtwpUpdateFileInfoDriverState @ 0x140780938
 * Callers:
 *     EtwpEnableKernelTrace @ 0x140780518 (EtwpEnableKernelTrace.c)
 *     EtwpDisableKernelTrace @ 0x1407807AC (EtwpDisableKernelTrace.c)
 *     EtwpInitialize @ 0x140A61950 (EtwpInitialize.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140298F60 (RtlInitUnicodeString.c)
 *     WmiQueryTraceProviderCount @ 0x1403A7220 (WmiQueryTraceProviderCount.c)
 *     ZwLoadDriver @ 0x1403F5660 (ZwLoadDriver.c)
 *     ZwUnloadDriver @ 0x1403F6E80 (ZwUnloadDriver.c)
 *     EtwpUpdateFileInfoDriverRegistration @ 0x1407809CC (EtwpUpdateFileInfoDriverRegistration.c)
 *     WmiTraceRundownNotify @ 0x1407AF204 (WmiTraceRundownNotify.c)
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
      if ( dword_140CF4DBC )
        WmiTraceRundownNotify(*a4, a5);
      EtwpUpdateFileInfoDriverRegistration(0LL);
      if ( dword_140CF4DBC )
      {
        RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Services\\FileInfo");
        ZwUnloadDriver(&DestinationString);
        dword_140CF4DBC = 0;
      }
    }
LABEL_8:
    updated = 0;
    v5 = 0;
    goto LABEL_9;
  }
  if ( !a2 || (*a2 & 0x6000200) == 0 )
    goto LABEL_8;
  if ( !(unsigned int)WmiQueryTraceProviderCount() )
  {
    RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Services\\FileInfo");
    v8 = ZwLoadDriver(&DestinationString);
    if ( (int)(v8 + 0x80000000) >= 0 && v8 != -1073741554 )
      return (unsigned int)-1073741204;
    dword_140CF4DBC = 1;
    v5 = 1;
  }
  updated = EtwpUpdateFileInfoDriverRegistration(1LL);
  if ( updated >= 0 )
    goto LABEL_8;
LABEL_9:
  if ( v5 )
  {
    RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Services\\FileInfo");
    ZwUnloadDriver(&DestinationString);
    dword_140CF4DBC = 0;
  }
  return (unsigned int)updated;
}
