/*
 * XREFs of ?AddResourceNotifier@CDeviceResource@@$4PPPPPPPM@MI@EAAXPEAVIDeviceResourceNotify@@@Z @ 0x180108B30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CDeviceResource::AddResourceNotifier(__int64 a1, struct IDeviceResourceNotify *a2)
{
  CDeviceResource::AddResourceNotifier((CDeviceResource *)(a1 - *(int *)(a1 - 4) - 200), a2);
}
