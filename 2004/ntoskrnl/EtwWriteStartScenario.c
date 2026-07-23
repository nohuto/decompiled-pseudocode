/*
 * XREFs of EtwWriteStartScenario @ 0x1407760B0
 * Callers:
 *     PopDiagTracePowerTransitionStart @ 0x1407619A4 (PopDiagTracePowerTransitionStart.c)
 *     IoInitSystemPreDrivers @ 0x140A3AF4C (IoInitSystemPreDrivers.c)
 *     PerfDiagInitialize @ 0x140A620F8 (PerfDiagInitialize.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212640 (EtwEventEnabled.c)
 *     EtwWrite @ 0x140293470 (EtwWrite.c)
 *     EtwGetProviderIdFromHandle @ 0x14039C298 (EtwGetProviderIdFromHandle.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     ZwTraceControl @ 0x1403F6E20 (ZwTraceControl.c)
 *     WdipStartEndScenario @ 0x14077718C (WdipStartEndScenario.c)
 */

__int64 __fastcall EtwWriteStartScenario(
        ULONG_PTR *RegHandle,
        PCEVENT_DESCRIPTOR EventDescriptor,
        GUID *OutputBuffer,
        ULONG UserDataCount,
        PEVENT_DATA_DESCRIPTOR UserData)
{
  int ProviderIdFromHandle; // edi
  ULONG ReturnLength; // [rsp+30h] [rbp-58h] BYREF
  __int128 v12; // [rsp+38h] [rbp-50h] BYREF

  ReturnLength = 0;
  v12 = 0LL;
  if ( EventDescriptor && OutputBuffer )
  {
    if ( EtwEventEnabled((REGHANDLE)RegHandle, EventDescriptor) )
    {
      ProviderIdFromHandle = EtwGetProviderIdFromHandle(RegHandle, 0, &v12);
      if ( ProviderIdFromHandle >= 0 )
      {
        if ( OutputBuffer->Data1
          || OutputBuffer->Data2
          || OutputBuffer->Data3
          || OutputBuffer->Data4[0]
          || OutputBuffer->Data4[1]
          || OutputBuffer->Data4[2]
          || OutputBuffer->Data4[3]
          || OutputBuffer->Data4[4]
          || OutputBuffer->Data4[5]
          || OutputBuffer->Data4[6]
          || OutputBuffer->Data4[7]
          || (ProviderIdFromHandle = ZwTraceControl(EtwActivityIdCreate, 0LL, 0, OutputBuffer, 0x10u, &ReturnLength),
              ProviderIdFromHandle >= 0) )
        {
          ProviderIdFromHandle = EtwWrite((REGHANDLE)RegHandle, EventDescriptor, OutputBuffer, UserDataCount, UserData);
          WdipStartEndScenario(&v12, OutputBuffer, EventDescriptor, 10LL);
        }
      }
    }
    else
    {
      return (unsigned int)-1073741816;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)ProviderIdFromHandle;
}
