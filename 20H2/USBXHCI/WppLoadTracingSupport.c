/*
 * XREFs of WppLoadTracingSupport @ 0x1C0072910
 * Callers:
 *     DriverEntry @ 0x1C007232C (DriverEntry.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001BCF0 (_guard_dispatch_icall_nop.c)
 */

_DEVOBJ_EXTENSION *WppLoadTracingSupport()
{
  _DEVOBJ_EXTENSION *result; // rax
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-10h] BYREF
  unsigned int v2; // [rsp+50h] [rbp+10h] BYREF

  v2 = 0;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"PsGetVersion");
  *(_QWORD *)&WPP_MAIN_CB.SectorSize = MmGetSystemRoutineAddress(&DestinationString);
  RtlInitUnicodeString(&DestinationString, L"WmiTraceMessage");
  *((_QWORD *)&WPP_MAIN_CB.Reserved + 1) = MmGetSystemRoutineAddress(&DestinationString);
  RtlInitUnicodeString(&DestinationString, L"WmiQueryTraceInformation");
  pfnWppQueryTraceInformation = (__int64)MmGetSystemRoutineAddress(&DestinationString);
  result = *(_DEVOBJ_EXTENSION **)&WPP_MAIN_CB.SectorSize;
  LODWORD(WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink) = 2;
  if ( *(_QWORD *)&WPP_MAIN_CB.SectorSize )
    result = (_DEVOBJ_EXTENSION *)(*(__int64 (__fastcall **)(unsigned int *, _QWORD, _QWORD, _QWORD))&WPP_MAIN_CB.SectorSize)(
                                    &v2,
                                    0LL,
                                    0LL,
                                    0LL);
  if ( v2 >= 6 )
  {
    RtlInitUnicodeString(&DestinationString, L"EtwRegisterClassicProvider");
    result = (_DEVOBJ_EXTENSION *)MmGetSystemRoutineAddress(&DestinationString);
    WPP_MAIN_CB.DeviceObjectExtension = result;
    if ( result )
    {
      RtlInitUnicodeString(&DestinationString, L"EtwUnregister");
      result = (_DEVOBJ_EXTENSION *)MmGetSystemRoutineAddress(&DestinationString);
      WPP_MAIN_CB.Reserved = result;
      LODWORD(WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink) = 4;
    }
  }
  return result;
}
