/*
 * XREFs of ??0CTelemetryTouchLatencyAnalysis@InteractionLatencyTelemetry@@QEAA@XZ @ 0x18002E6F4
 * Callers:
 *     ??0CPartitionVerticalBlankScheduler@@AEAA@PEAVCTransport@@PEAVCConnection@@@Z @ 0x18002E4BC (--0CPartitionVerticalBlankScheduler@@AEAA@PEAVCTransport@@PEAVCConnection@@@Z.c)
 * Callees:
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x18008ED70 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800B6F20 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     memset_0 @ 0x1801019AC (memset_0.c)
 */

InteractionLatencyTelemetry::CTelemetryTouchLatencyAnalysis *__fastcall InteractionLatencyTelemetry::CTelemetryTouchLatencyAnalysis::CTelemetryTouchLatencyAnalysis(
        InteractionLatencyTelemetry::CTelemetryTouchLatencyAnalysis *this)
{
  __int64 v2; // rax

  memset_0((char *)this + 8, 0, 0x1400uLL);
  `vector constructor iterator'(
    (char *)this + 8,
    0x200uLL,
    0xAuLL,
    (void *(*)(void *))InteractionLatencyTelemetry::TouchScenarioInfo::TouchScenarioInfo);
  *((_QWORD *)this + 643) = 0LL;
  *((_QWORD *)this + 644) = 7LL;
  *((_WORD *)this + 2564) = 0;
  *((_QWORD *)this + 647) = 0LL;
  *((_QWORD *)this + 648) = 7LL;
  *((_WORD *)this + 2580) = 0;
  memset_0((char *)this + 5192, 0, 0x79uLL);
  *(_QWORD *)((char *)this + 5314) = 0LL;
  *((_WORD *)this + 2661) = 0;
  *(_QWORD *)((char *)this + 5324) = 0LL;
  *((_WORD *)this + 2666) = 0;
  *(_OWORD *)((char *)this + 5336) = 0LL;
  *(_OWORD *)((char *)this + 5352) = 0LL;
  *((_QWORD *)this + 671) = 0LL;
  memset_0((char *)this + 5376, 0, 0x5F8uLL);
  *((_QWORD *)this + 863) = 0LL;
  *((_QWORD *)this + 868) = 0LL;
  *((_QWORD *)this + 869) = 0LL;
  v2 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x88uLL);
  *(_QWORD *)v2 = v2;
  *(_QWORD *)(v2 + 8) = v2;
  *(_QWORD *)(v2 + 16) = v2;
  *(_WORD *)(v2 + 24) = 257;
  *((_QWORD *)this + 868) = v2;
  return this;
}
