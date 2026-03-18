/*
 * XREFs of sub_1C0073198 @ 0x1C0073198
 * Callers:
 *     sub_1C0041468 @ 0x1C0041468 (sub_1C0041468.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001D060 (_guard_dispatch_icall_nop.c)
 */

PVOID sub_1C0073198()
{
  PVOID result; // rax
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-10h] BYREF
  unsigned int v2; // [rsp+50h] [rbp+10h] BYREF

  v2 = 0;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"PsGetVersion");
  qword_1C006B730 = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))MmGetSystemRoutineAddress(&DestinationString);
  RtlInitUnicodeString(&DestinationString, L"WmiTraceMessage");
  qword_1C006B728 = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))MmGetSystemRoutineAddress(&DestinationString);
  RtlInitUnicodeString(&DestinationString, L"WmiQueryTraceInformation");
  qword_1C006B740 = (__int64)MmGetSystemRoutineAddress(&DestinationString);
  result = qword_1C006B730;
  dword_1C006B738 = 2;
  if ( qword_1C006B730 )
    result = (PVOID)qword_1C006B730(&v2, 0LL, 0LL, 0LL);
  if ( v2 >= 6 )
  {
    RtlInitUnicodeString(&DestinationString, L"EtwRegisterClassicProvider");
    result = MmGetSystemRoutineAddress(&DestinationString);
    qword_1C006B720 = (__int64)result;
    if ( result )
    {
      RtlInitUnicodeString(&DestinationString, L"EtwUnregister");
      result = MmGetSystemRoutineAddress(&DestinationString);
      qword_1C006B748 = (__int64)result;
      dword_1C006B738 = 4;
    }
  }
  return result;
}
