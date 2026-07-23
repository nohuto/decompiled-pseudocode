/*
 * XREFs of IoDiagTraceDirectedDripsCandidateDevices @ 0x1408B46F8
 * Callers:
 *     PopDirectedDripsDiagTraceNotifyDevices @ 0x14057CE90 (PopDirectedDripsDiagTraceNotifyDevices.c)
 * Callees:
 *     PoDiagTraceDirectedDripsCandidateDevice @ 0x1408E8144 (PoDiagTraceDirectedDripsCandidateDevice.c)
 */

_QWORD *IoDiagTraceDirectedDripsCandidateDevices()
{
  _QWORD *v0; // rbx
  _QWORD *result; // rax
  signed __int32 v2; // eax
  signed __int32 v3; // ett

  v0 = IopRootDeviceNode;
  for ( result = (_QWORD *)*((_QWORD *)IopRootDeviceNode + 1); result; result = (_QWORD *)result[1] )
    v0 = result;
  while ( v0 != IopRootDeviceNode )
  {
    _m_prefetchw(v0 + 37);
    v2 = *((_DWORD *)v0 + 74);
    do
    {
      v3 = v2;
      v2 = _InterlockedCompareExchange((volatile signed __int32 *)v0 + 74, v2, v2);
    }
    while ( v3 != v2 );
    if ( (v2 & 0x100) != 0 )
      PoDiagTraceDirectedDripsCandidateDevice(v0);
    result = (_QWORD *)*v0;
    if ( *v0 )
    {
      do
      {
        v0 = result;
        result = (_QWORD *)result[1];
      }
      while ( result );
    }
    else
    {
      v0 = (_QWORD *)v0[2];
    }
  }
  return result;
}
