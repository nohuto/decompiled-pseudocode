/*
 * XREFs of RIMSetContactEndState @ 0x1C017F9C8
 * Callers:
 *     rimAbSuppressLowerRankActivityInFrame @ 0x1C0162A54 (rimAbSuppressLowerRankActivityInFrame.c)
 *     RIMInsertSimulatedContactEndStateInFrame @ 0x1C017F558 (RIMInsertSimulatedContactEndStateInFrame.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMSetContactEndState(__int64 a1, __int64 a2, __int64 a3, int a4, int a5)
{
  __int64 v5; // rdi
  __int64 result; // rax

  v5 = a2 + 2344;
  if ( !*(_QWORD *)(a1 + 736) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1);
  if ( (*(_DWORD *)(a2 + 32) & 2) == 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1);
  *(_OWORD *)v5 = *(_OWORD *)(a2 + 2584);
  *(_OWORD *)(v5 + 16) = *(_OWORD *)(a2 + 2600);
  *(_OWORD *)(v5 + 32) = *(_OWORD *)(a2 + 2616);
  *(_OWORD *)(v5 + 48) = *(_OWORD *)(a2 + 2632);
  *(_OWORD *)(v5 + 64) = *(_OWORD *)(a2 + 2648);
  *(_OWORD *)(v5 + 80) = *(_OWORD *)(a2 + 2664);
  *(_OWORD *)(v5 + 96) = *(_OWORD *)(a2 + 2680);
  *(_OWORD *)(v5 + 112) = *(_OWORD *)(a2 + 2696);
  *(_OWORD *)(v5 + 128) = *(_OWORD *)(a2 + 2712);
  *(_OWORD *)(v5 + 144) = *(_OWORD *)(a2 + 2728);
  *(_OWORD *)(v5 + 160) = *(_OWORD *)(a2 + 2744);
  *(_OWORD *)(v5 + 176) = *(_OWORD *)(a2 + 2760);
  *(_OWORD *)(v5 + 192) = *(_OWORD *)(a2 + 2776);
  *(_OWORD *)(v5 + 208) = *(_OWORD *)(a2 + 2792);
  result = 0LL;
  *(_OWORD *)(v5 + 224) = *(_OWORD *)(a2 + 2808);
  *(_DWORD *)(v5 + 48) = 0;
  *(_WORD *)(v5 + 58) = 0;
  if ( a5 )
    result = 0x8000LL;
  *(_DWORD *)(v5 + 128) = a4;
  *(_QWORD *)(v5 + 144) = a3;
  *(_DWORD *)(v5 + 76) = result;
  *(_DWORD *)(v5 + 164) = 0;
  return result;
}
