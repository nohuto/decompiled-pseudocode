/*
 * XREFs of ??0CAudioDGProcess@@QEAA@PEAUIMonitorDGTermination@@@Z @ 0x1800629FC
 * Callers:
 *     ?Initialize@CAudioSrv@@UEAAJJ@Z @ 0x180062A80 (-Initialize@CAudioSrv@@UEAAJJ@Z.c)
 * Callees:
 *     <none>
 */

CAudioDGProcess *__fastcall CAudioDGProcess::CAudioDGProcess(CAudioDGProcess *this, struct IMonitorDGTermination *a2)
{
  CAudioDGProcess *result; // rax

  InitializeCriticalSectionEx((LPCRITICAL_SECTION)this, 0, 0);
  *((_DWORD *)this + 10) = 0;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)((char *)this + 48), 0, 0);
  *((_QWORD *)this + 11) = 0LL;
  result = this;
  *((_DWORD *)this + 24) = 0;
  *((_DWORD *)this + 26) = 0;
  *((_BYTE *)this + 100) = 0;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 19) = a2;
  return result;
}
