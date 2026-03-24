/*
 * XREFs of ?_GetMonitorOrientation@DXGMONITOR@@QEBAJPEAK0@Z @ 0x1C0009A40
 * Callers:
 *     MonitorGetMonitorOrientationsFromMonitor @ 0x1C012A00C (MonitorGetMonitorOrientationsFromMonitor.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DXGMONITOR::_GetMonitorOrientation(DXGMONITOR *this, unsigned int *a2, unsigned int *a3)
{
  unsigned int v3; // eax

  if ( a2 )
  {
    v3 = 0;
    if ( *((_DWORD *)this + 114) != *((_DWORD *)this + 112) )
      v3 = *((_DWORD *)this + 114);
    *a2 = v3;
  }
  if ( a3 )
    *a3 = *((_DWORD *)this + 116);
  return 0LL;
}
