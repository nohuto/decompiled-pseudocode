/*
 * XREFs of ?PerformPnpNotification@CBaseInput@@AEAAXPEBU_DevicePnpNotification@@@Z @ 0x1C0024C18
 * Callers:
 *     ?RIMCallBack@CBaseInput@@AEAAXPEAURIMDevChangeStruct@@@Z @ 0x1C0024A7C (-RIMCallBack@CBaseInput@@AEAAXPEAURIMDevChangeStruct@@@Z.c)
 * Callees:
 *     ?ForwardPnpNotificationToISM@CBaseInput@@CAXW4_KnownRIMDeviceKind@@PEBUDEVICEINFO@@QEAXK@Z @ 0x1C00077B8 (-ForwardPnpNotificationToISM@CBaseInput@@CAXW4_KnownRIMDeviceKind@@PEBUDEVICEINFO@@QEAXK@Z.c)
 *     GetKnownRIMDeviceKind @ 0x1C00079E8 (GetKnownRIMDeviceKind.c)
 *     ApiSetEditionDevicePnpNotification @ 0x1C0024CF8 (ApiSetEditionDevicePnpNotification.c)
 *     ?ExecutingOnSensorHostingThread@CBaseInput@@QEBA_NXZ @ 0x1C0025730 (-ExecutingOnSensorHostingThread@CBaseInput@@QEBA_NXZ.c)
 *     W32GetThreadWin32Thread @ 0x1C0043BB0 (W32GetThreadWin32Thread.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CBaseInput::PerformPnpNotification(CBaseInput *this, const struct _DevicePnpNotification *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  CInputThread *v8; // rdi
  int v9; // ebx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  int KnownRIMDeviceKind; // eax
  __int64 v15; // r10

  if ( !W32GetThreadWin32Thread(KeGetCurrentThread()) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v5, v4, v6, v7);
  v8 = gpInputThread;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v8, 0LL);
  v9 = *((_DWORD *)v8 + 4);
  ExReleasePushLockSharedEx(v8, 0LL);
  KeLeaveCriticalRegion();
  if ( v9 == 2 && (unsigned int)(*((_DWORD *)a2 + 5) - 2) <= 1 )
  {
    if ( !CBaseInput::ExecutingOnSensorHostingThread(this) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, v10, v12, v13);
    KnownRIMDeviceKind = GetKnownRIMDeviceKind(*(_QWORD *)a2);
    if ( KnownRIMDeviceKind )
      CBaseInput::ForwardPnpNotificationToISM(KnownRIMDeviceKind, v15, *((_QWORD *)a2 + 1), *((_DWORD *)a2 + 5));
  }
  ApiSetEditionDevicePnpNotification(a2);
}
