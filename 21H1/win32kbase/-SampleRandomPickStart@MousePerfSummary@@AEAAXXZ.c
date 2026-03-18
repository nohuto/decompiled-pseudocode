/*
 * XREFs of ?SampleRandomPickStart@MousePerfSummary@@AEAAXXZ @ 0x1C00696C8
 * Callers:
 *     ?CollectMousePacketPerfTelemetry@MousePerfSummary@@QEAAXAEBU_MousePacketPerf@@@Z @ 0x1C0069594 (-CollectMousePacketPerfTelemetry@MousePerfSummary@@QEAAXAEBU_MousePacketPerf@@@Z.c)
 * Callees:
 *     rand @ 0x1C00CC7F8 (rand.c)
 */

void __fastcall MousePerfSummary::SampleRandomPickStart(MousePerfSummary *this)
{
  unsigned __int64 v1; // rax

  v1 = *((_QWORD *)this + 68);
  if ( v1 + 1 >= v1 )
  {
    *((_QWORD *)this + 68) = v1 + 1;
    if ( !((unsigned __int64)rand() % *((_QWORD *)this + 68)) )
    {
      *((_QWORD *)this + 73) = *((_QWORD *)this + 53);
      *((_QWORD *)this + 74) = *((_QWORD *)this + 54);
      *((_QWORD *)this + 75) = *((_QWORD *)this + 55);
      *((_QWORD *)this + 76) = *((_QWORD *)this + 56);
      *((_DWORD *)this + 170) = *((_DWORD *)this + 120);
      *((_DWORD *)this + 169) = *((_DWORD *)this + 131);
      *((_BYTE *)this + 552) = 1;
    }
  }
}
