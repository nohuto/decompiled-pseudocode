/*
 * XREFs of CMouseAcceleration_CreateInstance @ 0x1C008B3B0
 * Callers:
 *     <none>
 * Callees:
 *     Win32AllocPool @ 0x1C003C610 (Win32AllocPool.c)
 *     ??0CMouseAcceleration@@IEAA@I@Z @ 0x1C008B404 (--0CMouseAcceleration@@IEAA@I@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

CMouseAcceleration *__fastcall CMouseAcceleration_CreateInstance(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  unsigned int v5; // edi
  CMouseAcceleration *v6; // rax

  v4 = 0LL;
  v5 = a1;
  if ( qword_1C023F098 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3, a4);
  v6 = (CMouseAcceleration *)Win32AllocPool(120LL, 0x64416363u);
  if ( v6 )
    return CMouseAcceleration::CMouseAcceleration(v6, v5);
  return (CMouseAcceleration *)v4;
}
