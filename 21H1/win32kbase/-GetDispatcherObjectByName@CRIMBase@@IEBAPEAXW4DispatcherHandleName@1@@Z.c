/*
 * XREFs of ?GetDispatcherObjectByName@CRIMBase@@IEBAPEAXW4DispatcherHandleName@1@@Z @ 0x1C005714C
 * Callers:
 *     ?HandleDirectStartStopDeviceReadRequest@CHidInput@@QEAAXXZ @ 0x1C0057100 (-HandleDirectStartStopDeviceReadRequest@CHidInput@@QEAAXXZ.c)
 * Callees:
 *     ?IsValid@SensorDispatcherObject@CRIMBase@@QEBA_NXZ @ 0x1C0063920 (-IsValid@SensorDispatcherObject@CRIMBase@@QEBA_NXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CRIMBase::GetDispatcherObjectByName(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rcx

  v2 = 0LL;
  if ( CRIMBase::SensorDispatcherObject::IsValid((CRIMBase::SensorDispatcherObject *)(a1 + 856)) )
  {
    if ( *(_DWORD *)(a1 + 872) != 11 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v3);
    return *(_QWORD *)(a1 + 904);
  }
  return v2;
}
