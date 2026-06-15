/*
 * XREFs of ??0CAudioSrv@@QEAA@XZ @ 0x180062240
 * Callers:
 *     ServiceStart @ 0x180061DF0 (ServiceStart.c)
 * Callees:
 *     ??0CSerialWorkQueue@@QEAA@XZ @ 0x180053558 (--0CSerialWorkQueue@@QEAA@XZ.c)
 */

CAudioSrv *__fastcall CAudioSrv::CAudioSrv(CAudioSrv *this)
{
  *((_QWORD *)this + 11) = 0LL;
  *((_DWORD *)this + 25) = 0;
  *((_DWORD *)this + 26) = 0;
  *((_DWORD *)this + 27) = 0;
  *(_QWORD *)this = &CAudioSrv::`vftable'{for `IAudioService'};
  *((_QWORD *)this + 9) = &CAudioSrv::`vftable'{for `IMMNotificationClient'};
  *((_QWORD *)this + 10) = &CAudioSrv::`vftable'{for `IMonitorDGTermination'};
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)((char *)this + 112), 0, 0);
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 22) = 0LL;
  *((_QWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 25) = 0LL;
  *((_DWORD *)this + 48) = 10;
  CSerialWorkQueue::CSerialWorkQueue((CAudioSrv *)((char *)this + 208));
  CSerialWorkQueue::CSerialWorkQueue((CAudioSrv *)((char *)this + 376));
  return this;
}
