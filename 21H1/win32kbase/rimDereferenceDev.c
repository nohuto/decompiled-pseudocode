/*
 * XREFs of rimDereferenceDev @ 0x1C009F3E4
 * Callers:
 *     RIMFreeSpecificDev @ 0x1C0056CA8 (RIMFreeSpecificDev.c)
 *     RIMCreateDev @ 0x1C00A1B30 (RIMCreateDev.c)
 *     RIMVirtCreateDev @ 0x1C0159498 (RIMVirtCreateDev.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C00A01C0 (WPP_RECORDER_SF_qq.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

LONG_PTR __fastcall rimDereferenceDev(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rdi
  void *v4; // rsi
  void *v5; // rbp
  int v6; // eax
  int v7; // edx

  v2 = *(_QWORD **)(a1 + 32);
  if ( !v2 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1);
  v4 = *(void **)(a1 + 16);
  v5 = *(void **)(a1 + 24);
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  v6 = *(_DWORD *)(a1 + 184);
  if ( (v6 & 0x20) == 0 && (v6 & 0x2000) == 0 )
  {
    if ( v6 < 0 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(a1);
    if ( *(_QWORD *)(a1 + 192) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(a1);
    if ( (*(_DWORD *)(a1 + 188) & 1) != 0 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(a1);
  }
  if ( v2[4] == PsGetCurrentProcess(a1, a2) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v7) = 4;
      WPP_RECORDER_SF_qq(
        (_DWORD)gRimLog,
        v7,
        1,
        10,
        (__int64)&WPP_5d2ce3a5248638c158e1566558bddbc6_Traceguids,
        (char)v4,
        a1);
    }
    ObCloseHandle(v4, 1);
  }
  ZwClose(v5);
  return ObfDereferenceObject(v2);
}
