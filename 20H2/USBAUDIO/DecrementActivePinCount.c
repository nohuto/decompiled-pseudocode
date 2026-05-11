/*
 * XREFs of DecrementActivePinCount @ 0x1C0024C28
 * Callers:
 *     PinSetDeviceState @ 0x1C0024CB0 (PinSetDeviceState.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DecrementActivePinCount(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v2; // rbx
  void *v3; // rcx

  v1 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 16LL);
  v2 = *(_QWORD *)(v1 + 16);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v2 + 700), 0xFFFFFFFF) == 1 )
  {
    v3 = *(void **)(v2 + 512);
    if ( v3 )
      PoClearPowerRequest(v3, PowerRequestSystemRequired);
    *(_QWORD *)(v2 + 520) = PoRegisterDeviceForIdleDetection(
                              *(PDEVICE_OBJECT *)(v1 + 32),
                              *(_DWORD *)(v2 + 536),
                              *(_DWORD *)(v2 + 540),
                              (DEVICE_POWER_STATE)*(_DWORD *)(v2 + 532));
  }
  return 0LL;
}
