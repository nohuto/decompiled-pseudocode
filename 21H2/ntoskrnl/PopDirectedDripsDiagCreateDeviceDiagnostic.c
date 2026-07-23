/*
 * XREFs of PopDirectedDripsDiagCreateDeviceDiagnostic @ 0x1408F70B0
 * Callers:
 *     PopDirectedDripsDiagBroadcastTreeBegin @ 0x1408F6C98 (PopDirectedDripsDiagBroadcastTreeBegin.c)
 *     PopDirectedDripsDiagTraceBroadcastVisit @ 0x1408F8220 (PopDirectedDripsDiagTraceBroadcastVisit.c)
 *     PopDirectedDripsDiagTraceMarkDevice @ 0x1408F83E8 (PopDirectedDripsDiagTraceMarkDevice.c)
 * Callees:
 *     memset @ 0x140414300 (memset.c)
 *     PopDirectedDripsDiagCreateDeviceDescription @ 0x1408F6F90 (PopDirectedDripsDiagCreateDeviceDescription.c)
 *     PopDirectedDripsDiagFreeDeviceDiagnostic @ 0x1408F7168 (PopDirectedDripsDiagFreeDeviceDiagnostic.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
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
    *((_DWORD *)v3 + 6) = dword_140C1EBC0++;
    *((_DWORD *)v3 + 37) = -1;
    if ( (int)PopDirectedDripsDiagCreateDeviceDescription(a1, (__int64)v3) < 0 )
    {
      PopDirectedDripsDiagFreeDeviceDiagnostic(v3);
      return 0LL;
    }
    else
    {
      *(_QWORD *)(a1 + 776) = v3;
      v4 = (_QWORD *)qword_140C1E9D8;
      if ( *(PVOID **)qword_140C1E9D8 != &qword_140C1E9D0 )
        __fastfail(3u);
      *v3 = &qword_140C1E9D0;
      v3[1] = v4;
      *v4 = v3;
      qword_140C1E9D8 = (__int64)v3;
    }
  }
  return v3;
}
