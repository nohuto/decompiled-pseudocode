/*
 * XREFs of CMouseAcceleration_CreateInstance @ 0x1C0010810
 * Callers:
 *     <none>
 * Callees:
 *     ??0CMouseAcceleration@@IEAA@I@Z @ 0x1C0010864 (--0CMouseAcceleration@@IEAA@I@Z.c)
 *     Win32AllocPool @ 0x1C008D7C0 (Win32AllocPool.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

CMouseAcceleration *__fastcall CMouseAcceleration_CreateInstance(unsigned int a1)
{
  __int64 v1; // rbx
  CMouseAcceleration *v3; // rax

  v1 = 0LL;
  if ( qword_1C0247098 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  v3 = (CMouseAcceleration *)Win32AllocPool(120LL, 1682006883LL);
  if ( v3 )
    return CMouseAcceleration::CMouseAcceleration(v3, a1);
  return (CMouseAcceleration *)v1;
}
