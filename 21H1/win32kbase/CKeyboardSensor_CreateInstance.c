/*
 * XREFs of CKeyboardSensor_CreateInstance @ 0x1C0022FD0
 * Callers:
 *     <none>
 * Callees:
 *     ??0CBaseInput@@IEAA@K@Z @ 0x1C00231C8 (--0CBaseInput@@IEAA@K@Z.c)
 *     Win32AllocPool @ 0x1C008D7C0 (Win32AllocPool.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

CBaseInput *__fastcall CKeyboardSensor_CreateInstance(__int64 a1)
{
  CBaseInput *v1; // rax
  CBaseInput *v2; // rbx

  if ( gpKeyboardSensor )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1);
  gpKeyboardSensor = 0LL;
  v1 = (CBaseInput *)Win32AllocPool(1288LL, 1885947971LL);
  v2 = v1;
  if ( v1 )
  {
    CBaseInput::CBaseInput(v1, 2u);
    *((_QWORD *)v2 + 160) = 0LL;
    *(_QWORD *)v2 = &CKeyboardSensor::`vftable';
  }
  else
  {
    v2 = 0LL;
  }
  if ( v2 )
    gpKeyboardSensor = v2;
  return v2;
}
