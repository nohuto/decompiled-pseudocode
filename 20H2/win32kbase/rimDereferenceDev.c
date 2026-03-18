/*
 * XREFs of rimDereferenceDev @ 0x1C0075E48
 * Callers:
 *     RIMCreateDev @ 0x1C0027880 (RIMCreateDev.c)
 *     RIMFreeSpecificDev @ 0x1C0075854 (RIMFreeSpecificDev.c)
 *     RIMVirtCreateDev @ 0x1C0150BC8 (RIMVirtCreateDev.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C0077870 (WPP_RECORDER_SF_qq.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

LONG_PTR __fastcall rimDereferenceDev(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v4; // rdi
  void *v6; // rsi
  void *v7; // rbp
  int v8; // eax
  int v9; // edx

  v4 = *(_QWORD **)(a1 + 32);
  if ( !v4 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3, a4);
  v6 = *(void **)(a1 + 16);
  v7 = *(void **)(a1 + 24);
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  v8 = *(_DWORD *)(a1 + 184);
  if ( (v8 & 0x20) == 0 && (v8 & 0x2000) == 0 )
  {
    if ( v8 < 0 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3, a4);
    if ( *(_QWORD *)(a1 + 192) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3, a4);
    if ( (*(_DWORD *)(a1 + 188) & 1) != 0 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3, a4);
  }
  if ( v4[4] == PsGetCurrentProcess(a1, a2) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v9) = 4;
      WPP_RECORDER_SF_qq(
        (_DWORD)gRimLog,
        v9,
        1,
        10,
        (__int64)&WPP_ca8085c5223136153291efdbd0fc109f_Traceguids,
        (char)v6,
        a1);
    }
    ObCloseHandle(v6, 1);
  }
  ZwClose(v7);
  return ObfDereferenceObject(v4);
}
