/*
 * XREFs of DxgkInitialPower @ 0x1C0197B90
 * Callers:
 *     DriverEntry @ 0x1C0305D00 (DriverEntry.c)
 * Callees:
 *     <none>
 */

__int64 DxgkInitialPower()
{
  NTSTATUS v0; // eax
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // rbx
  __int64 v5; // rax
  __int64 v6; // rax
  NTSTATUS v7; // eax
  NTSTATUS v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rax
  char OutputBuffer; // [rsp+40h] [rbp+8h] BYREF

  OutputBuffer = 0;
  v0 = ZwPowerInformation((POWER_INFORMATION_LEVEL)66, 0LL, 0, &OutputBuffer, 1u);
  v3 = v0;
  if ( v0 < 0 )
    goto LABEL_4;
  byte_1C00B0B18 = OutputBuffer;
  if ( !OutputBuffer )
    return (unsigned int)v3;
  v6 = WdLogNewEntry5_WdEvent(v2, v1);
  *(_QWORD *)(v6 + 24) = 0LL;
  WdLogEvent5_WdEvent(v6);
  v7 = PoRegisterPowerSettingCallback(
         (PDEVICE_OBJECT)g_pDeviceObject,
         &GUID_MONITOR_POWER_ON,
         DpiMiracastHandlePowerCallback,
         0LL,
         &Handle);
  v3 = v7;
  if ( v7 < 0
    || (v8 = PoRegisterPowerSettingCallback(
               (PDEVICE_OBJECT)g_pDeviceObject,
               &GUID_LOW_POWER_EPOCH,
               DpiMiracastHandlePowerCallback,
               0LL,
               &qword_1C00B0F48),
        v3 = v8,
        v8 < 0) )
  {
LABEL_4:
    v5 = WdLogNewEntry5_WdError(v2, v1);
    *(_QWORD *)(v5 + 24) = v3;
    WdLogEvent5_WdError(v5);
    return (unsigned int)v3;
  }
  dword_1C00B0F50 = 0;
  byte_1C00B0B1A = 0;
  qword_1C00B0FD8 = (__int64)IoAllocateWorkItem((PDEVICE_OBJECT)g_pDeviceObject);
  if ( qword_1C00B0FD8 )
  {
    KeInitializeTimerEx(&Timer, SynchronizationTimer);
    KeInitializeDpc(&Dpc, (PKDEFERRED_ROUTINE)DpiMiracastConnectedStandbyDelayTimerDpc, 0LL);
  }
  else
  {
    v13 = WdLogNewEntry5_WdLowResource(v10, v9, v11, v12);
    LODWORD(v3) = -1073741801;
    *(_QWORD *)(v13 + 24) = -1073741801LL;
    WdLogEvent5_WdLowResource(v13);
  }
  return (unsigned int)v3;
}
