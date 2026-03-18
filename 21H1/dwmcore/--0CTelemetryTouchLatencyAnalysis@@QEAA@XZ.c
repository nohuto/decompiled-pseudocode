/*
 * XREFs of ??0CTelemetryTouchLatencyAnalysis@@QEAA@XZ @ 0x1800D8708
 * Callers:
 *     ??0CPartitionVerticalBlankScheduler@@AEAA@PEAVCTransport@@PEAVCConnection@@@Z @ 0x1800D8554 (--0CPartitionVerticalBlankScheduler@@AEAA@PEAVCTransport@@PEAVCConnection@@@Z.c)
 * Callees:
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x18003594C (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     memset_0 @ 0x1800E261C (memset_0.c)
 */

CTelemetryTouchLatencyAnalysis *__fastcall CTelemetryTouchLatencyAnalysis::CTelemetryTouchLatencyAnalysis(
        CTelemetryTouchLatencyAnalysis *this)
{
  CTelemetryTouchLatencyAnalysis *result; // rax

  memset_0((char *)this + 8, 0, 0xFF0uLL);
  `vector constructor iterator'(
    (char *)this + 8,
    408LL,
    10LL,
    (void (__fastcall *)(char *))CTelemetryTouchLatencyAnalysis::TouchScenarioInfo::TouchScenarioInfo);
  *((_QWORD *)this + 513) = 0LL;
  *((_QWORD *)this + 514) = 7LL;
  *((_WORD *)this + 2044) = 0;
  *((_QWORD *)this + 517) = 0LL;
  *((_QWORD *)this + 518) = 7LL;
  *((_WORD *)this + 2060) = 0;
  memset_0((char *)this + 4152, 0, 0x79uLL);
  *(_QWORD *)((char *)this + 4274) = 0LL;
  *((_WORD *)this + 2141) = 0;
  *(_QWORD *)((char *)this + 4284) = 0LL;
  *((_WORD *)this + 2146) = 0;
  *(_OWORD *)((char *)this + 4296) = 0LL;
  *(_OWORD *)((char *)this + 4312) = 0LL;
  *((_QWORD *)this + 541) = 0LL;
  memset_0((char *)this + 4336, 0, 0x80uLL);
  `vector constructor iterator'(
    (char *)this + 4464,
    44LL,
    5LL,
    (void (__fastcall *)(char *))CTelemetryTouchLatencyAnalysis::CLatencyInfo::CLatencyInfo);
  *(_OWORD *)((char *)this + 4684) = 0LL;
  *(_QWORD *)((char *)this + 4700) = 0LL;
  *((_DWORD *)this + 1177) = 0;
  *((_WORD *)this + 2356) = 0;
  *((_BYTE *)this + 4714) = 0;
  *(_OWORD *)((char *)this + 4716) = 0LL;
  *(_OWORD *)((char *)this + 4732) = 0LL;
  *(_QWORD *)((char *)this + 4748) = 0LL;
  *((_DWORD *)this + 1189) = 0;
  *(_OWORD *)((char *)this + 4760) = 0LL;
  *(_OWORD *)((char *)this + 4776) = 0LL;
  *((_QWORD *)this + 599) = 0LL;
  *((_DWORD *)this + 1200) = 0;
  `vector constructor iterator'(
    (char *)this + 4804,
    44LL,
    5LL,
    (void (__fastcall *)(char *))CTelemetryTouchLatencyAnalysis::CLatencyInfo::CLatencyInfo);
  memset_0((char *)this + 5024, 0, 0x42uLL);
  *(_QWORD *)((char *)this + 5092) = 0LL;
  *(_OWORD *)((char *)this + 5100) = 0LL;
  *((_DWORD *)this + 1279) = 0;
  result = this;
  *((_QWORD *)this + 640) = 0LL;
  return result;
}
