/*
 * XREFs of CTouchpadAcceleration_CreateInstance @ 0x1C00BE3E0
 * Callers:
 *     <none>
 * Callees:
 *     Win32AllocPool @ 0x1C003C610 (Win32AllocPool.c)
 *     memset @ 0x1C00D3740 (memset.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CTouchpadAcceleration_CreateInstance(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // edi
  __int64 v5; // rax
  __int64 v6; // rbx

  v4 = a1;
  if ( qword_1C023F0B0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3, a4);
  v5 = Win32AllocPool(104LL, 0x64416363u);
  v6 = v5;
  if ( !v5 )
    return 0LL;
  *(_BYTE *)(v5 + 8) = 0;
  memset((void *)(v5 + 16), 0, 0x50uLL);
  *(_DWORD *)(v6 + 96) = v4;
  *(_QWORD *)v6 = &CTouchpadAcceleration::`vftable';
  return v6;
}
