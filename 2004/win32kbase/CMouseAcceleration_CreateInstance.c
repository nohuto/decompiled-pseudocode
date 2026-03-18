/*
 * XREFs of CMouseAcceleration_CreateInstance @ 0x1C0024E50
 * Callers:
 *     <none>
 * Callees:
 *     ??0CMouseAcceleration@@IEAA@I@Z @ 0x1C0024EA4 (--0CMouseAcceleration@@IEAA@I@Z.c)
 *     Win32AllocPool @ 0x1C0080DF0 (Win32AllocPool.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

CMouseAcceleration *__fastcall CMouseAcceleration_CreateInstance(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  unsigned int v5; // edi
  CMouseAcceleration *v6; // rax

  v4 = 0LL;
  v5 = a1;
  if ( qword_1C0241098 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3, a4);
  v6 = (CMouseAcceleration *)Win32AllocPool(120LL, 1682006883LL);
  if ( v6 )
    return CMouseAcceleration::CMouseAcceleration(v6, v5);
  return (CMouseAcceleration *)v4;
}
