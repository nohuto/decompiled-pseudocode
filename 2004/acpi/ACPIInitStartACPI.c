/*
 * XREFs of ACPIInitStartACPI @ 0x1C00BB3C4
 * Callers:
 *     ACPIRootIrpStartDevice @ 0x1C00BB130 (ACPIRootIrpStartDevice.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0002980 (ACPIInternalGetDeviceExtension.c)
 *     ACPIInternalRegisterPowerCallBack @ 0x1C000C6B0 (ACPIInternalRegisterPowerCallBack.c)
 *     ACPIBuildSpecialSynchronizationRequest @ 0x1C001C4FC (ACPIBuildSpecialSynchronizationRequest.c)
 *     ACPIPowerScheduleDpc @ 0x1C001CB1C (ACPIPowerScheduleDpc.c)
 *     WPP_RECORDER_SF_ @ 0x1C001D52C (WPP_RECORDER_SF_.c)
 *     ACPIInitialize @ 0x1C00BEBFC (ACPIInitialize.c)
 */

__int64 __fastcall ACPIInitStartACPI(ULONG_PTR BugCheckParameter3)
{
  void *DeviceExtension; // rsi
  KIRQL v3; // al
  __int64 result; // rax
  int v5; // ebx
  KIRQL v6; // bl
  KIRQL v7; // al
  struct _KEVENT Event; // [rsp+30h] [rbp-28h] BYREF

  memset(&Event, 0, sizeof(Event));
  DeviceExtension = (void *)ACPIInternalGetDeviceExtension(BugCheckParameter3);
  v3 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
  _InterlockedAnd64(&AcpiGlobalFlags, 0xFFFFFFFFFFFFFFFEuLL);
  KeReleaseSpinLock(&AcpiDeviceTreeLock, v3);
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  result = ACPIBuildSpecialSynchronizationRequest(
             (__int64)DeviceExtension,
             (__int64)ACPIInitPowerRequestCompletion,
             (__int64)&Event,
             127,
             0);
  v5 = result;
  if ( (int)result >= 0 )
  {
    if ( (unsigned __int8)ACPIInitialize(BugCheckParameter3) )
    {
      if ( v5 == 259 )
        KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      ACPIInternalRegisterPowerCallBack(DeviceExtension, (PCALLBACK_FUNCTION)ACPIRootPowerCallBack);
      v6 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerQueueLock);
      ACPIPowerScheduleDpc();
      KeReleaseSpinLock(&AcpiPowerQueueLock, v6);
      v7 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
      _InterlockedOr64(&AcpiGlobalFlags, 1uLL);
      KeReleaseSpinLock(&AcpiDeviceTreeLock, v7);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          4u,
          1u,
          0x13u,
          (__int64)&WPP_6388804bb8c533865278dc0c88026078_Traceguids);
      return 0LL;
    }
    else
    {
      return 3221225664LL;
    }
  }
  return result;
}
