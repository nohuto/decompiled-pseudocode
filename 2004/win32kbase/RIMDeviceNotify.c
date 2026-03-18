/*
 * XREFs of RIMDeviceNotify @ 0x1C016E2B0
 * Callers:
 *     <none>
 * Callees:
 *     RimDeviceTypeToRimInputType @ 0x1C0016124 (RimDeviceTypeToRimInputType.c)
 *     RIMLockExclusive @ 0x1C00712F0 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_ @ 0x1C0072EBC (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C00AA920 (WPP_RECORDER_SF_d.c)
 *     DeviceTypeToRimInputType @ 0x1C00AB980 (DeviceTypeToRimInputType.c)
 *     RIMGetPnpActionBitsFromGuid @ 0x1C016E444 (RIMGetPnpActionBitsFromGuid.c)
 *     RIMSignalOnPnpNotificationAndWait @ 0x1C016E5C4 (RIMSignalOnPnpNotificationAndWait.c)
 *     WPP_RECORDER_SF_Sd @ 0x1C016F298 (WPP_RECORDER_SF_Sd.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMDeviceNotify(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdi
  int v5; // ebp
  __int64 v6; // rbx
  char v7; // al
  int v8; // edx
  int v9; // ecx
  int v10; // r8d
  int v11; // r9d
  int v12; // edx
  int v14; // [rsp+20h] [rbp-48h]
  int v15; // [rsp+78h] [rbp+10h] BYREF
  int v16; // [rsp+80h] [rbp+18h] BYREF
  int v17; // [rsp+88h] [rbp+20h] BYREF

  v4 = a2;
  v5 = a1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_((_DWORD)gRimLog, a2, 1, 54, (__int64)&WPP_a75f261dfb463415346bb11edf387329_Traceguids);
  }
  v6 = *(_QWORD *)(v4 + 336);
  if ( *(struct _KTHREAD **)(v6 + 40) == KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3, a4);
  RIMLockExclusive(v6 + 104);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v7 = RimDeviceTypeToRimInputType(v4, *(unsigned __int8 *)(v4 + 48));
    WPP_RECORDER_SF_Sd(v9, v8, v10, v11, v14, *(_QWORD *)(v4 + 216), v7);
  }
  if ( !*(_BYTE *)(v6 + 81)
    && ((unsigned int)DeviceTypeToRimInputType(*(unsigned __int8 *)(v4 + 48)) & *(_DWORD *)(v6 + 84)) != 0 )
  {
    v17 = 0;
    v15 = 0;
    v16 = 0;
    RIMGetPnpActionBitsFromGuid(v6, v4, v5 + 4, (unsigned int)&v17, (__int64)&v15, (__int64)&v16);
    if ( v17 || v15 || v16 )
      RIMSignalOnPnpNotificationAndWait(v6, v4, 0, v17, v15, v16);
  }
  *(_QWORD *)(v6 + 112) = 0LL;
  ExReleasePushLockExclusiveEx(v6 + 104, 0LL);
  KeLeaveCriticalRegion();
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v12) = 4;
    WPP_RECORDER_SF_d((_DWORD)gRimLog, v12, 1, 56, (__int64)&WPP_a75f261dfb463415346bb11edf387329_Traceguids, 0);
  }
  return 0LL;
}
