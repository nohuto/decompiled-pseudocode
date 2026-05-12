/*
 * XREFs of StorPortAdapterPowerNotRequiredStep2Passive @ 0x1C003F9A0
 * Callers:
 *     <none>
 * Callees:
 *     StorPortAdapterPowerNotRequiredStep2 @ 0x1C003F780 (StorPortAdapterPowerNotRequiredStep2.c)
 */

void __fastcall StorPortAdapterPowerNotRequiredStep2Passive(PDEVICE_OBJECT DeviceObject, volatile __int32 *Context)
{
  _InterlockedExchange(Context + 1452, 0);
  StorPortAdapterPowerNotRequiredStep2((PVOID)Context);
}
