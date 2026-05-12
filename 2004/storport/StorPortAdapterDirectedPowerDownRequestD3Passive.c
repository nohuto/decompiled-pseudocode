/*
 * XREFs of StorPortAdapterDirectedPowerDownRequestD3Passive @ 0x1C003F540
 * Callers:
 *     <none>
 * Callees:
 *     StorPortAdapterDirectedPowerDownRequestD3 @ 0x1C003F314 (StorPortAdapterDirectedPowerDownRequestD3.c)
 */

void __fastcall StorPortAdapterDirectedPowerDownRequestD3Passive(
        PDEVICE_OBJECT DeviceObject,
        volatile __int32 *Context)
{
  _InterlockedExchange(Context + 1452, 0);
  StorPortAdapterDirectedPowerDownRequestD3((PVOID)Context);
}
