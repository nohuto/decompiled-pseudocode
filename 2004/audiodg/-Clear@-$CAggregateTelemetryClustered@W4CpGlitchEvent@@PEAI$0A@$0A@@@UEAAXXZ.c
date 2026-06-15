/*
 * XREFs of ?Clear@?$CAggregateTelemetryClustered@W4CpGlitchEvent@@PEAI$0A@$0A@@@UEAAXXZ @ 0x140059410
 * Callers:
 *     <none>
 * Callees:
 *     ?Clear@?$CAggregateTelemetry@V?$CAggregateValuesClusteredBase@W4CpGlitchEvent@@PEAI@@W4CpGlitchEvent@@PEAI$0A@$0A@@@UEAAXXZ @ 0x140016EB0 (-Clear@-$CAggregateTelemetry@V-$CAggregateValuesClusteredBase@W4CpGlitchEvent@@PEAI@@W4CpGlitchE.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAggregateTelemetryClustered<enum CpGlitchEvent,unsigned int *,0,0>::Clear(__int64 a1)
{
  ULONGLONG TickCount64; // rax

  TickCount64 = GetTickCount64();
  *(_BYTE *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 64) = TickCount64;
  *(_QWORD *)(a1 + 72) = TickCount64;
  *(_QWORD *)(a1 + 88) = TickCount64;
  return CAggregateTelemetry<CAggregateValuesClusteredBase<enum CpGlitchEvent,unsigned int *>,enum CpGlitchEvent,unsigned int *,0,0>::Clear(a1);
}
