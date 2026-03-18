/*
 * XREFs of ?PostInitialize@CMouseSensor@@EEAAJXZ @ 0x1C0036760
 * Callers:
 *     <none>
 * Callees:
 *     ??0CMouseProcessor@@IEAA@XZ @ 0x1C0022A90 (--0CMouseProcessor@@IEAA@XZ.c)
 *     ?GetDispatcherHandleByName@CRIMBase@@IEBAPEAXW4DispatcherHandleName@1@W4HandleAccessMode@1@@Z @ 0x1C003732C (-GetDispatcherHandleByName@CRIMBase@@IEBAPEAXW4DispatcherHandleName@1@W4HandleAccessMode@1@@Z.c)
 *     ?SetInputRateLimitingTime@CMouseSensor@@QEAAJK@Z @ 0x1C0038D1C (-SetInputRateLimitingTime@CMouseSensor@@QEAAJK@Z.c)
 *     isChildPartition @ 0x1C0064F84 (isChildPartition.c)
 *     isInputVirtualizationEnabled @ 0x1C006588C (isInputVirtualizationEnabled.c)
 *     Win32AllocPool @ 0x1C008D7C0 (Win32AllocPool.c)
 *     ?ivRegisterChildLifetimeNotifications@CBaseInput@@IEAAJK@Z @ 0x1C01BC8A8 (-ivRegisterChildLifetimeNotifications@CBaseInput@@IEAAJK@Z.c)
 *     ?ivChildLoop@CBaseInput@@AEAAJKPEAURawInputManagerObject@@@Z @ 0x1C01BFAB8 (-ivChildLoop@CBaseInput@@AEAAJKPEAURawInputManagerObject@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CMouseSensor::PostInitialize(struct RawInputManagerObject **this)
{
  CMouseProcessor *v2; // rax
  unsigned int v3; // edi
  __int64 v5; // rcx

  if ( this[218] )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this);
  this[218] = 0LL;
  v2 = (CMouseProcessor *)Win32AllocPool(5040LL, 1886539088LL);
  if ( v2 )
    v2 = CMouseProcessor::CMouseProcessor(v2);
  if ( v2 )
  {
    this[218] = v2;
    v3 = 0;
    if ( (unsigned __int8)isInputVirtualizationEnabled() )
    {
      v3 = CBaseInput::ivRegisterChildLifetimeNotifications((CBaseInput *)this, 0);
      if ( (unsigned __int8)isChildPartition(v5) )
        v3 = CBaseInput::ivChildLoop((CBaseInput *)this, 0, this[2]);
    }
    CMouseSensor::SetInputRateLimitingTime((CMouseSensor *)this, 0);
    this[217] = (struct RawInputManagerObject *)CRIMBase::GetDispatcherHandleByName(this, 8LL, 1LL);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v3;
}
