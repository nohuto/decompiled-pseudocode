/*
 * XREFs of OSNotifyCreate @ 0x1C001D3F0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C00027D0 (WPP_RECORDER_SF_D.c)
 *     OSNotifyCreateProcessor @ 0x1C0015FCC (OSNotifyCreateProcessor.c)
 *     OSNotifyCreateOperationRegion @ 0x1C0018088 (OSNotifyCreateOperationRegion.c)
 *     OSNotifyCreateDevice @ 0x1C001B15C (OSNotifyCreateDevice.c)
 *     WPP_RECORDER_SF_qsL @ 0x1C001D5D0 (WPP_RECORDER_SF_qsL.c)
 *     OSNotifyCreatePowerResource @ 0x1C002DCD4 (OSNotifyCreatePowerResource.c)
 *     OSNotifyCreateThermalZone @ 0x1C002F710 (OSNotifyCreateThermalZone.c)
 */

__int64 __fastcall OSNotifyCreate(int a1, __int64 a2)
{
  KIRQL v4; // si
  char Device; // al
  char v6; // bl
  int v7; // edx

  v4 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
  switch ( a1 )
  {
    case 6:
      Device = OSNotifyCreateDevice(a2, 0LL);
LABEL_3:
      v6 = Device;
      goto LABEL_4;
    case 10:
      Device = OSNotifyCreateOperationRegion(a2);
      goto LABEL_3;
    case 11:
      Device = OSNotifyCreatePowerResource(a2);
      goto LABEL_3;
    case 12:
      Device = OSNotifyCreateProcessor(a2, 0LL);
      goto LABEL_3;
    case 13:
      Device = OSNotifyCreateThermalZone(a2, 0LL);
      goto LABEL_3;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      0x15u,
      0xAu,
      (__int64)&WPP_3b815367ceb5375a01194b74e08b1a28_Traceguids,
      a1);
  v6 = 0;
LABEL_4:
  KeReleaseSpinLock(&AcpiDeviceTreeLock, v4);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    dword_1C0082780 = *(_DWORD *)(*(_QWORD *)a2 + 40LL);
    byte_1C0082784 = 0;
    WPP_RECORDER_SF_qsL(
      WPP_GLOBAL_Control->DeviceExtension,
      v7,
      6,
      11,
      (__int64)&WPP_3b815367ceb5375a01194b74e08b1a28_Traceguids,
      a2,
      (__int64)&dword_1C0082780,
      v6);
  }
  return 0LL;
}
