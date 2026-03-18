/*
 * XREFs of sub_1C000BA40 @ 0x1C000BA40
 * Callers:
 *     sub_1C000D150 @ 0x1C000D150 (sub_1C000D150.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0003170 (_guard_dispatch_icall_nop.c)
 */

PVOID sub_1C000BA40()
{
  PVOID result; // rax
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF
  unsigned int v2; // [rsp+50h] [rbp+8h] BYREF

  v2 = 0;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"PsGetVersion");
  qword_1C0007320 = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))MmGetSystemRoutineAddress(&DestinationString);
  RtlInitUnicodeString(&DestinationString, L"WmiTraceMessage");
  qword_1C0007338 = (__int64)MmGetSystemRoutineAddress(&DestinationString);
  RtlInitUnicodeString(&DestinationString, L"WmiQueryTraceInformation");
  qword_1C0007340 = (__int64)MmGetSystemRoutineAddress(&DestinationString);
  result = qword_1C0007320;
  dword_1C0007318 = 2;
  if ( qword_1C0007320 )
    result = (PVOID)qword_1C0007320(&v2, 0LL, 0LL, 0LL);
  if ( v2 >= 6 )
  {
    RtlInitUnicodeString(&DestinationString, L"EtwRegisterClassicProvider");
    result = MmGetSystemRoutineAddress(&DestinationString);
    qword_1C0007328 = (__int64)result;
    if ( result )
    {
      RtlInitUnicodeString(&DestinationString, L"EtwUnregister");
      result = MmGetSystemRoutineAddress(&DestinationString);
      qword_1C0007330 = (__int64)result;
      dword_1C0007318 = 4;
    }
  }
  return result;
}
