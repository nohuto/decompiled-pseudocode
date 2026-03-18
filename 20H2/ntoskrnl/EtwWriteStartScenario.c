/*
 * XREFs of EtwWriteStartScenario @ 0x1407846B0
 * Callers:
 *     PnpDiagnosticTraceDriverInitPhaseStart @ 0x1403CF14C (PnpDiagnosticTraceDriverInitPhaseStart.c)
 *     PopDiagTracePowerTransitionStart @ 0x14076FFB4 (PopDiagTracePowerTransitionStart.c)
 *     PerfDiagInitialize @ 0x140A694B8 (PerfDiagInitialize.c)
 * Callees:
 *     EtwWrite @ 0x14020E030 (EtwWrite.c)
 *     EtwEventEnabled @ 0x14027E3D0 (EtwEventEnabled.c)
 *     EtwGetProviderIdFromHandle @ 0x14039F3E8 (EtwGetProviderIdFromHandle.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     ZwTraceControl @ 0x1403FB9F0 (ZwTraceControl.c)
 *     WdipStartEndScenario @ 0x14078578C (WdipStartEndScenario.c)
 */

__int64 __fastcall EtwWriteStartScenario(
        ULONG_PTR *RegHandle,
        PCEVENT_DESCRIPTOR EventDescriptor,
        LPCGUID ActivityId,
        ULONG UserDataCount,
        PEVENT_DATA_DESCRIPTOR UserData)
{
  int ProviderIdFromHandle; // edi
  __int128 v11; // [rsp+38h] [rbp-50h] BYREF

  v11 = 0LL;
  if ( EventDescriptor && ActivityId )
  {
    if ( EtwEventEnabled((REGHANDLE)RegHandle, EventDescriptor) )
    {
      ProviderIdFromHandle = EtwGetProviderIdFromHandle(RegHandle, 0, &v11);
      if ( ProviderIdFromHandle >= 0 )
      {
        if ( ActivityId->Data1
          || ActivityId->Data2
          || ActivityId->Data3
          || ActivityId->Data4[0]
          || ActivityId->Data4[1]
          || ActivityId->Data4[2]
          || ActivityId->Data4[3]
          || ActivityId->Data4[4]
          || ActivityId->Data4[5]
          || ActivityId->Data4[6]
          || ActivityId->Data4[7]
          || (ProviderIdFromHandle = ZwTraceControl(12LL, 0LL), ProviderIdFromHandle >= 0) )
        {
          ProviderIdFromHandle = EtwWrite((REGHANDLE)RegHandle, EventDescriptor, ActivityId, UserDataCount, UserData);
          WdipStartEndScenario(&v11, ActivityId, EventDescriptor, 10LL);
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
