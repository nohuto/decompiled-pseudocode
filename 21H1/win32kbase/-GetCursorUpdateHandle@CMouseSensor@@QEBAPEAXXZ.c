/*
 * XREFs of ?GetCursorUpdateHandle@CMouseSensor@@QEBAPEAXXZ @ 0x1C0036D00
 * Callers:
 *     GetCursorUpdateHandle @ 0x1C0036C54 (GetCursorUpdateHandle.c)
 * Callees:
 *     ?GetDispatcherHandleByName@CRIMBase@@IEBAPEAXW4DispatcherHandleName@1@W4HandleAccessMode@1@@Z @ 0x1C003732C (-GetDispatcherHandleByName@CRIMBase@@IEBAPEAXW4DispatcherHandleName@1@W4HandleAccessMode@1@@Z.c)
 *     ?GetSensorHostingProcessHandle@CBaseInput@@IEBAPEAXXZ @ 0x1C00380A0 (-GetSensorHostingProcessHandle@CBaseInput@@IEBAPEAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void *__fastcall CMouseSensor::GetCursorUpdateHandle(CMouseSensor *this)
{
  CInputThread *v1; // rsi
  unsigned int CurrentThreadId; // eax
  int v4; // ebx
  unsigned int v5; // edi
  __int64 v6; // rcx
  void *SensorHostingProcessHandle; // rbx
  void *DispatcherHandleByName; // rax
  NTSTATUS v9; // eax
  __int64 v10; // rcx
  void *TargetHandle; // [rsp+58h] [rbp+10h] BYREF

  v1 = gpInputThread;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v1, 0LL);
  CurrentThreadId = (unsigned int)PsGetCurrentThreadId();
  v4 = *((_DWORD *)v1 + 10);
  v5 = CurrentThreadId;
  ExReleasePushLockSharedEx(v1, 0LL);
  KeLeaveCriticalRegion();
  if ( v5 != v4 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v6);
  TargetHandle = (void *)-1LL;
  SensorHostingProcessHandle = CBaseInput::GetSensorHostingProcessHandle(this);
  if ( SensorHostingProcessHandle != (void *)-1LL )
  {
    DispatcherHandleByName = (void *)CRIMBase::GetDispatcherHandleByName(this, 14LL, 0LL);
    if ( DispatcherHandleByName )
    {
      v9 = ZwDuplicateObject(
             SensorHostingProcessHandle,
             DispatcherHandleByName,
             (HANDLE)0xFFFFFFFFFFFFFFFFLL,
             &TargetHandle,
             0x100000u,
             0,
             2u);
      v10 = (__int64)TargetHandle;
      if ( v9 < 0 )
        v10 = -1LL;
      TargetHandle = (void *)v10;
    }
    ZwClose(SensorHostingProcessHandle);
  }
  return TargetHandle;
}
