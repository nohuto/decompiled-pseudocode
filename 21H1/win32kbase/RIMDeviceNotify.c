/*
 * XREFs of RIMDeviceNotify @ 0x1C01745E0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00678DC (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C0069440 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_d @ 0x1C006ACC8 (WPP_RECORDER_SF_d.c)
 *     DeviceTypeToRimInputType @ 0x1C00A1B00 (DeviceTypeToRimInputType.c)
 *     RimDeviceTypeToRimInputType @ 0x1C00A30BC (RimDeviceTypeToRimInputType.c)
 *     RIMGetPnpActionBitsFromGuid @ 0x1C0174774 (RIMGetPnpActionBitsFromGuid.c)
 *     RIMSignalOnPnpNotificationAndWait @ 0x1C01748F4 (RIMSignalOnPnpNotificationAndWait.c)
 *     WPP_RECORDER_SF_Sd @ 0x1C01755C8 (WPP_RECORDER_SF_Sd.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMDeviceNotify(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  int v3; // ebp
  __int64 v4; // rbx
  char v5; // al
  int v6; // edx
  int v7; // ecx
  int v8; // r8d
  int v9; // r9d
  int v10; // edx
  int v12; // [rsp+20h] [rbp-48h]
  int v13; // [rsp+78h] [rbp+10h] BYREF
  int v14; // [rsp+80h] [rbp+18h] BYREF
  int v15; // [rsp+88h] [rbp+20h] BYREF

  v2 = a2;
  v3 = a1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_((_DWORD)gRimLog, a2, 1, 54, (__int64)&WPP_a75f261dfb463415346bb11edf387329_Traceguids);
  }
  v4 = *(_QWORD *)(v2 + 336);
  if ( *(struct _KTHREAD **)(v4 + 40) == KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1);
  RIMLockExclusive(v4 + 104);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v5 = RimDeviceTypeToRimInputType(v2, *(unsigned __int8 *)(v2 + 48));
    WPP_RECORDER_SF_Sd(v7, v6, v8, v9, v12, *(_QWORD *)(v2 + 216), v5);
  }
  if ( !*(_BYTE *)(v4 + 81)
    && ((unsigned int)DeviceTypeToRimInputType(*(unsigned __int8 *)(v2 + 48)) & *(_DWORD *)(v4 + 84)) != 0 )
  {
    v15 = 0;
    v13 = 0;
    v14 = 0;
    RIMGetPnpActionBitsFromGuid(v4, v2, v3 + 4, (unsigned int)&v15, (__int64)&v13, (__int64)&v14);
    if ( v15 || v13 || v14 )
      RIMSignalOnPnpNotificationAndWait(v4, v2, 0, v15, v13, v14);
  }
  *(_QWORD *)(v4 + 112) = 0LL;
  ExReleasePushLockExclusiveEx(v4 + 104, 0LL);
  KeLeaveCriticalRegion();
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v10) = 4;
    WPP_RECORDER_SF_d((_DWORD)gRimLog, v10, 1, 56, (__int64)&WPP_a75f261dfb463415346bb11edf387329_Traceguids, 0);
  }
  return 0LL;
}
