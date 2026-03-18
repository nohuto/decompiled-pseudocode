/*
 * XREFs of PopDirectedDripsDiagCreateDeviceDiagnostic @ 0x1408F9770
 * Callers:
 *     PopDirectedDripsDiagBroadcastTreeBegin @ 0x1408F9358 (PopDirectedDripsDiagBroadcastTreeBegin.c)
 *     PopDirectedDripsDiagTraceBroadcastVisit @ 0x1408FA8E0 (PopDirectedDripsDiagTraceBroadcastVisit.c)
 *     PopDirectedDripsDiagTraceMarkDevice @ 0x1408FAAA8 (PopDirectedDripsDiagTraceMarkDevice.c)
 * Callees:
 *     memset @ 0x140411300 (memset.c)
 *     PopDirectedDripsDiagCreateDeviceDescription @ 0x1408F9650 (PopDirectedDripsDiagCreateDeviceDescription.c)
 *     PopDirectedDripsDiagFreeDeviceDiagnostic @ 0x1408F9828 (PopDirectedDripsDiagFreeDeviceDiagnostic.c)
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
 */

_QWORD *__fastcall PopDirectedDripsDiagCreateDeviceDiagnostic(__int64 a1)
{
  _QWORD *PoolWithTag; // rax
  _QWORD *v3; // rbx
  _QWORD *v4; // rax

  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0xA8uLL, 0x67696450u);
  v3 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0xA8uLL);
    v3[2] = a1;
    *((_DWORD *)v3 + 6) = dword_140C1EA80++;
    *((_DWORD *)v3 + 37) = -1;
    if ( (int)PopDirectedDripsDiagCreateDeviceDescription(a1, (__int64)v3) < 0 )
    {
      PopDirectedDripsDiagFreeDeviceDiagnostic(v3);
      return 0LL;
    }
    else
    {
      *(_QWORD *)(a1 + 776) = v3;
      v4 = (_QWORD *)qword_140C1E898;
      if ( *(PVOID **)qword_140C1E898 != &qword_140C1E890 )
        __fastfail(3u);
      *v3 = &qword_140C1E890;
      v3[1] = v4;
      *v4 = v3;
      qword_140C1E898 = (__int64)v3;
    }
  }
  return v3;
}
