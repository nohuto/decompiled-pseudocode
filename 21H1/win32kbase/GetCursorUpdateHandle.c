/*
 * XREFs of GetCursorUpdateHandle @ 0x1C0036C54
 * Callers:
 *     NtMITGetCursorUpdateHandle @ 0x1C00369E0 (NtMITGetCursorUpdateHandle.c)
 * Callees:
 *     ?GetCursorUpdateHandle@CMouseSensor@@QEBAPEAXXZ @ 0x1C0036D00 (-GetCursorUpdateHandle@CMouseSensor@@QEBAPEAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void *GetCursorUpdateHandle()
{
  CInputThread *v0; // rsi
  __int64 v1; // rbp
  unsigned int CurrentThreadId; // eax
  int v3; // ebx
  unsigned int v4; // edi
  __int64 v5; // rcx

  v0 = gpInputThread;
  v1 = -1LL;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v0, 0LL);
  CurrentThreadId = (unsigned int)PsGetCurrentThreadId();
  v3 = *((_DWORD *)v0 + 10);
  v4 = CurrentThreadId;
  ExReleasePushLockSharedEx(v0, 0LL);
  KeLeaveCriticalRegion();
  if ( v4 != v3 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v5);
  if ( qword_1C0247018 )
    return CMouseSensor::GetCursorUpdateHandle(qword_1C0247018);
  return (void *)v1;
}
