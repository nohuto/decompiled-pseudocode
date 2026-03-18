/*
 * XREFs of PopDirectedDripsDiagCreateDeviceDiagnostic @ 0x14099E6B8
 * Callers:
 *     PopDirectedDripsDiagBroadcastTreeBegin @ 0x14099E2B4 (PopDirectedDripsDiagBroadcastTreeBegin.c)
 *     PopDirectedDripsDiagTraceBroadcastVisit @ 0x14099E9BC (PopDirectedDripsDiagTraceBroadcastVisit.c)
 *     PopDirectedDripsDiagTraceMarkDevice @ 0x14099EB84 (PopDirectedDripsDiagTraceMarkDevice.c)
 * Callees:
 *     PopDirectedDripsDiagCreateDeviceDescription @ 0x14099E598 (PopDirectedDripsDiagCreateDeviceDescription.c)
 *     PopDirectedDripsDiagFreeDeviceDiagnostic @ 0x14099E75C (PopDirectedDripsDiagFreeDeviceDiagnostic.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

_QWORD *__fastcall PopDirectedDripsDiagCreateDeviceDiagnostic(__int64 a1)
{
  __int64 Pool2; // rax
  _QWORD *v3; // rbx
  _QWORD *v4; // rax

  Pool2 = ExAllocatePool2(256LL, 168LL, 1734960208LL);
  v3 = (_QWORD *)Pool2;
  if ( Pool2 )
  {
    *(_QWORD *)(Pool2 + 16) = a1;
    *(_DWORD *)(Pool2 + 24) = dword_140C1CD80++;
    *(_DWORD *)(Pool2 + 148) = -1;
    if ( (int)PopDirectedDripsDiagCreateDeviceDescription(a1, Pool2) < 0 )
    {
      PopDirectedDripsDiagFreeDeviceDiagnostic(v3);
      return 0LL;
    }
    else
    {
      *(_QWORD *)(a1 + 776) = v3;
      v4 = (_QWORD *)qword_140C1CB78;
      if ( *(PVOID **)qword_140C1CB78 != &qword_140C1CB70 )
        __fastfail(3u);
      *v3 = &qword_140C1CB70;
      v3[1] = v4;
      *v4 = v3;
      qword_140C1CB78 = (__int64)v3;
    }
  }
  return v3;
}
