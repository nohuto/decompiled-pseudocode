/*
 * XREFs of EtwpUpdateFileInfoDriverState @ 0x140786CEC
 * Callers:
 *     EtwpDisableKernelTrace @ 0x140786B60 (EtwpDisableKernelTrace.c)
 *     EtwpEnableKernelTrace @ 0x140786D80 (EtwpEnableKernelTrace.c)
 *     EtwpInitialize @ 0x140A46B98 (EtwpInitialize.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140206450 (RtlInitUnicodeString.c)
 *     WmiQueryTraceProviderCount @ 0x1403AF408 (WmiQueryTraceProviderCount.c)
 *     ZwLoadDriver @ 0x1403F43D0 (ZwLoadDriver.c)
 *     ZwUnloadDriver @ 0x1403F5BF0 (ZwUnloadDriver.c)
 *     EtwpUpdateFileInfoDriverRegistration @ 0x140786A3C (EtwpUpdateFileInfoDriverRegistration.c)
 *     WmiTraceRundownNotify @ 0x1407AC0A4 (WmiTraceRundownNotify.c)
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
      if ( dword_140CF4F0C )
        WmiTraceRundownNotify(*a4, a5);
      EtwpUpdateFileInfoDriverRegistration(0);
      if ( dword_140CF4F0C )
      {
        RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Services\\FileInfo");
        ZwUnloadDriver(&DestinationString);
        dword_140CF4F0C = 0;
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
    dword_140CF4F0C = 1;
    v5 = 1;
  }
  updated = EtwpUpdateFileInfoDriverRegistration(1);
  if ( updated >= 0 )
    goto LABEL_8;
LABEL_9:
  if ( v5 )
  {
    RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Services\\FileInfo");
    ZwUnloadDriver(&DestinationString);
    dword_140CF4F0C = 0;
  }
  return (unsigned int)updated;
}
