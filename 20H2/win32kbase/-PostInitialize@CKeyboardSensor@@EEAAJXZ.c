/*
 * XREFs of ?PostInitialize@CKeyboardSensor@@EEAAJXZ @ 0x1C00BF790
 * Callers:
 *     <none>
 * Callees:
 *     ??0CKeyboardProcessor@@IEAA@XZ @ 0x1C0009C60 (--0CKeyboardProcessor@@IEAA@XZ.c)
 *     isChildPartition @ 0x1C0036370 (isChildPartition.c)
 *     isInputVirtualizationEnabled @ 0x1C0036AA0 (isInputVirtualizationEnabled.c)
 *     Win32AllocPool @ 0x1C003C610 (Win32AllocPool.c)
 *     ?ivRegisterChildLifetimeNotifications@CBaseInput@@IEAAJK@Z @ 0x1C01B47D8 (-ivRegisterChildLifetimeNotifications@CBaseInput@@IEAAJK@Z.c)
 *     ?ivChildLoop@CBaseInput@@AEAAJKPEAURawInputManagerObject@@@Z @ 0x1C01B79E8 (-ivChildLoop@CBaseInput@@AEAAJKPEAURawInputManagerObject@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CKeyboardSensor::PostInitialize(
        struct RawInputManagerObject **this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  CKeyboardProcessor *v5; // rax
  unsigned int v6; // edx

  if ( this[160] )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3, a4);
  this[160] = 0LL;
  v5 = (CKeyboardProcessor *)Win32AllocPool(32LL, 0x70724D50u);
  if ( v5 )
    v5 = CKeyboardProcessor::CKeyboardProcessor(v5);
  if ( v5 )
  {
    this[160] = v5;
    if ( isInputVirtualizationEnabled() )
    {
      CBaseInput::ivRegisterChildLifetimeNotifications((CBaseInput *)this, 1u);
      if ( isChildPartition() )
        return (unsigned int)CBaseInput::ivChildLoop((CBaseInput *)this, 1u, this[2]);
    }
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v6;
}
