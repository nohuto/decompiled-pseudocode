/*
 * XREFs of ?SampleRandomPickEnd@MousePerfSummary@@AEAAXXZ @ 0x1C0069764
 * Callers:
 *     ?CollectMousePerfTelemetry@MousePerfSummary@@QEAAXAEBU_MousePerf@@@Z @ 0x1C0069480 (-CollectMousePerfTelemetry@MousePerfSummary@@QEAAXAEBU_MousePerf@@@Z.c)
 * Callees:
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C0069980 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 */

void __fastcall MousePerfSummary::SampleRandomPickEnd(MousePerfSummary *this)
{
  if ( *((_BYTE *)this + 552) == 1 )
  {
    *((_QWORD *)this + 70) = *((_QWORD *)this + 50);
    *((_QWORD *)this + 71) = *((_QWORD *)this + 51);
    *((_QWORD *)this + 72) = *((_QWORD *)this + 52);
    *((_QWORD *)this + 77) = *((_QWORD *)this + 57);
    *((_QWORD *)this + 78) = *((_QWORD *)this + 58);
    *((_QWORD *)this + 79) = *((_QWORD *)this + 59);
    RtlStringCchCopyW((unsigned __int16 *)this + 320, 0x10uLL, (const unsigned __int16 *)this + 242);
    *((_DWORD *)this + 168) = *((_DWORD *)this + 129);
    *((_BYTE *)this + 552) = 0;
  }
}
