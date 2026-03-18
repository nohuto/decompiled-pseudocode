/*
 * XREFs of ?PerformPnpNotification@CBaseInput@@AEAAXPEBU_DevicePnpNotification@@@Z @ 0x1C009D838
 * Callers:
 *     ?RIMCallBack@CBaseInput@@AEAAXPEAURIMDevChangeStruct@@@Z @ 0x1C009D69C (-RIMCallBack@CBaseInput@@AEAAXPEAURIMDevChangeStruct@@@Z.c)
 * Callees:
 *     ?ForwardPnpNotificationToISM@CBaseInput@@CAXW4_KnownRIMDeviceKind@@PEBUDEVICEINFO@@QEAXK@Z @ 0x1C0038818 (-ForwardPnpNotificationToISM@CBaseInput@@CAXW4_KnownRIMDeviceKind@@PEBUDEVICEINFO@@QEAXK@Z.c)
 *     GetKnownRIMDeviceKind @ 0x1C0038A48 (GetKnownRIMDeviceKind.c)
 *     W32GetThreadWin32Thread @ 0x1C0085450 (W32GetThreadWin32Thread.c)
 *     ApiSetEditionDevicePnpNotification @ 0x1C009D918 (ApiSetEditionDevicePnpNotification.c)
 *     ?ExecutingOnSensorHostingThread@CBaseInput@@QEBA_NXZ @ 0x1C009E350 (-ExecutingOnSensorHostingThread@CBaseInput@@QEBA_NXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CBaseInput::PerformPnpNotification(CBaseInput *this, const struct _DevicePnpNotification *a2)
{
  __int64 v4; // rcx
  CInputThread *v5; // rdi
  int v6; // ebx
  __int64 v7; // rcx
  int KnownRIMDeviceKind; // eax
  __int64 v9; // r10

  if ( !W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v4);
  v5 = gpInputThread;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v5, 0LL);
  v6 = *((_DWORD *)v5 + 4);
  ExReleasePushLockSharedEx(v5, 0LL);
  KeLeaveCriticalRegion();
  if ( v6 == 2 && (unsigned int)(*((_DWORD *)a2 + 5) - 2) <= 1 )
  {
    if ( !CBaseInput::ExecutingOnSensorHostingThread(this) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v7);
    KnownRIMDeviceKind = GetKnownRIMDeviceKind(*(_QWORD *)a2);
    if ( KnownRIMDeviceKind )
      CBaseInput::ForwardPnpNotificationToISM(KnownRIMDeviceKind, v9, *((_QWORD *)a2 + 1), *((_DWORD *)a2 + 5));
  }
  ApiSetEditionDevicePnpNotification(a2);
}
