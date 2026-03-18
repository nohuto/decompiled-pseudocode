/*
 * XREFs of ?PostInitialize@CKeyboardSensor@@EEAAJXZ @ 0x1C0051910
 * Callers:
 *     <none>
 * Callees:
 *     ??0CKeyboardProcessor@@IEAA@XZ @ 0x1C0022070 (--0CKeyboardProcessor@@IEAA@XZ.c)
 *     isChildPartition @ 0x1C0064F84 (isChildPartition.c)
 *     isInputVirtualizationEnabled @ 0x1C006588C (isInputVirtualizationEnabled.c)
 *     Win32AllocPool @ 0x1C008D7C0 (Win32AllocPool.c)
 *     ?ivRegisterChildLifetimeNotifications@CBaseInput@@IEAAJK@Z @ 0x1C01BC8A8 (-ivRegisterChildLifetimeNotifications@CBaseInput@@IEAAJK@Z.c)
 *     ?ivChildLoop@CBaseInput@@AEAAJKPEAURawInputManagerObject@@@Z @ 0x1C01BFAB8 (-ivChildLoop@CBaseInput@@AEAAJKPEAURawInputManagerObject@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CKeyboardSensor::PostInitialize(struct RawInputManagerObject **this)
{
  CKeyboardProcessor *v2; // rax
  __int64 v3; // rcx
  unsigned int v4; // edx
  __int64 v6; // rcx

  if ( this[160] )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this);
  this[160] = 0LL;
  v2 = (CKeyboardProcessor *)Win32AllocPool(32LL, 1886539088LL);
  if ( v2 )
    v2 = CKeyboardProcessor::CKeyboardProcessor(v2);
  if ( v2 )
  {
    this[160] = v2;
    if ( (unsigned __int8)isInputVirtualizationEnabled(v3, 0LL) )
    {
      CBaseInput::ivRegisterChildLifetimeNotifications((CBaseInput *)this, 1u);
      if ( (unsigned __int8)isChildPartition(v6) )
        return (unsigned int)CBaseInput::ivChildLoop((CBaseInput *)this, 1u, this[2]);
    }
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v4;
}
