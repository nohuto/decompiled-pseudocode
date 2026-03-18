/*
 * XREFs of CKeyboardSensor_CreateInstance @ 0x1C00086F0
 * Callers:
 *     <none>
 * Callees:
 *     ??0CBaseInput@@IEAA@K@Z @ 0x1C00088E8 (--0CBaseInput@@IEAA@K@Z.c)
 *     Win32AllocPool @ 0x1C003C610 (Win32AllocPool.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

CBaseInput *__fastcall CKeyboardSensor_CreateInstance(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  CBaseInput *v4; // rax
  CBaseInput *v5; // rbx

  if ( gpKeyboardSensor )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3, a4);
  gpKeyboardSensor = 0LL;
  v4 = (CBaseInput *)Win32AllocPool(1288LL, 1885947971LL);
  v5 = v4;
  if ( v4 )
  {
    CBaseInput::CBaseInput(v4, 2u);
    *((_QWORD *)v5 + 160) = 0LL;
    *(_QWORD *)v5 = &CKeyboardSensor::`vftable';
  }
  else
  {
    v5 = 0LL;
  }
  if ( v5 )
    gpKeyboardSensor = v5;
  return v5;
}
