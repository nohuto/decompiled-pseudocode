/*
 * XREFs of IncrementActivePinCount @ 0x1C0024B30
 * Callers:
 *     PinSetDeviceState @ 0x1C0024CB0 (PinSetDeviceState.c)
 * Callees:
 *     DeviceRequestPowerUp @ 0x1C002349C (DeviceRequestPowerUp.c)
 */

__int64 __fastcall IncrementActivePinCount(PKSPIN Pin, __int64 a2, __int64 a3, __int64 a4)
{
  PVOID Context; // rax
  __int64 v6; // rsi
  __int64 v7; // rdi
  NTSTATUS v8; // edx
  PKSFILTER ParentFilter; // rbx
  void *v10; // rcx

  Context = Pin->Context;
  v6 = *((_QWORD *)Context + 2);
  v7 = *(_QWORD *)(v6 + 16);
  if ( *(_DWORD *)(v7 + 528) != 1 )
  {
    v8 = DeviceRequestPowerUp(*((PIRP **)Context + 2), a2, a3, a4);
    if ( v8 < 0 )
      return (unsigned int)v8;
    ParentFilter = KsPinGetParentFilter(Pin);
    KsReleaseControl(ParentFilter);
    KeWaitForSingleObject((PVOID)(v7 + 544), Executive, 0, 0, 0LL);
    KsAcquireControl(ParentFilter);
  }
  v8 = 0;
  if ( _InterlockedIncrement((volatile signed __int32 *)(v7 + 700)) == 1 )
  {
    v10 = *(void **)(v7 + 512);
    if ( v10 )
      PoSetPowerRequest(v10, PowerRequestSystemRequired);
    *(_QWORD *)(v7 + 520) = PoRegisterDeviceForIdleDetection(
                              *(PDEVICE_OBJECT *)(v6 + 32),
                              0,
                              0,
                              (DEVICE_POWER_STATE)*(_DWORD *)(v7 + 532));
    return 0;
  }
  return (unsigned int)v8;
}
