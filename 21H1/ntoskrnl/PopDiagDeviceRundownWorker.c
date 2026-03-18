/*
 * XREFs of PopDiagDeviceRundownWorker @ 0x1407115E0
 * Callers:
 *     <none>
 * Callees:
 *     IoControlPnpDeviceActionQueue @ 0x14036204C (IoControlPnpDeviceActionQueue.c)
 *     PoDiagTraceDeviceRundown @ 0x1407114F4 (PoDiagTraceDeviceRundown.c)
 */

__int64 PopDiagDeviceRundownWorker()
{
  unsigned __int16 *v0; // rbx
  unsigned __int16 *i; // rax
  unsigned __int16 *v2; // rax

  _InterlockedExchange(&PopDiagDeviceRundownRequests, 0);
  IoControlPnpDeviceActionQueue(1);
  v0 = (unsigned __int16 *)IopRootDeviceNode;
  for ( i = (unsigned __int16 *)*((_QWORD *)IopRootDeviceNode + 1); i; i = (unsigned __int16 *)*((_QWORD *)i + 1) )
    v0 = i;
  while ( v0 != IopRootDeviceNode )
  {
    PoDiagTraceDeviceRundown((__int64)v0, v0 + 20, v0 + 28, *((_DWORD *)v0 + 39));
    v2 = *(unsigned __int16 **)v0;
    if ( *(_QWORD *)v0 )
    {
      do
      {
        v0 = v2;
        v2 = (unsigned __int16 *)*((_QWORD *)v2 + 1);
      }
      while ( v2 );
    }
    else
    {
      v0 = (unsigned __int16 *)*((_QWORD *)v0 + 2);
    }
  }
  return IoControlPnpDeviceActionQueue(0);
}
