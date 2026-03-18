/*
 * XREFs of PopDirectedDripsDiagCreateDeviceDiagnostic @ 0x1408F3B60
 * Callers:
 *     PopDirectedDripsDiagBroadcastTreeBegin @ 0x1408F3748 (PopDirectedDripsDiagBroadcastTreeBegin.c)
 *     PopDirectedDripsDiagTraceBroadcastVisit @ 0x1408F4CD0 (PopDirectedDripsDiagTraceBroadcastVisit.c)
 *     PopDirectedDripsDiagTraceMarkDevice @ 0x1408F4E98 (PopDirectedDripsDiagTraceMarkDevice.c)
 * Callees:
 *     memset @ 0x14040A280 (memset.c)
 *     PopDirectedDripsDiagCreateDeviceDescription @ 0x1408F3A40 (PopDirectedDripsDiagCreateDeviceDescription.c)
 *     PopDirectedDripsDiagFreeDeviceDiagnostic @ 0x1408F3C18 (PopDirectedDripsDiagFreeDeviceDiagnostic.c)
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
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
    *((_DWORD *)v3 + 6) = dword_140C1EB00++;
    *((_DWORD *)v3 + 37) = -1;
    if ( (int)PopDirectedDripsDiagCreateDeviceDescription(a1, (__int64)v3) < 0 )
    {
      PopDirectedDripsDiagFreeDeviceDiagnostic(v3);
      return 0LL;
    }
    else
    {
      *(_QWORD *)(a1 + 776) = v3;
      v4 = (_QWORD *)qword_140C1E918;
      if ( *(PVOID **)qword_140C1E918 != &qword_140C1E910 )
        __fastfail(3u);
      *v3 = &qword_140C1E910;
      v3[1] = v4;
      *v4 = v3;
      qword_140C1E918 = (__int64)v3;
    }
  }
  return v3;
}
