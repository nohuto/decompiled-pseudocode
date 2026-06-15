/*
 * XREFs of ??0CAudioHealthMonitor@@QEAA@K@Z @ 0x180065314
 * Callers:
 *     ?VAD_AudiosrvServiceStart@CAudioSrv@@AEAAJXZ @ 0x180063590 (-VAD_AudiosrvServiceStart@CAudioSrv@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

CAudioHealthMonitor *__fastcall CAudioHealthMonitor::CAudioHealthMonitor(CAudioHealthMonitor *this, int a2)
{
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 3) = a2;
  *(_QWORD *)this = &CAudioHealthMonitor::`vftable';
  *((_DWORD *)this + 4) = 16;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)((char *)this + 24), 0, 0);
  *((_DWORD *)this + 16) = 0;
  return this;
}
