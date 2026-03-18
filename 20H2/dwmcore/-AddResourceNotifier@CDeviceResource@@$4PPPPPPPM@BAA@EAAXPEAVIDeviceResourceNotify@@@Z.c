/*
 * XREFs of ?AddResourceNotifier@CDeviceResource@@$4PPPPPPPM@BAA@EAAXPEAVIDeviceResourceNotify@@@Z @ 0x1800F1B00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CDeviceResource::AddResourceNotifier(__int64 a1, struct IDeviceResourceNotify *a2)
{
  CDeviceResource::AddResourceNotifier((CDeviceResource *)(a1 - *(int *)(a1 - 4) - 256), a2);
}
