/*
 * XREFs of StorpTelemetryMiniportEvent @ 0x1C0054728
 * Callers:
 *     StorPortExtendedFunction @ 0x1C000DE00 (StorPortExtendedFunction.c)
 * Callees:
 *     RaidAdapterFindUnit @ 0x1C00075A4 (RaidAdapterFindUnit.c)
 *     StorpMeasuresMiniportEventAdapter @ 0x1C0052488 (StorpMeasuresMiniportEventAdapter.c)
 *     StorpMeasuresMiniportEventUnit @ 0x1C00527A4 (StorpMeasuresMiniportEventUnit.c)
 *     StorpTelemetryMiniportEventAdapter @ 0x1C00547E0 (StorpTelemetryMiniportEventAdapter.c)
 *     StorpTelemetryMiniportEventUnit @ 0x1C0054AFC (StorpTelemetryMiniportEventUnit.c)
 */

void __fastcall StorpTelemetryMiniportEvent(__int64 a1, __int64 a2, int *a3, int a4)
{
  __int64 Unit; // rax
  __int64 v5; // r14
  int v10; // [rsp+58h] [rbp+20h]

  Unit = 0LL;
  v5 = 0LL;
  HIBYTE(v10) = 0;
  if ( a2 && *(_WORD *)a2 == 1 && *(_DWORD *)(a2 + 4) >= 4u )
  {
    v5 = a2;
    LOWORD(v10) = *(_WORD *)(a2 + 8);
    BYTE2(v10) = *(_BYTE *)(a2 + 10);
    Unit = RaidAdapterFindUnit(a1, v10);
  }
  if ( a4 == 1 )
  {
    if ( a2 )
      StorpMeasuresMiniportEventUnit(a1, Unit, v5, a3);
    else
      StorpMeasuresMiniportEventAdapter(a1);
  }
  else if ( a2 )
  {
    StorpTelemetryMiniportEventUnit(a1, Unit, v5, a3);
  }
  else
  {
    StorpTelemetryMiniportEventAdapter(a1, a3);
  }
}
