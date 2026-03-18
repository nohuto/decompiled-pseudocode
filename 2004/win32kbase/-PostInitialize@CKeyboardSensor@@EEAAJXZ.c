/*
 * XREFs of ?PostInitialize@CKeyboardSensor@@EEAAJXZ @ 0x1C005F420
 * Callers:
 *     <none>
 * Callees:
 *     ??0CKeyboardProcessor@@IEAA@XZ @ 0x1C000AD68 (--0CKeyboardProcessor@@IEAA@XZ.c)
 *     isChildPartition @ 0x1C0070954 (isChildPartition.c)
 *     isInputVirtualizationEnabled @ 0x1C007125C (isInputVirtualizationEnabled.c)
 *     Win32AllocPool @ 0x1C0080DF0 (Win32AllocPool.c)
 *     ?ivRegisterChildLifetimeNotifications@CBaseInput@@IEAAJK@Z @ 0x1C01B6B48 (-ivRegisterChildLifetimeNotifications@CBaseInput@@IEAAJK@Z.c)
 *     ?ivChildLoop@CBaseInput@@AEAAJKPEAURawInputManagerObject@@@Z @ 0x1C01B9D58 (-ivChildLoop@CBaseInput@@AEAAJKPEAURawInputManagerObject@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CKeyboardSensor::PostInitialize(
        struct RawInputManagerObject **this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  CKeyboardProcessor *v5; // rax
  __int64 v6; // rcx
  unsigned int v7; // edx
  __int64 v9; // rcx

  if ( this[160] )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3, a4);
  this[160] = 0LL;
  v5 = (CKeyboardProcessor *)Win32AllocPool(32LL, 1886539088LL);
  if ( v5 )
    v5 = CKeyboardProcessor::CKeyboardProcessor(v5);
  if ( v5 )
  {
    this[160] = v5;
    if ( (unsigned __int8)isInputVirtualizationEnabled(v6, 0LL) )
    {
      CBaseInput::ivRegisterChildLifetimeNotifications((CBaseInput *)this, 1u);
      if ( (unsigned __int8)isChildPartition(v9) )
        return (unsigned int)CBaseInput::ivChildLoop((CBaseInput *)this, 1u, this[2]);
    }
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v7;
}
