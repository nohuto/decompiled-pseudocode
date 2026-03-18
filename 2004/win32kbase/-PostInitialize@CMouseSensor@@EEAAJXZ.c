/*
 * XREFs of ?PostInitialize@CMouseSensor@@EEAAJXZ @ 0x1C0005760
 * Callers:
 *     <none>
 * Callees:
 *     ?GetDispatcherHandleByName@CRIMBase@@IEBAPEAXW4DispatcherHandleName@1@W4HandleAccessMode@1@@Z @ 0x1C000632C (-GetDispatcherHandleByName@CRIMBase@@IEBAPEAXW4DispatcherHandleName@1@W4HandleAccessMode@1@@Z.c)
 *     ?SetInputRateLimitingTime@CMouseSensor@@QEAAJK@Z @ 0x1C00076C8 (-SetInputRateLimitingTime@CMouseSensor@@QEAAJK@Z.c)
 *     ??0CMouseProcessor@@IEAA@XZ @ 0x1C0007B28 (--0CMouseProcessor@@IEAA@XZ.c)
 *     isChildPartition @ 0x1C0070954 (isChildPartition.c)
 *     isInputVirtualizationEnabled @ 0x1C007125C (isInputVirtualizationEnabled.c)
 *     Win32AllocPool @ 0x1C0080DF0 (Win32AllocPool.c)
 *     ?ivRegisterChildLifetimeNotifications@CBaseInput@@IEAAJK@Z @ 0x1C01B6B48 (-ivRegisterChildLifetimeNotifications@CBaseInput@@IEAAJK@Z.c)
 *     ?ivChildLoop@CBaseInput@@AEAAJKPEAURawInputManagerObject@@@Z @ 0x1C01B9D58 (-ivChildLoop@CBaseInput@@AEAAJKPEAURawInputManagerObject@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CMouseSensor::PostInitialize(CMouseSensor *this)
{
  CMouseProcessor *v2; // rax
  unsigned int v3; // edi

  if ( *((_QWORD *)this + 218) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  *((_QWORD *)this + 218) = 0LL;
  v2 = (CMouseProcessor *)Win32AllocPool(4968LL, 1886539088LL);
  if ( v2 )
    v2 = CMouseProcessor::CMouseProcessor(v2);
  if ( v2 )
  {
    *((_QWORD *)this + 218) = v2;
    v3 = 0;
    if ( (unsigned __int8)isInputVirtualizationEnabled() )
    {
      v3 = CBaseInput::ivRegisterChildLifetimeNotifications(this, 0);
      if ( (unsigned __int8)isChildPartition() )
        v3 = CBaseInput::ivChildLoop(this, 0, *((struct RawInputManagerObject **)this + 2));
    }
    CMouseSensor::SetInputRateLimitingTime(this, 0);
    *((_QWORD *)this + 217) = CRIMBase::GetDispatcherHandleByName(this, 8LL, 1LL);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v3;
}
