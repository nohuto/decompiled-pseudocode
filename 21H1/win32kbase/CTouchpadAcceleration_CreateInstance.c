/*
 * XREFs of CTouchpadAcceleration_CreateInstance @ 0x1C00504E0
 * Callers:
 *     <none>
 * Callees:
 *     Win32AllocPool @ 0x1C008D7C0 (Win32AllocPool.c)
 *     memset @ 0x1C00D2E00 (memset.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CTouchpadAcceleration_CreateInstance(__int64 a1)
{
  int v1; // edi
  __int64 v2; // rax
  __int64 v3; // rbx

  v1 = a1;
  if ( qword_1C02470B0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1);
  v2 = Win32AllocPool(104LL, 1682006883LL);
  v3 = v2;
  if ( !v2 )
    return 0LL;
  *(_BYTE *)(v2 + 8) = 0;
  memset((void *)(v2 + 16), 0, 0x50uLL);
  *(_DWORD *)(v3 + 96) = v1;
  *(_QWORD *)v3 = &CTouchpadAcceleration::`vftable';
  return v3;
}
