/*
 * XREFs of ?IsConnectedTo@CaptureMonitor@CMonitorManager@@QEBA_NPEBG@Z @ 0x1800FDB34
 * Callers:
 *     ?HandleDeviceArrivalForExistingMonitors@CMonitorManager@@AEAAXPEBG@Z @ 0x1800FD044 (-HandleDeviceArrivalForExistingMonitors@CMonitorManager@@AEAAXPEBG@Z.c)
 *     ?HandleDeviceRemoved@CMonitorManager@@AEAAXPEBG@Z @ 0x1800FD194 (-HandleDeviceRemoved@CMonitorManager@@AEAAXPEBG@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall CMonitorManager::CaptureMonitor::IsConnectedTo(
        CMonitorManager::CaptureMonitor *this,
        const unsigned __int16 *a2)
{
  _QWORD *v4; // rcx
  char v5; // bl
  _QWORD *v6; // rcx

  v4 = (_QWORD *)((char *)this + 128);
  if ( v4[3] >= 8uLL )
    v4 = (_QWORD *)*v4;
  v5 = 0;
  if ( !(unsigned int)_o__wcsnicmp(v4, a2, *((_QWORD *)this + 18)) )
    return 1;
  v6 = (_QWORD *)((char *)this + 160);
  if ( *((_QWORD *)this + 23) >= 8uLL )
    v6 = (_QWORD *)*v6;
  if ( !(unsigned int)_o__wcsnicmp(v6, a2, *((_QWORD *)this + 22)) )
    return 1;
  return v5;
}
